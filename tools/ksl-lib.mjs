import fs from 'node:fs'
import path from 'node:path'

const TOKEN_RE = /"([^"\\]|\\.)*"|#"([^"\\]|\\.|"#)*"#|`([^`\\]|\\.|\n)*`|[{}=()]|[^\s{}=()]+/g

export function readFile(filePath) {
  return fs.readFileSync(filePath, 'utf8')
}

export function listKdlFiles(dirPath) {
  return fs.readdirSync(dirPath).filter((name) => name.endsWith('.kdl')).sort().map((name) => path.join(dirPath, name))
}

export function parseKslText(text) {
  const lines = text.split(/\r?\n/)
  const root = { type: 'source_file', children: [] }
  const stack = [root]

  for (const rawLine of lines) {
    const line = rawLine.trim()
    if (!line || line.startsWith('//') || line.startsWith('/-')) continue
    if (line === '}') {
      if (stack.length > 1) stack.pop()
      continue
    }

    const opensBlock = line.endsWith('{')
    const content = opensBlock ? line.slice(0, -1).trimEnd() : line
    const node = parseNode(content)
    stack[stack.length - 1].children.push(node)
    if (opensBlock) stack.push(node)
  }

  return root
}

function parseNode(line) {
  const tokens = Array.from(line.matchAll(TOKEN_RE), (m) => m[0])
  if (tokens.length === 0) return { type: 'generic_node', name: '', args: [], props: {}, children: [] }

  const name = tokens[0]
  const node = {
    type: classifyNode(name),
    name,
    args: [],
    props: {},
    children: [],
  }

  for (let i = 1; i < tokens.length; i += 1) {
    const token = tokens[i]
    if (i + 2 < tokens.length && tokens[i + 1] === '=') {
      node.props[token] = parseValue(tokens[i + 2])
      i += 2
      continue
    }
    node.args.push(parseValue(token))
  }

  return node
}

function classifyNode(name) {
  switch (name) {
    case 'schema': return 'schema_declaration'
    case 'import': return 'import_declaration'
    case 'define': return 'define_declaration'
    case 'document': return 'document_subject'
    case 'node': return 'node_subject'
    case 'prop': return 'prop_subject'
    case 'arg': return 'arg_subject'
    case 'args': return 'args_subject'
    case 'value': return 'value_subject'
    case 'props': return 'props_subject'
    case 'children': return 'children_subject'
    case 'sequence': return 'sequence_block'
    case 'choice': return 'choice_block'
    case 'type': return 'type_constraint'
    case 'format': return 'format_constraint'
    case 'enum': return 'enum_constraint'
    case 'const': return 'const_constraint'
    case 'pattern': return 'pattern_constraint'
    case 'all-of':
    case 'any-of':
    case 'one-of':
    case 'not': return 'composition_constraint'
    case 'if':
    case 'then':
    case 'else': return 'conditional_constraint'
    case 'dependent-required':
    case 'dependent-schema': return 'dependency_constraint'
    case 'assert': return 'assert_constraint'
    case 'ref': return 'content_ref'
    case 'hint':
    case 'highlight':
    case 'bind':
    case 'default':
    case 'visible-if':
    case 'enabled-if': return 'annotation_node'
    default:
      return name.includes(':') ? 'qualified_annotation' : 'generic_node'
  }
}

function parseValue(token) {
  if (token.startsWith('"')) return JSON.parse(token)
  if (token.startsWith('#"')) return token
  if (token.startsWith('`')) return token.slice(1, -1)
  if (token === '#true') return true
  if (token === '#false') return false
  if (token === '#null') return null
  if (isIdentityToken(token)) return token
  if (/^-?[0-9]+$/.test(token)) return Number.parseInt(token, 10)
  if (/^-?[0-9]+\.[0-9]+$/.test(token)) return Number.parseFloat(token)
  return token
}

export function formatParseTree(node, indent = 0) {
  if (node.type === 'source_file') {
    const inner = node.children.map((child) => formatParseTree(child, indent + 2)).join('\n')
    return `${' '.repeat(indent)}(source_file${inner ? `\n${inner}` : ''})`
  }

  const lines = [`${' '.repeat(indent)}(${node.type}`]
  for (const arg of node.args) {
    lines.push(`${' '.repeat(indent + 2)}(${classifyValue(arg)})`)
  }
  for (const propName of Object.keys(node.props)) {
    lines.push(`${' '.repeat(indent + 2)}(property`)
    lines.push(`${' '.repeat(indent + 4)}(identifier)`)
    lines.push(`${' '.repeat(indent + 4)}(${classifyValue(node.props[propName])})`)
    lines.push(`${' '.repeat(indent + 2)})`)
  }
  for (const child of node.children) {
    lines.push(formatParseTree(child, indent + 2))
  }
  lines[lines.length - 1] += ')'
  return lines.join('\n')
}

function classifyValue(value) {
  if (typeof value === 'string') {
    if (value.startsWith('#"')) return 'raw_string'
    if (isIdentityToken(value)) return 'identity'
    return value.includes(' ') || value.includes('://') || value.includes('.') || value.includes('/') ? 'string' : 'identifier'
  }
  if (typeof value === 'number') return Number.isInteger(value) ? 'integer' : 'number'
  if (typeof value === 'boolean') return 'boolean'
  if (value === null) return 'null'
  return 'identifier'
}

export function normalizeFixtureAst(tree) {
  const schema = tree.children.find((node) => node.name === 'schema')
  const result = {
    schema: {
      id: schema?.args[0] ?? null,
      version: schema?.props.version ?? null,
      imports: [],
      definitions: [],
      document: null,
      annotations: [],
    },
  }

  if (!schema) return result

  for (const child of schema.children) {
    if (child.name === 'import') {
      result.schema.imports.push(normalizeImport(child))
    } else if (child.name === 'define') {
      result.schema.definitions.push(normalizeDefinition(child))
    } else if (child.name === 'document') {
      result.schema.document = normalizeSubject(child)
    } else if (isAnnotationNode(child)) {
      result.schema.annotations.push(normalizeAnnotation(child))
    }
  }

  return result
}

function normalizeImport(node) {
  return {
    schema_id: node.args[0] ?? null,
    prefix: node.props.as ?? null,
  }
}

function normalizeDefinition(node) {
  const name = stripIdentity(node.args[0])
  const body = node.children[0]
  if (!body) return { name, body: null, annotations: [] }

  return {
    name,
    body: normalizeReusableBody(body),
    annotations: [],
  }
}

function normalizeReusableBody(node) {
  if (node.name === 'sequence' || node.name === 'choice') {
    return normalizeContentEntry(node)
  }
  return normalizeSubject(node)
}

function normalizeSubject(node) {
  const kind = normalizeSubjectKind(node.name)
  const out = {
    kind,
    occurrence: normalizeOccurrence(node.args.slice(kind === 'arg' ? 1 : kindUsesName(kind) ? 1 : 0)),
    header: normalizeHeader(node.props),
    constraints: [],
    annotations: [],
    children: [],
  }

  if (kindUsesName(kind)) out.name = node.args[0] ?? null
  if (kind === 'arg') out.index = node.args[0] ?? null
  if (kind === 'props' || kind === 'children') out.openness = normalizeOpenness(node.args[0])

  const docSummary = out.header?.extra_properties?.doc
  if (typeof docSummary === 'string') {
    out.annotations.push({ name: 'summary', namespace: 'doc', arguments: [docSummary] })
    delete out.header.extra_properties.doc
    if (Object.keys(out.header.extra_properties).length === 0) delete out.header.extra_properties
  }

  for (const child of node.children) {
    if (isConstraintNode(child)) {
      out.constraints.push(normalizeConstraint(child))
    } else if (isAnnotationNode(child)) {
      out.annotations.push(normalizeAnnotation(child))
    } else if (isSubjectNode(child)) {
      if (child.name === 'children') {
        out.content_model = normalizeChildrenSubject(child)
      } else {
        out.children.push(normalizeSubject(child))
      }
    } else if (child.name === 'sequence' || child.name === 'choice' || child.name === 'ref') {
      out.content_model = normalizeContentEntry(child)
    }
  }

  pruneEmptyFields(out)
  return out
}

function normalizeChildrenSubject(node) {
  const out = {
    kind: 'children',
    openness: normalizeOpenness(node.args[0]),
    content_model: null,
  }

  if (node.children.length === 0) {
    out.content_model = { kind: 'unordered', entries: [] }
    return out
  }

  if (node.children.length === 1 && (node.children[0].name === 'sequence' || node.children[0].name === 'choice')) {
    out.content_model = normalizeContentEntry(node.children[0])
    return out
  }

  out.content_model = {
    kind: 'unordered',
    entries: node.children.map(normalizeContentEntry),
  }
  return out
}

function normalizeContentEntry(node) {
  if (node.name === 'sequence') {
    return {
      kind: 'sequence',
      entries: node.children.map(normalizeContentEntry),
    }
  }
  if (node.name === 'choice') {
    return {
      kind: 'choice',
      branches: node.children.map(normalizeContentEntry),
    }
  }
  if (node.name === 'ref') {
    return {
      kind: 'ref',
      target: normalizeReference(node.args[0]),
    }
  }
  if (node.name === 'node') {
    return normalizeSubject(node)
  }
  return { kind: 'unknown' }
}

function normalizeHeader(props) {
  const header = {
    ref: props.ref ? normalizeReference(props.ref) : null,
    literal_default: Object.hasOwn(props, 'default') ? props.default : null,
    extra_properties: {},
  }

  for (const [key, value] of Object.entries(props)) {
    if (key !== 'ref' && key !== 'default') header.extra_properties[key] = value
  }
  if (Object.keys(header.extra_properties).length === 0) delete header.extra_properties
  pruneEmptyFields(header)
  return header
}

function normalizeReference(raw) {
  if (typeof raw !== 'string') return { raw, namespace: null, local_name: null, resolution_scope: 'local' }
  const importedMatch = raw.match(/^([A-Za-z_][A-Za-z0-9_-]*):(#.+)$/)
  if (importedMatch) {
    return {
      raw,
      namespace: importedMatch[1],
      local_name: stripIdentity(importedMatch[2]),
      resolution_scope: 'imported',
    }
  }
  return {
    raw,
    namespace: null,
    local_name: stripIdentity(raw),
    resolution_scope: 'local',
  }
}

function normalizeConstraint(node) {
  switch (node.name) {
    case 'type':
      return { kind: 'type', type_name: node.args[0] }
    case 'format':
      return { kind: 'format', format_name: node.args[0] }
    case 'enum':
      return { kind: 'enum', values: node.args }
    case 'const':
      return { kind: 'const', value: node.args[0] }
    case 'pattern':
      return { kind: 'pattern', regex: node.args[0] }
    case 'min':
      return { kind: 'range', minimum: node.args[0] }
    case 'max':
      return { kind: 'range', maximum: node.args[0] }
    case 'exclusive-min':
      return { kind: 'range', exclusive_minimum: node.args[0] }
    case 'exclusive-max':
      return { kind: 'range', exclusive_maximum: node.args[0] }
    case 'multiple-of':
      return { kind: 'multiple-of', value: node.args[0] }
    case 'between':
      return { kind: 'range', minimum: node.args[0], maximum: node.args[1] }
    case 'min-length':
      return { kind: 'length', minimum_length: node.args[0] }
    case 'max-length':
      return { kind: 'length', maximum_length: node.args[0] }
    case 'all-of':
    case 'any-of':
    case 'one-of':
    case 'not':
      return {
        kind: 'composition',
        operator: node.name.replace(/-/g, '_'),
        branches: node.children.map(normalizeConstraintSet),
      }
    case 'if':
    case 'then':
    case 'else':
      return {
        kind: 'conditional-branch',
        branch: node.name,
        body: normalizeConstraintSet(node),
      }
    case 'dependent-required':
      return {
        kind: 'dependency',
        mode: 'dependent_required',
        subject_kind: node.props.prop ? 'prop' : 'child',
        trigger_name: node.props.prop ?? node.props.child ?? null,
        required_names: arrayify(node.props['requires-props'] ?? node.props['requires-children']),
      }
    case 'dependent-schema':
      return {
        kind: 'dependency',
        mode: 'dependent_schema',
        subject_kind: node.props.prop ? 'prop' : 'child',
        trigger_name: node.props.prop ?? node.props.child ?? null,
        schema: normalizeConstraintSet(node),
      }
    case 'assert':
      return { kind: 'cel_assertion', expression: node.args[0] }
    default:
      return { kind: node.name, value: node.args[0] }
  }
}

function normalizeConstraintSet(node) {
  const set = {
    subjects: [],
    constraints: [],
    annotations: [],
  }

  for (const child of node.children) {
    if (isSubjectNode(child)) {
      set.subjects.push(normalizeSubject(child))
    } else if (isConstraintNode(child)) {
      set.constraints.push(normalizeConstraint(child))
    } else if (isAnnotationNode(child)) {
      set.annotations.push(normalizeAnnotation(child))
    }
  }
  pruneEmptyFields(set)
  return set
}

function normalizeOccurrence(args) {
  if (args[0] === 'required') return { min: 1, max: 1 }
  if (args[0] === 'optional') return { min: 0, max: 1 }
  if (args[0] === 'many') return { min: 0, max: 'unbounded' }
  if (args[0] === 'at-least') return { min: args[1], max: 'unbounded' }
  if (args[0] === 'at-most') return { min: 0, max: args[1] }
  if (args[0] === 'between') return { min: args[1], max: args[2] }
  return { min: 1, max: 1 }
}

function normalizeOpenness(value) {
  if (value === 'open' || value === 'closed') return value
  return 'unspecified'
}

function normalizeAnnotation(node) {
  const [namespace, simpleName] = node.name.includes(':') ? node.name.split(':', 2) : [null, node.name]
  const out = {
    name: simpleName,
    namespace,
    arguments: node.args,
    properties: node.props,
  }
  if (node.name === 'default' || node.name === 'visible-if' || node.name === 'enabled-if') {
    out.cel_expression = typeof node.args[0] === 'string' ? node.args[0] : null
  }
  pruneEmptyFields(out)
  return out
}

function collectAnnotations(nodes) {
  return nodes.filter(isAnnotationNode).map(normalizeAnnotation)
}

function isSubjectNode(node) {
  return ['document', 'node', 'prop', 'arg', 'args', 'value', 'props', 'children'].includes(node.name)
}

function isConstraintNode(node) {
  return [
    'type', 'format', 'enum', 'const', 'pattern', 'min', 'max', 'exclusive-min', 'exclusive-max',
    'multiple-of', 'between', 'min-length', 'max-length', 'all-of', 'any-of', 'one-of', 'not',
    'if', 'then', 'else', 'dependent-required', 'dependent-schema', 'assert',
  ].includes(node.name)
}

function isAnnotationNode(node) {
  return ['hint', 'highlight', 'bind', 'default', 'visible-if', 'enabled-if'].includes(node.name) || node.name.includes(':')
}

function isIdentityToken(value) {
  return typeof value === 'string' && /^(?:[A-Za-z_][A-Za-z0-9_-]*:)?#[A-Za-z_][A-Za-z0-9_-]*$/.test(value)
}

function stripIdentity(value) {
  if (typeof value !== 'string') return value
  const match = value.match(/^(?:[A-Za-z_][A-Za-z0-9_-]*:)?#([A-Za-z_][A-Za-z0-9_-]*)$/)
  return match ? match[1] : value
}

function normalizeSubjectKind(name) {
  return name === 'document' ? 'document' : name
}

function kindUsesName(kind) {
  return kind === 'node' || kind === 'prop'
}

function arrayify(value) {
  if (value == null) return []
  return Array.isArray(value) ? value : [value]
}

function pruneEmptyFields(object) {
  for (const [key, value] of Object.entries(object)) {
    if (value == null) delete object[key]
    else if (Array.isArray(value) && value.length === 0) delete object[key]
    else if (typeof value === 'object' && !Array.isArray(value) && Object.keys(value).length === 0) delete object[key]
  }
}

export function validateFixture(tree) {
  return validateNormalizedAst(normalizeFixtureAst(tree))
}

export function validateNormalizedAst(ast) {
  const diagnostics = []
  const schema = ast?.schema
  if (!schema) return diagnostics

  const localDefinitions = new Map()
  for (const definition of schema.definitions ?? []) {
    const name = definition.name
    if (localDefinitions.has(name)) {
        diagnostics.push({
          category: 'duplicate-definition',
          message: `Definition name '${name}' is declared more than once.`,
          path: `schema.definitions.${name}`,
          related: ['define #' + name + ' at first declaration', 'define #' + name + ' at second declaration'],
        })
      }
    localDefinitions.set(name, definition)
  }

  const importedDefinitions = buildImportedDefinitionMap(schema.imports ?? [])
  walkNormalizedSubject(schema.document, ['schema', 'document'], (subject, path) => {
    const reference = subject?.header?.ref
    if (reference) {
      const resolved = resolveReference(reference, localDefinitions, importedDefinitions)
      if (!resolved) {
        diagnostics.push({
          category: 'unresolved-reference',
          message: `Reference target '${reference.raw}' could not be resolved.`,
          path: `${path}.ref`,
        })
      } else {
        const compatibility = validateReferenceCompatibility(subject, resolved)
        if (compatibility) diagnostics.push({ ...compatibility, path: `${path}.ref` })
        const merge = validateMerge(subject, resolved)
        if (merge) diagnostics.push({ ...merge, path: `${path}.ref` })
      }
    }

    for (const constraint of subject?.constraints ?? []) {
      if (constraint.kind === 'dependency' && constraint.mode === 'dependent_required' && (!constraint.required_names || constraint.required_names.length === 0)) {
        diagnostics.push({
          category: 'invalid-dependent-required',
          message: 'dependent-required must declare at least one required name.',
          path,
        })
      }
    }

    const ambiguity = validateChoiceModel(subject?.content_model)
    if (ambiguity) diagnostics.push({ ...ambiguity, path: `${path}.children.choice` })
  })

  return diagnostics
}

function buildImportedDefinitionMap(imports) {
  const mockRegistry = {
    'https://example.com/schemas/common': {
      hostname: { name: 'hostname', body: { kind: 'value', constraints: [{ kind: 'type', type_name: 'string' }] } },
      'service-node': { name: 'service-node', body: { kind: 'node', name: 'service' } },
    },
  }

  const map = new Map()
  for (const binding of imports) {
    map.set(binding.prefix, mockRegistry[binding.schema_id] ?? {})
  }
  return map
}

function resolveReference(reference, localDefinitions, importedDefinitions) {
  if (reference.resolution_scope === 'local') return localDefinitions.get(reference.local_name) ?? null
  return importedDefinitions.get(reference.namespace)?.[reference.local_name] ?? null
}

function validateReferenceCompatibility(subject, definition) {
  const targetKind = definition?.body?.kind
  if (!targetKind) return null
  if (subject.kind === 'prop' && !['prop', 'value'].includes(targetKind)) {
    return {
      category: 'invalid-ref-target-kind',
      message: `Property reference target kind '${targetKind}' is not compatible with prop use sites.`,
    }
  }
  if (subject.kind === 'arg' && !['arg', 'value'].includes(targetKind)) {
    return {
      category: 'invalid-ref-target-kind',
      message: `Argument reference target kind '${targetKind}' is not compatible with arg use sites.`,
    }
  }
  if (subject.kind === 'node' && targetKind !== 'node') {
    return {
      category: 'invalid-ref-target-kind',
      message: `Node reference target kind '${targetKind}' is not compatible with node use sites.`,
    }
  }
  return null
}

function validateMerge(subject, definition) {
  const localType = firstConstraint(subject.constraints, 'type')
  const targetType = firstConstraint(definition?.body?.constraints, 'type')
  if (localType && targetType && localType.type_name !== targetType.type_name) {
    return {
      category: 'merge-conflicting-type',
      message: `Conflicting type constraints '${localType.type_name}' and '${targetType.type_name}' cannot be merged.`,
    }
  }
  return null
}

function firstConstraint(constraints = [], kind) {
  return constraints.find((constraint) => constraint.kind === kind) ?? null
}

function validateChoiceModel(model) {
  if (!model) return null
  if (model.kind === 'children') return validateChoiceModel(model.content_model)
  if (model.kind === 'choice') {
    const seen = new Set()
    for (const branch of model.branches ?? []) {
      const name = branch?.name
      if (!name) continue
      if (seen.has(name)) {
        return {
          category: 'ambiguous-choice-leading-name',
          message: `Choice branches overlap on leading node name '${name}'.`,
        }
      }
      seen.add(name)
    }
  }
  if (model.kind === 'sequence') {
    for (const entry of model.entries ?? []) {
      const nested = validateChoiceModel(entry)
      if (nested) return nested
    }
  }
  return null
}

function walkNormalizedSubject(subject, pathParts, visit) {
  if (!subject) return
  visit(subject, stringifySubjectPath(pathParts, subject))
  for (const child of subject.children ?? []) {
    const segment = child.kind === 'node' || child.kind === 'prop' ? `${child.kind}[${child.name}]` : child.kind
    walkNormalizedSubject(child, pathParts.concat(segment), visit)
  }
}

function stringifySubjectPath(pathParts, subject) {
  if (!subject || subject.kind === 'document') return pathParts.join('.')
  if (subject.kind === 'node' || subject.kind === 'prop') return pathParts.join('.')
  return pathParts.concat(subject.kind).join('.')
}

export function writeJson(filePath, value) {
  fs.writeFileSync(filePath, `${JSON.stringify(value, null, 2)}\n`)
}

export function writeText(filePath, value) {
  fs.writeFileSync(filePath, `${value}\n`)
}

export function replaceExtension(filePath, fromExt, toExt) {
  return filePath.slice(0, -fromExt.length) + toExt
}

# KSL Normalized AST Draft

## Status

This document defines an implementation-facing normalized AST for KSL.

This AST is not user-facing syntax. All canonical surface forms in `SPEC.md` are expected to lower into this model before semantic validation, editor analysis, documentation extraction, or binding generation.

For schema-level validity checks over this normalized model, see [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md).

For use-site compatibility rules for resolved references, see [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md).

For how compatible fragments combine after resolution, see [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md).

For `choice` determinism checks over normalized content models, see [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md).

## Goals

The normalized AST should:

- provide one semantic model regardless of surface shorthand
- separate parse structure from validation semantics
- make refs, imports, content models, and annotations explicit
- be stable enough for validators, LSPs, doc generators, and code generators

## Scope

This draft covers:

- schema identity
- imports and namespacing
- named definitions
- subjects and declarations
- occurrence bounds
- value constraints
- content models
- composition and conditional nodes
- annotations

This draft does not yet define:

- exact source-location encoding
- CEL runtime types
- the full post-validation result model

## Top-Level Model

Normalized root object:

```text
SchemaDocument {
  id: string
  version: string?
  info: Info?
  imports: ImportBinding[]
  definitions: map<string, Definition>
  document: Subject?
  annotations: Annotation[]
}
```

Notes:

- `id` comes from the `schema` string argument.
- `version` comes from the `schema` node property if present.
- `definitions` are keyed by local identity name without the leading `#` and without import prefix.
- imported definitions are not copied into `definitions`; they are resolved through `imports`.

## Source Locations

Every normalized node SHOULD carry source location metadata.

Recommended shape:

```text
SourceSpan {
  file: string?
  start_byte: uint
  end_byte: uint
  start_point: { row: uint, column: uint }
  end_point: { row: uint, column: uint }
}
```

Every AST object MAY include:

- `span: SourceSpan`

This should support diagnostics, code navigation, completions, and documentation linking.

## Imports

```text
ImportBinding {
  schema_id: string
  prefix: string
  span: SourceSpan?
}
```

Rules:

- `prefix` is sourced from `as="..."`.
- import cycles are invalid before or during normalization.
- imported definitions are resolved through `prefix:name`.

## Definitions

```text
Definition {
  name: string
  body: Subject | ContentModel | ConstraintSet
  annotations: Annotation[]
  span: SourceSpan?
}
```

Notes:

- The normalization phase SHOULD reject definitions that lower to an invalid subject kind for the place they are referenced.
- `body` is intentionally broader than a single declaration shape because current KSL examples allow reusable node, value, and children fragments.

## Subjects

The normalized AST should use one subject type with an explicit kind.

```text
Subject {
  kind: SubjectKind
  name: string?
  index: int?
  occurrence: Occurrence
  openness: Openness?
  header: HeaderModifiers
  constraints: Constraint[]
  content_model: ContentModel?
  annotations: Annotation[]
  children: Subject[]
  span: SourceSpan?
}

SubjectKind :=
  document |
  node |
  prop |
  arg |
  args |
  props |
  children |
  value
```

Field meanings:

- `name` is used by `node`, `prop`, and named reusable fragments when needed.
- `index` is used by `arg`.
- `occurrence` is always present, even if it normalizes to the default `exactly one` or a subject-specific default.
- `openness` is used for `document`, `props`, and `children` subjects.
- `header` contains header-level modifiers like `ref` and literal defaults.
- `constraints` contains normalized validation constraints.
- `content_model` contains child matching structure for `children` and compatible reusable fragments.
- `children` contains directly nested subordinate subjects that are not represented in `content_model`.

## Occurrence

```text
Occurrence {
  min: uint
  max: uint | unbounded
}
```

Canonical lowering:

- `required` -> `{ min: 1, max: 1 }`
- `optional` -> `{ min: 0, max: 1 }`
- `many` -> `{ min: 0, max: unbounded }`
- `at-least N` -> `{ min: N, max: unbounded }`
- `at-most N` -> `{ min: 0, max: N }`
- `between A B` -> `{ min: A, max: B }`

## Openness

```text
Openness := open | closed | unspecified
```

`unspecified` exists so normalization can preserve the difference between:

- explicit surface spelling
- profile-defined defaults applied later

## Header Modifiers

```text
HeaderModifiers {
  ref: ReferenceTarget?
  literal_default: LiteralValue?
  extra_properties: map<string, LiteralValue>
}
```

Notes:

- `ref` comes only from canonical `ref=#...` or `ref=prefix:#...` header properties.
- `doc="..."` header properties SHOULD normalize to an equivalent `doc:summary` annotation rather than remaining in `extra_properties`.
- `literal_default` comes only from canonical `default=<literal>` header properties.
- `extra_properties` is reserved for future standardized header-level modifiers or implementation-defined extensions.

## References

```text
ReferenceTarget {
  raw: string
  namespace: string?
  local_name: string
  resolution_scope: local | imported
}
```

Examples:

- `ref=#port` -> `{ raw: "#port", namespace: null, local_name: "port", resolution_scope: local }`
- `ref=common:#hostname` -> `{ raw: "common:#hostname", namespace: "common", local_name: "hostname", resolution_scope: imported }`

Reserved literals `#true`, `#false`, and `#null` are not `ReferenceTarget` values and MUST remain boolean/null literals.

## Literal Values

```text
LiteralValue :=
  StringValue |
  NumberValue |
  IntegerValue |
  BooleanValue |
  NullValue
```

Computed defaults MUST NOT lower into `literal_default`. They are represented as constraints or annotations carrying CEL expressions.

## Constraints

The AST should normalize individual validation constructs into typed constraints.

```text
Constraint :=
  TypeConstraint |
  FormatConstraint |
  EnumConstraint |
  ConstConstraint |
  RangeConstraint |
  LengthConstraint |
  PatternConstraint |
  MultipleOfConstraint |
  DistinctConstraint |
  CompositionConstraint |
  ConditionalConstraint |
  DependencyConstraint |
  CelAssertionConstraint
```

### Type Constraint

```text
TypeConstraint {
  type_name: string
}
```

Examples: `string`, `integer`, `number`, `boolean`, `null`

### Format Constraint

```text
FormatConstraint {
  format_name: string
}
```

### Enum Constraint

```text
EnumConstraint {
  values: LiteralValue[]
}
```

### Const Constraint

```text
ConstConstraint {
  value: LiteralValue
}
```

### Range Constraint

```text
RangeConstraint {
  minimum: number?
  maximum: number?
  exclusive_minimum: number?
  exclusive_maximum: number?
}
```

### Length Constraint

```text
LengthConstraint {
  minimum_length: uint?
  maximum_length: uint?
}
```

### Pattern Constraint

```text
PatternConstraint {
  regex: string
}
```

### Multiple Of Constraint

```text
MultipleOfConstraint {
  value: number
}
```

### Distinct Constraint

```text
DistinctConstraint {}
```

### Composition Constraint

```text
CompositionConstraint {
  operator: all_of | any_of | one_of | not
  branches: ConstraintSet[]
}
```

### Conditional Constraint

```text
ConditionalConstraint {
  when_expression: string
  body: ConstraintSet
}
```

This form exists for guarded activation such as `when=<CEL>`.

### Dependency Constraint

```text
DependencyConstraint {
  mode: dependent_required | dependent_schema
  subject_kind: prop | child
  trigger_name: string
  required_names: string[]
  schema: ConstraintSet?
}
```

### CEL Assertion Constraint

```text
CelAssertionConstraint {
  expression: string
}
```

## Constraint Sets

Composition and conditional branches need a reusable wrapper.

```text
ConstraintSet {
  subjects: Subject[]
  constraints: Constraint[]
  annotations: Annotation[]
}
```

This lets branches contain mixed structural and scalar constraints without inventing a separate ad hoc representation for every construct.

## Content Models

Content models should be normalized independently from raw `children` syntax.

```text
ContentModel :=
  UnorderedModel |
  SequenceModel |
  ChoiceModel |
  RefContentModel
```

### Unordered Model

```text
UnorderedModel {
  entries: ContentEntry[]
}
```

### Sequence Model

```text
SequenceModel {
  entries: ContentEntry[]
}
```

### Choice Model

```text
ChoiceModel {
  branches: ContentEntry[]
}
```

### Referenced Content Model

```text
RefContentModel {
  target: ReferenceTarget
}
```

### Content Entries

```text
ContentEntry :=
  ContentSubjectEntry |
  ContentSequenceEntry |
  ContentChoiceEntry |
  ContentRefEntry
```

```text
ContentSubjectEntry {
  subject: Subject
}

ContentSequenceEntry {
  sequence: SequenceModel
}

ContentChoiceEntry {
  choice: ChoiceModel
}

ContentRefEntry {
  target: ReferenceTarget
}
```

Normalization rules:

- bare `children { ... }` lowers to `UnorderedModel`
- `sequence { ... }` lowers to `SequenceModel`
- `choice { ... }` lowers to `ChoiceModel`

## Annotations

Annotations should be represented explicitly and kept separate from assertions.

```text
Annotation {
  name: string
  namespace: string?
  arguments: LiteralValue[]
  properties: map<string, LiteralValue>
  children: Annotation[]
  cel_expression: string?
  span: SourceSpan?
}
```

Examples:

- `doc:summary "Voice identifier"`
- `highlight token="variable"`
- `bind type="Theme"`

Recommended interpretation:

- unqualified built-in annotations keep `namespace = null`
- `doc:summary` normalizes to `namespace = "doc"`, `name = "summary"`

## CEL-Bearing Nodes

CEL appears in two roles:

- validation-oriented assertions such as `assert <CEL>`
- annotation or behavior nodes such as `default <CEL>` and `visible-if <CEL>`

Recommended lowering:

- `assert` -> `CelAssertionConstraint`
- `default <CEL>` -> `Annotation { name: "default", cel_expression: ... }`
- `visible-if <CEL>` -> `Annotation { name: "visible-if", cel_expression: ... }`

`assert <CEL>` is a non-core feature and SHOULD be profile-gated.

The language design SHOULD collect common `assert` patterns before standardizing new declarative replacements.

This keeps validation constraints distinct from tooling behavior.

## Normalization Examples

### Example 1

Surface syntax:

```kdl
prop "host" required ref=common:#hostname
```

Normalized form:

```text
Subject {
  kind: prop
  name: "host"
  occurrence: { min: 1, max: 1 }
  header: {
    ref: {
      raw: "common:#hostname",
      namespace: "common",
      local_name: "hostname",
      resolution_scope: imported,
    }
  }
  constraints: []
  annotations: []
}
```

### Example 2

Surface syntax:

```kdl
children closed {
  sequence {
    node "name" required
    node "env" many
  }
}
```

Normalized form:

```text
Subject {
  kind: children
  openness: closed
  content_model: SequenceModel {
    entries: [
      ContentSubjectEntry(subject: Subject { kind: node, name: "name", occurrence: { min: 1, max: 1 } }),
      ContentSubjectEntry(subject: Subject { kind: node, name: "env", occurrence: { min: 0, max: unbounded } }),
    ]
  }
}
```

## Validation Phase Boundaries

Recommended phases:

1. parse KDL surface syntax
2. normalize into the AST in this document
3. resolve imports and refs
4. validate schema well-formedness as described in [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md)
5. run instance validation
6. derive post-validation metadata

This ordering helps keep Tree-sitter parsing, AST normalization, and semantic validation cleanly separated.

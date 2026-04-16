# Improved KDL Schema Language Design

## Status

Draft design proposal synthesizing KDL Schema v1, the partial KSL v2 draft, JSON Schema concepts, and the practical needs of KDL-based configuration formats.

## Syntax Profile

This design uses KDL v2 syntax for schema examples and companion schema files, with one explicit extension:

- CEL expressions MAY use backtick-delimited strings.

That extension is intentional and diverges from standard KDL v2. Standard KDL v2 does not define backticks as string delimiters. Everything else in the examples is intended to stay KDL v2-compatible.

## Problem

KDL Schema v1 established that a schema language embedded in KDL is viable, but it is verbose and awkward to author. The current KSL v2 draft moves in a better direction, especially by borrowing from JSON Schema, but it is still incomplete and still carries more ceremony than most users will want for day-to-day schema authoring.

The next design should optimize for real authoring and tooling use:

- concise enough to hand-write
- expressive enough for validation and editor support
- structured enough for tooling to consume predictably
- compatible with how KDL documents actually behave
- informed by JSON Schema, but not trapped by JSON object assumptions

## Primary Use Cases

- LSP validation and completions
- semantic syntax highlighting for KDL DSLs
- documentation generation for complex configs such as Niri and Zellij
- machine-readable schemas for bindings and code generation

## Design Principles

1. KDL-first, not JSON-in-KDL.
2. Common cases should be short.
3. Ordered arguments and ordered child nodes must be modeled directly.
4. Validation and annotation should be separate concerns.
5. JSON Schema concepts should be reused where they fit cleanly.
6. Advanced conditions should be possible without making simple schemas hard to read.

## High-Level Shape

An improved KSL document should have four layers:

1. schema metadata
2. reusable definitions
3. structural rules for documents, nodes, args, props, and children
4. annotations for docs, editor UX, and code generation

Proposed top-level shape:

```kdl
schema "https://example.com/schemas/app-config" version="0.3.0" {
  info title="App Config" description="Schema for app-config.kdl"

  import "https://example.com/schemas/common" as="common"

  define "color" {
    value {
      type "string"
      enum "red" "green" "blue"
    }
  }

  define "keybinding" {
    node "bind" {
      arg 0 {
        type "string"
        doc "Key chord"
      }
      prop "action" required {
        type "string"
      }
    }
  }

  document {
    node "app" required {
      prop "theme" ref="color" default="red"
      children closed {
        node "bind" many ref="keybinding"
      }
    }
  }
}
```

This is still visibly KDL, but avoids the worst verbosity of KSL v1.

## Core Model

The schema language should explicitly model the same objects a KDL parser exposes:

- document
- node
- node name
- node tag
- argument list
- property map
- child-node sequence
- scalar value

Each of these should carry two kinds of information:

- assertions: rules that affect validity
- annotations: metadata for tooling and docs

That distinction matters. LSPs, semantic highlighters, and documentation generators all need annotation data even when validation is permissive.

## Proposed Syntax

### 1. Short cardinality markers

The common occurrence cases should use short keywords:

- `required`
- `optional`
- `many`
- `at-least N`
- `at-most N`
- `between A B`

Examples:

```kdl
node "server" required
node "plugin" many
node "workspace" between 1 4
prop "theme" optional {
  type "string"
}
arg 0 required {
  type "string"
}
```

This is much easier to scan than `min=... max=...` everywhere, while still permitting numeric bounds when needed.

### 2. Arguments are indexed explicitly

KDL arguments are ordered, so schemas should make that explicit:

```kdl
node "listen" {
  arg 0 {
    type "string"
    format "hostname"
  }
  arg 1 {
    type "integer"
    between 1 65535
  }
}
```

For repeated homogeneous arguments, use `args`:

```kdl
node "include" {
  args at-least=1 {
    type "string"
  }
}
```

This maps cleanly onto KDL argument vectors and is clearer than v1-style repeated `value` declarations.

### 3. Properties are declared inline

```kdl
node "window" {
  prop "width" {
    type "integer"
    min 1
  }
  prop "height" {
    type "integer"
    min 1
  }
  prop "title" optional {
    type "string"
  }
}
```

Required properties should not require a nested wrapper node:

```kdl
prop "shell" required {
  type "string"
}
```

Property-set rules belong on `props`:

```kdl
props closed
props {
  names {
    type "string"
    pattern #"^[a-z][a-z0-9-]*$"#
  }
}
```

### 4. Child constraints stay structural

Instead of repeating deep wrapper nodes, child rules belong directly inside `children`:

```kdl
node "layout" {
  children closed {
    node "column" many
    node "gap" optional {
      arg 0 {
        type "integer"
        min 0
      }
    }
  }
}
```

`closed` means undeclared child nodes are invalid. `open` means additional child nodes are allowed.

### 5. Reuse should be definition-first

KSL v1's query-based reuse is powerful, but too implicit for most authors. The primary reuse model should be named definitions.

```kdl
define "size" {
  value {
    type "integer"
    min 0
  }
}

define "binding" {
  node "bind" {
    arg 0 {
      type "string"
    }
    prop "action" required {
      type "string"
    }
  }
}
```

Use sites:

```kdl
prop "padding" ref="size"
node "bind" ref="binding"
```

Query-based extraction can remain as an advanced feature, but it should not be the primary composition model.

### 6. Assertions and annotations should be visibly distinct

Recommended pattern:

- structural nodes like `type`, `enum`, `children`, `all-of`, `if`, `dependent-required` are assertions
- nodes like `doc`, `example`, `hint`, `highlight`, `bind`, `deprecated` are annotations

Example:

```kdl
prop "theme" {
  type "string"
  enum "light" "dark"

  doc "Theme mode for the UI"
  hint completion="enum"
  highlight token="enumMember"
}
```

This gives editors and doc generators stable metadata to consume.

## Semantic Model

### Structural scopes

Each schema block validates one subject:

- `document`: the whole document
- `node`: a node occurrence or node class
- `arg`: one positional argument slot
- `args`: the whole argument vector or repeated tail
- `prop`: one property
- `props`: the property map as a whole
- `children`: the child collection as a whole
- `value`: a reusable scalar schema fragment

This avoids ambiguity about whether a rule targets a container or a member.

### Open vs closed defaults

For the intended tooling use cases, explicit schemas should default to closed-world behavior:

- top-level `document` should default to `closed`
- `props` inside an explicit `node` should default to `closed`
- `children` inside an explicit `node` should default to `closed`

Rationale:

- closed schemas produce better completions
- diagnostics become more precise
- documentation can be more authoritative
- most KDL DSLs have fixed vocabularies

If compatibility concerns require permissive defaults, that should be gated by schema version or profile.

## Validation Keywords

The scalar validation story should borrow from JSON Schema where possible.

### Base scalar types

- `string`
- `integer`
- `number`
- `boolean`
- `null`

Extension types should mostly be sugar over string-plus-format:

- `date`
- `time`
- `datetime`
- `duration`
- `url`
- `path`
- `regex`

### Common constraints

- `enum`
- `const`
- `pattern`
- `min`
- `max`
- `exclusive-min`
- `exclusive-max`
- `min-length`
- `max-length`
- `multiple-of`
- `default`
- `distinct`

Example:

```kdl
arg 0 {
  type "string"
  min-length 1
  max-length 128
}

prop "retries" optional default=3 {
  type "integer"
  min 0
  max 10
}
```

## Composition

KSL should support JSON Schema-style composition using KDL-native nodes.

```kdl
all-of {
  ref "base-window"
  prop "floating" {
    type "boolean"
  }
}

any-of {
  prop "command" required {
    type "string"
  }
  prop "action" required {
    type "string"
  }
}

one-of {
  node "tabbed"
  node "stacked"
}

not {
  prop "deprecated" {
    const #true
  }
}
```

Semantics should match JSON Schema:

- `all-of`: all branches apply independently
- `any-of`: at least one branch applies
- `one-of`: exactly one branch applies
- `not`: the branch must fail

### Child collection groups

JSON Schema does not model ordered child nodes well. KSL should add child-specific group constructs:

- `sequence`
- `choice`
- `unordered`

Example:

```kdl
children closed {
  sequence {
    node "name" required
    node "command" required
    node "env" many
  }
}
```

Recommendation:

- keep `all-of`, `any-of`, `one-of`, and `not` as general composition
- add `sequence`, `choice`, and `unordered` only for child collections

## Conditional Logic

The language should support two layers of conditionality:

1. declarative schema conditionals for common cases
2. CEL expressions for advanced cases

### Declarative conditionals

These map directly from JSON Schema concepts.

#### `if` / `then` / `else`

```kdl
if {
  prop "mode" {
    const "tcp"
  }
}
then {
  prop "port" required {
    type "integer"
  }
}
else {
  prop "path" required {
    type "string"
  }
}
```

#### `dependent-required`

This should work for both properties and child nodes.

```kdl
dependent-required prop="command" requires-props="cwd"
dependent-required child="tls" requires-children="cert" "key"
```

#### `dependent-schema`

```kdl
dependent-schema prop="tls" {
  prop "cert" required {
    type "string"
  }
  prop "key" required {
    type "string"
  }
}
```

### CEL for advanced logic

CEL should be supported for rules that are awkward to express structurally.

Because standard KDL v2 does not support backtick strings, this proposal defines a narrow syntax extension specifically for CEL literals.

Examples:

```kdl
assert `hasProp("min") == hasProp("max")`
assert `props.mode == "tcp" ? hasProp("port") : hasProp("path")`
default `props.kind == "workspace" ? "main" : null`
```

Recommended CEL scope objects:

- `self`
- `node`
- `args`
- `props`
- `children`

Recommended helper functions:

- `hasProp(name)`
- `hasChild(name)`
- `countChild(name)`
- `name()`
- `tag()`

## Mapping from JSON Schema to KDL

Not every JSON Schema feature maps naturally. The spec should state clearly what is adopted, adapted, or deferred.

### Adopt directly

- scalar types and basic numeric/string constraints
- `enum`, `const`
- `allOf`, `anyOf`, `oneOf`, `not`
- `if`, `then`, `else`
- `dependentRequired`
- `dependentSchemas`
- `default`
- descriptive annotations such as title, description, examples, and deprecation

### Adapt for KDL

- JSON object `properties` maps to KDL `props`
- JSON object `required` maps to KDL property, child, or arg cardinality
- JSON tuple validation maps to `arg 0`, `arg 1`, and so on
- JSON list validation maps to `args`
- `additionalProperties` maps to `props open|closed`

### KDL-specific additions

- child-node schemas
- ordered child groups
- node-name and tag constraints
- semantic highlighting annotations
- codegen annotations

### Defer unless experience proves they are needed

- full `$dynamicRef` complexity
- unevaluated-member rules
- implicit merge behavior that is hard for authors to predict

## Tooling Annotations

To support LSPs, docs, and binding generators, KSL should standardize a small annotation vocabulary.

### Documentation annotations

```kdl
doc "Human-readable description"
example "bind \"Ctrl+Q\" { quit }"
deprecated message="Use `spawn` instead"
since "1.4.0"
```

### Completion annotations

```kdl
hint placeholder="path/to/file"
hint completion="file-path"
hint completion="enum"
```

### Semantic highlighting annotations

```kdl
highlight token="keyword"
highlight token="enumMember"
highlight token="variable"
```

### Binding annotations

```kdl
bind type="Theme"
bind field="theme"
bind name="KeyBinding"
bind discriminator="kind"
```

These should remain annotations only. Validation must not depend on them.

## Reuse and Modularity

Named definitions should be the default reuse mechanism.

```kdl
define "port" {
  value {
    type "integer"
    between 1 65535
  }
}

define "tls-config" {
  node "tls" {
    prop "cert" required {
      type "string"
    }
    prop "key" required {
      type "string"
    }
  }
}
```

Imports should support aliasing:

```kdl
import "https://example.com/schemas/common" as="common"

prop "host" ref="common.hostname"
```

## Example

```kdl
schema "https://example.com/schemas/service" version="1.0.0" {
  info title="Service Config"

  define "hostname" {
    value {
      type "string"
      format "hostname"
    }
  }

  define "port" {
    value {
      type "integer"
      between 1 65535
    }
  }

  document {
    node "service" required {
      doc "Root service configuration"

      prop "name" required {
        type "string"
        min-length 1
      }

      prop "mode" required {
        type "string"
        enum "tcp" "unix"
      }

      if {
        prop "mode" {
          const "tcp"
        }
      }
      then {
        prop "host" required ref="hostname"
        prop "port" required ref="port"
      }
      else {
        prop "socket" required {
          type "string"
        }
      }

      children closed {
        node "env" many {
          arg 0 {
            type "string"
            min-length 1
          }
          arg 1 {
            type "string"
          }
          highlight token="variable"
        }

        node "tls" optional {
          dependent-required child="cert" requires-children="key"
          dependent-required child="key" requires-children="cert"

          children closed {
            node "cert" required {
              arg 0 {
                type "string"
              }
            }
            node "key" required {
              arg 0 {
                type "string"
              }
            }
          }
        }
      }
    }
  }
}
```

## Why This Improves on KSL v1

- less wrapper-node ceremony
- explicit argument indexing
- child ordering can be modeled directly
- conditionals and composition align with modern schema practice
- annotations are rich enough for editor, docs, and codegen use cases

## Why This Improves on the Current Partial KSL v2 Draft

- examples stay much closer to valid KDL surface syntax
- the assertion-versus-annotation distinction is explicit
- the JSON Schema mapping is more clearly scoped
- semantic highlighting and codegen annotations are part of the model rather than TODOs

## Recommended Next Steps

1. Freeze a concrete grammar for the concise KDL-compatible surface syntax.
2. Define the exact semantics of backtick CEL strings as a profile extension.
3. Normalize the concise syntax into a canonical AST.
4. Validate the design against representative configs from Niri and Zellij.
5. Add parser and validator tests once a reference implementation exists.

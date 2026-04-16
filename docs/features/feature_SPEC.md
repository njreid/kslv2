# Improved KDL Schema Language Specification Draft

## Status

This document is a normative-style draft for a revised KDL Schema Language.

## 1. Syntax Profile

This draft assumes KDL v2 syntax for the schema language, with one explicit extension:

- CEL expressions MAY use backtick-delimited string literals.

Standard KDL v2 does not define backticks as string delimiters. Any implementation claiming conformance to this draft MUST either:

- support this CEL string extension, or
- reject schemas that use it with a clear diagnostic.

All examples in this draft are otherwise intended to be KDL v2-compatible.

## 2. Overview

The KDL Schema Language, or KSL, defines constraints and annotations for KDL documents using KDL syntax.

KSL is intended to support:

- validation of KDL documents
- editor completions and diagnostics
- semantic syntax highlighting
- documentation generation
- binding and model generation

Requirement keywords such as MUST, SHOULD, and MAY are to be interpreted as described in RFC 2119 and RFC 8174.

## 3. Top-Level Structure

A KSL document MUST contain exactly one top-level `schema` node.

The `schema` node:

- MUST take one string argument representing the schema identifier
- MAY include properties such as `version`
- MAY contain `info`, `import`, `define`, and `document` children

Example:

```kdl
schema "https://example.com/schemas/service" version="1.0.0" {
  info title="Service Config"
  document {}
}
```

## 4. Subjects

Each schema block validates or annotates one logical subject.

Standard subjects are:

- `document`
- `node`
- `arg`
- `args`
- `prop`
- `props`
- `children`
- `value`

Constraints declared within a subject MUST apply to that subject unless otherwise specified.

## 5. Cardinality

KSL MUST support concise occurrence markers for repeatable constructs.

The following cardinality markers are defined:

- `required`
- `optional`
- `many`
- `at-least N`
- `at-most N`
- `between A B`

Implementations MAY normalize these markers into numeric minimum and maximum bounds internally.

Example:

```kdl
node "plugin" many
prop "theme" optional {
  type "string"
}
node "workspace" between 1 4
```

## 6. Scalar Types and Constraints

KSL MUST support the following base scalar types:

- `string`
- `integer`
- `number`
- `boolean`
- `null`

KSL SHOULD support string format constraints.

The following scalar constraints SHOULD be supported where applicable:

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

Examples:

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

An implementation MUST reject incompatible constraints unless the specification for that constraint explicitly allows cross-type use.

## 7. Arguments

Because KDL arguments are ordered, KSL MUST treat positional arguments as indexed slots.

The `arg` form:

- MUST take an integer index as its first argument
- MUST describe the schema for that positional argument

The `args` form:

- MUST describe a homogeneous repeated region or full-list rule
- MAY be combined with list-level constraints such as `distinct`

Examples:

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

node "include" {
  args at-least=1 {
    type "string"
  }
}
```

## 8. Properties

The `prop` form declares a schema for one named property.

A `prop` declaration:

- MUST identify the property name
- MAY declare scalar or composed constraints
- MAY be marked with a cardinality marker

Example:

```kdl
prop "shell" required {
  type "string"
}

prop "title" optional {
  type "string"
}
```

The `props` form declares constraints on the property map as a whole.

`props` MUST support open and closed behavior:

- `props closed` means undeclared properties are invalid
- `props open` means undeclared properties are allowed

`props` SHOULD support name constraints.

Example:

```kdl
props closed
props {
  names {
    type "string"
    pattern #"^[a-z][a-z0-9-]*$"#
  }
}
```

## 9. Child Nodes

The `children` form declares constraints on a node’s child collection.

`children` MUST support open and closed behavior:

- `children closed` means undeclared child nodes are invalid
- `children open` means undeclared child nodes are allowed

Within a `children` block, `node` declarations define allowed child shapes and cardinalities.

Example:

```kdl
children closed {
  node "column" many
  node "gap" optional {
    arg 0 {
      type "integer"
      min 0
    }
  }
}
```

## 10. Definitions and References

KSL MUST support reusable named definitions.

The `define` form binds a name to a schema fragment.

The `ref` property or equivalent reference form applies a named schema fragment.

Examples:

```kdl
define "port" {
  value {
    type "integer"
    between 1 65535
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

prop "listen-port" ref="port"
node "bind" ref="binding"
```

Implementations SHOULD resolve local definitions before external ones.

Query-based extraction MAY exist as an advanced feature, but SHOULD NOT be the primary reuse mechanism.

## 11. Imports

KSL SHOULD support schema imports.

The `import` form:

- MUST identify an external schema by stable identifier
- MAY bind it to a local alias using a property such as `as`

Example:

```kdl
import "https://example.com/schemas/common" as="common"
prop "host" ref="common.hostname"
```

Import resolution MUST be deterministic for a given implementation profile.

## 12. Composition

KSL MUST support the following composition forms:

- `all-of`
- `any-of`
- `one-of`
- `not`

Semantics:

- `all-of`: the instance MUST satisfy all child subschemas
- `any-of`: the instance MUST satisfy at least one child subschema
- `one-of`: the instance MUST satisfy exactly one child subschema
- `not`: the instance MUST NOT satisfy the child subschema

Example:

```kdl
any-of {
  prop "command" required {
    type "string"
  }
  prop "action" required {
    type "string"
  }
}
```

Implementations SHOULD provide branch-aware diagnostics for composition failures.

## 13. Child Collection Groups

Because KDL child nodes are ordered, KSL SHOULD support child-specific grouping constructs:

- `sequence`
- `choice`
- `unordered`

Semantics:

- `sequence`: child patterns are matched in order
- `choice`: exactly one branch matches in the relevant structural position
- `unordered`: child patterns are matched irrespective of order

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

## 14. Declarative Conditionals

KSL SHOULD support declarative conditionals modeled after JSON Schema.

### 14.1 `if` / `then` / `else`

- If the `if` subschema succeeds, the `then` subschema MUST apply if present.
- If the `if` subschema fails, the `else` subschema MUST apply if present.

Example:

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

### 14.2 `dependent-required`

KSL SHOULD support dependencies that require additional members when one member is present.

This mechanism MUST be applicable to both properties and child nodes.

Examples:

```kdl
dependent-required prop="command" requires-props="shell"
dependent-required child="tls" requires-children="cert" "key"
```

### 14.3 `dependent-schema`

KSL SHOULD support dependencies that apply a subschema when a member is present.

Example:

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

The dependent subschema MUST apply independently of the base schema.

## 15. CEL Integration

KSL SHOULD support CEL for conditions that are cumbersome to express declaratively.

If CEL is supported:

- CEL expressions MUST be side-effect free
- CEL evaluation MUST be deterministic
- the available scope objects and helpers MUST be documented
- backtick CEL strings MUST be accepted as part of the CEL extension profile

CEL MAY appear in forms such as:

- `assert`
- `default`
- `visible-if`
- `enabled-if`

Examples:

```kdl
assert `hasProp("min") == hasProp("max")`
assert `props.mode == "tcp" ? hasProp("port") : hasProp("path")`
default `props.kind == "workspace" ? "main" : null`
```

Recommended CEL bindings:

- `self`
- `node`
- `args`
- `props`
- `children`

Recommended helpers:

- `hasProp(name)`
- `hasChild(name)`
- `countChild(name)`
- `name()`
- `tag()`

## 16. Annotations

KSL MUST distinguish validation assertions from annotations.

Annotations MUST NOT affect validation outcome unless explicitly stated by a profile.

Recommended annotation forms include:

- `doc`
- `example`
- `deprecated`
- `since`
- `hint`
- `highlight`
- `bind`

Example:

```kdl
prop "theme" {
  type "string"
  enum "light" "dark"
  doc "Theme mode for the UI"
  hint completion="enum"
  highlight token="enumMember"
  bind type="Theme"
}
```

## 17. Defaults for Open and Closed Content

For strong editor support, an implementation profile SHOULD default to closed-world behavior for explicitly declared structures:

- top-level `document` SHOULD be closed
- `props` inside explicit node schemas SHOULD be closed
- `children` inside explicit node schemas SHOULD be closed

Profiles with permissive defaults MUST document those defaults precisely.

## 18. JSON Schema Alignment

KSL SHOULD align with JSON Schema where the semantic model is equivalent or near-equivalent.

Direct or near-direct mappings include:

- scalar constraints
- `enum`
- `const`
- `allOf`
- `anyOf`
- `oneOf`
- `not`
- `if` / `then` / `else`
- `dependentRequired`
- `dependentSchemas`
- `default`

KDL-specific adaptations include:

- `props` for property maps
- indexed `arg` declarations for positional arguments
- child-node groups for ordered collections

## 19. Validation Results

An implementation SHOULD report validation failures with enough information for editor integration.

Each failure SHOULD include:

- instance location in the KDL document
- schema location in the KSL document
- failing constraint category
- human-readable message
- branch detail for composition failures when available

## 20. Example

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
      }
    }
  }
}
```

## 21. Profiles and Conformance

The specification SHOULD allow conformance profiles.

Suggested profiles:

- Core Validation Profile
- Composition Profile
- CEL Extension Profile
- Tooling Annotation Profile

An implementation claiming support for a profile MUST identify unsupported optional features explicitly.

# Improved KDL Schema Language Specification Draft

## Status

This document is a normative-style draft for a revised KDL Schema Language.

## 1. Syntax Profile

This draft assumes KDL v2 syntax for the schema language, with one explicit extension:

- CEL expressions MAY use backtick-delimited single-line and multiline string literals.

Standard KDL v2 does not define backtick string delimiters. An implementation claiming conformance to this draft MUST either:

- support this CEL string extension, or
- reject schemas that use it with a clear diagnostic.

All examples in this draft are otherwise intended to be KDL v2-compatible.

## 2. When to Use Quotation Marks

KSL SHOULD minimize quotation marks when a value is representable as an identifier string in KDL v2.

Quotation marks SHOULD NOT be used for canonical symbolic values when the value consists only of identifier-safe characters.

Common cases that SHOULD remain unquoted include:

- scalar type names such as `string`, `integer`, `number`, `boolean`, and `null`
- enum members and constant-like symbols such as `tcp`, `unix`, `GET`, and `POST`
- schema definition names and references such as `port` and `common:hostname`
- node names and property names such as `Response`, `Say`, `host`, and `default_shell`
- namespaced annotation or extension nodes such as `doc:summary` and `ibm:annotation`

Quotation marks SHOULD be used when the value:

- contains whitespace
- contains characters that are not valid in identifier strings
- is empty
- is intended to remain a string that might otherwise parse as another literal kind
- is prose, freeform text, or structured text such as URLs, paths, and regular expressions

Examples:

```kdl
type string
enum tcp unix
prop host ref=common:hostname
node Response required
doc:summary "Required root element"
import "https://example.com/schemas/common" as="common"
pattern #"^[0-9]+%$"#
```

> Style:
> Prefer unquoted symbolic identifiers and quoted content strings. This keeps the language visually smaller and better aligned with the principle of one obvious way to express each concept.

## 3. Core Principles

KSL implementations and specifications MUST follow these principles:

- one obvious user-facing way to express each concept
- a normalized internal model that is not itself user-facing
- declarative constructs preferred over embedded rule expressions
- built-in validation vocabulary unqualified by namespace
- extension vocabulary expressed through `prefix:name`

## 4. Top-Level Structure

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

## 5. Normalization Model

Every conforming implementation MUST normalize the user-facing syntax into a canonical internal schema model before validation or tooling analysis.

This normalized model MUST represent at least:

- schema identity
- imported schema bindings
- named definitions
- subject kinds
- occurrence bounds
- openness or closedness
- value constraints
- child content-model structure
- composition branches
- conditional branches
- annotation payloads

The normalized model MUST NOT require a separate user-facing syntax.

> Implementation:
> The normalization requirement is about implementation interoperability, not about exposing a second authoring language.

## 6. Namespaces and Imports

KSL MUST use `prefix:name` as its namespace and extension convention.

Rules:

- built-in KSL validation keywords are unqualified
- extension vocabulary SHOULD use `prefix:name`
- imported definitions MUST be referenced using the import alias as a prefix

Example:

```kdl
import "https://example.com/schemas/common" as="common"
prop host ref=common:hostname
ibm:annotation severity="warning"
```

Import rules:

- the `as` property MUST define the namespace prefix for imported definitions
- imported definitions MUST NOT be implicitly injected into the unqualified local namespace
- import cycles are invalid
- import resolution MUST be deterministic within a conformance profile

## 7. Subjects

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

## 8. Cardinality

KSL MUST support the following concise occurrence markers:

- `required`
- `optional`
- `many`
- `at-least N`
- `at-most N`
- `between A B`

These markers MUST normalize to occurrence bounds internally.

Example:

```kdl
node plugin many
prop theme optional {
  type string
}
node workspace between 1 4
```

## 9. Scalar Types and Constraints

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

An implementation MUST reject incompatible constraints unless the specification for that constraint explicitly allows cross-type use.

## 10. Arguments

Because KDL arguments are ordered, KSL MUST treat positional arguments as indexed slots.

The `arg` form:

- MUST take an integer index as its first argument
- MUST describe the schema for that positional argument

The `args` form:

- MUST describe a homogeneous repeated region or full-list rule
- MAY be combined with list-level constraints such as `distinct`

Example:

```kdl
node listen {
  arg 0 {
    type string
    format hostname
  }
  arg 1 {
    type integer
    between 1 65535
  }
}
```

## 11. Properties

The `prop` form declares a schema for one named property.

A `prop` declaration:

- MUST identify the property name
- MAY declare scalar or composed constraints
- MAY be marked with a cardinality marker

The `props` form declares constraints on the property map as a whole.

`props` MUST support open and closed behavior:

- `props closed` means undeclared properties are invalid
- `props open` means undeclared properties are allowed

`props` SHOULD support property-name constraints.

## 12. Child Content Models

KSL MUST support child-content modeling that accounts for ordered child nodes.

To minimize surface area, KSL SHOULD use only the following child-content forms:

- bare `children { ... }`
- `sequence { ... }`
- `choice { ... }`

The `unordered` keyword SHOULD NOT be part of the core language.

### 12.1 Bare `children`

A bare `children { ... }` block MUST be interpreted as an unordered content model.

In a bare `children` block:

- direct `node ...` declarations specify name-based occurrence constraints
- matching is by child node name and occurrence, not relative order

### 12.2 `sequence`

A `sequence { ... }` block MUST be interpreted as an ordered content model.

Within `sequence`, items MUST be matched left-to-right against the child-node stream.

### 12.3 `choice`

A `choice { ... }` block MUST require exactly one branch to match.

If multiple branches match in a way that the implementation cannot distinguish deterministically, the implementation SHOULD diagnose the schema as ambiguous.

Example:

```kdl
children closed {
  sequence {
    node name required
    node command required
    node env many
  }
}
```

## 13. Open and Closed Content

For explicit schemas, a conformance profile SHOULD default to closed-world behavior for:

- top-level `document`
- `props` inside explicit node schemas
- `children` inside explicit node schemas

Profiles with different defaults MUST document them precisely.

> Style:
> Prefer explicit open extension islands instead of making whole documents permissive.

## 14. Definitions and References

KSL MUST support reusable named definitions.

The `define` form binds a name to a schema fragment.

The `ref` property or equivalent reference form applies a named schema fragment.

Example:

```kdl
define port {
  value {
    type integer
    between 1 65535
  }
}

prop listen-port ref=port
```

Implementations SHOULD resolve local definitions before imported ones when both scopes are available.

## 15. Composition

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

Implementations SHOULD provide branch-aware diagnostics for composition failures.

## 16. Declarative Conditionals

KSL SHOULD support declarative conditionals modeled after JSON Schema.

### 16.1 `if` / `then` / `else`

- If the `if` subschema succeeds, the `then` subschema MUST apply if present.
- If the `if` subschema fails, the `else` subschema MUST apply if present.

### 16.2 `dependent-required`

KSL SHOULD support dependencies that require additional members when one member is present.

This mechanism MUST be applicable to both properties and child nodes.

### 16.3 `dependent-schema`

KSL SHOULD support dependencies that apply a subschema when a member is present.

The dependent subschema MUST apply independently of the base schema.

## 17. Declarative Rules Versus CEL

KSL SHOULD express constraints declaratively whenever practical.

Declarative KSL MUST be used for:

- document and node shape
- cardinality
- scalar typing and enumeration
- child-content structure
- standard composition
- standard conditional forms

CEL SHOULD be reserved for:

- cross-member invariants that are awkward declaratively
- arithmetic or string relations among multiple members
- derived defaults not representable declaratively
- editor-oriented visibility or enablement logic

CEL MUST NOT determine:

- import resolution
- namespace binding
- core grammar
- whether content is open or closed
- whether a schema construct exists in the language

If CEL is supported:

- CEL expressions MUST be side-effect free
- CEL evaluation MUST be deterministic
- the available scope objects and helpers MUST be documented
- backtick CEL strings MUST be accepted as part of the CEL extension profile

Example:

```kdl
assert `hasProp("min") == hasProp("max")`
default `props.kind == "workspace" ? "main" : null`
visible-if `props.mode == "advanced"`
```

## 18. Assertions and Annotations

KSL MUST distinguish assertions from annotations semantically.

Rules:

- assertions affect validity
- annotations MUST NOT affect validity in the core profile
- unknown qualified annotation nodes SHOULD be ignorable by validators
- unknown assertion nodes MUST NOT be silently ignored in the core profile

Recommended built-in annotation categories include:

- `hint`
- `highlight`
- `bind`

Documentation annotations SHOULD use the reserved `doc:` namespace.

## 19. Documentation Annotations

KSL SHOULD support structured documentation annotations.

Recommended forms:

- `doc:summary`
- `doc:detail`
- `doc:example`
- `doc:warning`
- `doc:caution`
- `doc:deprecated`
- `doc:since`
- `doc:changed`
- `doc:default`
- `doc:see`

Example:

```kdl
prop voice {
  type string
  doc:summary "Voice identifier"
  doc:warning "Available voices may change by provider"
  doc:example "Polly.Joanna-Generative"
}
```

> Style:
> Using `doc:*` keeps the unqualified keyword set smaller and makes documentation nodes easier to identify and ignore where appropriate.

## 20. Node Archetypes

The specification SHOULD describe common KDL node archetypes for documentation and tooling purposes, without introducing new syntax.

Recommended archetypes:

- flag node
- scalar node
- record node
- container node
- mixed node

These archetypes SHOULD remain descriptive and non-normative.

## 21. Post-Validation Model

An implementation SHOULD define a post-validation information model in addition to pass/fail validation results.

The post-validation model SHOULD be able to expose:

- validated instance locations
- resolved schema references
- effective type and occurrence information
- materialized defaults, if supported
- attached documentation annotations
- attached tooling annotations such as semantic-token hints

This model SHOULD be defined over the normalized schema representation.

## 22. Validation Results

An implementation SHOULD report validation failures with enough information for editor integration.

Each failure SHOULD include:

- instance location in the KDL document
- schema location in the KSL document
- failing constraint category
- human-readable message
- branch detail for composition failures when available

## 23. JSON Schema Alignment

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

KDL-specific adaptations include:

- `props` for property maps
- indexed `arg` declarations for positional arguments
- child-content models for ordered node collections

## 24. Spec Structure

The eventual specification SHOULD separate:

1. abstract model
2. concrete syntax
3. validation semantics
4. annotation model
5. conformance rules
6. style guidance
7. implementation notes

## 25. Profiles and Conformance

The specification SHOULD allow conformance profiles.

Suggested profiles:

- Core Validation Profile
- Composition Profile
- CEL Extension Profile
- Tooling Annotation Profile

An implementation claiming support for a profile MUST identify unsupported optional features explicitly.

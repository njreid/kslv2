# Improved KDL Schema Language Specification Draft

## Status

This document is a normative-style draft for a revised KDL Schema Language.

Related documents:

- [`README.md`](./README.md) for the document index
- [`DESIGN.md`](./DESIGN.md) for rationale and non-normative design guidance
- [`AST.md`](./AST.md) for the normalized internal model
- [`CONFORMANCE_PROFILES.md`](./CONFORMANCE_PROFILES.md) for implementation profiles
- [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md) for how compatible reused fragments combine
- [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md) for `choice` determinism rules
- [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md) for ref target compatibility rules
- [`TREE_SITTER.md`](./TREE_SITTER.md) for CST-oriented parser guidance
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md) for schema validity rules

## 1. Syntax Profile

This draft assumes KDL v2 syntax for the schema language, with one explicit extension:

- CEL expressions MAY use backtick-delimited single-line and multiline string literals.

Standard KDL v2 does not define backtick string delimiters. An implementation claiming conformance to this draft MUST either:

- support this CEL string extension, or
- reject schemas that use it with a clear diagnostic.

All examples in this draft are otherwise intended to be KDL v2-compatible.

## 2. When to Use Quotation Marks

KSL SHOULD use quotation marks for document-language node and property names, even when those names are representable as identifier strings in KDL v2.

Quotation marks SHOULD be used for:

- node names such as `node "Response"`
- property names such as `prop "host"`
- prose and content strings such as `doc:summary "Required root element"`

Reusable schema handles SHOULD use `#identity` form.

Common cases that SHOULD use `#identity` include:

- definition identities such as `define #port`
- local references such as `ref=#port`
- imported references such as `ref=common:#hostname`

The following `#` literals are reserved built-ins and MUST NOT be treated as reusable schema identities:

- `#true`
- `#false`
- `#null`

All other `#identifier` tokens in identity positions MUST be treated as reusable schema handles.

Quotation marks SHOULD NOT be used for canonical symbolic values when the value consists only of identifier-safe characters.

Common cases that SHOULD remain unquoted include:

- scalar type names such as `string`, `integer`, `number`, `boolean`, and `null`
- enum members and constant-like symbols such as `tcp`, `unix`, `GET`, and `POST`
- format names such as `hostname` and `path`
- namespaced annotation or extension node identifiers such as `doc:summary` and `ibm:annotation`

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
prop "host" ref=common:#hostname
node "Response" required
doc:summary "Required root element"
import "https://example.com/schemas/common" as="common"
pattern #"^[0-9]+%$"#
```

> Style:
> Quote node and property names. Use `#identity` for reusable schema handles. Leave canonical value symbols unquoted.

## 3. Core Principles

KSL implementations and specifications MUST follow these principles:

- one obvious user-facing way to express each concept
- a normalized internal model that is not itself user-facing
- declarative constructs preferred over embedded rule expressions
- built-in validation vocabulary unqualified by namespace
- extension vocabulary expressed through `prefix:name`

## 4. Canonical Surface Forms

KSL MUST define one canonical surface spelling for each major concept.

Conforming examples and style guidance MUST use the canonical forms below.

### 4.1 Name-Bearing Declarations

When introducing or matching document-language node and property names, KSL MUST use a quoted string argument.

Canonical forms:

- `node "name" ...`
- `prop "name" ...`

Examples:

```kdl
define #port {
  value {
    type integer
  }
}

node "Response" required
prop "host" optional {
  type string
}
```

### 4.2 Canonical Symbolic Values

When expressing canonical symbolic values, KSL MUST use unquoted argument values.

Canonical forms:

- `type string`
- `format hostname`
- `enum tcp unix`
- `const tcp`

Examples:

```kdl
type string
format hostname
enum tcp unix
const tcp
```

### 4.3 Reusable Identities

Reusable schema components MUST be declared and referenced using `#identity` tokens.

Reserved built-in literals `#true`, `#false`, and `#null` MUST NOT be accepted as reusable identities.

Canonical forms:

- `define #name { ... }`
- `ref=#name`
- `ref=prefix:#name`

Examples:

```kdl
define #hostname {
  value {
    type string
  }
}

prop "host" ref=common:#hostname
node "bind" many ref=#keybinding
```

Alternate spellings such as `define "name"` and `ref="name"` MUST NOT be part of the canonical surface.

### 4.4 References

References to named schema components MUST use the `ref` property form.

Canonical form:

- `ref=#name`
- `ref=prefix:#name`

Examples:

```kdl
prop "host" ref=common:#hostname
node "bind" many ref=#keybinding
```

Alternate spellings such as `ref name` MUST NOT be part of the canonical surface.

### 4.5 Literal Defaults

Literal defaults MUST use the `default=<literal>` property form on the declaration they modify.

Examples:

```kdl
prop "theme" optional default=dark {
  type string
}

prop "retries" optional default=3 {
  type integer
}
```

### 4.6 Computed Defaults

Computed defaults MUST use a dedicated `default` child node whose argument is a CEL expression.

Example:

```kdl
default `props.kind == "workspace" ? "main" : null`
```

This distinction avoids overloading one syntax form with both literal values and computed expressions.

### 4.7 Imports

Imports MUST use:

- a quoted schema identifier as the first argument
- an `as` property for the namespace prefix

Canonical form:

```kdl
import "https://example.com/schemas/common" as="common"
```

### 4.8 Constraint Shape

To minimize surface area, KSL MUST use:

- child nodes for validation keywords such as `type`, `enum`, `const`, `format`, `min`, `max`, and `pattern`
- properties for metadata-like modifiers attached to the declaration header such as `ref=...`, `doc=...`, and literal `default=...`
- properties for metadata-like modifiers attached to the declaration header such as `ref=...`, `doc=...`, `when=...`, and literal `default=...`
- trailing occurrence modifiers such as `required`, `optional`, `many`, `at-least`, `at-most`, and `between`

> Style:
> Quote node and property names. Use `#identity` for reusable schema handles. Leave canonical value symbols unquoted. Use child nodes for validation constraints and properties for header-level modifiers.

## 5. Top-Level Structure

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

## 6. Normalization Model

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

## 7. Namespaces and Imports

KSL MUST use `prefix:name` as its namespace and extension convention.

Rules:

- built-in KSL validation keywords are unqualified
- extension vocabulary SHOULD use `prefix:name`
- imported definitions MUST be referenced using the import alias as a prefix

Example:

```kdl
import "https://example.com/schemas/common" as="common"
prop "host" ref=common:#hostname
ibm:annotation severity="warning"
```

Import rules:

- the `as` property MUST define the namespace prefix for imported definitions
- imported definitions MUST NOT be implicitly injected into the unqualified local namespace
- import cycles are invalid
- import resolution MUST be deterministic within a conformance profile

## 8. Subjects

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

## 9. Cardinality

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
node "plugin" many
prop "theme" optional {
  type string
}
node "workspace" between 1 4
```

## 10. Scalar Types and Constraints

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

## 11. Arguments

Because KDL arguments are ordered, KSL MUST treat positional arguments as indexed slots.

The `arg` form:

- MUST take an integer index as its first argument
- MUST describe the schema for that positional argument

The `args` form:

- MUST describe a homogeneous repeated region or full-list rule
- MAY be combined with list-level constraints such as `distinct`

Example:

```kdl
node "listen" {
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

## 12. Properties

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

## 13. Child Content Models

KSL MUST support child-content modeling that accounts for ordered child nodes.

To minimize surface area, KSL MUST use only the following child-content forms in the canonical surface:

- bare `children { ... }`
- `sequence { ... }`
- `choice { ... }`

The `unordered` keyword MUST NOT be part of the core language.

### 13.1 Bare `children`

A bare `children { ... }` block MUST be interpreted as an unordered content model.

In a bare `children` block:

- direct `node ...` declarations specify name-based occurrence constraints
- matching is by child node name and occurrence, not relative order

### 13.2 `sequence`

A `sequence { ... }` block MUST be interpreted as an ordered content model.

Within `sequence`, items MUST be matched left-to-right against the child-node stream.

### 13.3 `choice`

A `choice { ... }` block MUST require exactly one branch to match.

If multiple branches match in a way that the implementation cannot distinguish deterministically, the implementation MUST diagnose the schema as ambiguous according to [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md).

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

## 14. Open and Closed Content

For explicit schemas, a conformance profile SHOULD default to closed-world behavior for:

- top-level `document`
- `props` inside explicit node schemas
- `children` inside explicit node schemas

Profiles with different defaults MUST document them precisely.

> Style:
> Prefer explicit open extension islands instead of making whole documents permissive.

## 15. Definitions and References

KSL MUST support reusable named definitions.

The `define` form binds a name to a schema fragment.

The `ref` property applies a named schema fragment.

Example:

```kdl
define #port {
  value {
    type integer
    between 1 65535
  }
}

prop "listen-port" ref=#port
```

Implementations MUST resolve local definitions before imported ones when both scopes are available.

## 16. Composition

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

Implementations MUST provide branch-aware diagnostics for composition failures.

## 17. Declarative Conditionals

KSL MUST use declaration-local conditional activation rather than block-structured control flow.

### 17.1 `when=`

KSL MUST support a canonical `when=` header property for conditionally active declarations, constraints, and annotations.

Recommended uses:

- conditional properties
- conditional child nodes
- conditional defaults
- conditional annotations such as `visible-if`

Examples:

```kdl
prop "port" required when=`props.mode == "tcp"` {
  type integer
}

prop "socket" required when=`props.mode != "tcp"` {
  type string
}
```

`if`, `then`, and `else` MUST NOT be part of the KSL language surface.

### 17.2 `dependent-required`

KSL MUST support dependencies that require additional members when one member is present.

This mechanism MUST be applicable to both properties and child nodes.

### 17.3 `dependent-schema`

KSL MUST support dependencies that apply a subschema when a member is present.

The dependent subschema MUST apply independently of the base schema.

## 18. Declarative Rules Versus CEL

KSL MUST express constraints declaratively whenever practical.

Declarative KSL MUST be used for:

- document and node shape
- cardinality
- scalar typing and enumeration
- child-content structure
- standard composition
- `when=` guards and dependency forms

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

`when=` MUST be preferred over CEL-bearing control-flow structures when a declaration-local guard is sufficient.

`assert <CEL>` MUST be treated as a non-core, profile-gated feature.

The language design SHOULD collect common `assert` patterns before standardizing new declarative replacements.

## 19. Assertions and Annotations

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

Documentation annotations MUST use the reserved `doc:` namespace.

A `doc="..."` header property MUST be treated as equivalent to `doc:summary "..."` on the same declaration.

## 20. Documentation Annotations

KSL MUST support structured documentation annotations.

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
prop "voice" {
  type string
  doc:summary "Voice identifier"
  doc:warning "Available voices may change by provider"
  doc:example "Polly.Joanna-Generative"
}
```

Equivalent summary shorthand:

```kdl
prop "voice" doc="Voice identifier" {
  type string
}
```

> Style:
> Using `doc:*` keeps the unqualified keyword set smaller and makes documentation nodes easier to identify and ignore where appropriate.

## 21. Grammar Sketch

The following sketch is informative and is intended to pin down the canonical surface shape of the language.

```text
schema-document := schema-node

schema-node := 'schema' string [properties] block

schema-child :=
  info-node |
  import-node |
  define-node |
  document-node

import-node := 'import' string 'as' '=' string
define-node := 'define' identity block
document-node := 'document' [header-modifier*] block

subject-node :=
  node-subject |
  prop-subject |
  arg-subject |
  args-subject |
  value-subject |
  props-subject |
  children-subject

node-subject := 'node' string [occurrence] [header-property*] [block]
prop-subject := 'prop' string [occurrence] [header-property*] [block]
arg-subject := 'arg' integer [occurrence] [header-property*] [block]
args-subject := 'args' [occurrence-or-list-property*] [block]

header-property := 'ref' '=' identity | 'default' '=' literal | 'doc' '=' string | 'when' '=' cel-literal
occurrence := 'required' | 'optional' | 'many' | 'at-least' integer | 'at-most' integer | 'between' integer integer

constraint-node :=
  type-node |
  format-node |
  enum-node |
  const-node |
  min-node |
  max-node |
  pattern-node |
  composition-node |
  annotation-node

type-node := 'type' symbol
format-node := 'format' symbol
enum-node := 'enum' symbol+
const-node := 'const' symbol

children-subject := 'children' ('open' | 'closed')? block
children-item := node-subject | sequence-node | choice-node | ref-node
sequence-node := 'sequence' block
choice-node := 'choice' block

ref-node := 'ref' identity
identity := '#' identifier | prefix ':' '#' identifier

annotation-node := built-in-annotation | qualified-annotation
built-in-annotation := hint-node | highlight-node | bind-node
qualified-annotation := identifier-with-colon [args/properties/block]
```

This grammar sketch is not a complete parser grammar. In particular, it does not attempt to encode:

- semantic validation of refs and imports
- ambiguity detection for `choice`
- CEL expression internals
- interaction between composition and content-model matching

## 22. Node Archetypes

The specification SHOULD describe common KDL node archetypes for documentation and tooling purposes, without introducing new syntax.

Recommended archetypes:

- flag node
- scalar node
- record node
- container node
- mixed node

These archetypes SHOULD remain descriptive and non-normative.

## 23. Tree-sitter Considerations

Tree-sitter is a good fit for the concrete KSL surface grammar.

A Tree-sitter grammar SHOULD be able to represent at least:

- top-level schema structure
- definition, import, and document nodes
- subject-node headers such as `node "name" required ref=#foo`
- child blocks including `children`, `sequence`, and `choice`
- built-in annotations and qualified extension nodes such as `doc:summary`
- backtick CEL literals as opaque tokens or strings in the CEL extension profile

Tree-sitter SHOULD NOT be expected to enforce semantic rules such as:

- ref resolution
- import cycle rejection
- content-model ambiguity
- composition semantics
- CEL typechecking or execution

> Implementation:
> A practical implementation would use Tree-sitter for incremental parsing, selections, folding, and structural queries, and then run a separate semantic pass over the parsed tree to build the normalized schema model and validate it.

## 24. Post-Validation Model

An implementation MUST define a post-validation information model in addition to pass/fail validation results.

The post-validation model SHOULD be able to expose:

- validated instance locations
- resolved schema references
- effective type and occurrence information
- materialized defaults, if supported
- attached documentation annotations
- attached tooling annotations such as semantic-token hints

This model SHOULD be defined over the normalized schema representation.

## 25. Validation Results

An implementation SHOULD report validation failures with enough information for editor integration.

Each failure SHOULD include:

- instance location in the KDL document
- schema location in the KSL document
- failing constraint category
- human-readable message
- branch detail for composition failures when available

## 26. JSON Schema Alignment

KSL SHOULD align with JSON Schema where the semantic model is equivalent or near-equivalent.

Direct or near-direct mappings include:

- scalar constraints
- `enum`
- `const`
- `allOf`
- `anyOf`
- `oneOf`
- `not`
- `dependentRequired`
- `dependentSchemas`

KDL-specific adaptations include:

- `props` for property maps
- indexed `arg` declarations for positional arguments
- child-content models for ordered node collections

## 27. Spec Structure

The eventual specification SHOULD separate:

1. abstract model
2. concrete syntax
3. validation semantics
4. annotation model
5. conformance rules
6. style guidance
7. implementation notes

## 28. Profiles and Conformance

The specification SHOULD allow conformance profiles.

Suggested profiles:

- Core Validation Profile
- Composition Profile
- CEL Extension Profile
- Tooling Annotation Profile

An implementation claiming support for a profile MUST identify unsupported optional features explicitly.

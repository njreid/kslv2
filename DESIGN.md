# Improved KDL Schema Language Design

## Status

Draft design proposal synthesizing KDL Schema v1, the partial KSL v2 draft, JSON Schema concepts, and the needs of KDL-centric tooling.

## Syntax Profile

This design assumes KDL v2 syntax, with one explicit extension:

- CEL expressions MAY use backtick-delimited single-line and multiline strings.

Standard KDL v2 does not define backticks as string delimiters. Everything else in the examples is intended to stay KDL v2-compatible.

## Tenets

1. KDL-first, not JSON-in-KDL.
2. One obvious way to express each idea.
3. The normalized schema model is internal, not user-facing.
4. Ordered child nodes must be modeled directly.
5. Validation semantics and tooling annotations must be distinct.
6. Declarative constructs should carry as much of the language as possible; CEL is a secondary layer.

## Problem

KDL Schema v1 proved that a schema language embedded in KDL is viable, but it is verbose and awkward to author. The current KSL v2 draft moves toward a better model, especially by borrowing from JSON Schema, but it is still incomplete and still spends too much language surface on author-facing mechanics.

The next design should optimize for:

- concise authoring
- strong normalization for tooling
- predictable cross-implementation semantics
- compatibility with how KDL documents actually behave
- good support for validation, docs, LSPs, and code generation

## Non-Goals

- exposing a low-level normalized schema syntax directly to users
- supporting multiple equivalent user-facing spellings for the same concept
- solving every advanced schema feature before the core semantic model is stable

## High-Level Shape

A KSL document has four conceptual layers:

1. schema metadata
2. reusable definitions
3. validation rules for documents, nodes, args, props, values, and children
4. annotations for docs, editors, and generators

Illustrative top-level shape:

```kdl
schema "https://example.com/schemas/app-config" version="0.3.0" {
  info title="App Config" description="Schema for app-config.kdl"

  import "https://example.com/schemas/common" as="common"

  define color {
    value {
      type string
      enum red green blue
    }
  }

  define keybinding {
    node bind {
      arg 0 {
        type string
      }
      prop action required {
        type string
      }
      doc:summary "A binding from a key chord to an action"
    }
  }

  document {
    node app required {
      prop theme ref=color default=red
      children closed {
        node bind many ref=keybinding
      }
    }
  }
}
```

## Internal Model

KSL needs a canonical normalized model, but that model should remain internal.

The user-facing language should not grow a second “verbose canonical syntax”. Instead, every surface form should lower into a single normalized AST.

The normalized AST should represent:

- schema identity and imports
- definition table
- subject kind
- cardinality bounds
- openness or closedness
- value constraints
- child content model
- composition and conditional branches
- annotation payloads

> Implementation:
> Every validator, LSP, documentation generator, and binding generator should consume the normalized model rather than the raw parse tree. This keeps the user-facing language small while still giving implementations a rigorous contract.

## Surface Syntax

The user-facing syntax should prefer one spelling per concept.

### Cardinality

Common occurrence counts use concise modifiers:

- `required`
- `optional`
- `many`
- `at-least N`
- `at-most N`
- `between A B`

Examples:

```kdl
node server required
node plugin many
node workspace between 1 4
prop theme optional {
  type string
}
```

### Arguments

Arguments are indexed explicitly:

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

Repeated homogeneous arguments use `args`:

```kdl
node include {
  args at-least=1 {
    type string
  }
}
```

### Properties

Properties are declared inline:

```kdl
node window {
  prop width {
    type integer
    min 1
  }
  prop height {
    type integer
    min 1
  }
  prop title optional {
    type string
  }
}
```

Property-map rules live on `props`:

```kdl
props closed
props {
  names {
    type string
    pattern #"^[a-z][a-z0-9-]*$"#
  }
}
```

## Child Content Models

This is the main place where KSL must think like an XML dialect, not like JSON Schema.

### Recommended formalism

To minimize extra keywords, the language should use only:

- bare `children { ... }`
- `sequence { ... }`
- `choice { ... }`

The previous `unordered` keyword should be dropped.

### Semantics

- A bare `children { ... }` block is an unordered content model.
- Each direct `node ...` child inside a bare `children` block contributes an occurrence constraint for nodes of that name.
- A `sequence { ... }` block is order-sensitive and consumes child nodes left to right.
- A `choice { ... }` block requires exactly one branch to match.

This gives a small surface with a strong default:

- unordered content is the default and needs no extra keyword
- ordered content is explicit via `sequence`
- alternatives are explicit via `choice`

Example:

```kdl
children closed {
  node name required
  node env many
}
```

This means unordered matching by child name and occurrence.

```kdl
children closed {
  sequence {
    node name required
    node command required
    node env many
  }
}
```

This means order-sensitive matching.

```kdl
children closed {
  choice {
    node tcp
    node unix
  }
}
```

This means exactly one branch must match.

### Ambiguity

Content-model ambiguity needs an explicit policy.

Recommended rule:

- bare unordered `children` blocks are matched by node name and occurrence counts only
- `sequence` is matched left-to-right
- `choice` branches must be distinguishable in practice; if multiple branches match equally, validators SHOULD report the schema as ambiguous

> Implementation:
> This does not require a large new surface syntax. It does require validators to normalize children blocks into a real content-model graph and to detect obvious ambiguous `choice` constructions.

## Open, Closed, and Compatibility

Open versus closed content is not just an editor preference. It is part of a schema’s compatibility policy.

Recommended defaults for explicit schemas:

- top-level `document` defaults to `closed`
- `props` inside an explicit `node` default to `closed`
- `children` inside an explicit `node` default to `closed`

Recommendation for evolution:

- keep most structures closed
- carve out explicit open extension areas where needed
- prefer named extension islands to globally open schemas

> Style:
> If a format intends third-party extensibility, prefer one or two explicit open regions over making the entire document permissive.

## Namespaces and Extensions

KDL v2 already permits `:` in identifiers. KSL should use that as the standard namespace mechanism.

### Core rule

- built-in KSL keywords are unqualified
- extension and imported vocabulary should use `prefix:name`

Examples:

```kdl
ibm:annotation severity="warning"
doc:warning "This setting is experimental"
```

### Imports

Imported definitions should use the import label as the namespace prefix.

```kdl
import "https://example.com/schemas/common" as="common"

prop host ref=common:hostname
```

Rules:

- the `as` label defines the prefix for imported definitions
- import cycles are invalid
- imported names do not implicitly merge into the local unqualified namespace

This gives a simple and predictable modularity story without adding new syntax.

## Assertions and Annotations

The distinction between assertions and annotations should be semantic, not just visual.

### Assertions

Assertions affect validity. Examples:

- `type`
- `enum`
- `const`
- `children`
- `sequence`
- `choice`
- `all-of`
- `if`
- `dependent-required`

### Annotations

Annotations do not affect validity. Examples:

- `hint`
- `highlight`
- `bind`
- `doc:*`

Recommended rule:

- unknown qualified annotation nodes are ignorable by validators
- unknown assertion nodes are not ignorable in the core profile

This boundary matters for interoperability.

## Declarative Rules Versus CEL

The language should carry as much as possible with declarative constructs.

### Declarative-first

These should remain declarative whenever possible:

- shape of documents and nodes
- cardinality
- type constraints
- enumerations and constants
- allowed child structures
- common conditional forms such as `if` / `then` / `else`
- member dependencies such as `dependent-required` and `dependent-schema`

### CEL should be reserved for

- cross-field invariants that are awkward structurally
- arithmetic or string relations across multiple members
- derived defaults that cannot be expressed declaratively
- editor-oriented visibility and enablement logic

### CEL should not define

- core grammar
- reference resolution
- import behavior
- open or closed content policy
- whether a node kind exists in the language at all

Examples:

```kdl
assert `hasProp("min") == hasProp("max")`
default `props.kind == "workspace" ? "main" : null`
visible-if `props.mode == "advanced"`
```

> Style:
> If a rule can be expressed clearly with `type`, `enum`, `sequence`, `choice`, `if`, or `dependent-*`, prefer that over CEL.

> Implementation:
> CEL should be a distinct evaluation phase over the normalized model, not a backdoor that mutates schema structure.

## Node Archetypes Without New Keywords

KSL should describe common KDL idioms without creating new syntax for each one.

Recommended semantic archetypes:

- flag node: presence-only node such as `numlock`
- scalar node: one main argument or property value such as `mode "1920x1080"`
- record node: mostly properties, such as `position x=0 y=0`
- container node: mostly child nodes, such as `binds { ... }`
- mixed node: meaningful args, props, and children together

These should remain documentation and tooling concepts, not new language keywords.

This helps docs, LSP hints, and generators without overloading the user-facing surface.

## Documentation Affordances

Documentation needs more structure than a single `doc` string.

Recommended documentation affordances:

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

Using a reserved `doc:` namespace buys several things:

- documentation nodes are easy to recognize and ignore in validators
- the core keyword surface stays smaller
- related affordances are grouped coherently
- future additions like `doc:warning` do not clutter the unqualified namespace

Recommendation:

- keep validation keywords unqualified
- reserve `doc:` as the standard documentation annotation namespace

## Post-Validation Model Sketch

Successful schema application should produce more than pass or fail.

Recommended post-validation output:

- validated instance path map
- resolved schema references
- effective occurrence and type information per instance node
- materialized defaults, if the implementation supports them
- attached documentation annotations
- attached semantic token and completion metadata

Suggested categories:

- validation result
- normalized instance view
- tooling metadata view

> Implementation:
> Not every engine must materialize every post-validation artifact, but the spec should define what artifacts mean so tools can interoperate.

## Mapping from JSON Schema to KDL

Adopt directly where it fits:

- scalar constraints
- `enum`, `const`
- `allOf`, `anyOf`, `oneOf`, `not`
- `if`, `then`, `else`
- `dependentRequired`, `dependentSchemas`

Adapt for KDL:

- object properties become `props`
- tuple validation becomes indexed `arg` declarations
- ordered child structures require KDL-specific content models

Defer unless needed:

- full `$dynamicRef` complexity
- unevaluated-member semantics
- implicit merge behavior that is hard to predict

## Reuse and Modularity

Named definitions should remain the primary reuse mechanism.

```kdl
define port {
  value {
    type integer
    between 1 65535
  }
}
```

Imports should remain explicit and prefixed:

```kdl
import "https://example.com/schemas/common" as="common"

prop host ref=common:hostname
```

## Document Structure for the Spec

The eventual spec should separate:

1. abstract model
2. concrete surface syntax
3. validation semantics
4. annotation model
5. conformance requirements
6. non-normative style guidance
7. implementation notes

This keeps the language definition crisp while still preserving practical advice.

## Recommended Next Steps

1. Freeze the user-facing syntax around one spelling per concept.
2. Define the normalized internal schema AST.
3. Specify child-content matching precisely for bare `children`, `sequence`, and `choice`.
4. Reserve `doc:` as the standard documentation namespace.
5. Define CEL as a distinct extension profile with explicit phase boundaries.
6. Define the post-validation model used by validators, editors, and generators.

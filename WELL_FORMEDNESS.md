# KSL Well-Formedness Rules Draft

## Status

This document defines schema well-formedness rules for KSL.

It complements:

- [`SPEC.md`](./SPEC.md) for the user-facing language and canonical surface forms
- [`AST.md`](./AST.md) for the normalized semantic model
- [`TREE_SITTER.md`](./TREE_SITTER.md) for concrete syntax tree shape
- [`DESIGN.md`](./DESIGN.md) for rationale and non-normative design guidance

This document is about validating a KSL schema itself, not validating an instance document against a schema.

## Scope

These rules answer questions such as:

- Is the schema structurally valid?
- Are names unique where they need to be unique?
- Do references resolve?
- Are content models ambiguous or malformed?
- Are imports and prefixes coherent?
- Are features used in places where they are semantically allowed?

## Phase Placement

Recommended processing order:

1. Parse KSL source into a CST as described in [`TREE_SITTER.md`](./TREE_SITTER.md).
2. Normalize the CST into the implementation-facing AST from [`AST.md`](./AST.md).
3. Apply the well-formedness rules in this document.
4. Only after a schema is well-formed, use it for instance validation and tooling.

Well-formedness checks SHOULD run after normalization, because many rules depend on normalized occurrence bounds, resolved prefixes, and explicit content-model nodes.

## Core Rule

A KSL schema is well-formed only if all rules in this document succeed.

If a schema is not well-formed, validators and tooling SHOULD reject it before attempting instance validation.

## 1. Top-Level Rules

### 1.1 Single Root Schema

A KSL document MUST contain exactly one top-level `schema` declaration, as described in [`SPEC.md`](./SPEC.md).

### 1.2 Schema Identifier

The root schema identifier string MUST be non-empty.

### 1.3 At Most One Document Subject

After normalization, a `SchemaDocument` MUST contain at most one top-level `document` subject.

## 2. Import Rules

### 2.1 Prefix Required

Every import MUST declare an `as` prefix.

This aligns with the canonical form in [`SPEC.md`](./SPEC.md#46-imports).

### 2.2 Unique Prefixes

Import prefixes MUST be unique within a schema document.

Invalid:

```kdl
import "https://example.com/schemas/common" as="common"
import "https://example.com/schemas/other" as="common"
```

### 2.3 No Import Cycles

Import graphs MUST be acyclic.

If cycle detection is performed lazily, an implementation MUST still reject the schema before successful validation use.

### 2.4 No Local Prefix Shadowing

An import prefix MUST NOT be treated as a local definition name.

This means `common` may exist as a local definition name only if the implementation can keep local definitions and import prefixes in disjoint namespaces without ambiguity. The simpler recommended rule is:

- local definition names SHOULD NOT duplicate import prefixes

## 3. Definition Rules

### 3.1 Unique Local Definition Names

Local definition names MUST be unique within a schema document.

Invalid:

```kdl
define "port" {
  value {
    type integer
  }
}

define "port" {
  value {
    type string
  }
}
```

### 3.2 Valid Definition Body Shape

A definition body MUST normalize to a valid reusable fragment, as described in [`AST.md`](./AST.md#definitions).

At minimum, implementations SHOULD support definitions that lower to:

- a `Subject`
- a `ContentModel`
- a `ConstraintSet`

### 3.3 No Invalid Self-Reference Cycles

Definition reference graphs MUST be acyclic unless the language later explicitly introduces recursion semantics.

Recommended current rule:

- local definition cycles are invalid

Invalid:

```kdl
define "a" {
  node "x" ref="b"
}

define "b" {
  node "y" ref="a"
}
```

## 4. Reference Rules

### 4.1 Reference Resolution

Every `ref` target MUST resolve to exactly one definition.

Resolution rules come from [`SPEC.md`](./SPEC.md#15-definitions-and-references) and the normalized representation in [`AST.md`](./AST.md#references).

### 4.2 Local References

An unqualified `ref="name"` MUST resolve to exactly one local definition named `name`.

### 4.3 Imported References

A qualified `ref="prefix:name"` MUST resolve to exactly one imported definition reachable through `prefix`.

### 4.4 No Dangling References

If a target cannot be resolved, the schema is not well-formed.

### 4.5 No Ambiguous Reference Contexts

If a resolved definition body is not valid in the use site, the schema is not well-formed.

Examples:

- a reference used as a child content item SHOULD resolve to a compatible child/content fragment
- a reference used on a `prop` header SHOULD resolve to a compatible reusable constraint or subject fragment

The exact compatibility matrix should eventually be specified normatively, but implementations MUST reject obviously incompatible uses.

## 5. Subject Rules

### 5.1 Valid Name Requirement

`node` and `prop` subjects MUST carry a non-empty name.

### 5.2 Argument Indices

`arg` subjects MUST have a non-negative integer index.

### 5.3 No Duplicate Argument Indices in the Same Scope

Within the same enclosing subject, two direct `arg` declarations MUST NOT share the same index.

Invalid:

```kdl
node "listen" {
  arg 0 {
    type string
  }
  arg 0 {
    type integer
  }
}
```

### 5.4 No Contradictory Openness

A subject MUST NOT declare conflicting openness semantics.

Examples:

- `children open` and `children closed` on the same normalized subject is invalid
- `props open` and `props closed` on the same normalized subject is invalid

## 6. Occurrence Rules

Occurrence rules are evaluated over normalized bounds from [`AST.md`](./AST.md#occurrence).

### 6.1 Valid Bounds

For every normalized occurrence:

- `min` MUST be greater than or equal to zero
- `max` MUST be `unbounded` or greater than or equal to `min`

### 6.2 No Contradictory Surface Cardinalities

If surface syntax would normalize to incompatible occurrence constraints for the same subject, the schema is not well-formed.

### 6.3 Choice Branch Cardinality Sanity

Implementations SHOULD reject clearly contradictory branch cardinalities where a branch can never match.

## 7. Constraint Rules

### 7.1 Type-Constraint Compatibility

Constraints MUST be compatible with the subject kind and base type they constrain.

Examples:

- `min-length` on an integer-only value is invalid
- `multiple-of` on a string-only value is invalid

### 7.2 Enum and Const Compatibility

`enum` and `const` values MUST be compatible with any explicit `type` constraint in the same normalized constraint set.

### 7.3 No Duplicate Singleton Constraints Without Merge Semantics

If a constraint kind is semantically singleton and no merge rule is defined, duplicate occurrences in the same normalized scope are invalid.

Examples that SHOULD be rejected unless a merge rule is specified:

- two unrelated `type` constraints in the same simple scope
- two conflicting `format` constraints in the same simple scope

### 7.4 Header Default Compatibility

A literal `default=...` MUST be compatible with the resolved type and constraint set of the declaration.

### 7.5 Computed Default Placement

A computed `default <CEL>` child node MUST only appear in positions where defaults are semantically allowed.

## 8. Content-Model Rules

Content-model nodes are normalized as described in [`AST.md`](./AST.md#content-models).

### 8.1 Valid Content Items

Only valid content items may appear in a normalized content model:

- content subject entries
- sequence entries
- choice entries
- compatible content references

### 8.2 No Unknown Content Operators

Only operators defined by the language profile may appear in content models.

### 8.3 Sequence Validity

A `sequence` content model MUST contain only valid content entries.

An empty `sequence` MAY be valid, but implementations SHOULD document whether it is meaningful or discouraged.

### 8.4 Choice Validity

A `choice` content model MUST contain at least one branch.

### 8.5 Choice Ambiguity

A `choice` content model MUST NOT be ambiguous.

Recommended initial rule:

- if two branches can both match the same leading node pattern with no deterministic disambiguation rule, the schema is not well-formed

Examples of likely ambiguity:

```kdl
children closed {
  choice {
    node "env" many
    node "env" optional
  }
}
```

### 8.6 Unordered Duplicate Entry Review

In bare unordered `children` blocks, implementations SHOULD reject duplicate entries for the same node name unless a merge rule is explicitly defined.

Invalid recommended example:

```kdl
children closed {
  node "env" optional
  node "env" many
}
```

## 9. Composition and Conditional Rules

### 9.1 Valid Branch Bodies

Composition and conditional branches MUST contain valid normalized constraint sets.

### 9.2 `not` Branch Count

`not` MUST contain exactly one branch.

### 9.3 Conditional Structure

An `if` without both `then` and `else` MAY be valid, but implementations SHOULD document exact profile expectations.

At minimum:

- `if` MUST contain a valid condition branch
- `then` and `else`, if present, MUST each contain valid branch bodies

### 9.4 Dependency Subject Compatibility

`dependent-required` and `dependent-schema` MUST reference a supported trigger subject kind such as `prop` or `child`.

## 10. Annotation Rules

### 10.1 Unknown Annotations

Unknown qualified annotation nodes MAY be accepted as annotations.

This aligns with [`SPEC.md`](./SPEC.md#19-assertions-and-annotations).

### 10.2 Unknown Assertions

Unknown assertion-like constructs MUST NOT be silently accepted in the core profile.

### 10.3 Annotation Placement

Annotations MUST appear only in positions allowed by the host profile.

Examples:

- `doc:*` nodes are broadly valid as annotations
- `visible-if <CEL>` is only valid if the CEL/tooling profile allows it

## 11. CEL Rules

### 11.1 CEL Placement

CEL-bearing nodes MUST appear only in positions allowed by the active profile.

### 11.2 CEL String Presence

If a CEL-bearing construct requires a CEL expression, that expression MUST be present and non-empty.

### 11.3 No CEL-Driven Structural Mutation

CEL MUST NOT be used to define imports, names, or core structural grammar.

This aligns with [`SPEC.md`](./SPEC.md#18-declarative-rules-versus-cel).

## 12. Diagnostics

Well-formedness failures SHOULD include:

- schema location
- error category
- human-readable message
- related target name or reference when applicable

Recommended categories:

- `duplicate-definition`
- `duplicate-arg-index`
- `unresolved-reference`
- `invalid-reference-target`
- `import-cycle`
- `duplicate-import-prefix`
- `invalid-occurrence-bounds`
- `incompatible-constraint`
- `ambiguous-choice`
- `invalid-content-entry`
- `invalid-cel-placement`

## 13. Future Tightening Areas

This draft intentionally leaves some rules high-level. The next tightening pass should define:

- the exact reference compatibility matrix by use site
- the exact ambiguity algorithm for `choice`
- whether recursive definitions are permanently disallowed or later allowed with explicit semantics
- merge semantics, if any, for repeated constraints or repeated unordered child entries
- profile-specific annotation placement rules

# KSL Reference Compatibility Draft

## Status

This document defines the compatibility rules for `ref` targets in KSL.

It complements:

- [`SPEC.md`](./SPEC.md) for the canonical `ref="..."` surface form
- [`AST.md`](./AST.md) for normalized `ReferenceTarget`, `Definition`, `Subject`, `ConstraintSet`, and `ContentModel`
- [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md) for how compatible fragments combine
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md) for schema validity rules
- [`TREE_SITTER.md`](./TREE_SITTER.md) for parse-shape guidance

This document answers one question:

- given a resolved reference target, is that target valid at this use site?

## Core Principle

References SHOULD be structurally reusable but not implicitly polymorphic.

That means:

- a reference target must resolve successfully
- the resolved target must be compatible with the place it is used
- compatibility should be explicit and predictable, not inferred through broad coercion

## Use-Site Categories

KSL currently uses references in these places:

1. declaration header references
2. content-model references
3. branch-body references inside composition or conditionals

These use sites are not equivalent and should not share one blanket rule.

## 1. Declaration Header References

Declaration header references are references attached directly to a subject header.

Examples:

```kdl
prop "host" ref="hostname"
node "bind" many ref="keybinding"
arg 0 ref="path-string"
```

### 1.1 Subject-Compatible Reuse

A declaration header reference is compatible only if the referenced definition lowers to a fragment that can be applied to the target subject kind.

Recommended rule:

- `node ... ref="..."` requires a node-compatible target
- `prop ... ref="..."` requires a property- or value-compatible target
- `arg ... ref="..."` requires an argument- or value-compatible target
- `args ... ref="..."` requires an argument-list-, value-, or compatible constraint fragment target

### 1.2 Node Header Compatibility

For `node "name" ref="target"`, valid targets SHOULD include:

- a definition whose body is a `Subject` of kind `node`
- a definition whose body is a `ConstraintSet` that can be applied to a node subject

Invalid targets SHOULD include:

- a bare `prop` subject
- a bare `arg` subject
- a `ContentModel` used without a `children` wrapper unless the implementation explicitly defines that lowering

### 1.3 Property Header Compatibility

For `prop "name" ref="target"`, valid targets SHOULD include:

- a definition whose body is a `Subject` of kind `prop`
- a definition whose body is a `Subject` of kind `value`
- a definition whose body is a `ConstraintSet` applicable to a property subject

Recommended behavior:

- a referenced `prop` subject contributes property-level semantics plus its value constraints
- a referenced `value` subject contributes only value constraints

### 1.4 Argument Header Compatibility

For `arg N ref="target"`, valid targets SHOULD include:

- a definition whose body is a `Subject` of kind `arg`
- a definition whose body is a `Subject` of kind `value`
- a definition whose body is a `ConstraintSet` applicable to a scalar subject

### 1.5 Args Header Compatibility

For `args ... ref="target"`, valid targets SHOULD include:

- a definition whose body is a `Subject` of kind `args`
- a definition whose body is a `Subject` of kind `value`
- a definition whose body is a `ConstraintSet` applicable to repeated scalar values

### 1.6 No Cross-Kind Coercion by Default

The following SHOULD be invalid unless the language later defines explicit coercion rules:

- `prop "x" ref="some-node-definition"`
- `node "x" ref="some-value-definition"`
- `arg 0 ref="children-fragment"`

## 2. Content-Model References

Content-model references are references used inside a `children` block or nested content-model operator.

Example:

```kdl
children open {
  ref "command-args"
}
```

### 2.1 Valid Content Targets

A content-model reference is compatible only if the referenced definition lowers to one of:

- a `ContentModel`
- a `Subject` of kind `node`
- a `ConstraintSet` whose structural effect is valid in a content-model position, if the implementation supports that lowering explicitly

### 2.2 Preferred Rule

For clarity and predictable lowering, implementations SHOULD prefer this stricter rule:

- content-model references should resolve only to `ContentModel` or `node`-kind subjects

This is simpler for both validation and editor tooling.

### 2.3 Invalid Content Targets

The following SHOULD be rejected in content-model position:

- `value` fragments
- `prop` fragments
- `arg` fragments
- `args` fragments

## 3. Branch-Body References

Branch-body references are references used inside:

- `all-of`
- `any-of`
- `one-of`
- `not`
- `if`
- `then`
- `else`
- `dependent-schema`

### 3.1 Constraint-Context Compatibility

A branch-body reference is compatible only if the referenced target lowers to a fragment valid in a normalized `ConstraintSet`.

Valid targets SHOULD include:

- a `ConstraintSet`
- a compatible `Subject`
- a compatible `ContentModel` only when the branch context is structurally valid for that content model

### 3.2 Preferred Simplicity Rule

To reduce complexity, implementations SHOULD support only these branch-body reference targets initially:

- `ConstraintSet`
- `Subject`

and SHOULD reject bare `ContentModel` references in branch bodies until a more precise interaction model is standardized.

## 4. Compatibility Matrix

Recommended initial compatibility matrix:

| Use site | Compatible targets | Not compatible by default |
| --- | --- | --- |
| `node ... ref="x"` | `node`, `ConstraintSet` | `prop`, `arg`, `args`, bare `ContentModel`, bare `value` |
| `prop ... ref="x"` | `prop`, `value`, `ConstraintSet` | `node`, `arg`, `args`, bare `ContentModel` |
| `arg ... ref="x"` | `arg`, `value`, `ConstraintSet` | `node`, `prop`, `children`, bare `ContentModel` |
| `args ... ref="x"` | `args`, `value`, `ConstraintSet` | `node`, `prop`, `children`, bare `ContentModel` |
| `children { ref "x" }` | `ContentModel`, `node` | `prop`, `arg`, `args`, `value` |
| branch-body `ref "x"` | `ConstraintSet`, compatible `Subject` | incompatible `ContentModel` by default |

This table is intentionally conservative.

## 5. Merge Semantics at Compatible Sites

Compatibility alone is not enough. A compatible reference target also needs a merge rule.

Merge behavior is defined in [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md).

## 6. Name Matching and Overrides

### 6.1 Node Name Matching

If a referenced `node` subject has its own normalized `name`, implementations SHOULD require compatibility with the local declaration name.

Recommended rule:

- `node "bind" ref="keybinding"` is valid only if `keybinding` resolves to a node fragment named `bind`, unnamed, or explicitly documented as name-agnostic

This avoids surprising reuse where a declaration for one node name quietly imports the structure of another node kind.

### 6.2 Property Name Matching

If a referenced `prop` subject has its own normalized `name`, implementations SHOULD require the names to match unless property reuse is explicitly defined as name-agnostic.

Recommended initial rule:

- property names must match

### 6.3 Argument Index Matching

If a referenced `arg` subject has its own normalized index, implementations SHOULD require the local index and referenced index to match.

### 6.4 Value Fragments Are Name-Agnostic

`value` fragments are inherently name-agnostic and are therefore the preferred reusable target for cross-site scalar reuse.

## 7. Imported References

Imported references follow the same compatibility rules as local references after resolution.

Example:

```kdl
import "https://example.com/schemas/common" as="common"
prop "host" ref="common:hostname"
```

The only extra requirement is successful imported-name resolution through the import prefix.

## 8. Recommended Implementation Strategy

Given a normalized reference use site:

1. resolve the target to a `Definition`
2. inspect the normalized `Definition.body`
3. classify the use site kind
4. apply the compatibility matrix
5. if compatible, apply the merge rule for that use site
6. if incompatible, emit a well-formedness error

This step belongs between normalization and instance validation, alongside the checks in [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md).

## 9. Diagnostics

Reference compatibility failures SHOULD report:

- the use-site span
- the target definition name
- the resolved target kind
- the expected compatible kinds
- a human-readable message

Recommended diagnostic categories:

- `invalid-ref-target-kind`
- `ref-name-mismatch`
- `ref-index-mismatch`
- `ref-merge-conflict`
- `invalid-content-ref-target`

## 10. Future Tightening Areas

This draft intentionally leaves several areas conservative.

Future revisions should decide:

- whether `ConstraintSet` references are allowed at all header use sites
- whether bare `ContentModel` refs should be allowed in branch bodies
- whether any cross-kind coercions should be standardized
- whether name-agnostic `node` reuse should exist explicitly
- whether override rules should be introduced for local-versus-referenced constraints

# KSL Merge Semantics Draft

## Status

This document defines merge semantics for compatible reused fragments in KSL.

It complements:

- [`SPEC.md`](./SPEC.md) for the canonical user-facing language
- [`AST.md`](./AST.md) for the normalized semantic model
- [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md) for use-site compatibility rules
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md) for schema validity rules

This document answers a distinct question:

- once a `ref` target is resolved and deemed compatible, how do local and referenced semantics combine?

## Core Rule

Merge in KSL is conjunctive by default.

That means:

- the referenced fragment contributes semantics as though it were inlined
- the local declaration remains the containing subject shell
- local and referenced constraints are combined, not replaced
- conflicts are errors unless an explicit merge rule says otherwise

KSL MUST NOT silently pick one side of a conflict.

## Merge Phases

Recommended order:

1. parse KSL surface syntax
2. normalize into the AST described in [`AST.md`](./AST.md)
3. resolve a compatible reference target as described in [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md)
4. merge local and referenced semantics according to this document
5. run schema well-formedness checks from [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md)

## 1. Subject Shell Rule

The local declaration supplies the effective subject shell.

The subject shell includes:

- the local use-site kind
- the local declared name
- the local declared argument index, if any
- the local occurrence modifier
- the local header properties

The referenced fragment contributes compatible internal structure.

## 2. Constraint Merge

### 2.1 Conjunctive Constraint Merge

Constraints from the local declaration and the referenced fragment MUST be conjoined.

### 2.2 Singleton Constraint Conflict Rule

If two constraints of the same singleton kind occur in the merged scope and no explicit merge rule exists, the merge MUST fail.

Examples of singleton kinds:

- `type`
- `format`

### 2.3 Range and Length Merge

Compatible range-like constraints SHOULD be merged by intersection.

If the intersection is empty, the merge MUST fail.

### 2.4 Enum Merge

If both local and referenced fragments declare `enum`, the effective enum SHOULD be the intersection of allowed values.

If the intersection is empty, the merge MUST fail.

### 2.5 Const Merge

If both local and referenced fragments declare `const`, the values MUST be equal.

If they differ, the merge MUST fail.

## 3. Default Merge

### 3.1 Literal Default Merge

At most one literal default may be effective after merge unless a profile later defines override semantics.

Rules:

- if only one side supplies a literal default, that default is effective
- if both sides supply the same literal default, the merged result is valid
- if both sides supply different literal defaults, the merge MUST fail

### 3.2 Computed Default Merge

Computed defaults are not implicitly merged.

If two computed defaults would apply in the same normalized scope, the merge MUST fail unless an explicit profile defines precedence.

### 3.3 Literal and Computed Default Conflict

If a literal default and a computed default both apply in the same normalized scope, the merge MUST fail unless an explicit profile defines precedence.

## 4. Annotation Merge

Annotations MAY be merged additively by default.

Recommended rule:

- annotations from both sides are preserved unless a profile marks the annotation kind as singleton

Recommended singleton annotation kinds:

- `doc:summary`
- `doc:detail`

Recommended repeatable annotation kinds:

- `doc:example`
- `doc:warning`
- `doc:caution`
- `doc:see`

## 5. Structured Subject Merge

### 5.1 Node Merge

For a compatible node-header reference:

- local and referenced node-level constraints are merged conjunctively
- referenced `arg`, `prop`, `children`, and annotations are contributed into the local node
- if both local and referenced bodies define the same substructure incompatibly, the merge MUST fail unless a merge rule exists

### 5.2 Property and Argument Merge

For `prop` and `arg` header refs:

- referenced value constraints are conjoined with local constraints
- conflicting singleton constraints without merge rules are invalid

### 5.3 Content Merge

For content-model references and nested content fragments:

- referenced content entries are inserted structurally at the reference position
- content-model operators are preserved
- the result MUST still satisfy the ambiguity checks in [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md)

## 6. Diagnostics

Merge failures SHOULD report:

- use-site span
- target definition name
- conflicting merged element kind
- human-readable explanation

Recommended diagnostic categories:

- `merge-conflicting-type`
- `merge-conflicting-format`
- `merge-empty-enum-intersection`
- `merge-conflicting-const`
- `merge-conflicting-default`
- `merge-conflicting-singleton-annotation`
- `merge-duplicate-substructure`

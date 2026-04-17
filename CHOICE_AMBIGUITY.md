# KSL Choice Ambiguity Draft

## Status

This document defines an initial ambiguity algorithm for `choice` content models in KSL.

It complements:

- [`SPEC.md`](./SPEC.md) for the `choice` surface form
- [`AST.md`](./AST.md) for normalized content-model nodes
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md) for schema validity rules
- [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md) for post-reference structural combination rules

## Goal

`choice` MUST be deterministic enough that implementations can make the same decision about whether a schema is valid.

This document defines a conservative initial rule set.

## Core Rule

A `choice` is ambiguous if two or more branches can accept the same leading input pattern with no normative disambiguation rule.

Ambiguous `choice` content models are not well-formed.

## 1. Branch Signatures

For ambiguity analysis, each branch SHOULD be reduced to a leading signature.

Recommended initial signature model:

- first required node names
- first optionally matchable node names
- whether the branch may match the empty sequence

## 2. Empty-Match Ambiguity

If more than one branch can match the empty sequence, the `choice` is ambiguous.

## 3. Leading-Name Ambiguity

If two branches can both begin by matching the same node name and no additional deterministic rule distinguishes them, the `choice` is ambiguous.

## 4. Sequence-Derived Ambiguity

For branches beginning with `sequence`, the first discriminating required element SHOULD be used for ambiguity analysis.

If no such required element exists, the branch is treated as empty-match-capable for the purpose of initial ambiguity checks.

## 5. Reference Expansion

Before ambiguity analysis, references inside content models SHOULD be expanded or analyzed through their normalized content-model bodies.

If a referenced content fragment cannot be analyzed conservatively, the implementation SHOULD reject the schema rather than guessing.

## 6. Recommended Initial Algorithm

Recommended initial algorithm:

1. normalize the `choice` into branch content entries
2. compute whether each branch can match the empty sequence
3. compute the set of leading node names each branch can begin with
4. reject if more than one branch can match empty
5. reject if two branches have overlapping leading-name sets
6. otherwise accept the `choice` as non-ambiguous in the initial profile

## 7. Diagnostics

Ambiguity failures SHOULD report:

- the `choice` span
- the conflicting branch indices or spans
- the overlapping leading names, if known
- whether the conflict was due to empty matching or leading-name overlap

Recommended diagnostic categories:

- `ambiguous-choice-empty-match`
- `ambiguous-choice-leading-name`
- `ambiguous-choice-unanalyzable-ref`

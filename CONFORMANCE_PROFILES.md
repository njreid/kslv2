# KSL Conformance Profiles Draft

## Status

This document defines initial conformance profiles for KSL implementations.

It complements:

- [`SPEC.md`](./SPEC.md) for the surface language
- [`AST.md`](./AST.md) for the normalized model
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md) for schema validity
- [`TREE_SITTER.md`](./TREE_SITTER.md) for parser guidance

## Goals

Profiles exist to:

- make implementation claims precise
- allow incremental adoption
- distinguish safe-to-ignore features from must-understand features
- keep interoperability possible across validators, editors, and generators

## Profile Rules

An implementation claiming support for a profile MUST:

- implement every feature listed as required by that profile
- reject schemas using unsupported must-understand features from that profile
- document any optional features it does not implement

## Profile 1: Core Validation

The Core Validation profile is the minimum interoperable KSL profile.

Required:

- top-level `schema`, `import`, `define`, `document`
- `node`, `prop`, `arg`, `args`, `value`, `props`, `children`
- canonical occurrence modifiers
- `type`, `format`, `enum`, `const`, `min`, `max`, `min-length`, `max-length`, `pattern`
- `ref=#...`
- `children`, `sequence`, `choice`
- namespaced annotations as ignorable metadata
- normalization to the model in [`AST.md`](./AST.md)
- well-formedness checks from [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md)

Not required:

- CEL
- composition keywords beyond those needed by the implementation
- advanced annotation handling
- code generation metadata

## Profile 2: Composition

The Composition profile extends Core Validation.

Required:

- `all-of`, `any-of`, `one-of`, `not`
- `when=`
- `dependent-required`, `dependent-schema`
- branch diagnostics

## Profile 3: Tooling Annotations

The Tooling Annotations profile extends Core Validation.

Required:

- `doc:*` namespace handling
- built-in `hint`, `highlight`, and `bind` annotation preservation
- post-validation annotation attachment as described in [`SPEC.md`](./SPEC.md)

Not required:

- any specific UI behavior attached to annotations

## Profile 4: CEL Extension

The CEL Extension profile extends Core Validation.

Required:

- backtick CEL literals in supported positions
- computed `default <CEL>`
- clear diagnostics for invalid CEL placement

Optional within the profile:

- `assert <CEL>`
- `visible-if <CEL>`
- `enabled-if <CEL>`

Implementations MUST document which CEL-bearing nodes they support.

`assert <CEL>` is explicitly non-core and SHOULD only be claimed via the CEL Extension profile.

## Profile 5: Full Authoring

The Full Authoring profile is the intended target for first-party tooling.

Required:

- Core Validation
- Composition
- Tooling Annotations
- CEL Extension
- reference compatibility handling from [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md)
- merge handling from [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md)
- `choice` ambiguity checks from [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md)

## Claim Format

Recommended implementation claim format:

- `KSL Core Validation`
- `KSL Core Validation + Composition`
- `KSL Full Authoring`

## Recommended First Implementation Target

For a first parser/validator implementation, the recommended target is:

- Core Validation
- Composition
- Tooling Annotations

CEL can follow after the base semantic model is stable.

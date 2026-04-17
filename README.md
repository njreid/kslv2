# KSLv2 Draft

This repository collects a draft specification set for a possible next step in the KDL Schema Language.

The goal is to explore a KDL-native, tool-friendly schema design that stays compact for authors while giving validators, editors, documentation tooling, and generators a clearer shared model.

The documents here are intended to build on earlier KDL schema work in a constructive way and gather the pieces needed for a more cohesive forward path.

## Start Here

- [`SPEC.md`](./SPEC.md): surface language and canonical forms
- [`DESIGN.md`](./DESIGN.md): rationale and design guidance
- [`CONFORMANCE_PROFILES.md`](./CONFORMANCE_PROFILES.md): implementation profiles

## Semantic Model

- [`AST.md`](./AST.md): normalized internal model
- [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md): schema validity rules
- [`REFERENCE_COMPATIBILITY.md`](./REFERENCE_COMPATIBILITY.md): where `ref` is allowed
- [`MERGE_SEMANTICS.md`](./MERGE_SEMANTICS.md): how compatible refs combine
- [`CHOICE_AMBIGUITY.md`](./CHOICE_AMBIGUITY.md): deterministic `choice` rules
- [`ASSERT_PATTERNS.md`](./ASSERT_PATTERNS.md): seed list for future declarative replacements of common `assert` forms

## Parser Work

- [`TREE_SITTER.md`](./TREE_SITTER.md): CST and parser guidance
- [`tree-sitter-ksl/`](./tree-sitter-ksl/): grammar scaffold

## Examples

- [`examples/ksl-example.kdl`](./examples/ksl-example.kdl)
- [`examples/niri-example-schema.kdl`](./examples/niri-example-schema.kdl)
- [`examples/zellij-example-schema.kdl`](./examples/zellij-example-schema.kdl)
- [`examples/twiml-voice-example-schema.kdl`](./examples/twiml-voice-example-schema.kdl)

## Tests

- [`tests/golden/`](./tests/golden/): schema golden fixtures
- [`TESTING.md`](./TESTING.md): testing status and planned verification

## Scripts

- `npm run golden:normalize`: regenerate parse and AST snapshots for golden fixtures
- `npm run golden:validate`: regenerate diagnostics snapshots for invalid golden fixtures
- `npm run tree-sitter:generate`: regenerate the Tree-sitter parser scaffold
- `npm run tree-sitter:test`: run Tree-sitter corpus tests

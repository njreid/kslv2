# Testing

## Implemented

- Documentation review only.
- Source inputs reviewed:
- `kdl-org/kdl` `SCHEMA-SPEC.md` (v1)
- `kdl-org/kdl` PR `#486`
- `zkat/schema-v2` draft `schema/ksl-schema.kdl`
- JSON Schema conditional and composition reference pages
- Authored outputs reviewed:
- `DESIGN.md`
- `SPEC.md`
- `README.md`
- `CONFORMANCE_PROFILES.md`
- `AST.md`
- `MERGE_SEMANTICS.md`
- `CHOICE_AMBIGUITY.md`
- `REFERENCE_COMPATIBILITY.md`
- `TREE_SITTER.md`
- `WELL_FORMEDNESS.md`
- `tree-sitter-ksl/grammar.js`
- `tree-sitter-ksl/queries/highlights.scm`
- `tree-sitter-ksl/queries/folds.scm`
- `tree-sitter-ksl/queries/injections.scm`
- `tests/golden/README.md`
- `tests/golden/valid/*.kdl`
- `tests/golden/invalid/*.kdl`
- `examples/ksl-example.kdl`
- `examples/niri-example-schema.kdl`
- `examples/zellij-example-schema.kdl`
- `examples/twiml-voice-example-schema.kdl`
- `PROXML.md`
- Revised `DESIGN.md` and `SPEC.md` to reflect architectural feedback on normalization, content models, namespaces, CEL boundaries, and quotation-mark guidance.
- Revised `SPEC.md` to define canonical surface forms for refs, defaults, imports, and validation constraints.
- Added an informative grammar sketch and Tree-sitter implementation notes to `SPEC.md` and `DESIGN.md`.
- Added `AST.md` for the normalized semantic model and `TREE_SITTER.md` for CST/parser shape guidance.
- Added `WELL_FORMEDNESS.md` for schema well-formedness rules with relative links to the other docs.
- Added `REFERENCE_COMPATIBILITY.md` for use-site compatibility and merge rules for resolved references.
- Added `MERGE_SEMANTICS.md` for formal conjunctive merge behavior after compatible reference resolution.
- Added `CHOICE_AMBIGUITY.md` for a conservative deterministic `choice` ambiguity algorithm.
- Added `README.md` as a publishable document index and `CONFORMANCE_PROFILES.md` for implementation claims.
- Added a minimal `tree-sitter-ksl/` scaffold with grammar and query placeholders.
- Added `tests/golden/` fixtures for valid and invalid schema cases.
- Replaced the fixture-shaped normalizer with a more general CST-to-AST lowering pass in `tools/ksl-lib.mjs`.
- Expanded the Tree-sitter corpus to cover imports, composition/conditionals, and CEL-bearing annotations.
- Revised example schemas to use structured `doc:*` annotations.

## Syntax Verification Notes

- Examples were revised to use KDL v2-compatible surface syntax.
- One intentional divergence remains: CEL expressions use backtick-delimited strings.
- Standard KDL v2 does not support backtick strings; these examples assume a KSL-specific CEL extension profile.
- `PROXML.md` is design critique only and does not introduce additional syntax.
- `DESIGN.md` and `SPEC.md` now recommend `prefix:name` for extensions and imported definitions, with `doc:` as the structured documentation namespace.
- `SPEC.md` now includes a dedicated section on when quotation marks should and should not be used.
- `SPEC.md` now states that `ref="name"` is the canonical reference spelling and distinguishes literal defaults from computed CEL defaults.
- `SPEC.md` and `WELL_FORMEDNESS.md` were tightened toward more normative language for canonical forms, structured docs, ambiguity rejection, and schema rejection behavior.
- `AST.md` is implementation-facing and intentionally not user-facing syntax.
- `REFERENCE_COMPATIBILITY.md` is a separate semantic-compatibility document focused specifically on `ref` use sites.
- `MERGE_SEMANTICS.md` is a separate semantic-combination document focused on how compatible reused fragments are combined.
- `CHOICE_AMBIGUITY.md` is a separate determinism document focused on validating `choice` content models.
- `TREE_SITTER.md` treats CEL as an opaque literal at parse time and defers semantic rules to a later phase.
- `WELL_FORMEDNESS.md` is a separate schema-validity document and is intended to run after normalization but before instance validation.
- `CONFORMANCE_PROFILES.md` defines the initial implementation targets, including a recommended first profile.
- `tree-sitter-ksl/` is now a partial grammar scaffold for the canonical surface with a small passing corpus suite.
- `tests/golden/` now includes concrete `.parse.txt`, `.ast.json`, and `.diagnostics.json` snapshot formats.
- Root `package.json` exposes runnable scripts for golden snapshot generation and Tree-sitter verification.
- `examples/twiml-voice-example-schema.kdl` is based on Twilio's published TwiML prose documentation; no official XSD was found at the obvious documentation endpoints.

## Run Status

- Commands run successfully:
- `node ./tools/golden-normalize.mjs`
- `node ./tools/golden-validate.mjs`
- `npm --prefix ./tree-sitter-ksl run generate`
- `npm --prefix ./tree-sitter-ksl run test`
- The Tree-sitter scaffold currently passes its checked-in corpus tests, including refs, imports, conditionals, composition, and CEL annotation cases.

## Planned

- If this design is turned into a reference grammar or parser, add:
- syntax golden tests for valid and invalid schema snippets
- semantic validation tests for cardinality, refs, and composition
- CEL evaluation tests, including deterministic sandboxing rules
- interoperability tests against representative KDL documents such as Niri- and Zellij-style configs

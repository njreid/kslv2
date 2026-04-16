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
- `AST.md`
- `TREE_SITTER.md`
- `WELL_FORMEDNESS.md`
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
- Revised example schemas to use structured `doc:*` annotations.

## Syntax Verification Notes

- Examples were revised to use KDL v2-compatible surface syntax.
- One intentional divergence remains: CEL expressions use backtick-delimited strings.
- Standard KDL v2 does not support backtick strings; these examples assume a KSL-specific CEL extension profile.
- `PROXML.md` is design critique only and does not introduce additional syntax.
- `DESIGN.md` and `SPEC.md` now recommend `prefix:name` for extensions and imported definitions, with `doc:` as the structured documentation namespace.
- `SPEC.md` now includes a dedicated section on when quotation marks should and should not be used.
- `SPEC.md` now states that `ref="name"` is the canonical reference spelling and distinguishes literal defaults from computed CEL defaults.
- `AST.md` is implementation-facing and intentionally not user-facing syntax.
- `TREE_SITTER.md` treats CEL as an opaque literal at parse time and defers semantic rules to a later phase.
- `WELL_FORMEDNESS.md` is a separate schema-validity document and is intended to run after normalization but before instance validation.
- `examples/twiml-voice-example-schema.kdl` is based on Twilio's published TwiML prose documentation; no official XSD was found at the obvious documentation endpoints.

## Run Status

- No automated tests exist in this workspace.
- No code was added; no compilation or runtime verification was applicable.

## Planned

- If this design is turned into a reference grammar or parser, add:
- syntax golden tests for valid and invalid schema snippets
- semantic validation tests for cardinality, refs, and composition
- CEL evaluation tests, including deterministic sandboxing rules
- interoperability tests against representative KDL documents such as Niri- and Zellij-style configs

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
- `examples/ksl-example.kdl`
- `examples/niri-example-schema.kdl`
- `examples/zellij-example-schema.kdl`
- `examples/twiml-voice-example-schema.kdl`
- `PROXML.md`
- Revised `DESIGN.md` and `SPEC.md` to reflect architectural feedback on normalization, content models, namespaces, CEL boundaries, and quotation-mark guidance.
- Revised example schemas to use structured `doc:*` annotations.

## Syntax Verification Notes

- Examples were revised to use KDL v2-compatible surface syntax.
- One intentional divergence remains: CEL expressions use backtick-delimited strings.
- Standard KDL v2 does not support backtick strings; these examples assume a KSL-specific CEL extension profile.
- `PROXML.md` is design critique only and does not introduce additional syntax.
- `DESIGN.md` and `SPEC.md` now recommend `prefix:name` for extensions and imported definitions, with `doc:` as the structured documentation namespace.
- `SPEC.md` now includes a dedicated section on when quotation marks should and should not be used.
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

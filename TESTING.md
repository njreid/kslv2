# Testing

## Implemented

- Documentation review only.
- Source inputs reviewed:
- `kdl-org/kdl` `SCHEMA-SPEC.md` (v1)
- `kdl-org/kdl` PR `#486`
- `zkat/schema-v2` draft `schema/ksl-schema.kdl`
- JSON Schema conditional and composition reference pages
- Authored outputs reviewed:
- `docs/features/feature_DESIGN.md`
- `docs/features/feature_SPEC.md`
- `docs/features/ksl-example.kdl`
- `docs/features/niri-example-schema.kdl`
- `docs/features/zellij-example-schema.kdl`

## Syntax Verification Notes

- Examples were revised to use KDL v2-compatible surface syntax.
- One intentional divergence remains: CEL expressions use backtick-delimited strings.
- Standard KDL v2 does not support backtick strings; these examples assume a KSL-specific CEL extension profile.

## Run Status

- No automated tests exist in this workspace.
- No code was added; no compilation or runtime verification was applicable.

## Planned

- If this design is turned into a reference grammar or parser, add:
- syntax golden tests for valid and invalid schema snippets
- semantic validation tests for cardinality, refs, and composition
- CEL evaluation tests, including deterministic sandboxing rules
- interoperability tests against representative KDL documents such as Niri- and Zellij-style configs

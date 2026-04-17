# Golden Fixtures

This directory contains golden fixtures for future parser and validator tests.

## Fixture Layout

Each input schema MAY have one or more sibling snapshot files with the same base name.

Supported snapshot suffixes:

- `.parse.txt`: expected concrete parse-tree summary
- `.ast.json`: expected normalized AST snapshot
- `.diagnostics.json`: expected schema diagnostics snapshot

Examples:

- `valid/minimal-schema.kdl`
- `valid/minimal-schema.parse.txt`
- `valid/minimal-schema.ast.json`
- `invalid/unresolved-ref.kdl`
- `invalid/unresolved-ref.diagnostics.json`

Suggested initial harness behavior:

1. parse each `valid/*.kdl`
2. assert parse success
3. compare the parse tree against `*.parse.txt` if present
4. normalize to the AST from [`../../AST.md`](../../AST.md)
5. compare the normalized output against `*.ast.json` if present
6. run well-formedness checks from [`../../WELL_FORMEDNESS.md`](../../WELL_FORMEDNESS.md)
7. assert no diagnostics for valid fixtures

For `invalid/*.kdl`:

1. parse or normalize as far as possible
2. compare the parse tree against `*.parse.txt` if present
3. assert stable diagnostic categories and payloads using `*.diagnostics.json`

## Snapshot Format

### Parse Snapshots

`*.parse.txt` SHOULD contain a stable, text-form tree with named nodes only.

### AST Snapshots

`*.ast.json` SHOULD contain:

- normalized schema id
- imports
- definitions
- top-level document summary
- enough structure to validate normalization decisions

AST snapshots do not need to contain every source span in the initial harness.

### Diagnostic Snapshots

`*.diagnostics.json` SHOULD be an array of objects with:

- `category`
- `message`
- `path`
- optional `related`

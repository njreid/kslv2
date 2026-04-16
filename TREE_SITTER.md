# KSL Tree-sitter Parse Shape Draft

## Status

This document sketches a Tree-sitter-oriented parse shape for KSL.

It is intentionally concrete-syntax-oriented. It complements `AST.md`, which defines the normalized semantic model.

For schema-level semantic validity checks after parsing and normalization, see [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md).

## Goals

The Tree-sitter grammar should support:

- incremental parsing
- syntax highlighting
- selections and folding
- structural queries for editors and LSPs
- robust source ranges for downstream normalization

The Tree-sitter grammar is not expected to enforce full semantic validity.

## Design Principle

Tree-sitter should parse the canonical surface syntax from `SPEC.md` as faithfully as possible, while leaving semantic interpretation to a later normalization and validation phase.

## Recommended Node Inventory

Recommended named parse nodes:

- `schema_document`
- `schema_declaration`
- `info_declaration`
- `import_declaration`
- `define_declaration`
- `document_subject`
- `node_subject`
- `prop_subject`
- `arg_subject`
- `args_subject`
- `value_subject`
- `props_subject`
- `children_subject`
- `sequence_block`
- `choice_block`
- `content_ref`
- `header_property`
- `occurrence_modifier`
- `type_constraint`
- `format_constraint`
- `enum_constraint`
- `const_constraint`
- `range_constraint`
- `length_constraint`
- `pattern_constraint`
- `composition_constraint`
- `conditional_constraint`
- `dependency_constraint`
- `assert_constraint`
- `annotation_node`
- `qualified_annotation`
- `cel_literal`

## Parse Shape

High-level shape:

```text
schema_document
  schema_declaration
    string                ; schema id
    property              ; version=...
    block
      info_declaration?
      import_declaration*
      define_declaration*
      document_subject?
```

### Definitions

```text
define_declaration
  string                  ; definition name
  block
    subject-or-fragment+
```

### Subject Headers

Recommended parse structure for subject headers:

```text
node_subject
  string                  ; node name
  occurrence_modifier?
  header_property*
  block?

prop_subject
  string                  ; property name
  occurrence_modifier?
  header_property*
  block?

arg_subject
  integer
  occurrence_modifier?
  header_property*
  block?
```

Tree-sitter should preserve header ordering from the source even if normalization later canonicalizes it.

### Header Properties

Canonical header properties that should be recognized explicitly:

- `ref="..."`
- `default=<literal>`

Suggested structure:

```text
header_property
  identifier              ; ref | default | extension key
  literal
```

## Child Content Models

Recommended parse shape:

```text
children_subject
  openness_modifier?
  block
    content_item*

content_item :=
  node_subject |
  sequence_block |
  choice_block |
  content_ref

sequence_block
  block
    content_item*

choice_block
  block
    content_item*
```

This structure is simple and maps cleanly onto the normalized content model in `AST.md`.

## Constraints

Recommended parse node shapes:

```text
type_constraint
  symbol

format_constraint
  symbol

enum_constraint
  literal+

const_constraint
  literal

pattern_constraint
  regex_literal
```

Range and length constraints may be represented either as distinct nodes or as a single generic constraint node keyed by identifier. Named nodes are usually preferable for editor queries.

## Composition and Conditionals

Recommended shapes:

```text
composition_constraint
  operator                ; all-of | any-of | one-of | not
  block
    subject-or-fragment*

conditional_constraint
  if_block
  then_block?
  else_block?

dependency_constraint
  property*
  block?
```

Tree-sitter should capture these nodes structurally, but branch validity is a semantic concern.

## Annotations

The grammar should not hardcode only `doc:*`.

Recommended parse distinction:

- unqualified built-in annotations such as `hint`, `highlight`, and `bind`
- qualified annotation nodes such as `doc:summary` or `ibm:annotation`

Suggested parse nodes:

```text
annotation_node
  identifier
  argument*
  property*
  block?

qualified_annotation
  namespaced_identifier
  argument*
  property*
  block?
```

## CEL

The CEL extension should be treated as lexical syntax plus structural placement.

Recommended parser behavior:

- parse backtick-delimited CEL as `cel_literal`
- do not parse CEL internals in the KSL Tree-sitter grammar
- permit `cel_literal` in nodes such as `assert`, `default`, `visible-if`, and `enabled-if`

This keeps the grammar simple and avoids coupling KSL parsing to CEL parsing.

## Fields

Recommended Tree-sitter fields for queries:

- `name`
- `index`
- `occurrence`
- `header`
- `body`
- `content`
- `target`
- `value`
- `operator`
- `condition`
- `then_branch`
- `else_branch`

Example:

```text
(node_subject
  name: (string)
  occurrence: (occurrence_modifier)
  header: (header_property)*
  body: (block)?)
```

## What Tree-sitter Should Not Enforce

Tree-sitter should not attempt to enforce:

- import cycle rejection
- ref resolution
- duplicate definition detection
- choice ambiguity
- occurrence compatibility
- composition semantics
- CEL evaluation or typechecking

Those belong in the semantic phase.

## Queries and Highlighting

A Tree-sitter grammar would be especially useful for:

- highlighting declaration keywords like `schema`, `define`, `node`, and `prop`
- distinguishing names from canonical value symbols
- highlighting `doc:*` nodes as documentation annotations
- identifying `sequence` and `choice` blocks distinctly
- capturing `cel_literal` regions for injected highlighting

## Relationship to `AST.md`

Recommended pipeline:

1. Tree-sitter parses KSL into a concrete syntax tree.
2. A normalizer lowers the CST into the AST described in `AST.md`.
3. Well-formedness validation applies the rules in [`WELL_FORMEDNESS.md`](./WELL_FORMEDNESS.md).
4. Semantic validation resolves refs, imports, composition, and CEL placement rules for runtime use.

This keeps parsing fast and editor-friendly without forcing semantic rules into the grammar.

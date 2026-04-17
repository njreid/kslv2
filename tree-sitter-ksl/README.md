# tree-sitter-ksl

Scaffold Tree-sitter grammar for KSL.

Current state:

- partial grammar scaffold for canonical KSL surface forms
- passes a small corpus covering schema roots, refs, imports, composition, conditionals, and CEL-bearing annotations
- intended as a starting point for incremental parsing and highlighting work
- semantic validation is deliberately out of scope for the grammar

See:

- [`../TREE_SITTER.md`](../TREE_SITTER.md)
- [`../AST.md`](../AST.md)
- [`../WELL_FORMEDNESS.md`](../WELL_FORMEDNESS.md)

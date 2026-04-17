; Placeholder highlight queries for KSL.
; These should be aligned with TREE_SITTER.md once the grammar is expanded.

(identifier) @identifier
(string) @string
(raw_string) @string.special
(number) @number
(boolean) @boolean
(null) @constant.builtin
(cel_literal) @embedded

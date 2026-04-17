# KSLv2 Draft

This repository collects a draft specification set for a possible next step in the KDL Schema Language.

The goal is to explore a KDL-native, tool-friendly schema design that stays compact for authors while giving validators, editors, documentation tooling, and generators a clearer shared model.

The documents here are intended to build on earlier KDL schema work in a constructive way and gather the pieces needed for a more cohesive forward path.

## Quick Example

```kdl
schema "https://example.com/schemas/service" version="0.1.0" {
  define #hostname {
    value {
      type string
      format hostname
    }
  }

  document {
    node "service" required {
      prop "mode" required {
        type string
        enum tcp unix
      }

      prop "host" required ref=#hostname when=`props.mode == "tcp"`
      prop "port" required when=`props.mode == "tcp"` {
        type integer
        between 1 65535
      }

      prop "socket" required when=`props.mode != "tcp"` {
        type string
      }

      children closed {
        node "env" many {
          arg 0 { type string }
          arg 1 { type string }
        }
      }
    }
  }
}
```

This is the general direction:

- quoted node and property names
- `#identity` handles for reusable schema fragments
- unquoted canonical value symbols like `string` and `tcp`
- `when=` guards for conditional structure
- KDL-native children and argument modeling

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

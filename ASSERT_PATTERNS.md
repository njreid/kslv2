# KSL Assert Patterns

## Status

Seed document for collecting common `assert <CEL>` patterns before introducing declarative replacements.

It complements:

- [`SPEC.md`](./SPEC.md) for the current language surface
- [`DESIGN.md`](./DESIGN.md) for rationale on declarative vs behavioral features
- [`CONFORMANCE_PROFILES.md`](./CONFORMANCE_PROFILES.md) for the CEL profile split

## Goal

KSL now treats `assert <CEL>` as a non-core, profile-gated feature.

Before adding new declarative constructs, the language should collect recurring assertion shapes from real schema authorship.

## Candidate Pattern Buckets

### 1. Mutual Presence

Examples:

```kdl
assert `hasProp("min") == hasProp("max")`
assert `hasChild("cert") == hasChild("key")`
```

Possible future declarative direction:

- paired-presence or co-required members

### 2. Conditional Requiredness

Examples:

```kdl
assert `props.mode == "tcp" ? hasProp("port") : hasProp("socket")`
```

Likely declarative replacement:

- `when=` guards
- `dependent-required`

### 3. Mutual Exclusion

Examples:

```kdl
assert `!(hasProp("split-size") && hasProp("split-percent"))`
```

Possible future declarative direction:

- `conflicts-with`
- explicit exclusive groups

### 4. Count Constraints Over Named Children

Examples:

```kdl
assert `countChild("pane") + countChild("plugin") > 0`
```

Possible future declarative direction:

- grouped cardinality over named child sets

### 5. Structural Alias Rules

Examples:

```kdl
assert `hasChild("command") ? !hasProp("command") : true`
```

Possible future declarative direction:

- property-vs-child exclusivity declarations

## Collection Guidance

When a new `assert <CEL>` appears in examples or real schemas, capture:

- the exact CEL expression
- the schema context where it appears
- the intended meaning in plain English
- whether existing declarative features already cover it
- whether the pattern appears more than once

## Promotion Rule of Thumb

A new declarative replacement should usually require:

- repeated use across multiple schemas
- a stable semantic shape
- lower ambiguity than the CEL form
- obvious editor/documentation value

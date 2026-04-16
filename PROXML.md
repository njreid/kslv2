# KSL Critique From an XML Dialect Architect's Perspective

## Framing

From the perspective of someone used to designing XML dialects, the KSL plan is promising but still too syntax-driven. The current draft has many good instincts:

- it recognizes the importance of ordered children
- it distinguishes assertions from annotations
- it wants reuse, composition, and conditionals
- it is clearly aiming at both validation and tooling

But mature XML dialects succeed because they define a stable abstract model before they optimize authoring syntax. Right now, KSL still feels like a clever schema notation looking for a semantic core.

TwiML is a useful comparison point because it is a constrained XML dialect that is simple on the surface but very disciplined underneath. `<Response>` is the required root container. `<Gather>` has a clear content model and a defined set of allowed nested verbs. `<Say>` has a tightly scoped attribute model plus simple text content. That clarity is what KSL still needs more of.

## 1. The plan needs a canonical abstract schema model

The current KSL plan spends a lot of energy on surface forms like `required`, `optional`, `many`, `prop`, `arg`, and `children`, but less on the normalized semantic representation behind them.

That is backwards for a language that wants:

- LSP support
- binding generation
- multiple implementations
- reliable imports and reuse

An XML architect would expect KSL to first define a canonical schema infoset or AST. Surface syntax should lower into that model.

For example, these should be defined as equivalent after normalization:

```kdl
node plugin many
```

```kdl
node plugin {
  occurs min=0 max="unbounded"
}
```

Even if the second form never becomes user-facing, the canonical model still needs to exist. Otherwise every tool will invent its own interpretation of occurrence, openness, composition, and references.

TwiML demonstrates the benefit here. Whether you author XML directly or use a Twilio SDK, the logical model is the same: `Response` contains verbs, `Gather` can contain `Say|Play|Pause`, `Say` has text content plus a fixed attribute set. The SDK and the XML serialization both target the same conceptual tree.

Recommendation:

- define a normalized abstract schema model before stabilizing the concise syntax
- make all shorthand lower into that model
- make validation, completion, docs, and codegen consume the normalized model, not raw syntax

## 2. Child content models need stronger formalism

This is the area where XML dialect experience is most directly relevant.

The KSL plan correctly notices that KDL child nodes are ordered and that JSON Schema does not model this well. The proposed `sequence`, `choice`, and `unordered` nodes are the right direction. But they are still under-specified.

The missing questions are the important ones:

- Is `children closed { node a optional; node b optional }` ordered or unordered by default?
- If both `sequence` and top-level child declarations exist, how are they combined?
- Is `choice` exclusive by occurrence, branch, or whole region?
- What are the determinism rules when multiple branches can match the same node name?
- Can one branch consume multiple nodes while another consumes one?

These are not edge cases. They are the main event for any serious structural schema language.

TwiML is much more disciplined here. `<Gather>` can nest `<Say>`, `<Play>`, and `<Pause>`. That is not just documentation prose; it is a real content model. `<Response>` also has a clear root-level verb model. In XML terms, the language is usable because the grammar is structurally crisp, even if the user never sees the grammar.

KSL needs the same rigor. Otherwise implementations will differ in subtle but user-visible ways.

Recommendation:

- define child matching semantics formally
- specify whether plain `children` declarations are sugar for `unordered` or `sequence`
- define ambiguity resolution rules or ban ambiguous schemas outright
- require implementations to produce branch-level diagnostics when content-model matching fails

## 3. The plan underestimates namespace pressure

XML dialects survive long term because namespacing is not optional. It is what lets core vocabulary, extension vocabulary, documentation vocabulary, and vendor-specific metadata coexist without collisions.

The current KSL plan uses many short generic node names:

- `doc`
- `hint`
- `bind`
- `highlight`
- `example`
- `default`
- `type`

That is readable, but it creates pressure immediately:

- what happens when a future schema extension also wants a `bind` node?
- what happens when LSP-specific metadata diverges from codegen-specific metadata?
- how do third parties add annotations without colliding with standard names?

In XML, this problem would be solved with namespaces. In KDL, the equivalent might be tags, prefixes, or an explicit module namespace system. But some answer is needed.

TwiML benefits from a tightly controlled vocabulary, so it avoids this problem by governance rather than syntax. KSL is trying to be a schema platform, not a single service dialect, so it cannot rely on centralized restraint alone.

Recommendation:

- introduce namespaced annotations early
- separate core validation vocabulary from tooling vocabularies
- define standard extension hooks rather than forcing everything into the core namespace

## 4. Assertions and annotations should not just be “visibly distinct”; they should be semantically segregated

The plan says assertions and annotations should be visibly distinct. That is good, but not strong enough.

In mature XML schema ecosystems, annotation-like constructs are deliberately non-normative unless explicitly promoted into validation semantics. That matters for interoperability.

KSL should make this distinction machine-enforceable:

- assertion nodes affect validity
- annotation nodes never affect validity
- host-specific annotations must not silently influence validation

This becomes especially important when the same schema is used for:

- static docs
- editor assistance
- server-side validation
- code generation

Without a hard boundary, schemas will accumulate “soft validation” inside annotation nodes and become impossible to reason about.

Recommendation:

- classify every standard node as either assertion, annotation, or administrative metadata
- forbid annotation nodes from changing validation outcome in the core conformance profile
- require unknown annotations to be ignorable by validators

## 5. The CEL plan is powerful, but architecturally dangerous

From an XML perspective, CEL is KSL’s Schematron moment.

That can be good. XML schema languages eventually need a rule layer for constraints that are awkward in structural grammar alone. But Schematron succeeded because it was treated as a deliberate second layer, not as loose escape syntax sprinkled through everything.

Right now the KSL plan risks making CEL do too much:

- validation assertions
- default computation
- UI visibility
- UI enablement
- potentially other tool behavior later

That is a lot of semantic surface for one extension.

TwiML is instructive by contrast. TwiML keeps most semantics structural and declarative. For example, `<Gather input="speech dtmf" timeout="3" numDigits="1"> <Say>...</Say> </Gather>` is mostly expressible from grammar plus attribute constraints. Twilio does not require users to embed a rule language to say that `<Gather>` may contain `<Say>` and a bounded set of attributes.

KSL should be equally disciplined. Use CEL for the irreducible remainder, not as a first resort.

Recommendation:

- keep CEL in a clearly separate rule layer
- define which phases may evaluate CEL
- define whether CEL can influence validation only, or also materialized defaults and tooling hints
- prefer declarative first-class constructs whenever a pattern recurs enough to deserve one

## 6. Open and closed world defaults are not just UX choices; they are compatibility contracts

The plan leans toward closed defaults because they help completions and diagnostics. That is understandable, but the framing is too editor-centric.

In schema languages, open vs closed content is a versioning strategy.

If KSL defaults to closed content:

- future producers adding new nodes or properties become breaking changes
- extension points must be designed explicitly everywhere
- schema evolution becomes more rigid but more analyzable

If KSL defaults to open content:

- evolution becomes easier
- diagnostics become weaker
- completions become less authoritative

XML practitioners have lived this tradeoff for decades. The right answer is usually not “pick one globally”, but “make extension points first-class and explicit”. XML Schema has `xs:any` and `xs:anyAttribute` for exactly this reason.

KSL needs an equivalent concept, not just `open` and `closed`.

Recommendation:

- add explicit wildcard or extension-point constructs for properties and children
- treat open/closed policy as part of compatibility design, not just authoring convenience
- document schema evolution patterns explicitly

## 7. References, imports, and composition need identity and cycle semantics

The current plan says named definitions should be primary and imports should exist. That is fine, but not enough.

An XML architect will immediately ask:

- what is the identity of a schema component?
- how are imported definitions named and canonicalized?
- are references lexical, semantic, or URI-based?
- what are the rules for cycles?
- are imported definitions copied, aliased, or linked?
- when does overriding occur, if ever?

These questions are not implementation details. They determine whether the language scales beyond one file.

TwiML avoids most of this because it is not a general schema language. KSL does not have that luxury.

Recommendation:

- define schema component identity explicitly
- define import aliasing and canonical names precisely
- specify cycle handling for `define`, `ref`, and `import`
- define whether composition merges by overlay, conjunction, or literal inclusion

## 8. The plan needs a stronger story for simple content versus structured content

This is an area where XML dialects are very experienced.

In XML, there is a meaningful distinction between:

- elements with simple text content and attributes
- elements with child elements
- mixed-content models
- empty elements used as flags

KDL has analogous distinctions:

- scalar arguments
- named properties
- child nodes
- bare presence flags

The KSL plan models all of these, but it does not yet elevate them into a crisp design discipline.

TwiML gives good examples:

- `<Say voice="man" language="en-US">Hello</Say>` is simple content plus attributes
- `<Gather ...><Say>...</Say></Gather>` is attributes plus child content
- `<Pause/>` is essentially an empty element with behavior by presence

KSL needs similarly crisp categories for KDL idioms:

- presence-only nodes used as flags
- scalar-bearing nodes
- nodes whose semantics are mostly in properties
- nodes whose semantics are mostly in children

Recommendation:

- define common KDL node archetypes explicitly
- let schemas and tooling leverage those archetypes for better docs and completions
- ensure the spec explains how defaults, requiredness, and docs interact for each archetype

## 9. The documentation model should be richer and more structured

The current plan treats docs as a handful of annotation nodes like `doc`, `example`, `deprecated`, and `since`. That is a decent start, but XML-based ecosystems typically expect more structure because documentation becomes part of the contract.

For example, good dialect documentation often needs to distinguish:

- summary versus detailed description
- implementation notes versus normative notes
- deprecation reason versus replacement path
- examples by audience or scenario
- operational caveats

TwiML documentation does this very well in prose. `<Say>` has legal notices, availability caveats, attribute tables, examples, and behavior notes. `<Gather>` has nesting rules, provider notes, examples, and operational guidance.

KSL should not try to encode all of Twilio’s docs system, but it should support more structure than a single `doc` string if it wants to power serious documentation output.

Recommendation:

- distinguish short summary from long description
- support multiple examples with labels
- add note types such as `warning`, `caution`, and `compatibility`
- let docs reference version-introduced and version-changed information cleanly

## 10. The conformance story is still too soft

The current plan gestures toward profiles such as Core Validation, Composition, CEL, and Tooling Annotations. That is directionally right, but still too permissive.

If KSL has multiple profiles, then interoperability depends on predictable failure behavior.

For example:

- what happens if a validator understands `all-of` but not `dependent-schema`?
- what happens if an editor understands annotations but not CEL?
- what happens if a binding generator ignores `one-of`?

XML ecosystems learned long ago that partial support without sharp failure rules creates chaos.

Recommendation:

- define mandatory failure behavior for unsupported core features
- separate “must understand” and “safe to ignore” constructs
- define a minimal interoperable core profile that still delivers meaningful value

## 11. The plan should define a post-validation information model

This is subtle, but important.

Schema consumers often do not just want pass/fail. They want a normalized result:

- applied defaults
- resolved references
- inferred types
- documentation metadata attached to instance paths
- semantic token classifications

XML had the same need in the form of post-schema-validation infosets and application-level typed trees.

TwiML SDKs are again instructive. Twilio does not just document XML; it gives developers builder APIs that generate a known-valid conceptual response tree.

KSL should similarly define what data a consumer can rely on after successful schema processing.

Recommendation:

- define a post-processing model alongside validation
- specify whether defaults are materialized, advisory, or documentation-only
- specify what tooling metadata attaches to validated instance nodes

## 12. The plan currently mixes language design with style guidance

Some parts of the plan are actual language semantics. Others are recommendations about good authoring style. Those should be separated.

For example:

- “common cases should be short” is a design principle
- “closed schemas are good for completions” is an architectural tradeoff
- “named definitions should be primary” is a semantic choice

XML dialect specs usually separate these layers cleanly:

- abstract model
- concrete syntax
- validation semantics
- authoring guidance
- implementation advice

KSL would benefit from the same structure.

Recommendation:

- split the design into normative semantics and non-normative authoring guidance
- avoid baking stylistic preferences into the core language where semantics are what matter

## Bottom Line

The KSL plan is moving in the right direction, especially in these areas:

- recognizing ordered child content as first-class
- separating assertions from annotations
- adopting JSON Schema composition and conditionals selectively
- targeting real tooling use cases instead of validation alone

But from an XML dialect architect’s perspective, the plan is not ready to harden until it does four things more rigorously:

1. Define a canonical normalized schema model.
2. Formalize child content-model semantics and ambiguity rules.
3. Introduce a real extension and namespacing strategy.
4. Constrain CEL to a disciplined secondary rule layer.

If those four areas are handled well, the rest of the language can evolve safely. If they are left fuzzy, KSL will likely become easy to demo and hard to implement consistently.

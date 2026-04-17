/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: 'ksl',

  extras: ($) => [/[\t \f\uFEFF\u2060\u200B]+/, $.comment],

  conflicts: ($) => [
    [$.annotation_node, $.qualified_annotation],
    [$.info_declaration],
    [$.annotation_node],
    [$.qualified_annotation],
    [$.document_subject],
    [$.node_subject],
    [$.prop_subject],
    [$.arg_subject],
    [$.args_subject],
    [$.props_subject],
    [$.children_subject],
  ],

  rules: {
    source_file: ($) => seq(
      repeat($._terminator),
      optional(seq($._node, repeat(seq(repeat1($._terminator), $._node)), repeat($._terminator))),
    ),

    _node: ($) => choice(
      $.schema_declaration,
      $.info_declaration,
      $.import_declaration,
      $.define_declaration,
      $.document_subject,
      $.node_subject,
      $.prop_subject,
      $.arg_subject,
      $.args_subject,
      $.value_subject,
      $.props_subject,
      $.children_subject,
      $.sequence_block,
      $.choice_block,
      $.type_constraint,
      $.format_constraint,
      $.enum_constraint,
      $.const_constraint,
      $.range_constraint,
      $.length_constraint,
      $.pattern_constraint,
      $.composition_constraint,
      $.conditional_constraint,
      $.dependency_constraint,
      $.assert_constraint,
      $.content_ref,
      $.qualified_annotation,
      $.annotation_node,
    ),

    schema_declaration: ($) => seq(optional($.tag), 'schema', field('id', $.string), repeat(field('header', $.property)), field('body', $.children)),
    info_declaration: ($) => seq(optional($.tag), 'info', repeat1($.property), optional($.children)),
    import_declaration: ($) => seq(optional($.tag), 'import', field('id', $.string), repeat(field('header', $.property)), optional($.children)),
    define_declaration: ($) => seq(optional($.tag), 'define', field('name', $.string), repeat(field('header', $.property)), field('body', $.children)),

    document_subject: ($) => seq(optional($.tag), 'document', optional(field('body', $.children))),
    node_subject: ($) => seq(optional($.tag), 'node', field('name', $.string), optional(field('occurrence', $.occurrence_modifier)), repeat(field('header', $.property)), optional(field('body', $.children))),
    prop_subject: ($) => seq(optional($.tag), 'prop', field('name', $.string), optional(field('occurrence', $.occurrence_modifier)), repeat(field('header', $.property)), optional(field('body', $.children))),
    arg_subject: ($) => seq(optional($.tag), 'arg', field('index', $.integer), optional(field('occurrence', $.occurrence_modifier)), repeat(field('header', $.property)), optional(field('body', $.children))),
    args_subject: ($) => seq(optional($.tag), 'args', optional(field('occurrence', $.occurrence_modifier)), repeat(field('header', $.property)), optional(field('body', $.children))),
    value_subject: ($) => seq(optional($.tag), 'value', repeat(field('header', $.property)), optional(field('body', $.children))),
    props_subject: ($) => seq(optional($.tag), 'props', optional(field('openness', $.openness_modifier)), repeat(field('header', $.property)), optional(field('body', $.children))),
    children_subject: ($) => seq(optional($.tag), 'children', optional(field('openness', $.openness_modifier)), repeat(field('header', $.property)), field('body', $.children)),

    sequence_block: ($) => seq(optional($.tag), 'sequence', field('body', $.children)),
    choice_block: ($) => seq(optional($.tag), 'choice', field('body', $.children)),
    content_ref: ($) => seq(optional($.tag), 'ref', field('target', $.string), optional($.children)),

    type_constraint: ($) => seq(optional($.tag), 'type', field('value', $._symbol)),
    format_constraint: ($) => seq(optional($.tag), 'format', field('value', $._symbol)),
    enum_constraint: ($) => seq(optional($.tag), 'enum', repeat1(field('value', $._literal_or_symbol))),
    const_constraint: ($) => seq(optional($.tag), 'const', field('value', $._literal_or_symbol)),
    pattern_constraint: ($) => seq(optional($.tag), 'pattern', field('value', $.raw_string)),

    range_constraint: ($) => seq(optional($.tag), choice('min', 'max', 'exclusive-min', 'exclusive-max', 'multiple-of', 'between'), repeat1(field('value', choice($.integer, $.number)))),
    length_constraint: ($) => seq(optional($.tag), choice('min-length', 'max-length'), field('value', $.integer)),

    composition_constraint: ($) => seq(optional($.tag), choice('all-of', 'any-of', 'one-of', 'not'), field('body', $.children)),
    conditional_constraint: ($) => seq(optional($.tag), choice('if', 'then', 'else'), field('body', $.children)),
    dependency_constraint: ($) => seq(optional($.tag), choice('dependent-required', 'dependent-schema'), repeat(field('header', $.property)), optional(field('body', $.children))),
    assert_constraint: ($) => seq(optional($.tag), 'assert', field('expression', $.cel_literal)),

    annotation_node: ($) => seq(optional($.tag), choice('hint', 'highlight', 'bind', 'default', 'visible-if', 'enabled-if'), repeat($._value), repeat($.property), optional($.children)),
    qualified_annotation: ($) => seq(optional($.tag), $.namespaced_identifier, repeat($._value), repeat($.property), optional($.children)),

    occurrence_modifier: ($) => choice(
      'required',
      'optional',
      'many',
      seq('at-least', $.integer),
      seq('at-most', $.integer),
      seq('between', $.integer, $.integer),
    ),

    openness_modifier: () => choice('open', 'closed'),

    property: ($) => seq(field('name', $.identifier), '=', field('value', $._value)),
    children: ($) => seq(
      '{',
      repeat($._terminator),
      optional(seq($._node, repeat(seq(repeat1($._terminator), $._node)), repeat($._terminator))),
      '}',
    ),
    _terminator: () => /\r?\n/,

    _value: ($) => choice($.string, $.raw_string, $.number, $.integer, $.boolean, $.null, $._symbol, $.cel_literal),
    _literal_or_symbol: ($) => choice($.string, $.raw_string, $.number, $.integer, $.boolean, $.null, $._symbol),

    tag: ($) => seq('(', $.identifier, ')'),
    namespaced_identifier: () => /[A-Za-z_][A-Za-z0-9_-]*:[A-Za-z_][A-Za-z0-9_:-]*/,
    identifier: () => /[A-Za-z_][A-Za-z0-9_:-]*/,
    _symbol: ($) => choice($.namespaced_identifier, $.identifier),
    string: () => /"([^"\\]|\\.)*"/,
    raw_string: () => /#"([^"\\]|\\.|"#)*"#/,
    cel_literal: () => /`([^`\\]|\\.|\n)*`/,
    integer: () => /-?[0-9]+/,
    number: () => /-?[0-9]+\.[0-9]+/,
    boolean: () => choice('#true', '#false'),
    null: () => '#null',
    comment: () => token(choice(seq('//', /.*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
})

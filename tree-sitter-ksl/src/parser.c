#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 392
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 76

enum ts_symbol_identifiers {
  anon_sym_schema = 1,
  anon_sym_info = 2,
  anon_sym_import = 3,
  anon_sym_define = 4,
  anon_sym_document = 5,
  anon_sym_node = 6,
  anon_sym_prop = 7,
  anon_sym_arg = 8,
  anon_sym_args = 9,
  anon_sym_value = 10,
  anon_sym_props = 11,
  anon_sym_children = 12,
  anon_sym_sequence = 13,
  anon_sym_choice = 14,
  anon_sym_ref = 15,
  anon_sym_type = 16,
  anon_sym_format = 17,
  anon_sym_enum = 18,
  anon_sym_const = 19,
  anon_sym_pattern = 20,
  anon_sym_min = 21,
  anon_sym_max = 22,
  anon_sym_exclusive_DASHmin = 23,
  anon_sym_exclusive_DASHmax = 24,
  anon_sym_multiple_DASHof = 25,
  anon_sym_between = 26,
  anon_sym_min_DASHlength = 27,
  anon_sym_max_DASHlength = 28,
  anon_sym_all_DASHof = 29,
  anon_sym_any_DASHof = 30,
  anon_sym_one_DASHof = 31,
  anon_sym_not = 32,
  anon_sym_if = 33,
  anon_sym_then = 34,
  anon_sym_else = 35,
  anon_sym_dependent_DASHrequired = 36,
  anon_sym_dependent_DASHschema = 37,
  anon_sym_assert = 38,
  anon_sym_hint = 39,
  anon_sym_highlight = 40,
  anon_sym_bind = 41,
  anon_sym_default = 42,
  anon_sym_visible_DASHif = 43,
  anon_sym_enabled_DASHif = 44,
  anon_sym_required = 45,
  anon_sym_optional = 46,
  anon_sym_many = 47,
  anon_sym_at_DASHleast = 48,
  anon_sym_at_DASHmost = 49,
  anon_sym_open = 50,
  anon_sym_closed = 51,
  anon_sym_EQ = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  sym__terminator = 55,
  anon_sym_LPAREN = 56,
  anon_sym_RPAREN = 57,
  sym_namespaced_identifier = 58,
  sym_identifier = 59,
  sym_identity = 60,
  sym_string = 61,
  sym_raw_string = 62,
  sym_cel_literal = 63,
  sym_integer = 64,
  sym_number = 65,
  anon_sym_POUNDtrue = 66,
  anon_sym_POUNDfalse = 67,
  sym_null = 68,
  sym_comment = 69,
  sym_source_file = 70,
  sym__node = 71,
  sym_schema_declaration = 72,
  sym_info_declaration = 73,
  sym_import_declaration = 74,
  sym_define_declaration = 75,
  sym_document_subject = 76,
  sym_node_subject = 77,
  sym_prop_subject = 78,
  sym_arg_subject = 79,
  sym_args_subject = 80,
  sym_value_subject = 81,
  sym_props_subject = 82,
  sym_children_subject = 83,
  sym_sequence_block = 84,
  sym_choice_block = 85,
  sym_content_ref = 86,
  sym_type_constraint = 87,
  sym_format_constraint = 88,
  sym_enum_constraint = 89,
  sym_const_constraint = 90,
  sym_pattern_constraint = 91,
  sym_range_constraint = 92,
  sym_length_constraint = 93,
  sym_composition_constraint = 94,
  sym_conditional_constraint = 95,
  sym_dependency_constraint = 96,
  sym_assert_constraint = 97,
  sym_annotation_node = 98,
  sym_qualified_annotation = 99,
  sym_occurrence_modifier = 100,
  sym_openness_modifier = 101,
  sym_property = 102,
  sym_children = 103,
  sym__value = 104,
  sym__literal_or_symbol = 105,
  sym_tag = 106,
  sym__symbol = 107,
  sym_boolean = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_source_file_repeat2 = 110,
  aux_sym_schema_declaration_repeat1 = 111,
  aux_sym_info_declaration_repeat1 = 112,
  aux_sym_enum_constraint_repeat1 = 113,
  aux_sym_range_constraint_repeat1 = 114,
  aux_sym_annotation_node_repeat1 = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_schema] = "schema",
  [anon_sym_info] = "info",
  [anon_sym_import] = "import",
  [anon_sym_define] = "define",
  [anon_sym_document] = "document",
  [anon_sym_node] = "node",
  [anon_sym_prop] = "prop",
  [anon_sym_arg] = "arg",
  [anon_sym_args] = "args",
  [anon_sym_value] = "value",
  [anon_sym_props] = "props",
  [anon_sym_children] = "children",
  [anon_sym_sequence] = "sequence",
  [anon_sym_choice] = "choice",
  [anon_sym_ref] = "ref",
  [anon_sym_type] = "type",
  [anon_sym_format] = "format",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_pattern] = "pattern",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_exclusive_DASHmin] = "exclusive-min",
  [anon_sym_exclusive_DASHmax] = "exclusive-max",
  [anon_sym_multiple_DASHof] = "multiple-of",
  [anon_sym_between] = "between",
  [anon_sym_min_DASHlength] = "min-length",
  [anon_sym_max_DASHlength] = "max-length",
  [anon_sym_all_DASHof] = "all-of",
  [anon_sym_any_DASHof] = "any-of",
  [anon_sym_one_DASHof] = "one-of",
  [anon_sym_not] = "not",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_dependent_DASHrequired] = "dependent-required",
  [anon_sym_dependent_DASHschema] = "dependent-schema",
  [anon_sym_assert] = "assert",
  [anon_sym_hint] = "hint",
  [anon_sym_highlight] = "highlight",
  [anon_sym_bind] = "bind",
  [anon_sym_default] = "default",
  [anon_sym_visible_DASHif] = "visible-if",
  [anon_sym_enabled_DASHif] = "enabled-if",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_many] = "many",
  [anon_sym_at_DASHleast] = "at-least",
  [anon_sym_at_DASHmost] = "at-most",
  [anon_sym_open] = "open",
  [anon_sym_closed] = "closed",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__terminator] = "_terminator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [sym_identifier] = "identifier",
  [sym_identity] = "identity",
  [sym_string] = "string",
  [sym_raw_string] = "raw_string",
  [sym_cel_literal] = "cel_literal",
  [sym_integer] = "integer",
  [sym_number] = "number",
  [anon_sym_POUNDtrue] = "#true",
  [anon_sym_POUNDfalse] = "#false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_schema_declaration] = "schema_declaration",
  [sym_info_declaration] = "info_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_define_declaration] = "define_declaration",
  [sym_document_subject] = "document_subject",
  [sym_node_subject] = "node_subject",
  [sym_prop_subject] = "prop_subject",
  [sym_arg_subject] = "arg_subject",
  [sym_args_subject] = "args_subject",
  [sym_value_subject] = "value_subject",
  [sym_props_subject] = "props_subject",
  [sym_children_subject] = "children_subject",
  [sym_sequence_block] = "sequence_block",
  [sym_choice_block] = "choice_block",
  [sym_content_ref] = "content_ref",
  [sym_type_constraint] = "type_constraint",
  [sym_format_constraint] = "format_constraint",
  [sym_enum_constraint] = "enum_constraint",
  [sym_const_constraint] = "const_constraint",
  [sym_pattern_constraint] = "pattern_constraint",
  [sym_range_constraint] = "range_constraint",
  [sym_length_constraint] = "length_constraint",
  [sym_composition_constraint] = "composition_constraint",
  [sym_conditional_constraint] = "conditional_constraint",
  [sym_dependency_constraint] = "dependency_constraint",
  [sym_assert_constraint] = "assert_constraint",
  [sym_annotation_node] = "annotation_node",
  [sym_qualified_annotation] = "qualified_annotation",
  [sym_occurrence_modifier] = "occurrence_modifier",
  [sym_openness_modifier] = "openness_modifier",
  [sym_property] = "property",
  [sym_children] = "children",
  [sym__value] = "_value",
  [sym__literal_or_symbol] = "_literal_or_symbol",
  [sym_tag] = "tag",
  [sym__symbol] = "_symbol",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_schema_declaration_repeat1] = "schema_declaration_repeat1",
  [aux_sym_info_declaration_repeat1] = "info_declaration_repeat1",
  [aux_sym_enum_constraint_repeat1] = "enum_constraint_repeat1",
  [aux_sym_range_constraint_repeat1] = "range_constraint_repeat1",
  [aux_sym_annotation_node_repeat1] = "annotation_node_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_prop] = anon_sym_prop,
  [anon_sym_arg] = anon_sym_arg,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_props] = anon_sym_props,
  [anon_sym_children] = anon_sym_children,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_exclusive_DASHmin] = anon_sym_exclusive_DASHmin,
  [anon_sym_exclusive_DASHmax] = anon_sym_exclusive_DASHmax,
  [anon_sym_multiple_DASHof] = anon_sym_multiple_DASHof,
  [anon_sym_between] = anon_sym_between,
  [anon_sym_min_DASHlength] = anon_sym_min_DASHlength,
  [anon_sym_max_DASHlength] = anon_sym_max_DASHlength,
  [anon_sym_all_DASHof] = anon_sym_all_DASHof,
  [anon_sym_any_DASHof] = anon_sym_any_DASHof,
  [anon_sym_one_DASHof] = anon_sym_one_DASHof,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_dependent_DASHrequired] = anon_sym_dependent_DASHrequired,
  [anon_sym_dependent_DASHschema] = anon_sym_dependent_DASHschema,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_hint] = anon_sym_hint,
  [anon_sym_highlight] = anon_sym_highlight,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_visible_DASHif] = anon_sym_visible_DASHif,
  [anon_sym_enabled_DASHif] = anon_sym_enabled_DASHif,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_many] = anon_sym_many,
  [anon_sym_at_DASHleast] = anon_sym_at_DASHleast,
  [anon_sym_at_DASHmost] = anon_sym_at_DASHmost,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_closed] = anon_sym_closed,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__terminator] = sym__terminator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_namespaced_identifier] = sym_namespaced_identifier,
  [sym_identifier] = sym_identifier,
  [sym_identity] = sym_identity,
  [sym_string] = sym_string,
  [sym_raw_string] = sym_raw_string,
  [sym_cel_literal] = sym_cel_literal,
  [sym_integer] = sym_integer,
  [sym_number] = sym_number,
  [anon_sym_POUNDtrue] = anon_sym_POUNDtrue,
  [anon_sym_POUNDfalse] = anon_sym_POUNDfalse,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_schema_declaration] = sym_schema_declaration,
  [sym_info_declaration] = sym_info_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_define_declaration] = sym_define_declaration,
  [sym_document_subject] = sym_document_subject,
  [sym_node_subject] = sym_node_subject,
  [sym_prop_subject] = sym_prop_subject,
  [sym_arg_subject] = sym_arg_subject,
  [sym_args_subject] = sym_args_subject,
  [sym_value_subject] = sym_value_subject,
  [sym_props_subject] = sym_props_subject,
  [sym_children_subject] = sym_children_subject,
  [sym_sequence_block] = sym_sequence_block,
  [sym_choice_block] = sym_choice_block,
  [sym_content_ref] = sym_content_ref,
  [sym_type_constraint] = sym_type_constraint,
  [sym_format_constraint] = sym_format_constraint,
  [sym_enum_constraint] = sym_enum_constraint,
  [sym_const_constraint] = sym_const_constraint,
  [sym_pattern_constraint] = sym_pattern_constraint,
  [sym_range_constraint] = sym_range_constraint,
  [sym_length_constraint] = sym_length_constraint,
  [sym_composition_constraint] = sym_composition_constraint,
  [sym_conditional_constraint] = sym_conditional_constraint,
  [sym_dependency_constraint] = sym_dependency_constraint,
  [sym_assert_constraint] = sym_assert_constraint,
  [sym_annotation_node] = sym_annotation_node,
  [sym_qualified_annotation] = sym_qualified_annotation,
  [sym_occurrence_modifier] = sym_occurrence_modifier,
  [sym_openness_modifier] = sym_openness_modifier,
  [sym_property] = sym_property,
  [sym_children] = sym_children,
  [sym__value] = sym__value,
  [sym__literal_or_symbol] = sym__literal_or_symbol,
  [sym_tag] = sym_tag,
  [sym__symbol] = sym__symbol,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_schema_declaration_repeat1] = aux_sym_schema_declaration_repeat1,
  [aux_sym_info_declaration_repeat1] = aux_sym_info_declaration_repeat1,
  [aux_sym_enum_constraint_repeat1] = aux_sym_enum_constraint_repeat1,
  [aux_sym_range_constraint_repeat1] = aux_sym_range_constraint_repeat1,
  [aux_sym_annotation_node_repeat1] = aux_sym_annotation_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_props] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_children] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclusive_DASHmin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclusive_DASHmax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_between] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependent_DASHrequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependent_DASHschema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highlight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visible_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enabled_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_many] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at_DASHleast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at_DASHmost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_namespaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identity] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_cel_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfalse] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_schema_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_info_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_define_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_document_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_node_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_prop_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_args_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_value_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_props_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_children_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_block] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_block] = {
    .visible = true,
    .named = true,
  },
  [sym_content_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_format_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_const_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_range_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_length_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_composition_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_node] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_occurrence_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_openness_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_or_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_info_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_range_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_node_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_expression = 2,
  field_header = 3,
  field_id = 4,
  field_index = 5,
  field_name = 6,
  field_occurrence = 7,
  field_openness = 8,
  field_target = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expression] = "expression",
  [field_header] = "header",
  [field_id] = "id",
  [field_index] = "index",
  [field_name] = "name",
  [field_occurrence] = "occurrence",
  [field_openness] = "openness",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 2},
  [17] = {.index = 19, .length = 2},
  [18] = {.index = 21, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 2},
  [22] = {.index = 29, .length = 2},
  [23] = {.index = 31, .length = 2},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 37, .length = 2},
  [27] = {.index = 39, .length = 2},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 1},
  [30] = {.index = 44, .length = 1},
  [31] = {.index = 45, .length = 1},
  [32] = {.index = 46, .length = 1},
  [33] = {.index = 47, .length = 1},
  [34] = {.index = 48, .length = 1},
  [35] = {.index = 49, .length = 1},
  [36] = {.index = 50, .length = 1},
  [37] = {.index = 51, .length = 1},
  [38] = {.index = 52, .length = 1},
  [39] = {.index = 53, .length = 1},
  [40] = {.index = 54, .length = 3},
  [41] = {.index = 57, .length = 2},
  [42] = {.index = 59, .length = 3},
  [43] = {.index = 62, .length = 3},
  [44] = {.index = 65, .length = 3},
  [45] = {.index = 68, .length = 3},
  [46] = {.index = 71, .length = 3},
  [47] = {.index = 74, .length = 3},
  [48] = {.index = 77, .length = 3},
  [49] = {.index = 80, .length = 3},
  [50] = {.index = 83, .length = 2},
  [51] = {.index = 85, .length = 2},
  [52] = {.index = 87, .length = 2},
  [53] = {.index = 89, .length = 2},
  [54] = {.index = 91, .length = 2},
  [55] = {.index = 93, .length = 2},
  [56] = {.index = 95, .length = 2},
  [57] = {.index = 97, .length = 2},
  [58] = {.index = 99, .length = 2},
  [59] = {.index = 101, .length = 2},
  [60] = {.index = 103, .length = 2},
  [61] = {.index = 105, .length = 2},
  [62] = {.index = 107, .length = 2},
  [63] = {.index = 109, .length = 4},
  [64] = {.index = 113, .length = 4},
  [65] = {.index = 117, .length = 3},
  [66] = {.index = 120, .length = 3},
  [67] = {.index = 123, .length = 3},
  [68] = {.index = 126, .length = 3},
  [69] = {.index = 129, .length = 3},
  [70] = {.index = 132, .length = 3},
  [71] = {.index = 135, .length = 3},
  [72] = {.index = 138, .length = 3},
  [73] = {.index = 141, .length = 3},
  [74] = {.index = 144, .length = 4},
  [75] = {.index = 148, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_index, 1},
  [4] =
    {field_occurrence, 1},
  [5] =
    {field_header, 0},
  [6] =
    {field_header, 1, .inherited = true},
  [7] =
    {field_openness, 1},
  [8] =
    {field_target, 1},
  [9] =
    {field_value, 1},
  [10] =
    {field_value, 0},
  [11] =
    {field_value, 1, .inherited = true},
  [12] =
    {field_expression, 1},
  [13] =
    {field_body, 2},
    {field_id, 1},
  [15] =
    {field_header, 2, .inherited = true},
    {field_id, 1},
  [17] =
    {field_body, 2},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_occurrence, 2},
  [21] =
    {field_header, 2, .inherited = true},
    {field_name, 1},
  [23] =
    {field_index, 1},
    {field_occurrence, 2},
  [25] =
    {field_body, 2},
    {field_index, 1},
  [27] =
    {field_header, 2, .inherited = true},
    {field_index, 1},
  [29] =
    {field_body, 2},
    {field_occurrence, 1},
  [31] =
    {field_header, 2, .inherited = true},
    {field_occurrence, 1},
  [33] =
    {field_body, 2},
    {field_header, 1, .inherited = true},
  [35] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [37] =
    {field_body, 2},
    {field_openness, 1},
  [39] =
    {field_header, 2, .inherited = true},
    {field_openness, 1},
  [41] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [43] =
    {field_id, 2},
  [44] =
    {field_body, 2},
  [45] =
    {field_name, 2},
  [46] =
    {field_index, 2},
  [47] =
    {field_occurrence, 2},
  [48] =
    {field_header, 2, .inherited = true},
  [49] =
    {field_openness, 2},
  [50] =
    {field_target, 2},
  [51] =
    {field_value, 2},
  [52] =
    {field_value, 2, .inherited = true},
  [53] =
    {field_expression, 2},
  [54] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
    {field_id, 1},
  [57] =
    {field_name, 0},
    {field_value, 2},
  [59] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
    {field_name, 1},
  [62] =
    {field_body, 3},
    {field_name, 1},
    {field_occurrence, 2},
  [65] =
    {field_header, 3, .inherited = true},
    {field_name, 1},
    {field_occurrence, 2},
  [68] =
    {field_body, 3},
    {field_index, 1},
    {field_occurrence, 2},
  [71] =
    {field_header, 3, .inherited = true},
    {field_index, 1},
    {field_occurrence, 2},
  [74] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
    {field_index, 1},
  [77] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
    {field_occurrence, 1},
  [80] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
    {field_openness, 1},
  [83] =
    {field_body, 3},
    {field_id, 2},
  [85] =
    {field_header, 3, .inherited = true},
    {field_id, 2},
  [87] =
    {field_body, 3},
    {field_name, 2},
  [89] =
    {field_name, 2},
    {field_occurrence, 3},
  [91] =
    {field_header, 3, .inherited = true},
    {field_name, 2},
  [93] =
    {field_index, 2},
    {field_occurrence, 3},
  [95] =
    {field_body, 3},
    {field_index, 2},
  [97] =
    {field_header, 3, .inherited = true},
    {field_index, 2},
  [99] =
    {field_body, 3},
    {field_occurrence, 2},
  [101] =
    {field_header, 3, .inherited = true},
    {field_occurrence, 2},
  [103] =
    {field_body, 3},
    {field_header, 2, .inherited = true},
  [105] =
    {field_body, 3},
    {field_openness, 2},
  [107] =
    {field_header, 3, .inherited = true},
    {field_openness, 2},
  [109] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_name, 1},
    {field_occurrence, 2},
  [113] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_index, 1},
    {field_occurrence, 2},
  [117] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_id, 2},
  [120] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_name, 2},
  [123] =
    {field_body, 4},
    {field_name, 2},
    {field_occurrence, 3},
  [126] =
    {field_header, 4, .inherited = true},
    {field_name, 2},
    {field_occurrence, 3},
  [129] =
    {field_body, 4},
    {field_index, 2},
    {field_occurrence, 3},
  [132] =
    {field_header, 4, .inherited = true},
    {field_index, 2},
    {field_occurrence, 3},
  [135] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_index, 2},
  [138] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_occurrence, 2},
  [141] =
    {field_body, 4},
    {field_header, 3, .inherited = true},
    {field_openness, 2},
  [144] =
    {field_body, 5},
    {field_header, 4, .inherited = true},
    {field_name, 2},
    {field_occurrence, 3},
  [148] =
    {field_body, 5},
    {field_header, 4, .inherited = true},
    {field_index, 2},
    {field_occurrence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 18,
  [29] = 20,
  [30] = 21,
  [31] = 25,
  [32] = 22,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 52,
  [58] = 54,
  [59] = 55,
  [60] = 56,
  [61] = 50,
  [62] = 48,
  [63] = 41,
  [64] = 49,
  [65] = 45,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 77,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 103,
  [122] = 122,
  [123] = 80,
  [124] = 95,
  [125] = 96,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 126,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 134,
  [135] = 122,
  [136] = 132,
  [137] = 78,
  [138] = 79,
  [139] = 81,
  [140] = 82,
  [141] = 83,
  [142] = 84,
  [143] = 85,
  [144] = 86,
  [145] = 87,
  [146] = 88,
  [147] = 89,
  [148] = 90,
  [149] = 91,
  [150] = 92,
  [151] = 93,
  [152] = 94,
  [153] = 98,
  [154] = 99,
  [155] = 100,
  [156] = 101,
  [157] = 102,
  [158] = 104,
  [159] = 105,
  [160] = 106,
  [161] = 107,
  [162] = 108,
  [163] = 109,
  [164] = 110,
  [165] = 111,
  [166] = 112,
  [167] = 113,
  [168] = 114,
  [169] = 115,
  [170] = 116,
  [171] = 117,
  [172] = 118,
  [173] = 119,
  [174] = 120,
  [175] = 134,
  [176] = 128,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 177,
  [183] = 180,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 206,
  [210] = 210,
  [211] = 211,
  [212] = 41,
  [213] = 213,
  [214] = 208,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 210,
  [222] = 222,
  [223] = 213,
  [224] = 215,
  [225] = 41,
  [226] = 219,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 321,
  [339] = 339,
  [340] = 340,
  [341] = 295,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 367,
  [376] = 359,
  [377] = 369,
  [378] = 378,
  [379] = 379,
  [380] = 370,
  [381] = 381,
  [382] = 361,
  [383] = 383,
  [384] = 357,
  [385] = 360,
  [386] = 383,
  [387] = 353,
  [388] = 388,
  [389] = 365,
  [390] = 355,
  [391] = 391,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(432);
      ADVANCE_MAP(
        '\n', 539,
        '\r', 1,
        '"', 2,
        '#', 4,
        '(', 540,
        ')', 541,
        '-', 420,
        '/', 9,
        '=', 536,
        '`', 208,
        'a', 309,
        'b', 237,
        'c', 289,
        'd', 238,
        'e', 321,
        'f', 355,
        'h', 297,
        'i', 274,
        'm', 209,
        'n', 353,
        'o', 342,
        'p', 214,
        'r', 239,
        's', 223,
        't', 292,
        'v', 215,
        '{', 537,
        '}', 538,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(539);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(424);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(426);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead == 't') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(601);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(423);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(612);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(611);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'q') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'v') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'w') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'x') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == '\\') ADVANCE(425);
      if (lookahead == '`') ADVANCE(602);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(320);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 274:
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 275:
      if (lookahead == 'f') ADVANCE(461);
      if (lookahead == 'q') ADVANCE(408);
      END_STATE();
    case 276:
      if (lookahead == 'f') ADVANCE(490);
      END_STATE();
    case 277:
      if (lookahead == 'f') ADVANCE(492);
      END_STATE();
    case 278:
      if (lookahead == 'f') ADVANCE(494);
      END_STATE();
    case 279:
      if (lookahead == 'f') ADVANCE(520);
      END_STATE();
    case 280:
      if (lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 281:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 282:
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 283:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 284:
      if (lookahead == 'g') ADVANCE(448);
      END_STATE();
    case 285:
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 286:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 287:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 289:
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 290:
      if (lookahead == 'h') ADVANCE(488);
      END_STATE();
    case 291:
      if (lookahead == 'h') ADVANCE(486);
      END_STATE();
    case 292:
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 293:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 294:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 295:
      if (lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 296:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(467);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'x') ADVANCE(476);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(446);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 369:
      if (lookahead == 'q') ADVANCE(413);
      END_STATE();
    case 370:
      if (lookahead == 'q') ADVANCE(414);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(397);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 406:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 407:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 408:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 410:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 411:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 413:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 414:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 415:
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 416:
      if (lookahead == 'w') ADVANCE(272);
      END_STATE();
    case 417:
      if (lookahead == 'x') ADVANCE(479);
      END_STATE();
    case 418:
      if (lookahead == 'y') ADVANCE(526);
      END_STATE();
    case 419:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 421:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 422:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 423:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 424:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 425:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 426:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 427:
      if (eof) ADVANCE(432);
      ADVANCE_MAP(
        '\n', 539,
        '\r', 1,
        '"', 2,
        '#', 5,
        '-', 420,
        '/', 9,
        '=', 536,
        '`', 208,
        '{', 537,
        '}', 538,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 428:
      if (eof) ADVANCE(432);
      ADVANCE_MAP(
        '\n', 539,
        '\r', 1,
        '(', 540,
        '/', 9,
        'a', 117,
        'b', 53,
        'c', 99,
        'd', 54,
        'e', 126,
        'f', 153,
        'h', 107,
        'i', 84,
        'm', 30,
        'n', 154,
        'o', 144,
        'p', 34,
        'r', 63,
        's', 41,
        't', 102,
        'v', 36,
        '}', 538,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 429:
      if (eof) ADVANCE(432);
      ADVANCE_MAP(
        '\n', 539,
        '\r', 1,
        '/', 9,
        'a', 579,
        'b', 554,
        'm', 547,
        'o', 572,
        'r', 552,
        '{', 537,
        '}', 538,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 430:
      if (eof) ADVANCE(432);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == '{') ADVANCE(537);
      if (lookahead == '}') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 431:
      if (eof) ADVANCE(432);
      if (lookahead == '\n') ADVANCE(539);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '{') ADVANCE(537);
      if (lookahead == '}') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_schema);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_document);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_props);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmin);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmin);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmax);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmax);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_multiple_DASHof);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_multiple_DASHof);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_min_DASHlength);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_min_DASHlength);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_max_DASHlength);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_max_DASHlength);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_all_DASHof);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_all_DASHof);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_any_DASHof);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_any_DASHof);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_one_DASHof);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_one_DASHof);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_dependent_DASHrequired);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_dependent_DASHrequired);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_dependent_DASHschema);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_dependent_DASHschema);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_hint);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_hint);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_highlight);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_highlight);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_visible_DASHif);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_visible_DASHif);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_enabled_DASHif);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_enabled_DASHif);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_many);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_many);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_at_DASHleast);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_at_DASHleast);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_at_DASHmost);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_at_DASHmost);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_closed);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_closed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_namespaced_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_raw_string);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(426);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_cel_literal);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(612);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 428},
  [2] = {.lex_state = 428},
  [3] = {.lex_state = 428},
  [4] = {.lex_state = 428},
  [5] = {.lex_state = 428},
  [6] = {.lex_state = 428},
  [7] = {.lex_state = 428},
  [8] = {.lex_state = 428},
  [9] = {.lex_state = 428},
  [10] = {.lex_state = 428},
  [11] = {.lex_state = 428},
  [12] = {.lex_state = 428},
  [13] = {.lex_state = 428},
  [14] = {.lex_state = 428},
  [15] = {.lex_state = 428},
  [16] = {.lex_state = 428},
  [17] = {.lex_state = 427},
  [18] = {.lex_state = 427},
  [19] = {.lex_state = 427},
  [20] = {.lex_state = 427},
  [21] = {.lex_state = 427},
  [22] = {.lex_state = 427},
  [23] = {.lex_state = 427},
  [24] = {.lex_state = 427},
  [25] = {.lex_state = 427},
  [26] = {.lex_state = 427},
  [27] = {.lex_state = 427},
  [28] = {.lex_state = 427},
  [29] = {.lex_state = 427},
  [30] = {.lex_state = 427},
  [31] = {.lex_state = 427},
  [32] = {.lex_state = 427},
  [33] = {.lex_state = 427},
  [34] = {.lex_state = 427},
  [35] = {.lex_state = 427},
  [36] = {.lex_state = 427},
  [37] = {.lex_state = 427},
  [38] = {.lex_state = 427},
  [39] = {.lex_state = 427},
  [40] = {.lex_state = 427},
  [41] = {.lex_state = 427},
  [42] = {.lex_state = 427},
  [43] = {.lex_state = 427},
  [44] = {.lex_state = 429},
  [45] = {.lex_state = 427},
  [46] = {.lex_state = 429},
  [47] = {.lex_state = 427},
  [48] = {.lex_state = 429},
  [49] = {.lex_state = 429},
  [50] = {.lex_state = 429},
  [51] = {.lex_state = 427},
  [52] = {.lex_state = 429},
  [53] = {.lex_state = 427},
  [54] = {.lex_state = 429},
  [55] = {.lex_state = 429},
  [56] = {.lex_state = 429},
  [57] = {.lex_state = 429},
  [58] = {.lex_state = 429},
  [59] = {.lex_state = 429},
  [60] = {.lex_state = 429},
  [61] = {.lex_state = 429},
  [62] = {.lex_state = 429},
  [63] = {.lex_state = 427},
  [64] = {.lex_state = 429},
  [65] = {.lex_state = 427},
  [66] = {.lex_state = 427},
  [67] = {.lex_state = 427},
  [68] = {.lex_state = 427},
  [69] = {.lex_state = 427},
  [70] = {.lex_state = 427},
  [71] = {.lex_state = 430},
  [72] = {.lex_state = 430},
  [73] = {.lex_state = 430},
  [74] = {.lex_state = 430},
  [75] = {.lex_state = 430},
  [76] = {.lex_state = 430},
  [77] = {.lex_state = 431},
  [78] = {.lex_state = 431},
  [79] = {.lex_state = 431},
  [80] = {.lex_state = 431},
  [81] = {.lex_state = 431},
  [82] = {.lex_state = 431},
  [83] = {.lex_state = 431},
  [84] = {.lex_state = 431},
  [85] = {.lex_state = 431},
  [86] = {.lex_state = 431},
  [87] = {.lex_state = 431},
  [88] = {.lex_state = 431},
  [89] = {.lex_state = 431},
  [90] = {.lex_state = 431},
  [91] = {.lex_state = 431},
  [92] = {.lex_state = 431},
  [93] = {.lex_state = 431},
  [94] = {.lex_state = 431},
  [95] = {.lex_state = 431},
  [96] = {.lex_state = 431},
  [97] = {.lex_state = 431},
  [98] = {.lex_state = 431},
  [99] = {.lex_state = 431},
  [100] = {.lex_state = 431},
  [101] = {.lex_state = 431},
  [102] = {.lex_state = 431},
  [103] = {.lex_state = 431},
  [104] = {.lex_state = 431},
  [105] = {.lex_state = 431},
  [106] = {.lex_state = 431},
  [107] = {.lex_state = 431},
  [108] = {.lex_state = 431},
  [109] = {.lex_state = 431},
  [110] = {.lex_state = 431},
  [111] = {.lex_state = 431},
  [112] = {.lex_state = 431},
  [113] = {.lex_state = 431},
  [114] = {.lex_state = 431},
  [115] = {.lex_state = 431},
  [116] = {.lex_state = 431},
  [117] = {.lex_state = 431},
  [118] = {.lex_state = 431},
  [119] = {.lex_state = 431},
  [120] = {.lex_state = 431},
  [121] = {.lex_state = 431},
  [122] = {.lex_state = 431},
  [123] = {.lex_state = 431},
  [124] = {.lex_state = 431},
  [125] = {.lex_state = 431},
  [126] = {.lex_state = 431},
  [127] = {.lex_state = 431},
  [128] = {.lex_state = 431},
  [129] = {.lex_state = 431},
  [130] = {.lex_state = 431},
  [131] = {.lex_state = 431},
  [132] = {.lex_state = 431},
  [133] = {.lex_state = 431},
  [134] = {.lex_state = 431},
  [135] = {.lex_state = 431},
  [136] = {.lex_state = 431},
  [137] = {.lex_state = 431},
  [138] = {.lex_state = 431},
  [139] = {.lex_state = 431},
  [140] = {.lex_state = 431},
  [141] = {.lex_state = 431},
  [142] = {.lex_state = 431},
  [143] = {.lex_state = 431},
  [144] = {.lex_state = 431},
  [145] = {.lex_state = 431},
  [146] = {.lex_state = 431},
  [147] = {.lex_state = 431},
  [148] = {.lex_state = 431},
  [149] = {.lex_state = 431},
  [150] = {.lex_state = 431},
  [151] = {.lex_state = 431},
  [152] = {.lex_state = 431},
  [153] = {.lex_state = 431},
  [154] = {.lex_state = 431},
  [155] = {.lex_state = 431},
  [156] = {.lex_state = 431},
  [157] = {.lex_state = 431},
  [158] = {.lex_state = 431},
  [159] = {.lex_state = 431},
  [160] = {.lex_state = 431},
  [161] = {.lex_state = 431},
  [162] = {.lex_state = 431},
  [163] = {.lex_state = 431},
  [164] = {.lex_state = 431},
  [165] = {.lex_state = 431},
  [166] = {.lex_state = 431},
  [167] = {.lex_state = 431},
  [168] = {.lex_state = 431},
  [169] = {.lex_state = 431},
  [170] = {.lex_state = 431},
  [171] = {.lex_state = 431},
  [172] = {.lex_state = 431},
  [173] = {.lex_state = 431},
  [174] = {.lex_state = 431},
  [175] = {.lex_state = 431},
  [176] = {.lex_state = 431},
  [177] = {.lex_state = 431},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 431},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 431},
  [183] = {.lex_state = 431},
  [184] = {.lex_state = 431},
  [185] = {.lex_state = 431},
  [186] = {.lex_state = 431},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 431},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 431},
  [191] = {.lex_state = 431},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 431},
  [195] = {.lex_state = 431},
  [196] = {.lex_state = 431},
  [197] = {.lex_state = 431},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 431},
  [200] = {.lex_state = 431},
  [201] = {.lex_state = 431},
  [202] = {.lex_state = 431},
  [203] = {.lex_state = 431},
  [204] = {.lex_state = 431},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 431},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 431},
  [209] = {.lex_state = 431},
  [210] = {.lex_state = 431},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 431},
  [213] = {.lex_state = 431},
  [214] = {.lex_state = 431},
  [215] = {.lex_state = 431},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 431},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 431},
  [224] = {.lex_state = 431},
  [225] = {.lex_state = 431},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 29},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 29},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 431},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 431},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 431},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 431},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 431},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_prop] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_props] = ACTIONS(1),
    [anon_sym_children] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_exclusive_DASHmin] = ACTIONS(1),
    [anon_sym_exclusive_DASHmax] = ACTIONS(1),
    [anon_sym_multiple_DASHof] = ACTIONS(1),
    [anon_sym_between] = ACTIONS(1),
    [anon_sym_min_DASHlength] = ACTIONS(1),
    [anon_sym_max_DASHlength] = ACTIONS(1),
    [anon_sym_all_DASHof] = ACTIONS(1),
    [anon_sym_any_DASHof] = ACTIONS(1),
    [anon_sym_one_DASHof] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_dependent_DASHrequired] = ACTIONS(1),
    [anon_sym_dependent_DASHschema] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_hint] = ACTIONS(1),
    [anon_sym_highlight] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_visible_DASHif] = ACTIONS(1),
    [anon_sym_enabled_DASHif] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_many] = ACTIONS(1),
    [anon_sym_at_DASHleast] = ACTIONS(1),
    [anon_sym_at_DASHmost] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_closed] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_raw_string] = ACTIONS(1),
    [sym_cel_literal] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUNDtrue] = ACTIONS(1),
    [anon_sym_POUNDfalse] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(378),
    [sym__node] = STATE(217),
    [sym_schema_declaration] = STATE(217),
    [sym_info_declaration] = STATE(217),
    [sym_import_declaration] = STATE(217),
    [sym_define_declaration] = STATE(217),
    [sym_document_subject] = STATE(217),
    [sym_node_subject] = STATE(217),
    [sym_prop_subject] = STATE(217),
    [sym_arg_subject] = STATE(217),
    [sym_args_subject] = STATE(217),
    [sym_value_subject] = STATE(217),
    [sym_props_subject] = STATE(217),
    [sym_children_subject] = STATE(217),
    [sym_sequence_block] = STATE(217),
    [sym_choice_block] = STATE(217),
    [sym_content_ref] = STATE(217),
    [sym_type_constraint] = STATE(217),
    [sym_format_constraint] = STATE(217),
    [sym_enum_constraint] = STATE(217),
    [sym_const_constraint] = STATE(217),
    [sym_pattern_constraint] = STATE(217),
    [sym_range_constraint] = STATE(217),
    [sym_length_constraint] = STATE(217),
    [sym_composition_constraint] = STATE(217),
    [sym_conditional_constraint] = STATE(217),
    [sym_dependency_constraint] = STATE(217),
    [sym_assert_constraint] = STATE(217),
    [sym_annotation_node] = STATE(217),
    [sym_qualified_annotation] = STATE(217),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__node] = STATE(220),
    [sym_schema_declaration] = STATE(220),
    [sym_info_declaration] = STATE(220),
    [sym_import_declaration] = STATE(220),
    [sym_define_declaration] = STATE(220),
    [sym_document_subject] = STATE(220),
    [sym_node_subject] = STATE(220),
    [sym_prop_subject] = STATE(220),
    [sym_arg_subject] = STATE(220),
    [sym_args_subject] = STATE(220),
    [sym_value_subject] = STATE(220),
    [sym_props_subject] = STATE(220),
    [sym_children_subject] = STATE(220),
    [sym_sequence_block] = STATE(220),
    [sym_choice_block] = STATE(220),
    [sym_content_ref] = STATE(220),
    [sym_type_constraint] = STATE(220),
    [sym_format_constraint] = STATE(220),
    [sym_enum_constraint] = STATE(220),
    [sym_const_constraint] = STATE(220),
    [sym_pattern_constraint] = STATE(220),
    [sym_range_constraint] = STATE(220),
    [sym_length_constraint] = STATE(220),
    [sym_composition_constraint] = STATE(220),
    [sym_conditional_constraint] = STATE(220),
    [sym_dependency_constraint] = STATE(220),
    [sym_assert_constraint] = STATE(220),
    [sym_annotation_node] = STATE(220),
    [sym_qualified_annotation] = STATE(220),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__node] = STATE(222),
    [sym_schema_declaration] = STATE(222),
    [sym_info_declaration] = STATE(222),
    [sym_import_declaration] = STATE(222),
    [sym_define_declaration] = STATE(222),
    [sym_document_subject] = STATE(222),
    [sym_node_subject] = STATE(222),
    [sym_prop_subject] = STATE(222),
    [sym_arg_subject] = STATE(222),
    [sym_args_subject] = STATE(222),
    [sym_value_subject] = STATE(222),
    [sym_props_subject] = STATE(222),
    [sym_children_subject] = STATE(222),
    [sym_sequence_block] = STATE(222),
    [sym_choice_block] = STATE(222),
    [sym_content_ref] = STATE(222),
    [sym_type_constraint] = STATE(222),
    [sym_format_constraint] = STATE(222),
    [sym_enum_constraint] = STATE(222),
    [sym_const_constraint] = STATE(222),
    [sym_pattern_constraint] = STATE(222),
    [sym_range_constraint] = STATE(222),
    [sym_length_constraint] = STATE(222),
    [sym_composition_constraint] = STATE(222),
    [sym_conditional_constraint] = STATE(222),
    [sym_dependency_constraint] = STATE(222),
    [sym_assert_constraint] = STATE(222),
    [sym_annotation_node] = STATE(222),
    [sym_qualified_annotation] = STATE(222),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__terminator] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__node] = STATE(216),
    [sym_schema_declaration] = STATE(216),
    [sym_info_declaration] = STATE(216),
    [sym_import_declaration] = STATE(216),
    [sym_define_declaration] = STATE(216),
    [sym_document_subject] = STATE(216),
    [sym_node_subject] = STATE(216),
    [sym_prop_subject] = STATE(216),
    [sym_arg_subject] = STATE(216),
    [sym_args_subject] = STATE(216),
    [sym_value_subject] = STATE(216),
    [sym_props_subject] = STATE(216),
    [sym_children_subject] = STATE(216),
    [sym_sequence_block] = STATE(216),
    [sym_choice_block] = STATE(216),
    [sym_content_ref] = STATE(216),
    [sym_type_constraint] = STATE(216),
    [sym_format_constraint] = STATE(216),
    [sym_enum_constraint] = STATE(216),
    [sym_const_constraint] = STATE(216),
    [sym_pattern_constraint] = STATE(216),
    [sym_range_constraint] = STATE(216),
    [sym_length_constraint] = STATE(216),
    [sym_composition_constraint] = STATE(216),
    [sym_conditional_constraint] = STATE(216),
    [sym_dependency_constraint] = STATE(216),
    [sym_assert_constraint] = STATE(216),
    [sym_annotation_node] = STATE(216),
    [sym_qualified_annotation] = STATE(216),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(17),
    [anon_sym_prop] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_props] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(55),
    [anon_sym_dependent_DASHschema] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(59),
    [anon_sym_highlight] = ACTIONS(59),
    [anon_sym_bind] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_visible_DASHif] = ACTIONS(59),
    [anon_sym_enabled_DASHif] = ACTIONS(59),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__node] = STATE(282),
    [sym_schema_declaration] = STATE(282),
    [sym_info_declaration] = STATE(282),
    [sym_import_declaration] = STATE(282),
    [sym_define_declaration] = STATE(282),
    [sym_document_subject] = STATE(282),
    [sym_node_subject] = STATE(282),
    [sym_prop_subject] = STATE(282),
    [sym_arg_subject] = STATE(282),
    [sym_args_subject] = STATE(282),
    [sym_value_subject] = STATE(282),
    [sym_props_subject] = STATE(282),
    [sym_children_subject] = STATE(282),
    [sym_sequence_block] = STATE(282),
    [sym_choice_block] = STATE(282),
    [sym_content_ref] = STATE(282),
    [sym_type_constraint] = STATE(282),
    [sym_format_constraint] = STATE(282),
    [sym_enum_constraint] = STATE(282),
    [sym_const_constraint] = STATE(282),
    [sym_pattern_constraint] = STATE(282),
    [sym_range_constraint] = STATE(282),
    [sym_length_constraint] = STATE(282),
    [sym_composition_constraint] = STATE(282),
    [sym_conditional_constraint] = STATE(282),
    [sym_dependency_constraint] = STATE(282),
    [sym_assert_constraint] = STATE(282),
    [sym_annotation_node] = STATE(282),
    [sym_qualified_annotation] = STATE(282),
    [sym_tag] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_schema] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_define] = ACTIONS(13),
    [anon_sym_document] = ACTIONS(15),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_prop] = ACTIONS(81),
    [anon_sym_arg] = ACTIONS(83),
    [anon_sym_args] = ACTIONS(85),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_props] = ACTIONS(89),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_sequence] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_format] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_min] = ACTIONS(47),
    [anon_sym_max] = ACTIONS(47),
    [anon_sym_exclusive_DASHmin] = ACTIONS(47),
    [anon_sym_exclusive_DASHmax] = ACTIONS(47),
    [anon_sym_multiple_DASHof] = ACTIONS(47),
    [anon_sym_between] = ACTIONS(47),
    [anon_sym_min_DASHlength] = ACTIONS(49),
    [anon_sym_max_DASHlength] = ACTIONS(49),
    [anon_sym_all_DASHof] = ACTIONS(51),
    [anon_sym_any_DASHof] = ACTIONS(51),
    [anon_sym_one_DASHof] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_then] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_dependent_DASHrequired] = ACTIONS(93),
    [anon_sym_dependent_DASHschema] = ACTIONS(93),
    [anon_sym_assert] = ACTIONS(57),
    [anon_sym_hint] = ACTIONS(95),
    [anon_sym_highlight] = ACTIONS(95),
    [anon_sym_bind] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_visible_DASHif] = ACTIONS(95),
    [anon_sym_enabled_DASHif] = ACTIONS(95),
    [sym__terminator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_namespaced_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__terminator,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_namespaced_identifier,
    ACTIONS(115), 44,
      anon_sym_schema,
      anon_sym_info,
      anon_sym_import,
      anon_sym_define,
      anon_sym_document,
      anon_sym_node,
      anon_sym_prop,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_value,
      anon_sym_props,
      anon_sym_children,
      anon_sym_sequence,
      anon_sym_choice,
      anon_sym_ref,
      anon_sym_type,
      anon_sym_format,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_pattern,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exclusive_DASHmin,
      anon_sym_exclusive_DASHmax,
      anon_sym_multiple_DASHof,
      anon_sym_between,
      anon_sym_min_DASHlength,
      anon_sym_max_DASHlength,
      anon_sym_all_DASHof,
      anon_sym_any_DASHof,
      anon_sym_one_DASHof,
      anon_sym_not,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_dependent_DASHrequired,
      anon_sym_dependent_DASHschema,
      anon_sym_assert,
      anon_sym_hint,
      anon_sym_highlight,
      anon_sym_bind,
      anon_sym_default,
      anon_sym_visible_DASHif,
      anon_sym_enabled_DASHif,
  [62] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_schema,
    ACTIONS(122), 1,
      anon_sym_info,
    ACTIONS(124), 1,
      anon_sym_import,
    ACTIONS(126), 1,
      anon_sym_define,
    ACTIONS(128), 1,
      anon_sym_document,
    ACTIONS(130), 1,
      anon_sym_node,
    ACTIONS(132), 1,
      anon_sym_prop,
    ACTIONS(134), 1,
      anon_sym_arg,
    ACTIONS(136), 1,
      anon_sym_args,
    ACTIONS(138), 1,
      anon_sym_value,
    ACTIONS(140), 1,
      anon_sym_props,
    ACTIONS(142), 1,
      anon_sym_children,
    ACTIONS(144), 1,
      anon_sym_sequence,
    ACTIONS(146), 1,
      anon_sym_choice,
    ACTIONS(148), 1,
      anon_sym_ref,
    ACTIONS(150), 1,
      anon_sym_type,
    ACTIONS(152), 1,
      anon_sym_format,
    ACTIONS(154), 1,
      anon_sym_enum,
    ACTIONS(156), 1,
      anon_sym_const,
    ACTIONS(158), 1,
      anon_sym_pattern,
    ACTIONS(170), 1,
      anon_sym_assert,
    ACTIONS(174), 1,
      sym_namespaced_identifier,
    ACTIONS(162), 2,
      anon_sym_min_DASHlength,
      anon_sym_max_DASHlength,
    ACTIONS(168), 2,
      anon_sym_dependent_DASHrequired,
      anon_sym_dependent_DASHschema,
    ACTIONS(166), 3,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(164), 4,
      anon_sym_all_DASHof,
      anon_sym_any_DASHof,
      anon_sym_one_DASHof,
      anon_sym_not,
    ACTIONS(160), 6,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exclusive_DASHmin,
      anon_sym_exclusive_DASHmax,
      anon_sym_multiple_DASHof,
      anon_sym_between,
    ACTIONS(172), 6,
      anon_sym_hint,
      anon_sym_highlight,
      anon_sym_bind,
      anon_sym_default,
      anon_sym_visible_DASHif,
      anon_sym_enabled_DASHif,
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_namespaced_identifier,
    ACTIONS(176), 44,
      anon_sym_schema,
      anon_sym_info,
      anon_sym_import,
      anon_sym_define,
      anon_sym_document,
      anon_sym_node,
      anon_sym_prop,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_value,
      anon_sym_props,
      anon_sym_children,
      anon_sym_sequence,
      anon_sym_choice,
      anon_sym_ref,
      anon_sym_type,
      anon_sym_format,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_pattern,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exclusive_DASHmin,
      anon_sym_exclusive_DASHmax,
      anon_sym_multiple_DASHof,
      anon_sym_between,
      anon_sym_min_DASHlength,
      anon_sym_max_DASHlength,
      anon_sym_all_DASHof,
      anon_sym_any_DASHof,
      anon_sym_one_DASHof,
      anon_sym_not,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
      anon_sym_dependent_DASHrequired,
      anon_sym_dependent_DASHschema,
      anon_sym_assert,
      anon_sym_hint,
      anon_sym_highlight,
      anon_sym_bind,
      anon_sym_default,
      anon_sym_visible_DASHif,
      anon_sym_enabled_DASHif,
  [220] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_schema,
    ACTIONS(126), 1,
      anon_sym_define,
    ACTIONS(128), 1,
      anon_sym_document,
    ACTIONS(142), 1,
      anon_sym_children,
    ACTIONS(144), 1,
      anon_sym_sequence,
    ACTIONS(146), 1,
      anon_sym_choice,
    ACTIONS(148), 1,
      anon_sym_ref,
    ACTIONS(150), 1,
      anon_sym_type,
    ACTIONS(152), 1,
      anon_sym_format,
    ACTIONS(156), 1,
      anon_sym_const,
    ACTIONS(158), 1,
      anon_sym_pattern,
    ACTIONS(170), 1,
      anon_sym_assert,
    ACTIONS(180), 1,
      anon_sym_info,
    ACTIONS(182), 1,
      anon_sym_import,
    ACTIONS(184), 1,
      anon_sym_node,
    ACTIONS(186), 1,
      anon_sym_prop,
    ACTIONS(188), 1,
      anon_sym_arg,
    ACTIONS(190), 1,
      anon_sym_args,
    ACTIONS(192), 1,
      anon_sym_value,
    ACTIONS(194), 1,
      anon_sym_props,
    ACTIONS(196), 1,
      anon_sym_enum,
    ACTIONS(202), 1,
      sym_namespaced_identifier,
    ACTIONS(162), 2,
      anon_sym_min_DASHlength,
      anon_sym_max_DASHlength,
    ACTIONS(198), 2,
      anon_sym_dependent_DASHrequired,
      anon_sym_dependent_DASHschema,
    ACTIONS(166), 3,
      anon_sym_if,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(164), 4,
      anon_sym_all_DASHof,
      anon_sym_any_DASHof,
      anon_sym_one_DASHof,
      anon_sym_not,
    ACTIONS(160), 6,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exclusive_DASHmin,
      anon_sym_exclusive_DASHmax,
      anon_sym_multiple_DASHof,
      anon_sym_between,
    ACTIONS(200), 6,
      anon_sym_hint,
      anon_sym_highlight,
      anon_sym_bind,
      anon_sym_default,
      anon_sym_visible_DASHif,
      anon_sym_enabled_DASHif,
  [325] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(315), 1,
      sym_children,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(78), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(212), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(18), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(208), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [368] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(92), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(220), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [411] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(343), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(122), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(226), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(26), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(224), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [454] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(91), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(232), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(25), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(230), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [497] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(92), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(236), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(22), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(234), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [540] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(336), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(117), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(220), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(315), 1,
      sym_children,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(137), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(244), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(28), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(240), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [626] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(343), 1,
      sym_children,
    ACTIONS(222), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(135), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(250), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(27), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(248), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [669] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(116), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(220), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [712] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(91), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(220), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [755] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(149), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(256), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(254), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [798] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(150), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(256), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(254), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [841] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(149), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(260), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(31), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(258), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [884] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(150), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(264), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(32), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(262), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [927] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(170), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(256), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(254), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [970] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(336), 1,
      sym_children,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(171), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(256), 3,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(254), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
    ACTIONS(271), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(268), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(266), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(280), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(277), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(290), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1109] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(294), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(296), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(306), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(300), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(303), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1173] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(298), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(315), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(309), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(312), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1205] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(290), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1237] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(286), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(294), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(296), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
    ACTIONS(318), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_EQ,
    ACTIONS(326), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(326), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
    ACTIONS(322), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1342] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(128), 1,
      sym_occurrence_modifier,
    STATE(129), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(279), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(290), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1408] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(176), 1,
      sym_occurrence_modifier,
    STATE(203), 1,
      sym_property,
    STATE(279), 1,
      sym_children,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(209), 3,
      sym__value,
      sym__symbol,
      sym_boolean,
    ACTIONS(350), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
    ACTIONS(348), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [1472] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(143), 1,
      sym_occurrence_modifier,
    STATE(144), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(329), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(354), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1510] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(145), 1,
      sym_occurrence_modifier,
    STATE(146), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(230), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(141), 1,
      sym_occurrence_modifier,
    STATE(142), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(322), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(358), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(290), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1614] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(77), 1,
      sym_occurrence_modifier,
    STATE(153), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(285), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(360), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(294), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(296), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [1680] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(108), 1,
      sym_occurrence_modifier,
    STATE(109), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(232), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1718] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(110), 1,
      sym_occurrence_modifier,
    STATE(111), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(234), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1756] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(112), 1,
      sym_occurrence_modifier,
    STATE(113), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(236), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1794] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(97), 1,
      sym_occurrence_modifier,
    STATE(98), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(285), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1832] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(162), 1,
      sym_occurrence_modifier,
    STATE(163), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(232), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(362), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(164), 1,
      sym_occurrence_modifier,
    STATE(165), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(234), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(364), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1908] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(166), 1,
      sym_occurrence_modifier,
    STATE(167), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(236), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(366), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1946] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(83), 1,
      sym_occurrence_modifier,
    STATE(84), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(322), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1984] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(85), 1,
      sym_occurrence_modifier,
    STATE(86), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(329), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
    ACTIONS(318), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [2044] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_between,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(87), 1,
      sym_occurrence_modifier,
    STATE(88), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(230), 1,
      sym_children,
    ACTIONS(344), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(342), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [2082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(246), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(294), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(296), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [2110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(206), 3,
      sym__value,
      sym__symbol,
      sym_boolean,
    ACTIONS(370), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
    ACTIONS(368), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
  [2136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(312), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(374), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(376), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [2161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(301), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(378), 4,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(380), 4,
      sym_identifier,
      sym_identity,
      sym_integer,
      sym_null,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 6,
      ts_builtin_sym_end,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(384), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [2206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 6,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
    ACTIONS(384), 6,
      sym_identifier,
      sym_identity,
      sym_integer,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [2226] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(131), 1,
      sym_openness_modifier,
    STATE(132), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(286), 1,
      sym_children,
    ACTIONS(386), 2,
      anon_sym_open,
      anon_sym_closed,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [2256] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(155), 1,
      sym_openness_modifier,
    STATE(156), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(344), 1,
      sym_children,
    ACTIONS(386), 2,
      anon_sym_open,
      anon_sym_closed,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [2286] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(100), 1,
      sym_openness_modifier,
    STATE(101), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(344), 1,
      sym_children,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(392), 2,
      anon_sym_open,
      anon_sym_closed,
  [2316] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(133), 1,
      sym_openness_modifier,
    STATE(136), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(286), 1,
      sym_children,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(392), 2,
      anon_sym_open,
      anon_sym_closed,
  [2346] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(201), 1,
      sym_openness_modifier,
    STATE(202), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(294), 1,
      sym_children,
    ACTIONS(386), 2,
      anon_sym_open,
      anon_sym_closed,
  [2372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(186), 1,
      sym_openness_modifier,
    STATE(190), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(289), 1,
      sym_children,
    ACTIONS(386), 2,
      anon_sym_open,
      anon_sym_closed,
  [2398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(237), 1,
      sym_children,
    ACTIONS(394), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [2421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(287), 1,
      sym_children,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2465] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(340), 1,
      sym_children,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2488] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(309), 1,
      sym_children,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2511] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(318), 1,
      sym_children,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(323), 1,
      sym_children,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(325), 1,
      sym_children,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(105), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(326), 1,
      sym_children,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(327), 1,
      sym_children,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(328), 1,
      sym_children,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2649] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(330), 1,
      sym_children,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2672] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(332), 1,
      sym_children,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2695] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(333), 1,
      sym_children,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(336), 1,
      sym_children,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(228), 1,
      sym_children,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2781] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(107), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(229), 1,
      sym_children,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2804] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(292), 1,
      sym_children,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2825] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(298), 1,
      sym_children,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(114), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(237), 1,
      sym_children,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(239), 1,
      sym_children,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(240), 1,
      sym_children,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(115), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(241), 1,
      sym_children,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2940] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(243), 1,
      sym_children,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(247), 1,
      sym_children,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(281), 1,
      sym_children,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3009] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(252), 1,
      sym_children,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(227), 1,
      sym_children,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3055] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(254), 1,
      sym_children,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(256), 1,
      sym_children,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3101] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(258), 1,
      sym_children,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3124] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(260), 1,
      sym_children,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(119), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(261), 1,
      sym_children,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3170] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(263), 1,
      sym_children,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3193] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(120), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(264), 1,
      sym_children,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(266), 1,
      sym_children,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(267), 1,
      sym_children,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3262] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(268), 1,
      sym_children,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(270), 1,
      sym_children,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(271), 1,
      sym_children,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3327] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(273), 1,
      sym_children,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3350] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(274), 1,
      sym_children,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(275), 1,
      sym_children,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3396] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(130), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(281), 1,
      sym_children,
    ACTIONS(442), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3440] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(134), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(340), 1,
      sym_children,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(292), 1,
      sym_children,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(298), 1,
      sym_children,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(235), 1,
      sym_children,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(238), 1,
      sym_children,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(147), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(233), 1,
      sym_children,
    ACTIONS(482), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3576] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(235), 1,
      sym_children,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3599] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(238), 1,
      sym_children,
    ACTIONS(480), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3622] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(148), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(242), 1,
      sym_children,
    ACTIONS(484), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3645] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(248), 1,
      sym_children,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(242), 1,
      sym_children,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(277), 1,
      sym_children,
    ACTIONS(488), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3735] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(248), 1,
      sym_children,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [3758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [3779] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(287), 1,
      sym_children,
    ACTIONS(400), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(157), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(309), 1,
      sym_children,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3825] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(318), 1,
      sym_children,
    ACTIONS(406), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(158), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(323), 1,
      sym_children,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(325), 1,
      sym_children,
    ACTIONS(410), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(159), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(326), 1,
      sym_children,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(327), 1,
      sym_children,
    ACTIONS(414), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3940] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(160), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(328), 1,
      sym_children,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(330), 1,
      sym_children,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [3986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(332), 1,
      sym_children,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4009] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(333), 1,
      sym_children,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(336), 1,
      sym_children,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(228), 1,
      sym_children,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4095] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(161), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(229), 1,
      sym_children,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(239), 1,
      sym_children,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(240), 1,
      sym_children,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4164] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(169), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(241), 1,
      sym_children,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4187] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(243), 1,
      sym_children,
    ACTIONS(438), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(247), 1,
      sym_children,
    ACTIONS(440), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4233] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(252), 1,
      sym_children,
    ACTIONS(444), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(227), 1,
      sym_children,
    ACTIONS(446), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4279] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(254), 1,
      sym_children,
    ACTIONS(448), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4302] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(256), 1,
      sym_children,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(172), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(258), 1,
      sym_children,
    ACTIONS(452), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(260), 1,
      sym_children,
    ACTIONS(454), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(173), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(261), 1,
      sym_children,
    ACTIONS(456), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4394] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(263), 1,
      sym_children,
    ACTIONS(458), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(174), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(264), 1,
      sym_children,
    ACTIONS(460), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4440] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(266), 1,
      sym_children,
    ACTIONS(462), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(267), 1,
      sym_children,
    ACTIONS(464), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(268), 1,
      sym_children,
    ACTIONS(466), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(270), 1,
      sym_children,
    ACTIONS(468), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(271), 1,
      sym_children,
    ACTIONS(470), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(273), 1,
      sym_children,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4574] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(274), 1,
      sym_children,
    ACTIONS(474), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4597] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(275), 1,
      sym_children,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [4620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(277), 1,
      sym_children,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [4643] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(233), 1,
      sym_children,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [4666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(490), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
  [4682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_range_constraint_repeat1,
    ACTIONS(495), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_range_constraint_repeat1,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
  [4736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_integer,
    ACTIONS(513), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_range_constraint_repeat1,
    ACTIONS(508), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
  [4770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    ACTIONS(503), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
  [4788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(303), 1,
      sym_children,
  [4807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(269), 1,
      sym_children,
  [4826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(195), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(249), 1,
      sym_children,
  [4845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_integer,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
      sym_number,
  [4858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(196), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(342), 1,
      sym_children,
  [4877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_children,
    ACTIONS(526), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(259), 1,
      sym_children,
  [4911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(316), 1,
      sym_children,
  [4930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_children,
    ACTIONS(528), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_children,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [4960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(231), 1,
      sym_children,
  [4979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(334), 1,
      sym_children,
  [4998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(255), 1,
      sym_children,
  [5017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(257), 1,
      sym_children,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(284), 1,
      sym_children,
    ACTIONS(532), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(319), 1,
      sym_children,
  [5070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(191), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(288), 1,
      sym_children,
  [5089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(185), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(244), 1,
      sym_children,
  [5108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(245), 1,
      sym_children,
  [5127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(536), 1,
      sym__terminator,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(219), 1,
      aux_sym_source_file_repeat2,
  [5163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      sym__terminator,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(226), 1,
      aux_sym_source_file_repeat2,
  [5189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      sym__terminator,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(219), 1,
      aux_sym_source_file_repeat2,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      sym__terminator,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(205), 1,
      aux_sym_source_file_repeat2,
  [5291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      aux_sym_source_file_repeat2,
  [5307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      sym__terminator,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(226), 1,
      aux_sym_source_file_repeat2,
  [5323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(219), 1,
      aux_sym_source_file_repeat2,
  [5339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      sym__terminator,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 1,
      aux_sym_source_file_repeat2,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      sym__terminator,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(211), 1,
      aux_sym_source_file_repeat2,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 1,
      sym__terminator,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(226), 1,
      aux_sym_source_file_repeat2,
  [5427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_namespaced_identifier,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(299), 1,
      sym__symbol,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_namespaced_identifier,
    ACTIONS(646), 1,
      sym_identifier,
    STATE(300), 1,
      sym__symbol,
  [5786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(178), 1,
      aux_sym_range_constraint_repeat1,
  [5952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_namespaced_identifier,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(308), 1,
      sym__symbol,
  [6019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(93), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_namespaced_identifier,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(306), 1,
      sym__symbol,
  [6214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(95), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(179), 1,
      aux_sym_range_constraint_repeat1,
  [6400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(124), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(151), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_children,
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      sym_children,
  [6541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_children,
  [6551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_children,
  [6561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(305), 1,
      sym_children,
  [6571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_children,
  [6581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_children,
  [6591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      sym_children,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_integer,
  [6608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identity,
  [6615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_integer,
  [6622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_integer,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_string,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_string,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_string,
  [6650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_integer,
  [6657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_string,
  [6664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_raw_string,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_cel_literal,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_identity,
  [6685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_EQ,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_cel_literal,
  [6699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_string,
  [6706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [6713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_integer,
  [6720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_integer,
  [6727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identity,
  [6734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_string,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_identifier,
  [6748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_string,
  [6755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_string,
  [6762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_string,
  [6769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_integer,
  [6776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
  [6783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_identity,
  [6790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_integer,
  [6797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_integer,
  [6804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_string,
  [6811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_string,
  [6818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym_string,
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_integer,
  [6832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_string,
  [6839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_integer,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_string,
  [6853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_EQ,
  [6860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_integer,
  [6867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_raw_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 220,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 368,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 454,
  [SMALL_STATE(21)] = 497,
  [SMALL_STATE(22)] = 540,
  [SMALL_STATE(23)] = 583,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 669,
  [SMALL_STATE(26)] = 712,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 798,
  [SMALL_STATE(29)] = 841,
  [SMALL_STATE(30)] = 884,
  [SMALL_STATE(31)] = 927,
  [SMALL_STATE(32)] = 970,
  [SMALL_STATE(33)] = 1013,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1077,
  [SMALL_STATE(36)] = 1109,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1173,
  [SMALL_STATE(39)] = 1205,
  [SMALL_STATE(40)] = 1237,
  [SMALL_STATE(41)] = 1269,
  [SMALL_STATE(42)] = 1292,
  [SMALL_STATE(43)] = 1317,
  [SMALL_STATE(44)] = 1342,
  [SMALL_STATE(45)] = 1380,
  [SMALL_STATE(46)] = 1408,
  [SMALL_STATE(47)] = 1446,
  [SMALL_STATE(48)] = 1472,
  [SMALL_STATE(49)] = 1510,
  [SMALL_STATE(50)] = 1548,
  [SMALL_STATE(51)] = 1586,
  [SMALL_STATE(52)] = 1614,
  [SMALL_STATE(53)] = 1652,
  [SMALL_STATE(54)] = 1680,
  [SMALL_STATE(55)] = 1718,
  [SMALL_STATE(56)] = 1756,
  [SMALL_STATE(57)] = 1794,
  [SMALL_STATE(58)] = 1832,
  [SMALL_STATE(59)] = 1870,
  [SMALL_STATE(60)] = 1908,
  [SMALL_STATE(61)] = 1946,
  [SMALL_STATE(62)] = 1984,
  [SMALL_STATE(63)] = 2022,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2082,
  [SMALL_STATE(66)] = 2110,
  [SMALL_STATE(67)] = 2136,
  [SMALL_STATE(68)] = 2161,
  [SMALL_STATE(69)] = 2186,
  [SMALL_STATE(70)] = 2206,
  [SMALL_STATE(71)] = 2226,
  [SMALL_STATE(72)] = 2256,
  [SMALL_STATE(73)] = 2286,
  [SMALL_STATE(74)] = 2316,
  [SMALL_STATE(75)] = 2346,
  [SMALL_STATE(76)] = 2372,
  [SMALL_STATE(77)] = 2398,
  [SMALL_STATE(78)] = 2421,
  [SMALL_STATE(79)] = 2442,
  [SMALL_STATE(80)] = 2465,
  [SMALL_STATE(81)] = 2488,
  [SMALL_STATE(82)] = 2511,
  [SMALL_STATE(83)] = 2534,
  [SMALL_STATE(84)] = 2557,
  [SMALL_STATE(85)] = 2580,
  [SMALL_STATE(86)] = 2603,
  [SMALL_STATE(87)] = 2626,
  [SMALL_STATE(88)] = 2649,
  [SMALL_STATE(89)] = 2672,
  [SMALL_STATE(90)] = 2695,
  [SMALL_STATE(91)] = 2718,
  [SMALL_STATE(92)] = 2739,
  [SMALL_STATE(93)] = 2760,
  [SMALL_STATE(94)] = 2781,
  [SMALL_STATE(95)] = 2804,
  [SMALL_STATE(96)] = 2825,
  [SMALL_STATE(97)] = 2848,
  [SMALL_STATE(98)] = 2871,
  [SMALL_STATE(99)] = 2894,
  [SMALL_STATE(100)] = 2917,
  [SMALL_STATE(101)] = 2940,
  [SMALL_STATE(102)] = 2963,
  [SMALL_STATE(103)] = 2986,
  [SMALL_STATE(104)] = 3009,
  [SMALL_STATE(105)] = 3032,
  [SMALL_STATE(106)] = 3055,
  [SMALL_STATE(107)] = 3078,
  [SMALL_STATE(108)] = 3101,
  [SMALL_STATE(109)] = 3124,
  [SMALL_STATE(110)] = 3147,
  [SMALL_STATE(111)] = 3170,
  [SMALL_STATE(112)] = 3193,
  [SMALL_STATE(113)] = 3216,
  [SMALL_STATE(114)] = 3239,
  [SMALL_STATE(115)] = 3262,
  [SMALL_STATE(116)] = 3285,
  [SMALL_STATE(117)] = 3306,
  [SMALL_STATE(118)] = 3327,
  [SMALL_STATE(119)] = 3350,
  [SMALL_STATE(120)] = 3373,
  [SMALL_STATE(121)] = 3396,
  [SMALL_STATE(122)] = 3419,
  [SMALL_STATE(123)] = 3440,
  [SMALL_STATE(124)] = 3463,
  [SMALL_STATE(125)] = 3484,
  [SMALL_STATE(126)] = 3507,
  [SMALL_STATE(127)] = 3530,
  [SMALL_STATE(128)] = 3553,
  [SMALL_STATE(129)] = 3576,
  [SMALL_STATE(130)] = 3599,
  [SMALL_STATE(131)] = 3622,
  [SMALL_STATE(132)] = 3645,
  [SMALL_STATE(133)] = 3668,
  [SMALL_STATE(134)] = 3691,
  [SMALL_STATE(135)] = 3714,
  [SMALL_STATE(136)] = 3735,
  [SMALL_STATE(137)] = 3758,
  [SMALL_STATE(138)] = 3779,
  [SMALL_STATE(139)] = 3802,
  [SMALL_STATE(140)] = 3825,
  [SMALL_STATE(141)] = 3848,
  [SMALL_STATE(142)] = 3871,
  [SMALL_STATE(143)] = 3894,
  [SMALL_STATE(144)] = 3917,
  [SMALL_STATE(145)] = 3940,
  [SMALL_STATE(146)] = 3963,
  [SMALL_STATE(147)] = 3986,
  [SMALL_STATE(148)] = 4009,
  [SMALL_STATE(149)] = 4032,
  [SMALL_STATE(150)] = 4053,
  [SMALL_STATE(151)] = 4074,
  [SMALL_STATE(152)] = 4095,
  [SMALL_STATE(153)] = 4118,
  [SMALL_STATE(154)] = 4141,
  [SMALL_STATE(155)] = 4164,
  [SMALL_STATE(156)] = 4187,
  [SMALL_STATE(157)] = 4210,
  [SMALL_STATE(158)] = 4233,
  [SMALL_STATE(159)] = 4256,
  [SMALL_STATE(160)] = 4279,
  [SMALL_STATE(161)] = 4302,
  [SMALL_STATE(162)] = 4325,
  [SMALL_STATE(163)] = 4348,
  [SMALL_STATE(164)] = 4371,
  [SMALL_STATE(165)] = 4394,
  [SMALL_STATE(166)] = 4417,
  [SMALL_STATE(167)] = 4440,
  [SMALL_STATE(168)] = 4463,
  [SMALL_STATE(169)] = 4486,
  [SMALL_STATE(170)] = 4509,
  [SMALL_STATE(171)] = 4530,
  [SMALL_STATE(172)] = 4551,
  [SMALL_STATE(173)] = 4574,
  [SMALL_STATE(174)] = 4597,
  [SMALL_STATE(175)] = 4620,
  [SMALL_STATE(176)] = 4643,
  [SMALL_STATE(177)] = 4666,
  [SMALL_STATE(178)] = 4682,
  [SMALL_STATE(179)] = 4700,
  [SMALL_STATE(180)] = 4718,
  [SMALL_STATE(181)] = 4736,
  [SMALL_STATE(182)] = 4754,
  [SMALL_STATE(183)] = 4770,
  [SMALL_STATE(184)] = 4788,
  [SMALL_STATE(185)] = 4807,
  [SMALL_STATE(186)] = 4826,
  [SMALL_STATE(187)] = 4845,
  [SMALL_STATE(188)] = 4858,
  [SMALL_STATE(189)] = 4877,
  [SMALL_STATE(190)] = 4892,
  [SMALL_STATE(191)] = 4911,
  [SMALL_STATE(192)] = 4930,
  [SMALL_STATE(193)] = 4945,
  [SMALL_STATE(194)] = 4960,
  [SMALL_STATE(195)] = 4979,
  [SMALL_STATE(196)] = 4998,
  [SMALL_STATE(197)] = 5017,
  [SMALL_STATE(198)] = 5036,
  [SMALL_STATE(199)] = 5051,
  [SMALL_STATE(200)] = 5070,
  [SMALL_STATE(201)] = 5089,
  [SMALL_STATE(202)] = 5108,
  [SMALL_STATE(203)] = 5127,
  [SMALL_STATE(204)] = 5137,
  [SMALL_STATE(205)] = 5147,
  [SMALL_STATE(206)] = 5163,
  [SMALL_STATE(207)] = 5173,
  [SMALL_STATE(208)] = 5189,
  [SMALL_STATE(209)] = 5199,
  [SMALL_STATE(210)] = 5209,
  [SMALL_STATE(211)] = 5219,
  [SMALL_STATE(212)] = 5235,
  [SMALL_STATE(213)] = 5245,
  [SMALL_STATE(214)] = 5255,
  [SMALL_STATE(215)] = 5265,
  [SMALL_STATE(216)] = 5275,
  [SMALL_STATE(217)] = 5291,
  [SMALL_STATE(218)] = 5307,
  [SMALL_STATE(219)] = 5323,
  [SMALL_STATE(220)] = 5339,
  [SMALL_STATE(221)] = 5355,
  [SMALL_STATE(222)] = 5365,
  [SMALL_STATE(223)] = 5381,
  [SMALL_STATE(224)] = 5391,
  [SMALL_STATE(225)] = 5401,
  [SMALL_STATE(226)] = 5411,
  [SMALL_STATE(227)] = 5427,
  [SMALL_STATE(228)] = 5436,
  [SMALL_STATE(229)] = 5445,
  [SMALL_STATE(230)] = 5454,
  [SMALL_STATE(231)] = 5463,
  [SMALL_STATE(232)] = 5472,
  [SMALL_STATE(233)] = 5481,
  [SMALL_STATE(234)] = 5490,
  [SMALL_STATE(235)] = 5499,
  [SMALL_STATE(236)] = 5508,
  [SMALL_STATE(237)] = 5517,
  [SMALL_STATE(238)] = 5526,
  [SMALL_STATE(239)] = 5535,
  [SMALL_STATE(240)] = 5544,
  [SMALL_STATE(241)] = 5553,
  [SMALL_STATE(242)] = 5562,
  [SMALL_STATE(243)] = 5571,
  [SMALL_STATE(244)] = 5580,
  [SMALL_STATE(245)] = 5589,
  [SMALL_STATE(246)] = 5598,
  [SMALL_STATE(247)] = 5607,
  [SMALL_STATE(248)] = 5616,
  [SMALL_STATE(249)] = 5625,
  [SMALL_STATE(250)] = 5634,
  [SMALL_STATE(251)] = 5643,
  [SMALL_STATE(252)] = 5656,
  [SMALL_STATE(253)] = 5665,
  [SMALL_STATE(254)] = 5674,
  [SMALL_STATE(255)] = 5683,
  [SMALL_STATE(256)] = 5692,
  [SMALL_STATE(257)] = 5701,
  [SMALL_STATE(258)] = 5710,
  [SMALL_STATE(259)] = 5719,
  [SMALL_STATE(260)] = 5728,
  [SMALL_STATE(261)] = 5737,
  [SMALL_STATE(262)] = 5746,
  [SMALL_STATE(263)] = 5755,
  [SMALL_STATE(264)] = 5764,
  [SMALL_STATE(265)] = 5773,
  [SMALL_STATE(266)] = 5786,
  [SMALL_STATE(267)] = 5795,
  [SMALL_STATE(268)] = 5804,
  [SMALL_STATE(269)] = 5813,
  [SMALL_STATE(270)] = 5822,
  [SMALL_STATE(271)] = 5831,
  [SMALL_STATE(272)] = 5840,
  [SMALL_STATE(273)] = 5849,
  [SMALL_STATE(274)] = 5858,
  [SMALL_STATE(275)] = 5867,
  [SMALL_STATE(276)] = 5876,
  [SMALL_STATE(277)] = 5885,
  [SMALL_STATE(278)] = 5894,
  [SMALL_STATE(279)] = 5903,
  [SMALL_STATE(280)] = 5912,
  [SMALL_STATE(281)] = 5921,
  [SMALL_STATE(282)] = 5930,
  [SMALL_STATE(283)] = 5939,
  [SMALL_STATE(284)] = 5952,
  [SMALL_STATE(285)] = 5961,
  [SMALL_STATE(286)] = 5970,
  [SMALL_STATE(287)] = 5979,
  [SMALL_STATE(288)] = 5988,
  [SMALL_STATE(289)] = 5997,
  [SMALL_STATE(290)] = 6006,
  [SMALL_STATE(291)] = 6019,
  [SMALL_STATE(292)] = 6028,
  [SMALL_STATE(293)] = 6037,
  [SMALL_STATE(294)] = 6046,
  [SMALL_STATE(295)] = 6055,
  [SMALL_STATE(296)] = 6066,
  [SMALL_STATE(297)] = 6075,
  [SMALL_STATE(298)] = 6084,
  [SMALL_STATE(299)] = 6093,
  [SMALL_STATE(300)] = 6102,
  [SMALL_STATE(301)] = 6111,
  [SMALL_STATE(302)] = 6120,
  [SMALL_STATE(303)] = 6129,
  [SMALL_STATE(304)] = 6138,
  [SMALL_STATE(305)] = 6147,
  [SMALL_STATE(306)] = 6156,
  [SMALL_STATE(307)] = 6165,
  [SMALL_STATE(308)] = 6174,
  [SMALL_STATE(309)] = 6183,
  [SMALL_STATE(310)] = 6192,
  [SMALL_STATE(311)] = 6201,
  [SMALL_STATE(312)] = 6214,
  [SMALL_STATE(313)] = 6223,
  [SMALL_STATE(314)] = 6232,
  [SMALL_STATE(315)] = 6241,
  [SMALL_STATE(316)] = 6250,
  [SMALL_STATE(317)] = 6259,
  [SMALL_STATE(318)] = 6268,
  [SMALL_STATE(319)] = 6277,
  [SMALL_STATE(320)] = 6286,
  [SMALL_STATE(321)] = 6295,
  [SMALL_STATE(322)] = 6306,
  [SMALL_STATE(323)] = 6315,
  [SMALL_STATE(324)] = 6324,
  [SMALL_STATE(325)] = 6333,
  [SMALL_STATE(326)] = 6342,
  [SMALL_STATE(327)] = 6351,
  [SMALL_STATE(328)] = 6360,
  [SMALL_STATE(329)] = 6369,
  [SMALL_STATE(330)] = 6378,
  [SMALL_STATE(331)] = 6387,
  [SMALL_STATE(332)] = 6400,
  [SMALL_STATE(333)] = 6409,
  [SMALL_STATE(334)] = 6418,
  [SMALL_STATE(335)] = 6427,
  [SMALL_STATE(336)] = 6436,
  [SMALL_STATE(337)] = 6445,
  [SMALL_STATE(338)] = 6454,
  [SMALL_STATE(339)] = 6465,
  [SMALL_STATE(340)] = 6474,
  [SMALL_STATE(341)] = 6483,
  [SMALL_STATE(342)] = 6494,
  [SMALL_STATE(343)] = 6503,
  [SMALL_STATE(344)] = 6512,
  [SMALL_STATE(345)] = 6521,
  [SMALL_STATE(346)] = 6531,
  [SMALL_STATE(347)] = 6541,
  [SMALL_STATE(348)] = 6551,
  [SMALL_STATE(349)] = 6561,
  [SMALL_STATE(350)] = 6571,
  [SMALL_STATE(351)] = 6581,
  [SMALL_STATE(352)] = 6591,
  [SMALL_STATE(353)] = 6601,
  [SMALL_STATE(354)] = 6608,
  [SMALL_STATE(355)] = 6615,
  [SMALL_STATE(356)] = 6622,
  [SMALL_STATE(357)] = 6629,
  [SMALL_STATE(358)] = 6636,
  [SMALL_STATE(359)] = 6643,
  [SMALL_STATE(360)] = 6650,
  [SMALL_STATE(361)] = 6657,
  [SMALL_STATE(362)] = 6664,
  [SMALL_STATE(363)] = 6671,
  [SMALL_STATE(364)] = 6678,
  [SMALL_STATE(365)] = 6685,
  [SMALL_STATE(366)] = 6692,
  [SMALL_STATE(367)] = 6699,
  [SMALL_STATE(368)] = 6706,
  [SMALL_STATE(369)] = 6713,
  [SMALL_STATE(370)] = 6720,
  [SMALL_STATE(371)] = 6727,
  [SMALL_STATE(372)] = 6734,
  [SMALL_STATE(373)] = 6741,
  [SMALL_STATE(374)] = 6748,
  [SMALL_STATE(375)] = 6755,
  [SMALL_STATE(376)] = 6762,
  [SMALL_STATE(377)] = 6769,
  [SMALL_STATE(378)] = 6776,
  [SMALL_STATE(379)] = 6783,
  [SMALL_STATE(380)] = 6790,
  [SMALL_STATE(381)] = 6797,
  [SMALL_STATE(382)] = 6804,
  [SMALL_STATE(383)] = 6811,
  [SMALL_STATE(384)] = 6818,
  [SMALL_STATE(385)] = 6825,
  [SMALL_STATE(386)] = 6832,
  [SMALL_STATE(387)] = 6839,
  [SMALL_STATE(388)] = 6846,
  [SMALL_STATE(389)] = 6853,
  [SMALL_STATE(390)] = 6860,
  [SMALL_STATE(391)] = 6867,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constraint, 3, 0, 38),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constraint, 2, 0, 12),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(69),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(69),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(41),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(70),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(63),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 2, 0, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 2, 0, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 2, 0, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 3, 0, 31),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 3, 0, 31),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 3, 0, 32),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 1, 0, 11),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 1, 0, 11),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 33),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, 0, 15),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 3, 0, 17),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 3, 0, 18),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 3, 0, 17),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 3, 0, 18),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 3, 0, 19),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 3, 0, 21),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 23),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 27),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_declaration, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, 0, 29),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_declaration, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, 0, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 34),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 3, 0, 34),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 35),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 34),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 3, 0, 34),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 44),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 44),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 46),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, 0, 51),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 53),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 54),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 53),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 54),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 55),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 57),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 4, 0, 59),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 4, 0, 62),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 4, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 4, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 5, 0, 68),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 5, 0, 68),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 5, 0, 70),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 2, 0, 7),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 2, 0, 7),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 2, 0, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 2, 0, 8),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 2, 0, 7),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 2, 0, 7),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_info_declaration_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_info_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_constraint, 3, 0, 38),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_constraint, 2, 0, 12),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declaration_repeat1, 2, 0, 25),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declaration_repeat1, 2, 0, 25), SHIFT_REPEAT(365),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_constraint_repeat1, 2, 0, 28),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(187),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(187),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_info_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declaration_repeat1, 2, 0, 25), SHIFT_REPEAT(389),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_constraint_repeat1, 1, 0, 11),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_constraint_repeat1, 1, 0, 11),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_subject, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_ref, 2, 0, 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_ref, 3, 0, 36),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_subject, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declaration_repeat1, 1, 0, 6),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 41),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openness_modifier, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_occurrence_modifier, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_occurrence_modifier, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_occurrence_modifier, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 5, 0, 63),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_declaration, 4, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, 0, 29),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 3, 0, 20),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_declaration, 4, 0, 52),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 52),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 22),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 52),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 24),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 56),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 4, 0, 58),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 3, 0, 24),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 4, 0, 60),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 4, 0, 60),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 4, 0, 61),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 26),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 4, 0, 60),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 4, 0, 61),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 4, 0, 60),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_ref, 4, 0, 36),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 4, 0, 60),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 24),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 3, 0, 26),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 4, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 5, 0, 63),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_constraint, 2, 0, 13),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 5, 0, 64),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declaration, 5, 0, 65),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, 0, 51),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_declaration, 5, 0, 66),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 5, 0, 67),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 3, 0, 24),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 5, 0, 66),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 5, 0, 67),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_ref, 3, 0, 9),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 5, 0, 66),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 5, 0, 69),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 5, 0, 71),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 5, 0, 72),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 5, 0, 73),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 5, 0, 73),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 5, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 5, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 5, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 6, 0, 74),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 6, 0, 74),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 6, 0, 75),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 6, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 3, 0, 24),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 2, 0, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 2, 0, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_subject, 3, 0, 30),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 3, 0, 30),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 2, 0, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_subject, 3, 0, 30),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declaration, 3, 0, 14),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 2, 0, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 2, 0, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_block, 2, 0, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 3, 0, 30),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_block, 3, 0, 30),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_block, 3, 0, 30),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, 0, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 3, 0, 37),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_constraint, 3, 0, 37),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_constraint, 3, 0, 37),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constraint, 3, 0, 37),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_declaration, 3, 0, 16),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length_constraint, 3, 0, 37),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composition_constraint, 3, 0, 30),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 2, 0, 10),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_constraint, 3, 0, 30),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_constraint, 2, 0, 10),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 3, 0, 30),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_constraint, 3, 0, 39),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_constraint, 2, 0, 10),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_subject, 2, 0, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declaration, 4, 0, 40),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constraint, 2, 0, 10),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, 0, 15),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_declaration, 4, 0, 42),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 3, 0, 16),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 43),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length_constraint, 2, 0, 10),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 4, 0, 42),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 43),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 4, 0, 42),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 45),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 3, 0, 16),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 4, 0, 47),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 4, 0, 48),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 4, 0, 49),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_subject, 4, 0, 49),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composition_constraint, 2, 0, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_constraint, 2, 0, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_constraint, 2, 0, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declaration, 4, 0, 50),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 3, 0, 30),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [830] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ksl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

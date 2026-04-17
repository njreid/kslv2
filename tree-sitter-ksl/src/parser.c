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
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
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
  sym_string = 60,
  sym_raw_string = 61,
  sym_cel_literal = 62,
  sym_integer = 63,
  sym_number = 64,
  anon_sym_POUNDtrue = 65,
  anon_sym_POUNDfalse = 66,
  sym_null = 67,
  sym_comment = 68,
  sym_source_file = 69,
  sym__node = 70,
  sym_schema_declaration = 71,
  sym_info_declaration = 72,
  sym_import_declaration = 73,
  sym_define_declaration = 74,
  sym_document_subject = 75,
  sym_node_subject = 76,
  sym_prop_subject = 77,
  sym_arg_subject = 78,
  sym_args_subject = 79,
  sym_value_subject = 80,
  sym_props_subject = 81,
  sym_children_subject = 82,
  sym_sequence_block = 83,
  sym_choice_block = 84,
  sym_content_ref = 85,
  sym_type_constraint = 86,
  sym_format_constraint = 87,
  sym_enum_constraint = 88,
  sym_const_constraint = 89,
  sym_pattern_constraint = 90,
  sym_range_constraint = 91,
  sym_length_constraint = 92,
  sym_composition_constraint = 93,
  sym_conditional_constraint = 94,
  sym_dependency_constraint = 95,
  sym_assert_constraint = 96,
  sym_annotation_node = 97,
  sym_qualified_annotation = 98,
  sym_occurrence_modifier = 99,
  sym_openness_modifier = 100,
  sym_property = 101,
  sym_children = 102,
  sym__value = 103,
  sym__literal_or_symbol = 104,
  sym_tag = 105,
  sym__symbol = 106,
  sym_boolean = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_source_file_repeat2 = 109,
  aux_sym_schema_declaration_repeat1 = 110,
  aux_sym_info_declaration_repeat1 = 111,
  aux_sym_enum_constraint_repeat1 = 112,
  aux_sym_range_constraint_repeat1 = 113,
  aux_sym_annotation_node_repeat1 = 114,
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
  [23] = 23,
  [24] = 19,
  [25] = 17,
  [26] = 20,
  [27] = 27,
  [28] = 18,
  [29] = 21,
  [30] = 23,
  [31] = 22,
  [32] = 27,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 51,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 48,
  [58] = 45,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
  [64] = 43,
  [65] = 61,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 73,
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
  [212] = 43,
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
  [225] = 43,
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
      if (eof) ADVANCE(426);
      ADVANCE_MAP(
        '\n', 533,
        '\r', 1,
        '"', 2,
        '#', 4,
        '(', 534,
        ')', 535,
        '-', 415,
        '/', 6,
        '=', 530,
        '`', 203,
        'a', 304,
        'b', 232,
        'c', 284,
        'd', 233,
        'e', 316,
        'f', 350,
        'h', 292,
        'i', 269,
        'm', 204,
        'n', 348,
        'o', 337,
        'p', 209,
        'r', 234,
        's', 218,
        't', 287,
        'v', 210,
        '{', 531,
        '}', 532,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(533);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(418);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(582);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(590);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(589);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(351);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'x') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'x') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 'y') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      if (lookahead == '\\') ADVANCE(419);
      if (lookahead == '`') ADVANCE(583);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(315);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 269:
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 270:
      if (lookahead == 'f') ADVANCE(455);
      if (lookahead == 'q') ADVANCE(403);
      END_STATE();
    case 271:
      if (lookahead == 'f') ADVANCE(484);
      END_STATE();
    case 272:
      if (lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 273:
      if (lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 274:
      if (lookahead == 'f') ADVANCE(514);
      END_STATE();
    case 275:
      if (lookahead == 'f') ADVANCE(512);
      END_STATE();
    case 276:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 277:
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 278:
      if (lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 279:
      if (lookahead == 'g') ADVANCE(442);
      END_STATE();
    case 280:
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 282:
      if (lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 283:
      if (lookahead == 'g') ADVANCE(399);
      END_STATE();
    case 284:
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 285:
      if (lookahead == 'h') ADVANCE(482);
      END_STATE();
    case 286:
      if (lookahead == 'h') ADVANCE(480);
      END_STATE();
    case 287:
      if (lookahead == 'h') ADVANCE(251);
      if (lookahead == 'y') ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 289:
      if (lookahead == 'h') ADVANCE(311);
      END_STATE();
    case 290:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 291:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(470);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 364:
      if (lookahead == 'q') ADVANCE(408);
      END_STATE();
    case 365:
      if (lookahead == 'q') ADVANCE(409);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 404:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 405:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 406:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 407:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 408:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 410:
      if (lookahead == 'v') ADVANCE(250);
      END_STATE();
    case 411:
      if (lookahead == 'w') ADVANCE(267);
      END_STATE();
    case 412:
      if (lookahead == 'x') ADVANCE(473);
      END_STATE();
    case 413:
      if (lookahead == 'y') ADVANCE(520);
      END_STATE();
    case 414:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 415:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 416:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 417:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 418:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 419:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 420:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 421:
      if (eof) ADVANCE(426);
      ADVANCE_MAP(
        '\n', 533,
        '\r', 1,
        '"', 2,
        '#', 4,
        '-', 415,
        '/', 6,
        '=', 530,
        '`', 203,
        '{', 531,
        '}', 532,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 422:
      if (eof) ADVANCE(426);
      ADVANCE_MAP(
        '\n', 533,
        '\r', 1,
        '(', 534,
        '/', 6,
        'a', 113,
        'b', 49,
        'c', 95,
        'd', 50,
        'e', 122,
        'f', 149,
        'h', 103,
        'i', 80,
        'm', 26,
        'n', 150,
        'o', 140,
        'p', 30,
        'r', 59,
        's', 37,
        't', 98,
        'v', 32,
        '}', 532,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 423:
      if (eof) ADVANCE(426);
      ADVANCE_MAP(
        '\n', 533,
        '\r', 1,
        '/', 6,
        'a', 571,
        'b', 546,
        'm', 539,
        'o', 564,
        'r', 544,
        '{', 531,
        '}', 532,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 424:
      if (eof) ADVANCE(426);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 425:
      if (eof) ADVANCE(426);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_schema);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_document);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_props);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmin);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmin);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmax);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_exclusive_DASHmax);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_multiple_DASHof);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_multiple_DASHof);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_min_DASHlength);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_min_DASHlength);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_max_DASHlength);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_max_DASHlength);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_all_DASHof);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_all_DASHof);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_any_DASHof);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_any_DASHof);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_one_DASHof);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_one_DASHof);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_dependent_DASHrequired);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_dependent_DASHrequired);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dependent_DASHschema);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_dependent_DASHschema);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_hint);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_hint);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_highlight);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_highlight);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_visible_DASHif);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_visible_DASHif);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_enabled_DASHif);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_enabled_DASHif);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_many);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_many);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_at_DASHleast);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_at_DASHleast);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_at_DASHmost);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_at_DASHmost);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_closed);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_closed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_namespaced_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_raw_string);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_cel_literal);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(590);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 422},
  [2] = {.lex_state = 422},
  [3] = {.lex_state = 422},
  [4] = {.lex_state = 422},
  [5] = {.lex_state = 422},
  [6] = {.lex_state = 422},
  [7] = {.lex_state = 422},
  [8] = {.lex_state = 422},
  [9] = {.lex_state = 422},
  [10] = {.lex_state = 422},
  [11] = {.lex_state = 422},
  [12] = {.lex_state = 422},
  [13] = {.lex_state = 422},
  [14] = {.lex_state = 422},
  [15] = {.lex_state = 422},
  [16] = {.lex_state = 422},
  [17] = {.lex_state = 421},
  [18] = {.lex_state = 421},
  [19] = {.lex_state = 421},
  [20] = {.lex_state = 421},
  [21] = {.lex_state = 421},
  [22] = {.lex_state = 421},
  [23] = {.lex_state = 421},
  [24] = {.lex_state = 421},
  [25] = {.lex_state = 421},
  [26] = {.lex_state = 421},
  [27] = {.lex_state = 421},
  [28] = {.lex_state = 421},
  [29] = {.lex_state = 421},
  [30] = {.lex_state = 421},
  [31] = {.lex_state = 421},
  [32] = {.lex_state = 421},
  [33] = {.lex_state = 421},
  [34] = {.lex_state = 421},
  [35] = {.lex_state = 421},
  [36] = {.lex_state = 421},
  [37] = {.lex_state = 421},
  [38] = {.lex_state = 421},
  [39] = {.lex_state = 421},
  [40] = {.lex_state = 421},
  [41] = {.lex_state = 423},
  [42] = {.lex_state = 423},
  [43] = {.lex_state = 421},
  [44] = {.lex_state = 423},
  [45] = {.lex_state = 423},
  [46] = {.lex_state = 423},
  [47] = {.lex_state = 423},
  [48] = {.lex_state = 421},
  [49] = {.lex_state = 423},
  [50] = {.lex_state = 423},
  [51] = {.lex_state = 423},
  [52] = {.lex_state = 423},
  [53] = {.lex_state = 423},
  [54] = {.lex_state = 423},
  [55] = {.lex_state = 423},
  [56] = {.lex_state = 423},
  [57] = {.lex_state = 421},
  [58] = {.lex_state = 423},
  [59] = {.lex_state = 423},
  [60] = {.lex_state = 421},
  [61] = {.lex_state = 421},
  [62] = {.lex_state = 421},
  [63] = {.lex_state = 421},
  [64] = {.lex_state = 421},
  [65] = {.lex_state = 421},
  [66] = {.lex_state = 421},
  [67] = {.lex_state = 421},
  [68] = {.lex_state = 421},
  [69] = {.lex_state = 421},
  [70] = {.lex_state = 421},
  [71] = {.lex_state = 424},
  [72] = {.lex_state = 424},
  [73] = {.lex_state = 424},
  [74] = {.lex_state = 424},
  [75] = {.lex_state = 424},
  [76] = {.lex_state = 424},
  [77] = {.lex_state = 425},
  [78] = {.lex_state = 425},
  [79] = {.lex_state = 425},
  [80] = {.lex_state = 425},
  [81] = {.lex_state = 425},
  [82] = {.lex_state = 425},
  [83] = {.lex_state = 425},
  [84] = {.lex_state = 425},
  [85] = {.lex_state = 425},
  [86] = {.lex_state = 425},
  [87] = {.lex_state = 425},
  [88] = {.lex_state = 425},
  [89] = {.lex_state = 425},
  [90] = {.lex_state = 425},
  [91] = {.lex_state = 425},
  [92] = {.lex_state = 425},
  [93] = {.lex_state = 425},
  [94] = {.lex_state = 425},
  [95] = {.lex_state = 425},
  [96] = {.lex_state = 425},
  [97] = {.lex_state = 425},
  [98] = {.lex_state = 425},
  [99] = {.lex_state = 425},
  [100] = {.lex_state = 425},
  [101] = {.lex_state = 425},
  [102] = {.lex_state = 425},
  [103] = {.lex_state = 425},
  [104] = {.lex_state = 425},
  [105] = {.lex_state = 425},
  [106] = {.lex_state = 425},
  [107] = {.lex_state = 425},
  [108] = {.lex_state = 425},
  [109] = {.lex_state = 425},
  [110] = {.lex_state = 425},
  [111] = {.lex_state = 425},
  [112] = {.lex_state = 425},
  [113] = {.lex_state = 425},
  [114] = {.lex_state = 425},
  [115] = {.lex_state = 425},
  [116] = {.lex_state = 425},
  [117] = {.lex_state = 425},
  [118] = {.lex_state = 425},
  [119] = {.lex_state = 425},
  [120] = {.lex_state = 425},
  [121] = {.lex_state = 425},
  [122] = {.lex_state = 425},
  [123] = {.lex_state = 425},
  [124] = {.lex_state = 425},
  [125] = {.lex_state = 425},
  [126] = {.lex_state = 425},
  [127] = {.lex_state = 425},
  [128] = {.lex_state = 425},
  [129] = {.lex_state = 425},
  [130] = {.lex_state = 425},
  [131] = {.lex_state = 425},
  [132] = {.lex_state = 425},
  [133] = {.lex_state = 425},
  [134] = {.lex_state = 425},
  [135] = {.lex_state = 425},
  [136] = {.lex_state = 425},
  [137] = {.lex_state = 425},
  [138] = {.lex_state = 425},
  [139] = {.lex_state = 425},
  [140] = {.lex_state = 425},
  [141] = {.lex_state = 425},
  [142] = {.lex_state = 425},
  [143] = {.lex_state = 425},
  [144] = {.lex_state = 425},
  [145] = {.lex_state = 425},
  [146] = {.lex_state = 425},
  [147] = {.lex_state = 425},
  [148] = {.lex_state = 425},
  [149] = {.lex_state = 425},
  [150] = {.lex_state = 425},
  [151] = {.lex_state = 425},
  [152] = {.lex_state = 425},
  [153] = {.lex_state = 425},
  [154] = {.lex_state = 425},
  [155] = {.lex_state = 425},
  [156] = {.lex_state = 425},
  [157] = {.lex_state = 425},
  [158] = {.lex_state = 425},
  [159] = {.lex_state = 425},
  [160] = {.lex_state = 425},
  [161] = {.lex_state = 425},
  [162] = {.lex_state = 425},
  [163] = {.lex_state = 425},
  [164] = {.lex_state = 425},
  [165] = {.lex_state = 425},
  [166] = {.lex_state = 425},
  [167] = {.lex_state = 425},
  [168] = {.lex_state = 425},
  [169] = {.lex_state = 425},
  [170] = {.lex_state = 425},
  [171] = {.lex_state = 425},
  [172] = {.lex_state = 425},
  [173] = {.lex_state = 425},
  [174] = {.lex_state = 425},
  [175] = {.lex_state = 425},
  [176] = {.lex_state = 425},
  [177] = {.lex_state = 425},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 425},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 425},
  [183] = {.lex_state = 425},
  [184] = {.lex_state = 425},
  [185] = {.lex_state = 425},
  [186] = {.lex_state = 425},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 425},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 425},
  [191] = {.lex_state = 425},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 425},
  [195] = {.lex_state = 425},
  [196] = {.lex_state = 425},
  [197] = {.lex_state = 425},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 425},
  [200] = {.lex_state = 425},
  [201] = {.lex_state = 425},
  [202] = {.lex_state = 425},
  [203] = {.lex_state = 425},
  [204] = {.lex_state = 425},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 425},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 425},
  [209] = {.lex_state = 425},
  [210] = {.lex_state = 425},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 425},
  [213] = {.lex_state = 425},
  [214] = {.lex_state = 425},
  [215] = {.lex_state = 425},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 425},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 425},
  [224] = {.lex_state = 425},
  [225] = {.lex_state = 425},
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
  [251] = {.lex_state = 421},
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
  [265] = {.lex_state = 421},
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
  [290] = {.lex_state = 421},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 425},
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
  [311] = {.lex_state = 421},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 425},
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
  [338] = {.lex_state = 425},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 425},
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
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 425},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
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
    ACTIONS(212), 1,
      sym_integer,
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
    STATE(18), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(208), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [367] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_integer,
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
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [409] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(226), 1,
      sym_integer,
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
    STATE(32), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(224), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [451] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_integer,
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
    STATE(23), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(230), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [493] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_integer,
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
    STATE(22), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(234), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [535] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_integer,
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
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [577] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_integer,
    STATE(335), 1,
      sym_children,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(116), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_integer,
    STATE(343), 1,
      sym_children,
    ACTIONS(222), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(135), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(27), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(242), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [661] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(252), 1,
      sym_integer,
    STATE(315), 1,
      sym_children,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(137), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(28), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(250), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [703] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(256), 1,
      sym_integer,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(149), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(30), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(254), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [745] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_integer,
    STATE(278), 1,
      sym_children,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(149), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(258), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [787] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_integer,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(150), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(258), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [829] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym_integer,
    STATE(280), 1,
      sym_children,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(150), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(31), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(262), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [871] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_integer,
    STATE(335), 1,
      sym_children,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(170), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(258), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [913] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_integer,
    STATE(336), 1,
      sym_children,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(171), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(258), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [955] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_integer,
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
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(218), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(274), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
    STATE(33), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(268), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [1028] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(283), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(266), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(34), 4,
      sym__value,
      sym__symbol,
      sym_boolean,
      aux_sym_annotation_node_repeat1,
    ACTIONS(277), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [1059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(290), 2,
      sym_identifier,
      sym_integer,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(297), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(300), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(294), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1121] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(307), 2,
      sym_identifier,
      sym_integer,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(305), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1152] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(312), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(315), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(309), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(290), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(286), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(307), 2,
      sym_identifier,
      sym_integer,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(305), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1245] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(128), 1,
      sym_occurrence_modifier,
    STATE(129), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(279), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(87), 1,
      sym_occurrence_modifier,
    STATE(88), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(230), 1,
      sym_children,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(338), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [1343] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(176), 1,
      sym_occurrence_modifier,
    STATE(203), 1,
      sym_property,
    STATE(279), 1,
      sym_children,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1381] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(141), 1,
      sym_occurrence_modifier,
    STATE(142), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(322), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(342), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1419] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(143), 1,
      sym_occurrence_modifier,
    STATE(144), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(329), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(344), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1457] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(145), 1,
      sym_occurrence_modifier,
    STATE(146), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(230), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(350), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(348), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [1519] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(85), 1,
      sym_occurrence_modifier,
    STATE(86), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(329), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(108), 1,
      sym_occurrence_modifier,
    STATE(109), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(232), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1595] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(110), 1,
      sym_occurrence_modifier,
    STATE(111), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(234), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1633] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(162), 1,
      sym_occurrence_modifier,
    STATE(163), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(232), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(164), 1,
      sym_occurrence_modifier,
    STATE(165), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(234), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(354), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1709] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(166), 1,
      sym_occurrence_modifier,
    STATE(167), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(236), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1747] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(112), 1,
      sym_occurrence_modifier,
    STATE(113), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(236), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(97), 1,
      sym_occurrence_modifier,
    STATE(98), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(285), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_EQ,
    ACTIONS(350), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(348), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [1847] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_between,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(83), 1,
      sym_occurrence_modifier,
    STATE(84), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(322), 1,
      sym_children,
    ACTIONS(334), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(332), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1885] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_between,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(77), 1,
      sym_occurrence_modifier,
    STATE(153), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(285), 1,
      sym_children,
    ACTIONS(322), 2,
      anon_sym_at_DASHleast,
      anon_sym_at_DASHmost,
    ACTIONS(358), 2,
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(320), 3,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_many,
  [1923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(307), 2,
      sym_identifier,
      sym_integer,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(305), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(290), 2,
      sym_identifier,
      sym_integer,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [1977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(366), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(209), 3,
      sym__value,
      sym__symbol,
      sym_boolean,
    ACTIONS(362), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [2002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(290), 2,
      sym_identifier,
      sym_integer,
    STATE(69), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(288), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [2029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(338), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [2050] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_enum_constraint_repeat1,
    ACTIONS(248), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(307), 2,
      sym_identifier,
      sym_integer,
    STATE(70), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(305), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [2077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(372), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(206), 3,
      sym__value,
      sym__symbol,
      sym_boolean,
    ACTIONS(368), 6,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_cel_literal,
      sym_number,
      sym_null,
  [2102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(376), 2,
      sym_identifier,
      sym_integer,
    STATE(312), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(374), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [2126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(380), 2,
      sym_identifier,
      sym_integer,
    STATE(301), 3,
      sym__literal_or_symbol,
      sym__symbol,
      sym_boolean,
    ACTIONS(378), 5,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      sym_null,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(382), 9,
      anon_sym_RBRACE,
      sym__terminator,
      sym_namespaced_identifier,
      sym_string,
      sym_raw_string,
      sym_number,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_null,
  [2188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(133), 1,
      sym_openness_modifier,
    STATE(136), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(286), 1,
      sym_children,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      sym__terminator,
    ACTIONS(388), 2,
      anon_sym_open,
      anon_sym_closed,
  [2218] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
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
      anon_sym_RBRACE,
      sym__terminator,
    ACTIONS(390), 2,
      anon_sym_open,
      anon_sym_closed,
  [2248] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(100), 1,
      sym_openness_modifier,
    STATE(101), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(203), 1,
      sym_property,
    STATE(344), 1,
      sym_children,
    ACTIONS(388), 2,
      anon_sym_open,
      anon_sym_closed,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym__terminator,
  [2278] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(155), 1,
      sym_openness_modifier,
    STATE(156), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(344), 1,
      sym_children,
    ACTIONS(390), 2,
      anon_sym_open,
      anon_sym_closed,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      sym__terminator,
  [2308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(186), 1,
      sym_openness_modifier,
    STATE(190), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(289), 1,
      sym_children,
    ACTIONS(390), 2,
      anon_sym_open,
      anon_sym_closed,
  [2334] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(201), 1,
      sym_openness_modifier,
    STATE(202), 1,
      aux_sym_schema_declaration_repeat1,
    STATE(204), 1,
      sym_property,
    STATE(294), 1,
      sym_children,
    ACTIONS(390), 2,
      anon_sym_open,
      anon_sym_closed,
  [2360] = 7,
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
  [2383] = 6,
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
  [2404] = 7,
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
  [2427] = 7,
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
  [2450] = 7,
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
  [2473] = 7,
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
  [2496] = 7,
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
  [2519] = 7,
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
  [2542] = 7,
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
  [2565] = 7,
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
  [2588] = 7,
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
  [2611] = 7,
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
  [2634] = 7,
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
  [2657] = 7,
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
  [2680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym__terminator,
    STATE(182), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [2701] = 6,
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
  [2722] = 6,
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
  [2743] = 7,
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
  [2766] = 6,
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
  [2787] = 7,
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
  [2810] = 7,
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
  [2833] = 7,
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
  [2856] = 7,
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
  [2879] = 7,
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
  [2902] = 7,
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
  [2925] = 7,
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
  [2948] = 7,
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
  [2971] = 7,
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
  [2994] = 7,
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
  [3017] = 7,
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
  [3040] = 7,
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
  [3063] = 7,
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
  [3086] = 7,
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
  [3109] = 7,
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
  [3132] = 7,
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
  [3155] = 7,
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
  [3178] = 7,
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
  [3201] = 7,
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
  [3224] = 7,
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
  [3247] = 6,
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
  [3268] = 6,
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
  [3289] = 7,
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
  [3312] = 7,
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
  [3335] = 7,
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
  [3358] = 7,
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
  [3381] = 6,
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
  [3402] = 7,
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
  [3425] = 6,
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
  [3446] = 7,
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
  [3469] = 7,
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
  [3492] = 7,
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
  [3515] = 7,
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
  [3538] = 7,
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
  [3561] = 7,
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
  [3584] = 7,
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
  [3607] = 7,
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
  [3630] = 7,
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
  [3653] = 7,
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
  [3676] = 6,
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
  [3697] = 7,
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
  [3720] = 6,
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
  [3741] = 7,
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
  [3764] = 7,
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
  [3787] = 7,
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
  [3810] = 7,
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
  [3833] = 7,
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
  [3856] = 7,
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
  [3879] = 7,
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
  [3902] = 7,
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
  [3925] = 7,
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
  [3948] = 7,
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
  [3971] = 7,
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
  [3994] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(335), 1,
      sym_children,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      sym__terminator,
    STATE(177), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [4015] = 6,
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
  [4036] = 6,
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
  [4057] = 7,
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
  [4080] = 7,
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
  [4103] = 7,
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
  [4126] = 7,
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
  [4149] = 7,
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
  [4172] = 7,
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
  [4195] = 7,
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
  [4218] = 7,
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
  [4241] = 7,
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
  [4264] = 7,
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
  [4287] = 7,
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
  [4310] = 7,
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
  [4333] = 7,
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
  [4356] = 7,
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
  [4379] = 7,
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
  [4402] = 7,
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
  [4425] = 7,
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
  [4448] = 7,
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
  [4471] = 6,
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
  [4492] = 6,
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
  [4513] = 7,
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
  [4536] = 7,
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
  [4559] = 7,
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
  [4582] = 7,
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
  [4605] = 7,
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
  [4628] = 4,
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
  [4644] = 5,
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
  [4662] = 5,
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
  [4680] = 5,
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
  [4698] = 5,
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
  [4716] = 4,
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
  [4732] = 5,
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
  [4750] = 6,
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
  [4769] = 6,
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
  [4788] = 6,
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
  [4807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_integer,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
      sym_number,
  [4820] = 6,
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
  [4839] = 4,
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
  [4854] = 6,
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
  [4873] = 6,
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
  [4892] = 4,
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
  [4907] = 4,
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
  [4922] = 6,
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
  [4941] = 6,
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
  [4960] = 6,
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
    STATE(257), 1,
      sym_children,
  [4998] = 4,
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
  [5013] = 6,
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
  [5032] = 6,
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
  [5051] = 6,
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
  [5070] = 6,
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
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5109] = 5,
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
  [5125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5135] = 5,
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
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5181] = 5,
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
  [5197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5237] = 5,
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
  [5253] = 5,
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
  [5269] = 5,
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
  [5285] = 5,
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
  [5301] = 5,
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
  [5317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5327] = 5,
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
  [5343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__terminator,
      sym_identifier,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__terminator,
      sym_identifier,
  [5373] = 5,
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
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_namespaced_identifier,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(299), 1,
      sym__symbol,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_namespaced_identifier,
    ACTIONS(646), 1,
      sym_identifier,
    STATE(300), 1,
      sym__symbol,
  [5748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(178), 1,
      aux_sym_range_constraint_repeat1,
  [5914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_namespaced_identifier,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(308), 1,
      sym__symbol,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(93), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_namespaced_identifier,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(306), 1,
      sym__symbol,
  [6176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(95), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_integer,
    ACTIONS(499), 1,
      sym_number,
    STATE(179), 1,
      aux_sym_range_constraint_repeat1,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(124), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(151), 2,
      sym_property,
      aux_sym_info_declaration_repeat1,
  [6456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__terminator,
  [6483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_children,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      sym_children,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_children,
  [6513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_children,
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(305), 1,
      sym_children,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_children,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_children,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      sym_children,
  [6563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_integer,
  [6570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_string,
  [6577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_integer,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_integer,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_string,
  [6598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_string,
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_string,
  [6612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_integer,
  [6619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_string,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_raw_string,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_cel_literal,
  [6640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_string,
  [6647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_EQ,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_cel_literal,
  [6661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_string,
  [6668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [6675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_integer,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_integer,
  [6689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_string,
  [6696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_string,
  [6703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_identifier,
  [6710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_string,
  [6717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_string,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_string,
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_integer,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_string,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_integer,
  [6759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_integer,
  [6766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_string,
  [6773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_string,
  [6780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym_string,
  [6787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_integer,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_string,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_integer,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_string,
  [6815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [6822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_integer,
  [6829] = 2,
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
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 451,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 535,
  [SMALL_STATE(23)] = 577,
  [SMALL_STATE(24)] = 619,
  [SMALL_STATE(25)] = 661,
  [SMALL_STATE(26)] = 703,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 829,
  [SMALL_STATE(30)] = 871,
  [SMALL_STATE(31)] = 913,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1028,
  [SMALL_STATE(35)] = 1059,
  [SMALL_STATE(36)] = 1090,
  [SMALL_STATE(37)] = 1121,
  [SMALL_STATE(38)] = 1152,
  [SMALL_STATE(39)] = 1183,
  [SMALL_STATE(40)] = 1214,
  [SMALL_STATE(41)] = 1245,
  [SMALL_STATE(42)] = 1283,
  [SMALL_STATE(43)] = 1321,
  [SMALL_STATE(44)] = 1343,
  [SMALL_STATE(45)] = 1381,
  [SMALL_STATE(46)] = 1419,
  [SMALL_STATE(47)] = 1457,
  [SMALL_STATE(48)] = 1495,
  [SMALL_STATE(49)] = 1519,
  [SMALL_STATE(50)] = 1557,
  [SMALL_STATE(51)] = 1595,
  [SMALL_STATE(52)] = 1633,
  [SMALL_STATE(53)] = 1671,
  [SMALL_STATE(54)] = 1709,
  [SMALL_STATE(55)] = 1747,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1823,
  [SMALL_STATE(58)] = 1847,
  [SMALL_STATE(59)] = 1885,
  [SMALL_STATE(60)] = 1923,
  [SMALL_STATE(61)] = 1950,
  [SMALL_STATE(62)] = 1977,
  [SMALL_STATE(63)] = 2002,
  [SMALL_STATE(64)] = 2029,
  [SMALL_STATE(65)] = 2050,
  [SMALL_STATE(66)] = 2077,
  [SMALL_STATE(67)] = 2102,
  [SMALL_STATE(68)] = 2126,
  [SMALL_STATE(69)] = 2150,
  [SMALL_STATE(70)] = 2169,
  [SMALL_STATE(71)] = 2188,
  [SMALL_STATE(72)] = 2218,
  [SMALL_STATE(73)] = 2248,
  [SMALL_STATE(74)] = 2278,
  [SMALL_STATE(75)] = 2308,
  [SMALL_STATE(76)] = 2334,
  [SMALL_STATE(77)] = 2360,
  [SMALL_STATE(78)] = 2383,
  [SMALL_STATE(79)] = 2404,
  [SMALL_STATE(80)] = 2427,
  [SMALL_STATE(81)] = 2450,
  [SMALL_STATE(82)] = 2473,
  [SMALL_STATE(83)] = 2496,
  [SMALL_STATE(84)] = 2519,
  [SMALL_STATE(85)] = 2542,
  [SMALL_STATE(86)] = 2565,
  [SMALL_STATE(87)] = 2588,
  [SMALL_STATE(88)] = 2611,
  [SMALL_STATE(89)] = 2634,
  [SMALL_STATE(90)] = 2657,
  [SMALL_STATE(91)] = 2680,
  [SMALL_STATE(92)] = 2701,
  [SMALL_STATE(93)] = 2722,
  [SMALL_STATE(94)] = 2743,
  [SMALL_STATE(95)] = 2766,
  [SMALL_STATE(96)] = 2787,
  [SMALL_STATE(97)] = 2810,
  [SMALL_STATE(98)] = 2833,
  [SMALL_STATE(99)] = 2856,
  [SMALL_STATE(100)] = 2879,
  [SMALL_STATE(101)] = 2902,
  [SMALL_STATE(102)] = 2925,
  [SMALL_STATE(103)] = 2948,
  [SMALL_STATE(104)] = 2971,
  [SMALL_STATE(105)] = 2994,
  [SMALL_STATE(106)] = 3017,
  [SMALL_STATE(107)] = 3040,
  [SMALL_STATE(108)] = 3063,
  [SMALL_STATE(109)] = 3086,
  [SMALL_STATE(110)] = 3109,
  [SMALL_STATE(111)] = 3132,
  [SMALL_STATE(112)] = 3155,
  [SMALL_STATE(113)] = 3178,
  [SMALL_STATE(114)] = 3201,
  [SMALL_STATE(115)] = 3224,
  [SMALL_STATE(116)] = 3247,
  [SMALL_STATE(117)] = 3268,
  [SMALL_STATE(118)] = 3289,
  [SMALL_STATE(119)] = 3312,
  [SMALL_STATE(120)] = 3335,
  [SMALL_STATE(121)] = 3358,
  [SMALL_STATE(122)] = 3381,
  [SMALL_STATE(123)] = 3402,
  [SMALL_STATE(124)] = 3425,
  [SMALL_STATE(125)] = 3446,
  [SMALL_STATE(126)] = 3469,
  [SMALL_STATE(127)] = 3492,
  [SMALL_STATE(128)] = 3515,
  [SMALL_STATE(129)] = 3538,
  [SMALL_STATE(130)] = 3561,
  [SMALL_STATE(131)] = 3584,
  [SMALL_STATE(132)] = 3607,
  [SMALL_STATE(133)] = 3630,
  [SMALL_STATE(134)] = 3653,
  [SMALL_STATE(135)] = 3676,
  [SMALL_STATE(136)] = 3697,
  [SMALL_STATE(137)] = 3720,
  [SMALL_STATE(138)] = 3741,
  [SMALL_STATE(139)] = 3764,
  [SMALL_STATE(140)] = 3787,
  [SMALL_STATE(141)] = 3810,
  [SMALL_STATE(142)] = 3833,
  [SMALL_STATE(143)] = 3856,
  [SMALL_STATE(144)] = 3879,
  [SMALL_STATE(145)] = 3902,
  [SMALL_STATE(146)] = 3925,
  [SMALL_STATE(147)] = 3948,
  [SMALL_STATE(148)] = 3971,
  [SMALL_STATE(149)] = 3994,
  [SMALL_STATE(150)] = 4015,
  [SMALL_STATE(151)] = 4036,
  [SMALL_STATE(152)] = 4057,
  [SMALL_STATE(153)] = 4080,
  [SMALL_STATE(154)] = 4103,
  [SMALL_STATE(155)] = 4126,
  [SMALL_STATE(156)] = 4149,
  [SMALL_STATE(157)] = 4172,
  [SMALL_STATE(158)] = 4195,
  [SMALL_STATE(159)] = 4218,
  [SMALL_STATE(160)] = 4241,
  [SMALL_STATE(161)] = 4264,
  [SMALL_STATE(162)] = 4287,
  [SMALL_STATE(163)] = 4310,
  [SMALL_STATE(164)] = 4333,
  [SMALL_STATE(165)] = 4356,
  [SMALL_STATE(166)] = 4379,
  [SMALL_STATE(167)] = 4402,
  [SMALL_STATE(168)] = 4425,
  [SMALL_STATE(169)] = 4448,
  [SMALL_STATE(170)] = 4471,
  [SMALL_STATE(171)] = 4492,
  [SMALL_STATE(172)] = 4513,
  [SMALL_STATE(173)] = 4536,
  [SMALL_STATE(174)] = 4559,
  [SMALL_STATE(175)] = 4582,
  [SMALL_STATE(176)] = 4605,
  [SMALL_STATE(177)] = 4628,
  [SMALL_STATE(178)] = 4644,
  [SMALL_STATE(179)] = 4662,
  [SMALL_STATE(180)] = 4680,
  [SMALL_STATE(181)] = 4698,
  [SMALL_STATE(182)] = 4716,
  [SMALL_STATE(183)] = 4732,
  [SMALL_STATE(184)] = 4750,
  [SMALL_STATE(185)] = 4769,
  [SMALL_STATE(186)] = 4788,
  [SMALL_STATE(187)] = 4807,
  [SMALL_STATE(188)] = 4820,
  [SMALL_STATE(189)] = 4839,
  [SMALL_STATE(190)] = 4854,
  [SMALL_STATE(191)] = 4873,
  [SMALL_STATE(192)] = 4892,
  [SMALL_STATE(193)] = 4907,
  [SMALL_STATE(194)] = 4922,
  [SMALL_STATE(195)] = 4941,
  [SMALL_STATE(196)] = 4960,
  [SMALL_STATE(197)] = 4979,
  [SMALL_STATE(198)] = 4998,
  [SMALL_STATE(199)] = 5013,
  [SMALL_STATE(200)] = 5032,
  [SMALL_STATE(201)] = 5051,
  [SMALL_STATE(202)] = 5070,
  [SMALL_STATE(203)] = 5089,
  [SMALL_STATE(204)] = 5099,
  [SMALL_STATE(205)] = 5109,
  [SMALL_STATE(206)] = 5125,
  [SMALL_STATE(207)] = 5135,
  [SMALL_STATE(208)] = 5151,
  [SMALL_STATE(209)] = 5161,
  [SMALL_STATE(210)] = 5171,
  [SMALL_STATE(211)] = 5181,
  [SMALL_STATE(212)] = 5197,
  [SMALL_STATE(213)] = 5207,
  [SMALL_STATE(214)] = 5217,
  [SMALL_STATE(215)] = 5227,
  [SMALL_STATE(216)] = 5237,
  [SMALL_STATE(217)] = 5253,
  [SMALL_STATE(218)] = 5269,
  [SMALL_STATE(219)] = 5285,
  [SMALL_STATE(220)] = 5301,
  [SMALL_STATE(221)] = 5317,
  [SMALL_STATE(222)] = 5327,
  [SMALL_STATE(223)] = 5343,
  [SMALL_STATE(224)] = 5353,
  [SMALL_STATE(225)] = 5363,
  [SMALL_STATE(226)] = 5373,
  [SMALL_STATE(227)] = 5389,
  [SMALL_STATE(228)] = 5398,
  [SMALL_STATE(229)] = 5407,
  [SMALL_STATE(230)] = 5416,
  [SMALL_STATE(231)] = 5425,
  [SMALL_STATE(232)] = 5434,
  [SMALL_STATE(233)] = 5443,
  [SMALL_STATE(234)] = 5452,
  [SMALL_STATE(235)] = 5461,
  [SMALL_STATE(236)] = 5470,
  [SMALL_STATE(237)] = 5479,
  [SMALL_STATE(238)] = 5488,
  [SMALL_STATE(239)] = 5497,
  [SMALL_STATE(240)] = 5506,
  [SMALL_STATE(241)] = 5515,
  [SMALL_STATE(242)] = 5524,
  [SMALL_STATE(243)] = 5533,
  [SMALL_STATE(244)] = 5542,
  [SMALL_STATE(245)] = 5551,
  [SMALL_STATE(246)] = 5560,
  [SMALL_STATE(247)] = 5569,
  [SMALL_STATE(248)] = 5578,
  [SMALL_STATE(249)] = 5587,
  [SMALL_STATE(250)] = 5596,
  [SMALL_STATE(251)] = 5605,
  [SMALL_STATE(252)] = 5618,
  [SMALL_STATE(253)] = 5627,
  [SMALL_STATE(254)] = 5636,
  [SMALL_STATE(255)] = 5645,
  [SMALL_STATE(256)] = 5654,
  [SMALL_STATE(257)] = 5663,
  [SMALL_STATE(258)] = 5672,
  [SMALL_STATE(259)] = 5681,
  [SMALL_STATE(260)] = 5690,
  [SMALL_STATE(261)] = 5699,
  [SMALL_STATE(262)] = 5708,
  [SMALL_STATE(263)] = 5717,
  [SMALL_STATE(264)] = 5726,
  [SMALL_STATE(265)] = 5735,
  [SMALL_STATE(266)] = 5748,
  [SMALL_STATE(267)] = 5757,
  [SMALL_STATE(268)] = 5766,
  [SMALL_STATE(269)] = 5775,
  [SMALL_STATE(270)] = 5784,
  [SMALL_STATE(271)] = 5793,
  [SMALL_STATE(272)] = 5802,
  [SMALL_STATE(273)] = 5811,
  [SMALL_STATE(274)] = 5820,
  [SMALL_STATE(275)] = 5829,
  [SMALL_STATE(276)] = 5838,
  [SMALL_STATE(277)] = 5847,
  [SMALL_STATE(278)] = 5856,
  [SMALL_STATE(279)] = 5865,
  [SMALL_STATE(280)] = 5874,
  [SMALL_STATE(281)] = 5883,
  [SMALL_STATE(282)] = 5892,
  [SMALL_STATE(283)] = 5901,
  [SMALL_STATE(284)] = 5914,
  [SMALL_STATE(285)] = 5923,
  [SMALL_STATE(286)] = 5932,
  [SMALL_STATE(287)] = 5941,
  [SMALL_STATE(288)] = 5950,
  [SMALL_STATE(289)] = 5959,
  [SMALL_STATE(290)] = 5968,
  [SMALL_STATE(291)] = 5981,
  [SMALL_STATE(292)] = 5990,
  [SMALL_STATE(293)] = 5999,
  [SMALL_STATE(294)] = 6008,
  [SMALL_STATE(295)] = 6017,
  [SMALL_STATE(296)] = 6028,
  [SMALL_STATE(297)] = 6037,
  [SMALL_STATE(298)] = 6046,
  [SMALL_STATE(299)] = 6055,
  [SMALL_STATE(300)] = 6064,
  [SMALL_STATE(301)] = 6073,
  [SMALL_STATE(302)] = 6082,
  [SMALL_STATE(303)] = 6091,
  [SMALL_STATE(304)] = 6100,
  [SMALL_STATE(305)] = 6109,
  [SMALL_STATE(306)] = 6118,
  [SMALL_STATE(307)] = 6127,
  [SMALL_STATE(308)] = 6136,
  [SMALL_STATE(309)] = 6145,
  [SMALL_STATE(310)] = 6154,
  [SMALL_STATE(311)] = 6163,
  [SMALL_STATE(312)] = 6176,
  [SMALL_STATE(313)] = 6185,
  [SMALL_STATE(314)] = 6194,
  [SMALL_STATE(315)] = 6203,
  [SMALL_STATE(316)] = 6212,
  [SMALL_STATE(317)] = 6221,
  [SMALL_STATE(318)] = 6230,
  [SMALL_STATE(319)] = 6239,
  [SMALL_STATE(320)] = 6248,
  [SMALL_STATE(321)] = 6257,
  [SMALL_STATE(322)] = 6268,
  [SMALL_STATE(323)] = 6277,
  [SMALL_STATE(324)] = 6286,
  [SMALL_STATE(325)] = 6295,
  [SMALL_STATE(326)] = 6304,
  [SMALL_STATE(327)] = 6313,
  [SMALL_STATE(328)] = 6322,
  [SMALL_STATE(329)] = 6331,
  [SMALL_STATE(330)] = 6340,
  [SMALL_STATE(331)] = 6349,
  [SMALL_STATE(332)] = 6362,
  [SMALL_STATE(333)] = 6371,
  [SMALL_STATE(334)] = 6380,
  [SMALL_STATE(335)] = 6389,
  [SMALL_STATE(336)] = 6398,
  [SMALL_STATE(337)] = 6407,
  [SMALL_STATE(338)] = 6416,
  [SMALL_STATE(339)] = 6427,
  [SMALL_STATE(340)] = 6436,
  [SMALL_STATE(341)] = 6445,
  [SMALL_STATE(342)] = 6456,
  [SMALL_STATE(343)] = 6465,
  [SMALL_STATE(344)] = 6474,
  [SMALL_STATE(345)] = 6483,
  [SMALL_STATE(346)] = 6493,
  [SMALL_STATE(347)] = 6503,
  [SMALL_STATE(348)] = 6513,
  [SMALL_STATE(349)] = 6523,
  [SMALL_STATE(350)] = 6533,
  [SMALL_STATE(351)] = 6543,
  [SMALL_STATE(352)] = 6553,
  [SMALL_STATE(353)] = 6563,
  [SMALL_STATE(354)] = 6570,
  [SMALL_STATE(355)] = 6577,
  [SMALL_STATE(356)] = 6584,
  [SMALL_STATE(357)] = 6591,
  [SMALL_STATE(358)] = 6598,
  [SMALL_STATE(359)] = 6605,
  [SMALL_STATE(360)] = 6612,
  [SMALL_STATE(361)] = 6619,
  [SMALL_STATE(362)] = 6626,
  [SMALL_STATE(363)] = 6633,
  [SMALL_STATE(364)] = 6640,
  [SMALL_STATE(365)] = 6647,
  [SMALL_STATE(366)] = 6654,
  [SMALL_STATE(367)] = 6661,
  [SMALL_STATE(368)] = 6668,
  [SMALL_STATE(369)] = 6675,
  [SMALL_STATE(370)] = 6682,
  [SMALL_STATE(371)] = 6689,
  [SMALL_STATE(372)] = 6696,
  [SMALL_STATE(373)] = 6703,
  [SMALL_STATE(374)] = 6710,
  [SMALL_STATE(375)] = 6717,
  [SMALL_STATE(376)] = 6724,
  [SMALL_STATE(377)] = 6731,
  [SMALL_STATE(378)] = 6738,
  [SMALL_STATE(379)] = 6745,
  [SMALL_STATE(380)] = 6752,
  [SMALL_STATE(381)] = 6759,
  [SMALL_STATE(382)] = 6766,
  [SMALL_STATE(383)] = 6773,
  [SMALL_STATE(384)] = 6780,
  [SMALL_STATE(385)] = 6787,
  [SMALL_STATE(386)] = 6794,
  [SMALL_STATE(387)] = 6801,
  [SMALL_STATE(388)] = 6808,
  [SMALL_STATE(389)] = 6815,
  [SMALL_STATE(390)] = 6822,
  [SMALL_STATE(391)] = 6829,
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
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
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
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
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
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_annotation, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_node, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_node_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constraint, 3, 0, 38),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(69),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(69),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(43),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constraint, 2, 0, 12),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(70),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 2, 0, 28), SHIFT_REPEAT(64),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 2, 0, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 2, 0, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 2, 0, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_subject, 3, 0, 31),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop_subject, 3, 0, 31),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_subject, 3, 0, 32),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_subject, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constraint_repeat1, 1, 0, 11),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_constraint_repeat1, 1, 0, 11),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_props_subject, 2, 0, 0),
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
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [830] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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

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
#define STATE_COUNT 475
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 60

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_integer_literal = 2,
  sym_hex_literal = 3,
  sym_float_literal = 4,
  sym_escape_sequence = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_quoted_token1 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_quoted_token2 = 9,
  anon_sym_DOT = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_using = 12,
  anon_sym_SEMI = 13,
  anon_sym_translation_DASHdomain = 14,
  anon_sym_template = 15,
  anon_sym_COLON = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_after = 23,
  anon_sym_swapped = 24,
  anon_sym_LBRACK = 25,
  anon_sym_COMMA = 26,
  anon_sym_RBRACK = 27,
  anon_sym_as = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_typeof = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_bind = 34,
  anon_sym_bind_DASHproperty = 35,
  anon_sym__ = 36,
  anon_sym_C_ = 37,
  anon_sym_PIPE = 38,
  anon_sym_internal_DASHchild = 39,
  anon_sym_action = 40,
  anon_sym_menu = 41,
  anon_sym_section = 42,
  anon_sym_submenu = 43,
  anon_sym_item = 44,
  sym_line_comment = 45,
  sym_block_comment = 46,
  anon_sym_accessibility = 47,
  anon_sym_responses = 48,
  anon_sym_condition = 49,
  anon_sym_setters = 50,
  anon_sym_items = 51,
  anon_sym_mime_DASHtypes = 52,
  anon_sym_patterns = 53,
  anon_sym_suffixes = 54,
  anon_sym_layout = 55,
  anon_sym_marks = 56,
  anon_sym_mark = 57,
  anon_sym_widgets = 58,
  anon_sym_strings = 59,
  anon_sym_styles = 60,
  anon_sym_response = 61,
  anon_sym_EQ = 62,
  anon_sym_default = 63,
  sym_source_file = 64,
  sym__number = 65,
  sym_quoted = 66,
  sym_type_name = 67,
  sym_using = 68,
  sym_translation_domain = 69,
  sym_template = 70,
  sym_object = 71,
  sym_object_content = 72,
  sym_signal = 73,
  sym_property = 74,
  sym_array_value = 75,
  sym_closure_expression = 76,
  sym_lookup_expression = 77,
  sym_cast_expression = 78,
  sym_literal = 79,
  sym__type_literal = 80,
  sym__quoted_literal = 81,
  sym__number_literal = 82,
  sym__ident_literal = 83,
  sym__expression = 84,
  sym_binding = 85,
  sym_object_value = 86,
  sym_value = 87,
  sym_translated = 88,
  sym_flags = 89,
  sym_child_internal = 90,
  sym_child_annotation = 91,
  sym__child = 92,
  sym_menu = 93,
  sym__menu_child = 94,
  sym_menu_section = 95,
  sym_menu_submenu = 96,
  sym_menu_item = 97,
  sym_menu_attribute = 98,
  sym_string_value = 99,
  sym_menu_item_shorthand = 100,
  sym__extension = 101,
  sym_ext_accessibility = 102,
  sym_ext_adw_dialog = 103,
  sym_ext_adw_dialog_response = 104,
  sym_ext_adw_breakpoint_condition = 105,
  sym_ext_adw_breakpoint = 106,
  sym_ext_combo_box_items = 107,
  sym__ext_combo_box_item = 108,
  sym_ext_file_filter_mime_types = 109,
  sym_ext_file_filter_patterns = 110,
  sym_ext_file_filter_suffixes = 111,
  sym__ext_file_filter_item = 112,
  sym_ext_layout = 113,
  sym_ext_list_item_factory = 114,
  sym_ext_scale_marks = 115,
  sym_ext_scale_mark = 116,
  sym_ext_size_group_widgets = 117,
  sym__ext_size_group_widget = 118,
  sym_ext_string_list_strings = 119,
  sym__ext_strings_list_item = 120,
  sym_ext_styles = 121,
  sym__child_extension = 122,
  sym_ext_response = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_source_file_repeat2 = 125,
  aux_sym_quoted_repeat1 = 126,
  aux_sym_quoted_repeat2 = 127,
  aux_sym_object_content_repeat1 = 128,
  aux_sym_signal_repeat1 = 129,
  aux_sym_array_value_repeat1 = 130,
  aux_sym_closure_expression_repeat1 = 131,
  aux_sym__expression_repeat1 = 132,
  aux_sym_binding_repeat1 = 133,
  aux_sym_flags_repeat1 = 134,
  aux_sym_menu_repeat1 = 135,
  aux_sym_menu_section_repeat1 = 136,
  aux_sym_menu_item_repeat1 = 137,
  aux_sym_ext_accessibility_repeat1 = 138,
  aux_sym_ext_adw_dialog_repeat1 = 139,
  aux_sym_ext_adw_breakpoint_repeat1 = 140,
  aux_sym_ext_combo_box_items_repeat1 = 141,
  aux_sym_ext_file_filter_mime_types_repeat1 = 142,
  aux_sym_ext_scale_marks_repeat1 = 143,
  aux_sym_ext_size_group_widgets_repeat1 = 144,
  aux_sym_ext_string_list_strings_repeat1 = 145,
  aux_sym_ext_styles_repeat1 = 146,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_integer_literal] = "integer_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_float_literal] = "float_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_token1] = "quoted_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_token2] = "quoted_token2",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_using] = "using",
  [anon_sym_SEMI] = ";",
  [anon_sym_translation_DASHdomain] = "translation-domain",
  [anon_sym_template] = "template",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_after] = "after",
  [anon_sym_swapped] = "swapped",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_as] = "as",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_typeof] = "typeof",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_bind] = "bind",
  [anon_sym_bind_DASHproperty] = "bind-property",
  [anon_sym__] = "_",
  [anon_sym_C_] = "C_",
  [anon_sym_PIPE] = "|",
  [anon_sym_internal_DASHchild] = "internal-child",
  [anon_sym_action] = "action",
  [anon_sym_menu] = "menu",
  [anon_sym_section] = "section",
  [anon_sym_submenu] = "submenu",
  [anon_sym_item] = "item",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_accessibility] = "accessibility",
  [anon_sym_responses] = "responses",
  [anon_sym_condition] = "condition",
  [anon_sym_setters] = "setters",
  [anon_sym_items] = "items",
  [anon_sym_mime_DASHtypes] = "mime-types",
  [anon_sym_patterns] = "patterns",
  [anon_sym_suffixes] = "suffixes",
  [anon_sym_layout] = "layout",
  [anon_sym_marks] = "marks",
  [anon_sym_mark] = "mark",
  [anon_sym_widgets] = "widgets",
  [anon_sym_strings] = "strings",
  [anon_sym_styles] = "styles",
  [anon_sym_response] = "response",
  [anon_sym_EQ] = "=",
  [anon_sym_default] = "default",
  [sym_source_file] = "source_file",
  [sym__number] = "_number",
  [sym_quoted] = "quoted",
  [sym_type_name] = "type_name",
  [sym_using] = "using",
  [sym_translation_domain] = "translation_domain",
  [sym_template] = "template",
  [sym_object] = "object",
  [sym_object_content] = "object_content",
  [sym_signal] = "signal",
  [sym_property] = "property",
  [sym_array_value] = "array_value",
  [sym_closure_expression] = "closure_expression",
  [sym_lookup_expression] = "lookup_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_literal] = "literal",
  [sym__type_literal] = "_type_literal",
  [sym__quoted_literal] = "_quoted_literal",
  [sym__number_literal] = "_number_literal",
  [sym__ident_literal] = "_ident_literal",
  [sym__expression] = "_expression",
  [sym_binding] = "binding",
  [sym_object_value] = "object_value",
  [sym_value] = "value",
  [sym_translated] = "translated",
  [sym_flags] = "flags",
  [sym_child_internal] = "child_internal",
  [sym_child_annotation] = "child_annotation",
  [sym__child] = "_child",
  [sym_menu] = "menu",
  [sym__menu_child] = "_menu_child",
  [sym_menu_section] = "menu_section",
  [sym_menu_submenu] = "menu_submenu",
  [sym_menu_item] = "menu_item",
  [sym_menu_attribute] = "menu_attribute",
  [sym_string_value] = "string_value",
  [sym_menu_item_shorthand] = "menu_item_shorthand",
  [sym__extension] = "_extension",
  [sym_ext_accessibility] = "ext_accessibility",
  [sym_ext_adw_dialog] = "ext_adw_dialog",
  [sym_ext_adw_dialog_response] = "ext_adw_dialog_response",
  [sym_ext_adw_breakpoint_condition] = "ext_adw_breakpoint_condition",
  [sym_ext_adw_breakpoint] = "ext_adw_breakpoint",
  [sym_ext_combo_box_items] = "ext_combo_box_items",
  [sym__ext_combo_box_item] = "_ext_combo_box_item",
  [sym_ext_file_filter_mime_types] = "ext_file_filter_mime_types",
  [sym_ext_file_filter_patterns] = "ext_file_filter_patterns",
  [sym_ext_file_filter_suffixes] = "ext_file_filter_suffixes",
  [sym__ext_file_filter_item] = "_ext_file_filter_item",
  [sym_ext_layout] = "ext_layout",
  [sym_ext_list_item_factory] = "ext_list_item_factory",
  [sym_ext_scale_marks] = "ext_scale_marks",
  [sym_ext_scale_mark] = "ext_scale_mark",
  [sym_ext_size_group_widgets] = "ext_size_group_widgets",
  [sym__ext_size_group_widget] = "_ext_size_group_widget",
  [sym_ext_string_list_strings] = "ext_string_list_strings",
  [sym__ext_strings_list_item] = "_ext_strings_list_item",
  [sym_ext_styles] = "ext_styles",
  [sym__child_extension] = "_child_extension",
  [sym_ext_response] = "ext_response",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_quoted_repeat1] = "quoted_repeat1",
  [aux_sym_quoted_repeat2] = "quoted_repeat2",
  [aux_sym_object_content_repeat1] = "object_content_repeat1",
  [aux_sym_signal_repeat1] = "signal_repeat1",
  [aux_sym_array_value_repeat1] = "array_value_repeat1",
  [aux_sym_closure_expression_repeat1] = "closure_expression_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
  [aux_sym_flags_repeat1] = "flags_repeat1",
  [aux_sym_menu_repeat1] = "menu_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym_menu_item_repeat1] = "menu_item_repeat1",
  [aux_sym_ext_accessibility_repeat1] = "ext_accessibility_repeat1",
  [aux_sym_ext_adw_dialog_repeat1] = "ext_adw_dialog_repeat1",
  [aux_sym_ext_adw_breakpoint_repeat1] = "ext_adw_breakpoint_repeat1",
  [aux_sym_ext_combo_box_items_repeat1] = "ext_combo_box_items_repeat1",
  [aux_sym_ext_file_filter_mime_types_repeat1] = "ext_file_filter_mime_types_repeat1",
  [aux_sym_ext_scale_marks_repeat1] = "ext_scale_marks_repeat1",
  [aux_sym_ext_size_group_widgets_repeat1] = "ext_size_group_widgets_repeat1",
  [aux_sym_ext_string_list_strings_repeat1] = "ext_string_list_strings_repeat1",
  [aux_sym_ext_styles_repeat1] = "ext_styles_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [sym_integer_literal] = sym_integer_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_token1] = aux_sym_quoted_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_token2] = aux_sym_quoted_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_translation_DASHdomain] = anon_sym_translation_DASHdomain,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_swapped] = anon_sym_swapped,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_bind_DASHproperty] = anon_sym_bind_DASHproperty,
  [anon_sym__] = anon_sym__,
  [anon_sym_C_] = anon_sym_C_,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_internal_DASHchild] = anon_sym_internal_DASHchild,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_submenu] = anon_sym_submenu,
  [anon_sym_item] = anon_sym_item,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_accessibility] = anon_sym_accessibility,
  [anon_sym_responses] = anon_sym_responses,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_setters] = anon_sym_setters,
  [anon_sym_items] = anon_sym_items,
  [anon_sym_mime_DASHtypes] = anon_sym_mime_DASHtypes,
  [anon_sym_patterns] = anon_sym_patterns,
  [anon_sym_suffixes] = anon_sym_suffixes,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_marks] = anon_sym_marks,
  [anon_sym_mark] = anon_sym_mark,
  [anon_sym_widgets] = anon_sym_widgets,
  [anon_sym_strings] = anon_sym_strings,
  [anon_sym_styles] = anon_sym_styles,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_default] = anon_sym_default,
  [sym_source_file] = sym_source_file,
  [sym__number] = sym__number,
  [sym_quoted] = sym_quoted,
  [sym_type_name] = sym_type_name,
  [sym_using] = sym_using,
  [sym_translation_domain] = sym_translation_domain,
  [sym_template] = sym_template,
  [sym_object] = sym_object,
  [sym_object_content] = sym_object_content,
  [sym_signal] = sym_signal,
  [sym_property] = sym_property,
  [sym_array_value] = sym_array_value,
  [sym_closure_expression] = sym_closure_expression,
  [sym_lookup_expression] = sym_lookup_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_literal] = sym_literal,
  [sym__type_literal] = sym__type_literal,
  [sym__quoted_literal] = sym__quoted_literal,
  [sym__number_literal] = sym__number_literal,
  [sym__ident_literal] = sym__ident_literal,
  [sym__expression] = sym__expression,
  [sym_binding] = sym_binding,
  [sym_object_value] = sym_object_value,
  [sym_value] = sym_value,
  [sym_translated] = sym_translated,
  [sym_flags] = sym_flags,
  [sym_child_internal] = sym_child_internal,
  [sym_child_annotation] = sym_child_annotation,
  [sym__child] = sym__child,
  [sym_menu] = sym_menu,
  [sym__menu_child] = sym__menu_child,
  [sym_menu_section] = sym_menu_section,
  [sym_menu_submenu] = sym_menu_submenu,
  [sym_menu_item] = sym_menu_item,
  [sym_menu_attribute] = sym_menu_attribute,
  [sym_string_value] = sym_string_value,
  [sym_menu_item_shorthand] = sym_menu_item_shorthand,
  [sym__extension] = sym__extension,
  [sym_ext_accessibility] = sym_ext_accessibility,
  [sym_ext_adw_dialog] = sym_ext_adw_dialog,
  [sym_ext_adw_dialog_response] = sym_ext_adw_dialog_response,
  [sym_ext_adw_breakpoint_condition] = sym_ext_adw_breakpoint_condition,
  [sym_ext_adw_breakpoint] = sym_ext_adw_breakpoint,
  [sym_ext_combo_box_items] = sym_ext_combo_box_items,
  [sym__ext_combo_box_item] = sym__ext_combo_box_item,
  [sym_ext_file_filter_mime_types] = sym_ext_file_filter_mime_types,
  [sym_ext_file_filter_patterns] = sym_ext_file_filter_patterns,
  [sym_ext_file_filter_suffixes] = sym_ext_file_filter_suffixes,
  [sym__ext_file_filter_item] = sym__ext_file_filter_item,
  [sym_ext_layout] = sym_ext_layout,
  [sym_ext_list_item_factory] = sym_ext_list_item_factory,
  [sym_ext_scale_marks] = sym_ext_scale_marks,
  [sym_ext_scale_mark] = sym_ext_scale_mark,
  [sym_ext_size_group_widgets] = sym_ext_size_group_widgets,
  [sym__ext_size_group_widget] = sym__ext_size_group_widget,
  [sym_ext_string_list_strings] = sym_ext_string_list_strings,
  [sym__ext_strings_list_item] = sym__ext_strings_list_item,
  [sym_ext_styles] = sym_ext_styles,
  [sym__child_extension] = sym__child_extension,
  [sym_ext_response] = sym_ext_response,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_quoted_repeat1] = aux_sym_quoted_repeat1,
  [aux_sym_quoted_repeat2] = aux_sym_quoted_repeat2,
  [aux_sym_object_content_repeat1] = aux_sym_object_content_repeat1,
  [aux_sym_signal_repeat1] = aux_sym_signal_repeat1,
  [aux_sym_array_value_repeat1] = aux_sym_array_value_repeat1,
  [aux_sym_closure_expression_repeat1] = aux_sym_closure_expression_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
  [aux_sym_flags_repeat1] = aux_sym_flags_repeat1,
  [aux_sym_menu_repeat1] = aux_sym_menu_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym_menu_item_repeat1] = aux_sym_menu_item_repeat1,
  [aux_sym_ext_accessibility_repeat1] = aux_sym_ext_accessibility_repeat1,
  [aux_sym_ext_adw_dialog_repeat1] = aux_sym_ext_adw_dialog_repeat1,
  [aux_sym_ext_adw_breakpoint_repeat1] = aux_sym_ext_adw_breakpoint_repeat1,
  [aux_sym_ext_combo_box_items_repeat1] = aux_sym_ext_combo_box_items_repeat1,
  [aux_sym_ext_file_filter_mime_types_repeat1] = aux_sym_ext_file_filter_mime_types_repeat1,
  [aux_sym_ext_scale_marks_repeat1] = aux_sym_ext_scale_marks_repeat1,
  [aux_sym_ext_size_group_widgets_repeat1] = aux_sym_ext_size_group_widgets_repeat1,
  [aux_sym_ext_string_list_strings_repeat1] = aux_sym_ext_string_list_strings_repeat1,
  [aux_sym_ext_styles_repeat1] = aux_sym_ext_styles_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_translation_DASHdomain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind_DASHproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal_DASHchild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_submenu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_accessibility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_responses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_items] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mime_DASHtypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patterns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suffixes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_marks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widgets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_content] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [sym_closure_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lookup_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__type_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__ident_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_object_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_translated] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_child_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_child_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym__child] = {
    .visible = false,
    .named = true,
  },
  [sym_menu] = {
    .visible = true,
    .named = true,
  },
  [sym__menu_child] = {
    .visible = false,
    .named = true,
  },
  [sym_menu_section] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_submenu] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym__extension] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_accessibility] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_dialog] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_dialog_response] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_breakpoint_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_adw_breakpoint] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_combo_box_items] = {
    .visible = true,
    .named = true,
  },
  [sym__ext_combo_box_item] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_file_filter_mime_types] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_patterns] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_file_filter_suffixes] = {
    .visible = true,
    .named = true,
  },
  [sym__ext_file_filter_item] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_list_item_factory] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_scale_marks] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_scale_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_ext_size_group_widgets] = {
    .visible = true,
    .named = true,
  },
  [sym__ext_size_group_widget] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_string_list_strings] = {
    .visible = true,
    .named = true,
  },
  [sym__ext_strings_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_styles] = {
    .visible = true,
    .named = true,
  },
  [sym__child_extension] = {
    .visible = false,
    .named = true,
  },
  [sym_ext_response] = {
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
  [aux_sym_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_closure_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_accessibility_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_adw_dialog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_adw_breakpoint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_combo_box_items_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_file_filter_mime_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_scale_marks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_size_group_widgets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_string_list_strings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ext_styles_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_child_type = 2,
  field_condition = 3,
  field_content = 4,
  field_context = 5,
  field_detail = 6,
  field_domain = 7,
  field_flags = 8,
  field_handler = 9,
  field_icon = 10,
  field_id = 11,
  field_item = 12,
  field_label = 13,
  field_name = 14,
  field_namespace = 15,
  field_object = 16,
  field_position = 17,
  field_property = 18,
  field_string = 19,
  field_subclass = 20,
  field_value = 21,
  field_version = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_child_type] = "child_type",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_context] = "context",
  [field_detail] = "detail",
  [field_domain] = "domain",
  [field_flags] = "flags",
  [field_handler] = "handler",
  [field_icon] = "icon",
  [field_id] = "id",
  [field_item] = "item",
  [field_label] = "label",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_object] = "object",
  [field_position] = "position",
  [field_property] = "property",
  [field_string] = "string",
  [field_subclass] = "subclass",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 4},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 3},
  [21] = {.index = 36, .length = 6},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 1},
  [24] = {.index = 45, .length = 1},
  [25] = {.index = 46, .length = 1},
  [26] = {.index = 47, .length = 1},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 1},
  [29] = {.index = 50, .length = 1},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 4},
  [33] = {.index = 59, .length = 4},
  [34] = {.index = 63, .length = 1},
  [35] = {.index = 64, .length = 2},
  [36] = {.index = 66, .length = 2},
  [37] = {.index = 68, .length = 1},
  [38] = {.index = 69, .length = 2},
  [39] = {.index = 71, .length = 2},
  [40] = {.index = 73, .length = 2},
  [41] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 2},
  [44] = {.index = 81, .length = 2},
  [45] = {.index = 83, .length = 3},
  [46] = {.index = 86, .length = 1},
  [47] = {.index = 87, .length = 3},
  [48] = {.index = 90, .length = 2},
  [49] = {.index = 92, .length = 1},
  [50] = {.index = 93, .length = 2},
  [51] = {.index = 95, .length = 3},
  [52] = {.index = 98, .length = 3},
  [53] = {.index = 101, .length = 3},
  [54] = {.index = 104, .length = 3},
  [55] = {.index = 107, .length = 2},
  [56] = {.index = 109, .length = 4},
  [57] = {.index = 113, .length = 3},
  [58] = {.index = 116, .length = 2},
  [59] = {.index = 118, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_content, 1},
    {field_name, 0},
  [4] =
    {field_name, 2},
    {field_namespace, 0},
  [6] =
    {field_domain, 1},
  [7] =
    {field_content, 2},
    {field_name, 1},
  [9] =
    {field_content, 2},
    {field_id, 1},
    {field_name, 0},
  [12] =
    {field_namespace, 1},
    {field_version, 2},
  [14] =
    {field_id, 1},
  [15] =
    {field_content, 4},
    {field_name, 1},
    {field_subclass, 2},
    {field_subclass, 3},
  [19] =
    {field_child_type, 1},
  [20] =
    {field_value, 0},
  [21] =
    {field_item, 0},
  [22] =
    {field_id, 0},
  [23] =
    {field_label, 2},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_name, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_condition, 2},
  [33] =
    {field_object, 2, .inherited = true},
    {field_property, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [36] =
    {field_object, 0, .inherited = true},
    {field_object, 1, .inherited = true},
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [42] =
    {field_id, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [44] =
    {field_item, 2, .inherited = true},
  [45] =
    {field_id, 2, .inherited = true},
  [46] =
    {field_name, 2},
  [47] =
    {field_flags, 0},
  [48] =
    {field_flags, 2, .inherited = true},
  [49] =
    {field_name, 3},
  [50] =
    {field_id, 3},
  [51] =
    {field_id, 0},
    {field_value, 2},
  [53] =
    {field_id, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [55] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [59] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [63] =
    {field_item, 1, .inherited = true},
  [64] =
    {field_item, 2, .inherited = true},
    {field_item, 3, .inherited = true},
  [66] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [68] =
    {field_id, 1, .inherited = true},
  [69] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
  [71] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
  [73] =
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [75] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [77] =
    {field_action, 4},
    {field_label, 2},
  [79] =
    {field_flags, 0, .inherited = true},
    {field_flags, 1, .inherited = true},
  [81] =
    {field_handler, 2},
    {field_name, 0},
  [83] =
    {field_flags, 3, .inherited = true},
    {field_id, 0},
    {field_value, 2},
  [86] =
    {field_value, 2},
  [87] =
    {field_handler, 2},
    {field_name, 0},
    {field_object, 4},
  [90] =
    {field_handler, 3},
    {field_name, 0},
  [92] =
    {field_value, 3},
  [93] =
    {field_context, 2},
    {field_string, 4},
  [95] =
    {field_action, 4},
    {field_icon, 6},
    {field_label, 2},
  [98] =
    {field_detail, 2},
    {field_handler, 4},
    {field_name, 0},
  [101] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [104] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [107] =
    {field_position, 4},
    {field_value, 2},
  [109] =
    {field_detail, 2},
    {field_handler, 4},
    {field_name, 0},
    {field_object, 6},
  [113] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [116] =
    {field_position, 5},
    {field_value, 3},
  [118] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
    {field_object, 7},
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [97] = 97,
  [98] = 93,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 96,
  [103] = 94,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 104,
  [108] = 97,
  [109] = 100,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 129,
  [136] = 133,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 91,
  [150] = 150,
  [151] = 88,
  [152] = 89,
  [153] = 90,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
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
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 192,
  [210] = 201,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 198,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 179,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 216,
  [235] = 235,
  [236] = 188,
  [237] = 237,
  [238] = 187,
  [239] = 195,
  [240] = 240,
  [241] = 185,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 196,
  [246] = 246,
  [247] = 175,
  [248] = 248,
  [249] = 174,
  [250] = 194,
  [251] = 251,
  [252] = 189,
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
  [263] = 258,
  [264] = 257,
  [265] = 226,
  [266] = 180,
  [267] = 267,
  [268] = 256,
  [269] = 269,
  [270] = 254,
  [271] = 271,
  [272] = 190,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 278,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 155,
  [285] = 285,
  [286] = 154,
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
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 344,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 346,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 345,
  [361] = 361,
  [362] = 342,
  [363] = 363,
  [364] = 354,
  [365] = 181,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 350,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 434,
  [467] = 463,
  [468] = 468,
  [469] = 469,
  [470] = 393,
  [471] = 432,
  [472] = 472,
  [473] = 473,
  [474] = 412,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        '"', 373,
        '$', 379,
        '\'', 375,
        '(', 392,
        ')', 393,
        '+', 406,
        ',', 397,
        '-', 405,
        '.', 378,
        '/', 13,
        '0', 367,
        ':', 387,
        ';', 382,
        '<', 401,
        '=', 462,
        '>', 402,
        'C', 24,
        '[', 396,
        '\\', 3,
        ']', 398,
        '_', 411,
        'a', 39,
        'b', 82,
        'c', 136,
        'd', 50,
        'i', 127,
        'l', 25,
        'm', 26,
        'p', 27,
        'r', 55,
        's', 56,
        't', 58,
        'u', 171,
        'w', 83,
        '{', 388,
        '|', 415,
        '}', 389,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(372);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 373,
        '$', 379,
        '\'', 375,
        '(', 392,
        ')', 393,
        '+', 406,
        '-', 405,
        '.', 198,
        '/', 13,
        '0', 367,
        't', 365,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 373,
        '$', 379,
        '\'', 375,
        '+', 406,
        '-', 405,
        '.', 378,
        '/', 13,
        '0', 367,
        'C', 206,
        '[', 396,
        '_', 412,
        'b', 266,
        't', 365,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 373,
        '\'', 375,
        '+', 406,
        '-', 405,
        '.', 198,
        '/', 13,
        '0', 367,
        'C', 206,
        ']', 398,
        '_', 412,
        't', 365,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '_') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '$', 379,
        ')', 393,
        ',', 397,
        '.', 377,
        '/', 13,
        ':', 387,
        ';', 382,
        '=', 23,
        '>', 402,
        ']', 398,
        '{', 388,
        '|', 415,
        '}', 389,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '$', 379,
        '.', 377,
        '/', 13,
        '=', 23,
        '[', 396,
        'a', 218,
        'c', 304,
        'i', 346,
        'l', 208,
        'm', 209,
        'p', 212,
        'r', 233,
        's', 248,
        't', 229,
        'w', 259,
        '}', 389,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(393);
      if (lookahead == ',') ADVANCE(397);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(382);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(429);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(430);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '}') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '}') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(391);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(403);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(452);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 193:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(370);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 200:
      if (eof) ADVANCE(202);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(382);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 'y') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'x') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(370);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(391);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 201},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 201},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 200},
  [112] = {.lex_state = 200},
  [113] = {.lex_state = 200},
  [114] = {.lex_state = 200},
  [115] = {.lex_state = 200},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 200},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 201},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 201},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 200},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 200},
  [152] = {.lex_state = 200},
  [153] = {.lex_state = 200},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 200},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 200},
  [167] = {.lex_state = 200},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 200},
  [170] = {.lex_state = 200},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 200},
  [173] = {.lex_state = 200},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 22},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 22},
  [189] = {.lex_state = 22},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 22},
  [196] = {.lex_state = 22},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 20},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 20},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 20},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 20},
  [292] = {.lex_state = 20},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 20},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 20},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 20},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
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
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 201},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 9},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 10},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 9},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 9},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 201},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 9},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 9},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 9},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 9},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 9},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 9},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 9},
  [474] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_translation_DASHdomain] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_bind_DASHproperty] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_C_] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_internal_DASHchild] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_submenu] = ACTIONS(1),
    [anon_sym_item] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_accessibility] = ACTIONS(1),
    [anon_sym_responses] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_setters] = ACTIONS(1),
    [anon_sym_items] = ACTIONS(1),
    [anon_sym_mime_DASHtypes] = ACTIONS(1),
    [anon_sym_patterns] = ACTIONS(1),
    [anon_sym_suffixes] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_marks] = ACTIONS(1),
    [anon_sym_mark] = ACTIONS(1),
    [anon_sym_widgets] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(462),
    [sym_type_name] = STATE(278),
    [sym_using] = STATE(92),
    [sym_translation_domain] = STATE(112),
    [sym_template] = STATE(111),
    [sym_object] = STATE(111),
    [sym_menu] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(92),
    [aux_sym_source_file_repeat2] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_translation_DASHdomain] = ACTIONS(13),
    [anon_sym_template] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(19), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_accessibility,
    ACTIONS(29), 1,
      anon_sym_responses,
    ACTIONS(31), 1,
      anon_sym_condition,
    ACTIONS(33), 1,
      anon_sym_setters,
    ACTIONS(35), 1,
      anon_sym_items,
    ACTIONS(37), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(39), 1,
      anon_sym_patterns,
    ACTIONS(41), 1,
      anon_sym_suffixes,
    ACTIONS(43), 1,
      anon_sym_layout,
    ACTIONS(45), 1,
      anon_sym_marks,
    ACTIONS(47), 1,
      anon_sym_widgets,
    ACTIONS(49), 1,
      anon_sym_strings,
    ACTIONS(51), 1,
      anon_sym_styles,
    STATE(191), 1,
      sym_child_annotation,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(4), 20,
      sym_object,
      sym_signal,
      sym_property,
      sym__child,
      sym__extension,
      sym_ext_accessibility,
      sym_ext_adw_dialog,
      sym_ext_adw_breakpoint_condition,
      sym_ext_adw_breakpoint,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_scale_marks,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [88] = 22,
    ACTIONS(19), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_accessibility,
    ACTIONS(29), 1,
      anon_sym_responses,
    ACTIONS(31), 1,
      anon_sym_condition,
    ACTIONS(33), 1,
      anon_sym_setters,
    ACTIONS(35), 1,
      anon_sym_items,
    ACTIONS(37), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(39), 1,
      anon_sym_patterns,
    ACTIONS(41), 1,
      anon_sym_suffixes,
    ACTIONS(43), 1,
      anon_sym_layout,
    ACTIONS(45), 1,
      anon_sym_marks,
    ACTIONS(47), 1,
      anon_sym_widgets,
    ACTIONS(49), 1,
      anon_sym_strings,
    ACTIONS(51), 1,
      anon_sym_styles,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_child_annotation,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(6), 20,
      sym_object,
      sym_signal,
      sym_property,
      sym__child,
      sym__extension,
      sym_ext_accessibility,
      sym_ext_adw_dialog,
      sym_ext_adw_breakpoint_condition,
      sym_ext_adw_breakpoint,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_scale_marks,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [176] = 22,
    ACTIONS(19), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_accessibility,
    ACTIONS(29), 1,
      anon_sym_responses,
    ACTIONS(31), 1,
      anon_sym_condition,
    ACTIONS(33), 1,
      anon_sym_setters,
    ACTIONS(35), 1,
      anon_sym_items,
    ACTIONS(37), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(39), 1,
      anon_sym_patterns,
    ACTIONS(41), 1,
      anon_sym_suffixes,
    ACTIONS(43), 1,
      anon_sym_layout,
    ACTIONS(45), 1,
      anon_sym_marks,
    ACTIONS(47), 1,
      anon_sym_widgets,
    ACTIONS(49), 1,
      anon_sym_strings,
    ACTIONS(51), 1,
      anon_sym_styles,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_child_annotation,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(6), 20,
      sym_object,
      sym_signal,
      sym_property,
      sym__child,
      sym__extension,
      sym_ext_accessibility,
      sym_ext_adw_dialog,
      sym_ext_adw_breakpoint_condition,
      sym_ext_adw_breakpoint,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_scale_marks,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [264] = 22,
    ACTIONS(19), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_accessibility,
    ACTIONS(29), 1,
      anon_sym_responses,
    ACTIONS(31), 1,
      anon_sym_condition,
    ACTIONS(33), 1,
      anon_sym_setters,
    ACTIONS(35), 1,
      anon_sym_items,
    ACTIONS(37), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(39), 1,
      anon_sym_patterns,
    ACTIONS(41), 1,
      anon_sym_suffixes,
    ACTIONS(43), 1,
      anon_sym_layout,
    ACTIONS(45), 1,
      anon_sym_marks,
    ACTIONS(47), 1,
      anon_sym_widgets,
    ACTIONS(49), 1,
      anon_sym_strings,
    ACTIONS(51), 1,
      anon_sym_styles,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_child_annotation,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(3), 20,
      sym_object,
      sym_signal,
      sym_property,
      sym__child,
      sym__extension,
      sym_ext_accessibility,
      sym_ext_adw_dialog,
      sym_ext_adw_breakpoint_condition,
      sym_ext_adw_breakpoint,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_scale_marks,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [352] = 22,
    ACTIONS(59), 1,
      sym_ident,
    ACTIONS(65), 1,
      anon_sym_template,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_accessibility,
    ACTIONS(76), 1,
      anon_sym_responses,
    ACTIONS(79), 1,
      anon_sym_condition,
    ACTIONS(82), 1,
      anon_sym_setters,
    ACTIONS(85), 1,
      anon_sym_items,
    ACTIONS(88), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(91), 1,
      anon_sym_patterns,
    ACTIONS(94), 1,
      anon_sym_suffixes,
    ACTIONS(97), 1,
      anon_sym_layout,
    ACTIONS(100), 1,
      anon_sym_marks,
    ACTIONS(103), 1,
      anon_sym_widgets,
    ACTIONS(106), 1,
      anon_sym_strings,
    ACTIONS(109), 1,
      anon_sym_styles,
    STATE(191), 1,
      sym_child_annotation,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(62), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(6), 20,
      sym_object,
      sym_signal,
      sym_property,
      sym__child,
      sym__extension,
      sym_ext_accessibility,
      sym_ext_adw_dialog,
      sym_ext_adw_breakpoint_condition,
      sym_ext_adw_breakpoint,
      sym_ext_combo_box_items,
      sym_ext_file_filter_mime_types,
      sym_ext_file_filter_patterns,
      sym_ext_file_filter_suffixes,
      sym_ext_layout,
      sym_ext_list_item_factory,
      sym_ext_scale_marks,
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [440] = 19,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    STATE(278), 1,
      sym_type_name,
    STATE(392), 1,
      sym_object,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(130), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(404), 4,
      sym_array_value,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [512] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [565] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [618] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [671] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [721] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    STATE(423), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [771] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    STATE(416), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [821] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    STATE(343), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(297), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [871] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [921] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [971] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1018] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(391), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1065] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(294), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_integer_literal,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 2,
      sym_closure_expression,
      sym_literal,
    STATE(156), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1112] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(154), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1140] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(158), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1168] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(162), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1196] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(166), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1224] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(170), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1252] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(174), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1280] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(178), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1308] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(182), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1336] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(186), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1364] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(190), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1392] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(194), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1420] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(198), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1448] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(202), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1476] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(206), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1504] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(210), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1532] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(214), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1560] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(218), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1588] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(222), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1616] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(226), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1644] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(230), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1672] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(234), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1700] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(238), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1728] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(242), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1756] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(246), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1784] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(250), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1812] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(254), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1840] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(258), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1868] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(262), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1896] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(266), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1924] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(270), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1952] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(274), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1980] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(278), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2008] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(282), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2036] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(286), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2064] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(290), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2092] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(294), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2120] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(298), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2148] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(302), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2176] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(306), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2204] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(310), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2232] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(314), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2260] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(318), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2288] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(322), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2316] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(326), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2344] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(330), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2372] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(334), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2400] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(338), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2428] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(342), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2456] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(346), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2484] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(350), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2512] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(354), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2540] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(360), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(358), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2568] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(362), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2596] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(368), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(366), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2624] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(372), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(370), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2652] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(376), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(374), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2680] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(380), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(378), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2708] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(384), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(382), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2736] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(388), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(386), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2764] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(390), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2792] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(394), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2820] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(398), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2848] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(404), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(402), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2876] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(406), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2904] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(412), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(410), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2932] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(414), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2960] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(418), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2988] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(424), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(422), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [3016] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(426), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [3044] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(430), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [3072] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(436), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(434), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [3100] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(440), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(438), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [3128] = 12,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_using,
    ACTIONS(13), 1,
      anon_sym_translation_DASHdomain,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_translation_domain,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(120), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3171] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3200] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(98), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3229] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(96), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3258] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3287] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3316] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3345] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3374] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(101), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3403] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3432] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3461] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(93), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3490] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(97), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3519] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3548] = 7,
    ACTIONS(478), 1,
      sym_ident,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_section,
    ACTIONS(486), 1,
      anon_sym_submenu,
    ACTIONS(489), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3577] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(108), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3606] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3635] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(105), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3664] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      sym__ext_combo_box_item,
    STATE(380), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3698] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3728] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(113), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3758] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3788] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(117), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3818] = 8,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(506), 1,
      sym_ident,
    ACTIONS(512), 1,
      anon_sym_template,
    ACTIONS(515), 1,
      anon_sym_menu,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3848] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      sym__ext_combo_box_item,
    STATE(380), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3882] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3912] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_combo_box_item,
    STATE(380), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3946] = 6,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      anon_sym_section,
    ACTIONS(528), 1,
      anon_sym_submenu,
    ACTIONS(530), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(126), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3971] = 5,
    ACTIONS(536), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(120), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(532), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(534), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [3994] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(340), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4023] = 6,
    ACTIONS(526), 1,
      anon_sym_section,
    ACTIONS(528), 1,
      anon_sym_submenu,
    ACTIONS(530), 1,
      anon_sym_item,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(119), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4048] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(329), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4077] = 6,
    ACTIONS(526), 1,
      anon_sym_section,
    ACTIONS(528), 1,
      anon_sym_submenu,
    ACTIONS(530), 1,
      anon_sym_item,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(127), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4102] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(498), 1,
      sym_ident,
    STATE(374), 1,
      sym__ext_combo_box_item,
    STATE(380), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4133] = 6,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_section,
    ACTIONS(556), 1,
      anon_sym_submenu,
    ACTIONS(559), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(126), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4158] = 6,
    ACTIONS(526), 1,
      anon_sym_section,
    ACTIONS(528), 1,
      anon_sym_submenu,
    ACTIONS(530), 1,
      anon_sym_item,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(126), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4183] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(340), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4212] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4240] = 6,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(575), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(573), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(130), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4264] = 6,
    ACTIONS(578), 1,
      sym_ident,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(130), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4288] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(340), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4314] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4342] = 6,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(588), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(590), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(130), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4366] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4394] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4422] = 6,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(596), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(134), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4446] = 6,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(600), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4470] = 7,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4495] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(350), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4520] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(410), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4545] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(386), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4570] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(463), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4595] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(467), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4620] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(370), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4645] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(417), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4670] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(610), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4687] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(614), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4703] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(440), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4719] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(618), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4735] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(426), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(428), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4751] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(432), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4767] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(436), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4783] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(622), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4799] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(626), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4815] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(630), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4831] = 5,
    ACTIONS(632), 1,
      sym_integer_literal,
    STATE(381), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(634), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(636), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4850] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(640), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4865] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(644), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4880] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(646), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(648), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4895] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(650), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(652), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4910] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(654), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(656), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4925] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(658), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(660), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4940] = 6,
    ACTIONS(664), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4961] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(670), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(672), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4976] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(674), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(676), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4991] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(678), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(680), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5006] = 6,
    ACTIONS(664), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      anon_sym_COLON,
    ACTIONS(684), 1,
      anon_sym_COLON_COLON,
    ACTIONS(686), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5027] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(690), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5042] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(694), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5057] = 5,
    ACTIONS(696), 1,
      sym_ident,
    ACTIONS(698), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(700), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(424), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [5076] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(704), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5091] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(706), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(708), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5106] = 3,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(710), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5120] = 3,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(714), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5134] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5154] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5174] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5194] = 3,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(724), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5208] = 3,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(728), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5222] = 3,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5236] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(736), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5248] = 4,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(738), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5264] = 4,
    ACTIONS(668), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5280] = 3,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(742), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5294] = 4,
    ACTIONS(748), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(746), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5310] = 3,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(751), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5324] = 3,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(755), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5338] = 3,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5352] = 3,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5366] = 5,
    ACTIONS(767), 1,
      sym_ident,
    STATE(77), 1,
      sym_object,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5384] = 3,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(769), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5398] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5410] = 3,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5424] = 3,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5438] = 3,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5452] = 5,
    ACTIONS(787), 1,
      sym_ident,
    ACTIONS(789), 1,
      sym_integer_literal,
    STATE(376), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 2,
      sym_hex_literal,
      sym_float_literal,
  [5470] = 3,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5484] = 4,
    ACTIONS(797), 1,
      sym_ident,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5500] = 3,
    ACTIONS(664), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5514] = 3,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(802), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5528] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5548] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5568] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5588] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5600] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5620] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5640] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5660] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5671] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(804), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5682] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5699] = 4,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5714] = 4,
    ACTIONS(826), 1,
      sym_ident,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5729] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5740] = 4,
    ACTIONS(830), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5755] = 4,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(269), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5770] = 4,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5785] = 4,
    ACTIONS(840), 1,
      sym_integer_literal,
    STATE(150), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(842), 2,
      sym_hex_literal,
      sym_float_literal,
  [5800] = 4,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5815] = 4,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5830] = 4,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5845] = 4,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5860] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5871] = 4,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5886] = 4,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5901] = 4,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(216), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5916] = 4,
    ACTIONS(767), 1,
      sym_ident,
    STATE(429), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5931] = 4,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5946] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5963] = 4,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5978] = 5,
    ACTIONS(870), 1,
      sym_escape_sequence,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(875), 1,
      aux_sym_quoted_token2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [5995] = 5,
    ACTIONS(880), 1,
      sym_escape_sequence,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    ACTIONS(885), 1,
      aux_sym_quoted_token1,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6012] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6029] = 4,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(269), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6044] = 4,
    ACTIONS(767), 1,
      sym_ident,
    STATE(279), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6059] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6070] = 4,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6085] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6096] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6107] = 4,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    STATE(224), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(898), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6122] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(744), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6133] = 4,
    ACTIONS(767), 1,
      sym_ident,
    STATE(405), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6148] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(746), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [6159] = 3,
    ACTIONS(900), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(902), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6172] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(785), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6183] = 4,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6198] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6209] = 4,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(908), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6224] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6235] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6246] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6263] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(761), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6274] = 4,
    ACTIONS(913), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6289] = 5,
    ACTIONS(915), 1,
      sym_escape_sequence,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    ACTIONS(919), 1,
      aux_sym_quoted_token1,
    STATE(257), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6306] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(921), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6317] = 5,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      sym_escape_sequence,
    ACTIONS(925), 1,
      aux_sym_quoted_token2,
    STATE(258), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6334] = 5,
    ACTIONS(927), 1,
      sym_escape_sequence,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      aux_sym_quoted_token1,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6351] = 5,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
    ACTIONS(933), 1,
      sym_escape_sequence,
    ACTIONS(935), 1,
      aux_sym_quoted_token2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6368] = 4,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(939), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6383] = 4,
    ACTIONS(826), 1,
      sym_ident,
    STATE(213), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(941), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6398] = 4,
    ACTIONS(767), 1,
      sym_ident,
    STATE(368), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6413] = 4,
    ACTIONS(767), 1,
      sym_ident,
    STATE(366), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6428] = 5,
    ACTIONS(933), 1,
      sym_escape_sequence,
    ACTIONS(935), 1,
      aux_sym_quoted_token2,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6445] = 5,
    ACTIONS(927), 1,
      sym_escape_sequence,
    ACTIONS(931), 1,
      aux_sym_quoted_token1,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6462] = 4,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(234), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6477] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(730), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6488] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(947), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6499] = 5,
    ACTIONS(949), 1,
      sym_escape_sequence,
    ACTIONS(951), 1,
      anon_sym_SQUOTE,
    ACTIONS(953), 1,
      aux_sym_quoted_token2,
    STATE(263), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6516] = 4,
    ACTIONS(955), 1,
      sym_ident,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(269), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6531] = 5,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      sym_escape_sequence,
    ACTIONS(962), 1,
      aux_sym_quoted_token1,
    STATE(264), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(878), 2,
      sym_line_comment,
      sym_block_comment,
  [6548] = 4,
    ACTIONS(964), 1,
      sym_integer_literal,
    STATE(454), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(966), 2,
      sym_hex_literal,
      sym_float_literal,
  [6563] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6574] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(968), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6585] = 4,
    ACTIONS(970), 1,
      sym_integer_literal,
    STATE(358), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(972), 2,
      sym_hex_literal,
      sym_float_literal,
  [6600] = 4,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6614] = 4,
    ACTIONS(978), 1,
      sym_ident,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6628] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(458), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6642] = 4,
    ACTIONS(982), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6656] = 4,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    ACTIONS(986), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6670] = 4,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6684] = 4,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6698] = 4,
    ACTIONS(978), 1,
      sym_ident,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6712] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6726] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(626), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6736] = 4,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6750] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6760] = 4,
    ACTIONS(978), 1,
      sym_ident,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6774] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(414), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6788] = 4,
    ACTIONS(1010), 1,
      sym_ident,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6802] = 4,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6816] = 4,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    ACTIONS(1018), 1,
      anon_sym_mark,
    STATE(315), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6830] = 4,
    ACTIONS(1018), 1,
      anon_sym_mark,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6844] = 4,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6858] = 4,
    ACTIONS(826), 1,
      sym_ident,
    ACTIONS(1027), 1,
      anon_sym_SEMI,
    STATE(301), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6872] = 4,
    ACTIONS(1029), 1,
      sym_ident,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6886] = 4,
    ACTIONS(1029), 1,
      sym_ident,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6900] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1035), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6910] = 4,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6924] = 4,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6938] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1047), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6948] = 4,
    ACTIONS(826), 1,
      sym_ident,
    ACTIONS(1049), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6962] = 4,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6976] = 4,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1056), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6990] = 4,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7004] = 4,
    ACTIONS(1010), 1,
      sym_ident,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7018] = 4,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7032] = 4,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7046] = 4,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7060] = 4,
    ACTIONS(1075), 1,
      sym_ident,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7074] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(439), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7088] = 4,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7102] = 4,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7116] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(469), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7130] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7144] = 4,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7158] = 4,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7172] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(468), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7186] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7200] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1103), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [7210] = 4,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7224] = 4,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7238] = 4,
    ACTIONS(1029), 1,
      sym_ident,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7252] = 4,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7266] = 4,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7280] = 4,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7294] = 4,
    ACTIONS(1018), 1,
      anon_sym_mark,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7308] = 4,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7322] = 4,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7336] = 4,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7350] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7364] = 4,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7378] = 4,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7392] = 4,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7406] = 4,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7420] = 4,
    ACTIONS(1156), 1,
      sym_ident,
    ACTIONS(1159), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7434] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RBRACK,
    STATE(321), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7448] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(389), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7462] = 4,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7476] = 3,
    ACTIONS(1167), 1,
      sym_ident,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7487] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1054), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7496] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7505] = 3,
    ACTIONS(1173), 1,
      anon_sym_LBRACE,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7525] = 3,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7536] = 3,
    ACTIONS(1181), 1,
      sym_ident,
    ACTIONS(1183), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7547] = 3,
    ACTIONS(1185), 1,
      sym_ident,
    ACTIONS(1187), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7558] = 3,
    ACTIONS(1189), 1,
      sym_ident,
    ACTIONS(1191), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7569] = 3,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7580] = 3,
    ACTIONS(1197), 1,
      sym_ident,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7591] = 3,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7602] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1002), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7611] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1205), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7620] = 3,
    ACTIONS(978), 1,
      sym_ident,
    STATE(351), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7631] = 3,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7642] = 3,
    ACTIONS(1207), 1,
      sym_ident,
    ACTIONS(1209), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7653] = 3,
    ACTIONS(1211), 1,
      sym_ident,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7664] = 3,
    ACTIONS(1215), 1,
      sym_ident,
    ACTIONS(1217), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7675] = 3,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7686] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7695] = 3,
    ACTIONS(1225), 1,
      sym_ident,
    ACTIONS(1227), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7706] = 3,
    ACTIONS(1018), 1,
      anon_sym_mark,
    STATE(383), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7717] = 3,
    ACTIONS(1229), 1,
      anon_sym_LBRACE,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7728] = 3,
    ACTIONS(1029), 1,
      sym_ident,
    STATE(384), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7739] = 3,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7750] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(734), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7759] = 3,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7770] = 3,
    ACTIONS(1233), 1,
      sym_ident,
    ACTIONS(1235), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7781] = 3,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7792] = 3,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    ACTIONS(1239), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7803] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7812] = 3,
    ACTIONS(1243), 1,
      sym_ident,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7823] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7832] = 3,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
    ACTIONS(1251), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7843] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7852] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1255), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7861] = 3,
    ACTIONS(1257), 1,
      anon_sym_RBRACK,
    ACTIONS(1259), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7872] = 3,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    ACTIONS(1263), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7883] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7892] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1267), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7901] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7910] = 3,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7921] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7930] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1025), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7939] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7948] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7957] = 3,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7968] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1285), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7977] = 3,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    ACTIONS(1289), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7988] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7997] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8006] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1042), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8015] = 2,
    ACTIONS(1295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8023] = 2,
    ACTIONS(1297), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8031] = 2,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8039] = 2,
    ACTIONS(1301), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8047] = 2,
    ACTIONS(1303), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8055] = 2,
    ACTIONS(1305), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8063] = 2,
    ACTIONS(1307), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8071] = 2,
    ACTIONS(1309), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8079] = 2,
    ACTIONS(1311), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8087] = 2,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8095] = 2,
    ACTIONS(1315), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8103] = 2,
    ACTIONS(1317), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8111] = 2,
    ACTIONS(1319), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8119] = 2,
    ACTIONS(1321), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8127] = 2,
    ACTIONS(1323), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8135] = 2,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8143] = 2,
    ACTIONS(1327), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8151] = 2,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8159] = 2,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8167] = 2,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8175] = 2,
    ACTIONS(1335), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8183] = 2,
    ACTIONS(1337), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8191] = 2,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8199] = 2,
    ACTIONS(1341), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8207] = 2,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8215] = 2,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8223] = 2,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8231] = 2,
    ACTIONS(1349), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8239] = 2,
    ACTIONS(1351), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8247] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8255] = 2,
    ACTIONS(1355), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8263] = 2,
    ACTIONS(1357), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8271] = 2,
    ACTIONS(1359), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8279] = 2,
    ACTIONS(1361), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8287] = 2,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8295] = 2,
    ACTIONS(1365), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8303] = 2,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8311] = 2,
    ACTIONS(1367), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8319] = 2,
    ACTIONS(1369), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8327] = 2,
    ACTIONS(1371), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8335] = 2,
    ACTIONS(1373), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8343] = 2,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8351] = 2,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8359] = 2,
    ACTIONS(1379), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8367] = 2,
    ACTIONS(1381), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8375] = 2,
    ACTIONS(1383), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8383] = 2,
    ACTIONS(1385), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8391] = 2,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8399] = 2,
    ACTIONS(1389), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8407] = 2,
    ACTIONS(1391), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8415] = 2,
    ACTIONS(1393), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8423] = 2,
    ACTIONS(1395), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8431] = 2,
    ACTIONS(1397), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8439] = 2,
    ACTIONS(1399), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8447] = 2,
    ACTIONS(900), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8455] = 2,
    ACTIONS(1401), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8463] = 2,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8471] = 2,
    ACTIONS(1405), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8479] = 2,
    ACTIONS(1407), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8487] = 2,
    ACTIONS(1409), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8495] = 2,
    ACTIONS(1411), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8503] = 2,
    ACTIONS(1413), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8511] = 2,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8519] = 2,
    ACTIONS(1417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8527] = 2,
    ACTIONS(1419), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8535] = 2,
    ACTIONS(1421), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8543] = 2,
    ACTIONS(1423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8551] = 2,
    ACTIONS(1425), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8559] = 2,
    ACTIONS(1427), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8567] = 2,
    ACTIONS(1429), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8575] = 2,
    ACTIONS(1431), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8583] = 2,
    ACTIONS(1433), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8591] = 2,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8599] = 2,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8607] = 2,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8615] = 2,
    ACTIONS(1441), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8623] = 2,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8631] = 2,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8639] = 2,
    ACTIONS(1447), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8647] = 2,
    ACTIONS(1449), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8655] = 2,
    ACTIONS(1451), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8663] = 2,
    ACTIONS(1453), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8671] = 2,
    ACTIONS(1455), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 440,
  [SMALL_STATE(8)] = 512,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 618,
  [SMALL_STATE(11)] = 671,
  [SMALL_STATE(12)] = 721,
  [SMALL_STATE(13)] = 771,
  [SMALL_STATE(14)] = 821,
  [SMALL_STATE(15)] = 871,
  [SMALL_STATE(16)] = 921,
  [SMALL_STATE(17)] = 971,
  [SMALL_STATE(18)] = 1018,
  [SMALL_STATE(19)] = 1065,
  [SMALL_STATE(20)] = 1112,
  [SMALL_STATE(21)] = 1140,
  [SMALL_STATE(22)] = 1168,
  [SMALL_STATE(23)] = 1196,
  [SMALL_STATE(24)] = 1224,
  [SMALL_STATE(25)] = 1252,
  [SMALL_STATE(26)] = 1280,
  [SMALL_STATE(27)] = 1308,
  [SMALL_STATE(28)] = 1336,
  [SMALL_STATE(29)] = 1364,
  [SMALL_STATE(30)] = 1392,
  [SMALL_STATE(31)] = 1420,
  [SMALL_STATE(32)] = 1448,
  [SMALL_STATE(33)] = 1476,
  [SMALL_STATE(34)] = 1504,
  [SMALL_STATE(35)] = 1532,
  [SMALL_STATE(36)] = 1560,
  [SMALL_STATE(37)] = 1588,
  [SMALL_STATE(38)] = 1616,
  [SMALL_STATE(39)] = 1644,
  [SMALL_STATE(40)] = 1672,
  [SMALL_STATE(41)] = 1700,
  [SMALL_STATE(42)] = 1728,
  [SMALL_STATE(43)] = 1756,
  [SMALL_STATE(44)] = 1784,
  [SMALL_STATE(45)] = 1812,
  [SMALL_STATE(46)] = 1840,
  [SMALL_STATE(47)] = 1868,
  [SMALL_STATE(48)] = 1896,
  [SMALL_STATE(49)] = 1924,
  [SMALL_STATE(50)] = 1952,
  [SMALL_STATE(51)] = 1980,
  [SMALL_STATE(52)] = 2008,
  [SMALL_STATE(53)] = 2036,
  [SMALL_STATE(54)] = 2064,
  [SMALL_STATE(55)] = 2092,
  [SMALL_STATE(56)] = 2120,
  [SMALL_STATE(57)] = 2148,
  [SMALL_STATE(58)] = 2176,
  [SMALL_STATE(59)] = 2204,
  [SMALL_STATE(60)] = 2232,
  [SMALL_STATE(61)] = 2260,
  [SMALL_STATE(62)] = 2288,
  [SMALL_STATE(63)] = 2316,
  [SMALL_STATE(64)] = 2344,
  [SMALL_STATE(65)] = 2372,
  [SMALL_STATE(66)] = 2400,
  [SMALL_STATE(67)] = 2428,
  [SMALL_STATE(68)] = 2456,
  [SMALL_STATE(69)] = 2484,
  [SMALL_STATE(70)] = 2512,
  [SMALL_STATE(71)] = 2540,
  [SMALL_STATE(72)] = 2568,
  [SMALL_STATE(73)] = 2596,
  [SMALL_STATE(74)] = 2624,
  [SMALL_STATE(75)] = 2652,
  [SMALL_STATE(76)] = 2680,
  [SMALL_STATE(77)] = 2708,
  [SMALL_STATE(78)] = 2736,
  [SMALL_STATE(79)] = 2764,
  [SMALL_STATE(80)] = 2792,
  [SMALL_STATE(81)] = 2820,
  [SMALL_STATE(82)] = 2848,
  [SMALL_STATE(83)] = 2876,
  [SMALL_STATE(84)] = 2904,
  [SMALL_STATE(85)] = 2932,
  [SMALL_STATE(86)] = 2960,
  [SMALL_STATE(87)] = 2988,
  [SMALL_STATE(88)] = 3016,
  [SMALL_STATE(89)] = 3044,
  [SMALL_STATE(90)] = 3072,
  [SMALL_STATE(91)] = 3100,
  [SMALL_STATE(92)] = 3128,
  [SMALL_STATE(93)] = 3171,
  [SMALL_STATE(94)] = 3200,
  [SMALL_STATE(95)] = 3229,
  [SMALL_STATE(96)] = 3258,
  [SMALL_STATE(97)] = 3287,
  [SMALL_STATE(98)] = 3316,
  [SMALL_STATE(99)] = 3345,
  [SMALL_STATE(100)] = 3374,
  [SMALL_STATE(101)] = 3403,
  [SMALL_STATE(102)] = 3432,
  [SMALL_STATE(103)] = 3461,
  [SMALL_STATE(104)] = 3490,
  [SMALL_STATE(105)] = 3519,
  [SMALL_STATE(106)] = 3548,
  [SMALL_STATE(107)] = 3577,
  [SMALL_STATE(108)] = 3606,
  [SMALL_STATE(109)] = 3635,
  [SMALL_STATE(110)] = 3664,
  [SMALL_STATE(111)] = 3698,
  [SMALL_STATE(112)] = 3728,
  [SMALL_STATE(113)] = 3758,
  [SMALL_STATE(114)] = 3788,
  [SMALL_STATE(115)] = 3818,
  [SMALL_STATE(116)] = 3848,
  [SMALL_STATE(117)] = 3882,
  [SMALL_STATE(118)] = 3912,
  [SMALL_STATE(119)] = 3946,
  [SMALL_STATE(120)] = 3971,
  [SMALL_STATE(121)] = 3994,
  [SMALL_STATE(122)] = 4023,
  [SMALL_STATE(123)] = 4048,
  [SMALL_STATE(124)] = 4077,
  [SMALL_STATE(125)] = 4102,
  [SMALL_STATE(126)] = 4133,
  [SMALL_STATE(127)] = 4158,
  [SMALL_STATE(128)] = 4183,
  [SMALL_STATE(129)] = 4212,
  [SMALL_STATE(130)] = 4240,
  [SMALL_STATE(131)] = 4264,
  [SMALL_STATE(132)] = 4288,
  [SMALL_STATE(133)] = 4314,
  [SMALL_STATE(134)] = 4342,
  [SMALL_STATE(135)] = 4366,
  [SMALL_STATE(136)] = 4394,
  [SMALL_STATE(137)] = 4422,
  [SMALL_STATE(138)] = 4446,
  [SMALL_STATE(139)] = 4470,
  [SMALL_STATE(140)] = 4495,
  [SMALL_STATE(141)] = 4520,
  [SMALL_STATE(142)] = 4545,
  [SMALL_STATE(143)] = 4570,
  [SMALL_STATE(144)] = 4595,
  [SMALL_STATE(145)] = 4620,
  [SMALL_STATE(146)] = 4645,
  [SMALL_STATE(147)] = 4670,
  [SMALL_STATE(148)] = 4687,
  [SMALL_STATE(149)] = 4703,
  [SMALL_STATE(150)] = 4719,
  [SMALL_STATE(151)] = 4735,
  [SMALL_STATE(152)] = 4751,
  [SMALL_STATE(153)] = 4767,
  [SMALL_STATE(154)] = 4783,
  [SMALL_STATE(155)] = 4799,
  [SMALL_STATE(156)] = 4815,
  [SMALL_STATE(157)] = 4831,
  [SMALL_STATE(158)] = 4850,
  [SMALL_STATE(159)] = 4865,
  [SMALL_STATE(160)] = 4880,
  [SMALL_STATE(161)] = 4895,
  [SMALL_STATE(162)] = 4910,
  [SMALL_STATE(163)] = 4925,
  [SMALL_STATE(164)] = 4940,
  [SMALL_STATE(165)] = 4961,
  [SMALL_STATE(166)] = 4976,
  [SMALL_STATE(167)] = 4991,
  [SMALL_STATE(168)] = 5006,
  [SMALL_STATE(169)] = 5027,
  [SMALL_STATE(170)] = 5042,
  [SMALL_STATE(171)] = 5057,
  [SMALL_STATE(172)] = 5076,
  [SMALL_STATE(173)] = 5091,
  [SMALL_STATE(174)] = 5106,
  [SMALL_STATE(175)] = 5120,
  [SMALL_STATE(176)] = 5134,
  [SMALL_STATE(177)] = 5154,
  [SMALL_STATE(178)] = 5174,
  [SMALL_STATE(179)] = 5194,
  [SMALL_STATE(180)] = 5208,
  [SMALL_STATE(181)] = 5222,
  [SMALL_STATE(182)] = 5236,
  [SMALL_STATE(183)] = 5248,
  [SMALL_STATE(184)] = 5264,
  [SMALL_STATE(185)] = 5280,
  [SMALL_STATE(186)] = 5294,
  [SMALL_STATE(187)] = 5310,
  [SMALL_STATE(188)] = 5324,
  [SMALL_STATE(189)] = 5338,
  [SMALL_STATE(190)] = 5352,
  [SMALL_STATE(191)] = 5366,
  [SMALL_STATE(192)] = 5384,
  [SMALL_STATE(193)] = 5398,
  [SMALL_STATE(194)] = 5410,
  [SMALL_STATE(195)] = 5424,
  [SMALL_STATE(196)] = 5438,
  [SMALL_STATE(197)] = 5452,
  [SMALL_STATE(198)] = 5470,
  [SMALL_STATE(199)] = 5484,
  [SMALL_STATE(200)] = 5500,
  [SMALL_STATE(201)] = 5514,
  [SMALL_STATE(202)] = 5528,
  [SMALL_STATE(203)] = 5548,
  [SMALL_STATE(204)] = 5568,
  [SMALL_STATE(205)] = 5588,
  [SMALL_STATE(206)] = 5600,
  [SMALL_STATE(207)] = 5620,
  [SMALL_STATE(208)] = 5640,
  [SMALL_STATE(209)] = 5660,
  [SMALL_STATE(210)] = 5671,
  [SMALL_STATE(211)] = 5682,
  [SMALL_STATE(212)] = 5699,
  [SMALL_STATE(213)] = 5714,
  [SMALL_STATE(214)] = 5729,
  [SMALL_STATE(215)] = 5740,
  [SMALL_STATE(216)] = 5755,
  [SMALL_STATE(217)] = 5770,
  [SMALL_STATE(218)] = 5785,
  [SMALL_STATE(219)] = 5800,
  [SMALL_STATE(220)] = 5815,
  [SMALL_STATE(221)] = 5830,
  [SMALL_STATE(222)] = 5845,
  [SMALL_STATE(223)] = 5860,
  [SMALL_STATE(224)] = 5871,
  [SMALL_STATE(225)] = 5886,
  [SMALL_STATE(226)] = 5901,
  [SMALL_STATE(227)] = 5916,
  [SMALL_STATE(228)] = 5931,
  [SMALL_STATE(229)] = 5946,
  [SMALL_STATE(230)] = 5963,
  [SMALL_STATE(231)] = 5978,
  [SMALL_STATE(232)] = 5995,
  [SMALL_STATE(233)] = 6012,
  [SMALL_STATE(234)] = 6029,
  [SMALL_STATE(235)] = 6044,
  [SMALL_STATE(236)] = 6059,
  [SMALL_STATE(237)] = 6070,
  [SMALL_STATE(238)] = 6085,
  [SMALL_STATE(239)] = 6096,
  [SMALL_STATE(240)] = 6107,
  [SMALL_STATE(241)] = 6122,
  [SMALL_STATE(242)] = 6133,
  [SMALL_STATE(243)] = 6148,
  [SMALL_STATE(244)] = 6159,
  [SMALL_STATE(245)] = 6172,
  [SMALL_STATE(246)] = 6183,
  [SMALL_STATE(247)] = 6198,
  [SMALL_STATE(248)] = 6209,
  [SMALL_STATE(249)] = 6224,
  [SMALL_STATE(250)] = 6235,
  [SMALL_STATE(251)] = 6246,
  [SMALL_STATE(252)] = 6263,
  [SMALL_STATE(253)] = 6274,
  [SMALL_STATE(254)] = 6289,
  [SMALL_STATE(255)] = 6306,
  [SMALL_STATE(256)] = 6317,
  [SMALL_STATE(257)] = 6334,
  [SMALL_STATE(258)] = 6351,
  [SMALL_STATE(259)] = 6368,
  [SMALL_STATE(260)] = 6383,
  [SMALL_STATE(261)] = 6398,
  [SMALL_STATE(262)] = 6413,
  [SMALL_STATE(263)] = 6428,
  [SMALL_STATE(264)] = 6445,
  [SMALL_STATE(265)] = 6462,
  [SMALL_STATE(266)] = 6477,
  [SMALL_STATE(267)] = 6488,
  [SMALL_STATE(268)] = 6499,
  [SMALL_STATE(269)] = 6516,
  [SMALL_STATE(270)] = 6531,
  [SMALL_STATE(271)] = 6548,
  [SMALL_STATE(272)] = 6563,
  [SMALL_STATE(273)] = 6574,
  [SMALL_STATE(274)] = 6585,
  [SMALL_STATE(275)] = 6600,
  [SMALL_STATE(276)] = 6614,
  [SMALL_STATE(277)] = 6628,
  [SMALL_STATE(278)] = 6642,
  [SMALL_STATE(279)] = 6656,
  [SMALL_STATE(280)] = 6670,
  [SMALL_STATE(281)] = 6684,
  [SMALL_STATE(282)] = 6698,
  [SMALL_STATE(283)] = 6712,
  [SMALL_STATE(284)] = 6726,
  [SMALL_STATE(285)] = 6736,
  [SMALL_STATE(286)] = 6750,
  [SMALL_STATE(287)] = 6760,
  [SMALL_STATE(288)] = 6774,
  [SMALL_STATE(289)] = 6788,
  [SMALL_STATE(290)] = 6802,
  [SMALL_STATE(291)] = 6816,
  [SMALL_STATE(292)] = 6830,
  [SMALL_STATE(293)] = 6844,
  [SMALL_STATE(294)] = 6858,
  [SMALL_STATE(295)] = 6872,
  [SMALL_STATE(296)] = 6886,
  [SMALL_STATE(297)] = 6900,
  [SMALL_STATE(298)] = 6910,
  [SMALL_STATE(299)] = 6924,
  [SMALL_STATE(300)] = 6938,
  [SMALL_STATE(301)] = 6948,
  [SMALL_STATE(302)] = 6962,
  [SMALL_STATE(303)] = 6976,
  [SMALL_STATE(304)] = 6990,
  [SMALL_STATE(305)] = 7004,
  [SMALL_STATE(306)] = 7018,
  [SMALL_STATE(307)] = 7032,
  [SMALL_STATE(308)] = 7046,
  [SMALL_STATE(309)] = 7060,
  [SMALL_STATE(310)] = 7074,
  [SMALL_STATE(311)] = 7088,
  [SMALL_STATE(312)] = 7102,
  [SMALL_STATE(313)] = 7116,
  [SMALL_STATE(314)] = 7130,
  [SMALL_STATE(315)] = 7144,
  [SMALL_STATE(316)] = 7158,
  [SMALL_STATE(317)] = 7172,
  [SMALL_STATE(318)] = 7186,
  [SMALL_STATE(319)] = 7200,
  [SMALL_STATE(320)] = 7210,
  [SMALL_STATE(321)] = 7224,
  [SMALL_STATE(322)] = 7238,
  [SMALL_STATE(323)] = 7252,
  [SMALL_STATE(324)] = 7266,
  [SMALL_STATE(325)] = 7280,
  [SMALL_STATE(326)] = 7294,
  [SMALL_STATE(327)] = 7308,
  [SMALL_STATE(328)] = 7322,
  [SMALL_STATE(329)] = 7336,
  [SMALL_STATE(330)] = 7350,
  [SMALL_STATE(331)] = 7364,
  [SMALL_STATE(332)] = 7378,
  [SMALL_STATE(333)] = 7392,
  [SMALL_STATE(334)] = 7406,
  [SMALL_STATE(335)] = 7420,
  [SMALL_STATE(336)] = 7434,
  [SMALL_STATE(337)] = 7448,
  [SMALL_STATE(338)] = 7462,
  [SMALL_STATE(339)] = 7476,
  [SMALL_STATE(340)] = 7487,
  [SMALL_STATE(341)] = 7496,
  [SMALL_STATE(342)] = 7505,
  [SMALL_STATE(343)] = 7516,
  [SMALL_STATE(344)] = 7525,
  [SMALL_STATE(345)] = 7536,
  [SMALL_STATE(346)] = 7547,
  [SMALL_STATE(347)] = 7558,
  [SMALL_STATE(348)] = 7569,
  [SMALL_STATE(349)] = 7580,
  [SMALL_STATE(350)] = 7591,
  [SMALL_STATE(351)] = 7602,
  [SMALL_STATE(352)] = 7611,
  [SMALL_STATE(353)] = 7620,
  [SMALL_STATE(354)] = 7631,
  [SMALL_STATE(355)] = 7642,
  [SMALL_STATE(356)] = 7653,
  [SMALL_STATE(357)] = 7664,
  [SMALL_STATE(358)] = 7675,
  [SMALL_STATE(359)] = 7686,
  [SMALL_STATE(360)] = 7695,
  [SMALL_STATE(361)] = 7706,
  [SMALL_STATE(362)] = 7717,
  [SMALL_STATE(363)] = 7728,
  [SMALL_STATE(364)] = 7739,
  [SMALL_STATE(365)] = 7750,
  [SMALL_STATE(366)] = 7759,
  [SMALL_STATE(367)] = 7770,
  [SMALL_STATE(368)] = 7781,
  [SMALL_STATE(369)] = 7792,
  [SMALL_STATE(370)] = 7803,
  [SMALL_STATE(371)] = 7812,
  [SMALL_STATE(372)] = 7823,
  [SMALL_STATE(373)] = 7832,
  [SMALL_STATE(374)] = 7843,
  [SMALL_STATE(375)] = 7852,
  [SMALL_STATE(376)] = 7861,
  [SMALL_STATE(377)] = 7872,
  [SMALL_STATE(378)] = 7883,
  [SMALL_STATE(379)] = 7892,
  [SMALL_STATE(380)] = 7901,
  [SMALL_STATE(381)] = 7910,
  [SMALL_STATE(382)] = 7921,
  [SMALL_STATE(383)] = 7930,
  [SMALL_STATE(384)] = 7939,
  [SMALL_STATE(385)] = 7948,
  [SMALL_STATE(386)] = 7957,
  [SMALL_STATE(387)] = 7968,
  [SMALL_STATE(388)] = 7977,
  [SMALL_STATE(389)] = 7988,
  [SMALL_STATE(390)] = 7997,
  [SMALL_STATE(391)] = 8006,
  [SMALL_STATE(392)] = 8015,
  [SMALL_STATE(393)] = 8023,
  [SMALL_STATE(394)] = 8031,
  [SMALL_STATE(395)] = 8039,
  [SMALL_STATE(396)] = 8047,
  [SMALL_STATE(397)] = 8055,
  [SMALL_STATE(398)] = 8063,
  [SMALL_STATE(399)] = 8071,
  [SMALL_STATE(400)] = 8079,
  [SMALL_STATE(401)] = 8087,
  [SMALL_STATE(402)] = 8095,
  [SMALL_STATE(403)] = 8103,
  [SMALL_STATE(404)] = 8111,
  [SMALL_STATE(405)] = 8119,
  [SMALL_STATE(406)] = 8127,
  [SMALL_STATE(407)] = 8135,
  [SMALL_STATE(408)] = 8143,
  [SMALL_STATE(409)] = 8151,
  [SMALL_STATE(410)] = 8159,
  [SMALL_STATE(411)] = 8167,
  [SMALL_STATE(412)] = 8175,
  [SMALL_STATE(413)] = 8183,
  [SMALL_STATE(414)] = 8191,
  [SMALL_STATE(415)] = 8199,
  [SMALL_STATE(416)] = 8207,
  [SMALL_STATE(417)] = 8215,
  [SMALL_STATE(418)] = 8223,
  [SMALL_STATE(419)] = 8231,
  [SMALL_STATE(420)] = 8239,
  [SMALL_STATE(421)] = 8247,
  [SMALL_STATE(422)] = 8255,
  [SMALL_STATE(423)] = 8263,
  [SMALL_STATE(424)] = 8271,
  [SMALL_STATE(425)] = 8279,
  [SMALL_STATE(426)] = 8287,
  [SMALL_STATE(427)] = 8295,
  [SMALL_STATE(428)] = 8303,
  [SMALL_STATE(429)] = 8311,
  [SMALL_STATE(430)] = 8319,
  [SMALL_STATE(431)] = 8327,
  [SMALL_STATE(432)] = 8335,
  [SMALL_STATE(433)] = 8343,
  [SMALL_STATE(434)] = 8351,
  [SMALL_STATE(435)] = 8359,
  [SMALL_STATE(436)] = 8367,
  [SMALL_STATE(437)] = 8375,
  [SMALL_STATE(438)] = 8383,
  [SMALL_STATE(439)] = 8391,
  [SMALL_STATE(440)] = 8399,
  [SMALL_STATE(441)] = 8407,
  [SMALL_STATE(442)] = 8415,
  [SMALL_STATE(443)] = 8423,
  [SMALL_STATE(444)] = 8431,
  [SMALL_STATE(445)] = 8439,
  [SMALL_STATE(446)] = 8447,
  [SMALL_STATE(447)] = 8455,
  [SMALL_STATE(448)] = 8463,
  [SMALL_STATE(449)] = 8471,
  [SMALL_STATE(450)] = 8479,
  [SMALL_STATE(451)] = 8487,
  [SMALL_STATE(452)] = 8495,
  [SMALL_STATE(453)] = 8503,
  [SMALL_STATE(454)] = 8511,
  [SMALL_STATE(455)] = 8519,
  [SMALL_STATE(456)] = 8527,
  [SMALL_STATE(457)] = 8535,
  [SMALL_STATE(458)] = 8543,
  [SMALL_STATE(459)] = 8551,
  [SMALL_STATE(460)] = 8559,
  [SMALL_STATE(461)] = 8567,
  [SMALL_STATE(462)] = 8575,
  [SMALL_STATE(463)] = 8583,
  [SMALL_STATE(464)] = 8591,
  [SMALL_STATE(465)] = 8599,
  [SMALL_STATE(466)] = 8607,
  [SMALL_STATE(467)] = 8615,
  [SMALL_STATE(468)] = 8623,
  [SMALL_STATE(469)] = 8631,
  [SMALL_STATE(470)] = 8639,
  [SMALL_STATE(471)] = 8647,
  [SMALL_STATE(472)] = 8655,
  [SMALL_STATE(473)] = 8663,
  [SMALL_STATE(474)] = 8671,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 44),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 44),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 52),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 52),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 47),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 47),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 48),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 48),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 56),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 56),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 52),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 52),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 57),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 57),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 53),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 53),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 56),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 56),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 59),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 59),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 57),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 57),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 59),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 59),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(399),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(235),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 50),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(255),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(231),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(231),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [880] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(229),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(363),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(337),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(395),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(125),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(415),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 49),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 58),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 55),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 58),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 54),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 55),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 3, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 5, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 2, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 4, 0, 0),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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

TS_PUBLIC const TSLanguage *tree_sitter_blueprint(void) {
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

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
#define STATE_COUNT 482
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 68

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
  anon_sym_expr = 23,
  anon_sym_LBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACK = 26,
  anon_sym_as = 27,
  anon_sym_LT = 28,
  anon_sym_GT = 29,
  anon_sym_typeof = 30,
  anon_sym_DASH = 31,
  anon_sym_PLUS = 32,
  anon_sym_bind = 33,
  anon_sym_bind_DASHproperty = 34,
  anon_sym__ = 35,
  anon_sym_C_ = 36,
  anon_sym_PIPE = 37,
  anon_sym_internal_DASHchild = 38,
  anon_sym_action = 39,
  anon_sym_menu = 40,
  anon_sym_section = 41,
  anon_sym_submenu = 42,
  anon_sym_item = 43,
  sym_line_comment = 44,
  sym_block_comment = 45,
  anon_sym_accessibility = 46,
  anon_sym_responses = 47,
  anon_sym_condition = 48,
  anon_sym_setters = 49,
  anon_sym_items = 50,
  anon_sym_mime_DASHtypes = 51,
  anon_sym_patterns = 52,
  anon_sym_suffixes = 53,
  anon_sym_layout = 54,
  anon_sym_marks = 55,
  anon_sym_mark = 56,
  anon_sym_widgets = 57,
  anon_sym_strings = 58,
  anon_sym_styles = 59,
  anon_sym_response = 60,
  anon_sym_EQ = 61,
  anon_sym_default = 62,
  sym_source_file = 63,
  sym__number = 64,
  sym_quoted = 65,
  sym_type_name = 66,
  sym_using = 67,
  sym_translation_domain = 68,
  sym_template = 69,
  sym_object = 70,
  sym_object_content = 71,
  sym_signal = 72,
  sym_property = 73,
  sym_expr_value = 74,
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
  aux_sym_ext_layout_repeat1 = 143,
  aux_sym_ext_scale_marks_repeat1 = 144,
  aux_sym_ext_size_group_widgets_repeat1 = 145,
  aux_sym_ext_string_list_strings_repeat1 = 146,
  aux_sym_ext_styles_repeat1 = 147,
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
  [anon_sym_expr] = "expr",
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
  [sym_expr_value] = "expr_value",
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
  [aux_sym_ext_layout_repeat1] = "ext_layout_repeat1",
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
  [anon_sym_expr] = anon_sym_expr,
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
  [sym_expr_value] = sym_expr_value,
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
  [aux_sym_ext_layout_repeat1] = aux_sym_ext_layout_repeat1,
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
  [anon_sym_expr] = {
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
  [sym_expr_value] = {
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
  [aux_sym_ext_layout_repeat1] = {
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
  [48] = {.index = 90, .length = 3},
  [49] = {.index = 93, .length = 2},
  [50] = {.index = 95, .length = 1},
  [51] = {.index = 96, .length = 2},
  [52] = {.index = 98, .length = 3},
  [53] = {.index = 101, .length = 3},
  [54] = {.index = 104, .length = 4},
  [55] = {.index = 108, .length = 3},
  [56] = {.index = 111, .length = 3},
  [57] = {.index = 114, .length = 3},
  [58] = {.index = 117, .length = 2},
  [59] = {.index = 119, .length = 4},
  [60] = {.index = 123, .length = 4},
  [61] = {.index = 127, .length = 3},
  [62] = {.index = 130, .length = 4},
  [63] = {.index = 134, .length = 2},
  [64] = {.index = 136, .length = 5},
  [65] = {.index = 141, .length = 4},
  [66] = {.index = 145, .length = 4},
  [67] = {.index = 149, .length = 5},
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
    {field_flags, 5},
    {field_handler, 2},
    {field_name, 0},
  [93] =
    {field_handler, 3},
    {field_name, 0},
  [95] =
    {field_value, 3},
  [96] =
    {field_context, 2},
    {field_string, 4},
  [98] =
    {field_action, 4},
    {field_icon, 6},
    {field_label, 2},
  [101] =
    {field_detail, 2},
    {field_handler, 4},
    {field_name, 0},
  [104] =
    {field_flags, 6},
    {field_handler, 2},
    {field_name, 0},
    {field_object, 4},
  [108] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [111] =
    {field_flags, 6},
    {field_handler, 3},
    {field_name, 0},
  [114] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [117] =
    {field_position, 4},
    {field_value, 2},
  [119] =
    {field_detail, 2},
    {field_handler, 4},
    {field_name, 0},
    {field_object, 6},
  [123] =
    {field_detail, 2},
    {field_flags, 7},
    {field_handler, 4},
    {field_name, 0},
  [127] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [130] =
    {field_flags, 7},
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [134] =
    {field_position, 5},
    {field_value, 3},
  [136] =
    {field_detail, 2},
    {field_flags, 8},
    {field_handler, 4},
    {field_name, 0},
    {field_object, 6},
  [141] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
    {field_object, 7},
  [145] =
    {field_detail, 2},
    {field_flags, 8},
    {field_handler, 5},
    {field_name, 0},
  [149] =
    {field_detail, 2},
    {field_flags, 9},
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
  [4] = 4,
  [5] = 2,
  [6] = 3,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 100,
  [106] = 96,
  [107] = 95,
  [108] = 97,
  [109] = 98,
  [110] = 101,
  [111] = 103,
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
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 132,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 90,
  [152] = 91,
  [153] = 153,
  [154] = 92,
  [155] = 89,
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
  [209] = 209,
  [210] = 210,
  [211] = 195,
  [212] = 212,
  [213] = 213,
  [214] = 176,
  [215] = 215,
  [216] = 199,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 200,
  [223] = 223,
  [224] = 204,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 205,
  [231] = 231,
  [232] = 206,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 193,
  [237] = 194,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 196,
  [243] = 243,
  [244] = 244,
  [245] = 201,
  [246] = 202,
  [247] = 203,
  [248] = 248,
  [249] = 249,
  [250] = 197,
  [251] = 217,
  [252] = 219,
  [253] = 234,
  [254] = 225,
  [255] = 255,
  [256] = 220,
  [257] = 257,
  [258] = 238,
  [259] = 210,
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
  [307] = 158,
  [308] = 308,
  [309] = 309,
  [310] = 153,
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
  [327] = 300,
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
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 342,
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
  [385] = 182,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 378,
  [391] = 383,
  [392] = 392,
  [393] = 381,
  [394] = 387,
  [395] = 392,
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
  [435] = 396,
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
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 400,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 444,
  [477] = 464,
  [478] = 478,
  [479] = 479,
  [480] = 398,
  [481] = 481,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '"', 254,
        '$', 260,
        '\'', 256,
        '(', 270,
        ')', 271,
        '+', 281,
        ',', 274,
        '-', 280,
        '.', 259,
        '/', 13,
        '0', 248,
        ':', 265,
        ';', 262,
        '<', 277,
        '=', 317,
        '>', 278,
        'C', 59,
        '[', 273,
        '\\', 3,
        ']', 275,
        '_', 284,
        'a', 73,
        'b', 122,
        'c', 178,
        'd', 86,
        'e', 240,
        'i', 153,
        'l', 60,
        'm', 61,
        'p', 62,
        'r', 90,
        's', 91,
        't', 93,
        'u', 215,
        'w', 123,
        '{', 266,
        '|', 286,
        '}', 267,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 254,
        '$', 260,
        '\'', 256,
        '(', 270,
        ')', 271,
        '+', 281,
        '-', 280,
        '.', 51,
        '/', 13,
        '0', 248,
        't', 245,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 254,
        '$', 260,
        '\'', 256,
        '+', 281,
        '-', 280,
        '.', 259,
        '/', 13,
        '0', 248,
        'C', 59,
        '[', 273,
        '_', 284,
        'b', 122,
        'e', 240,
        't', 245,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 254,
        '\'', 256,
        '+', 281,
        '-', 280,
        '.', 51,
        '/', 13,
        '0', 248,
        'C', 59,
        '[', 273,
        ']', 275,
        '_', 284,
        't', 245,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(254);
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
        '$', 260,
        ')', 271,
        ',', 274,
        '.', 258,
        '/', 13,
        ':', 265,
        ';', 262,
        '=', 20,
        '>', 278,
        ']', 275,
        '{', 266,
        '|', 286,
        '}', 267,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '$', 260,
        '.', 258,
        '/', 13,
        '=', 20,
        '[', 273,
        'a', 77,
        'c', 178,
        'i', 230,
        'l', 60,
        'm', 66,
        'p', 62,
        'r', 113,
        's', 112,
        't', 95,
        'w', 123,
        '}', 267,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(262);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(297);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '/', 13,
        ']', 275,
        'd', 25,
        'i', 48,
        'm', 21,
        'r', 26,
        's', 27,
        '}', 267,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(309);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(251);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(251);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_expr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
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
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 54},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 53},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 53},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 53},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 54},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 54},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 53},
  [155] = {.lex_state = 53},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 53},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 53},
  [165] = {.lex_state = 53},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 17},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 9},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 9},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 9},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 9},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 54},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 54},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 10},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 9},
  [468] = {.lex_state = 9},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
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
    [anon_sym_expr] = ACTIONS(1),
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
    [sym_source_file] = STATE(409),
    [sym_type_name] = STATE(300),
    [sym_using] = STATE(94),
    [sym_translation_domain] = STATE(115),
    [sym_template] = STATE(119),
    [sym_object] = STATE(119),
    [sym_menu] = STATE(119),
    [aux_sym_source_file_repeat1] = STATE(94),
    [aux_sym_source_file_repeat2] = STATE(119),
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
    STATE(184), 1,
      sym_child_annotation,
    STATE(327), 1,
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
    STATE(184), 1,
      sym_child_annotation,
    STATE(327), 1,
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
  [176] = 22,
    ACTIONS(55), 1,
      sym_ident,
    ACTIONS(61), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_accessibility,
    ACTIONS(72), 1,
      anon_sym_responses,
    ACTIONS(75), 1,
      anon_sym_condition,
    ACTIONS(78), 1,
      anon_sym_setters,
    ACTIONS(81), 1,
      anon_sym_items,
    ACTIONS(84), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(87), 1,
      anon_sym_patterns,
    ACTIONS(90), 1,
      anon_sym_suffixes,
    ACTIONS(93), 1,
      anon_sym_layout,
    ACTIONS(96), 1,
      anon_sym_marks,
    ACTIONS(99), 1,
      anon_sym_widgets,
    ACTIONS(102), 1,
      anon_sym_strings,
    ACTIONS(105), 1,
      anon_sym_styles,
    STATE(184), 1,
      sym_child_annotation,
    STATE(327), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(58), 2,
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
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_child_annotation,
    STATE(327), 1,
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
  [352] = 22,
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
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_child_annotation,
    STATE(327), 1,
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
  [440] = 20,
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
      anon_sym_expr,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    STATE(300), 1,
      sym_type_name,
    STATE(458), 1,
      sym_object,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(132), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(460), 5,
      sym_expr_value,
      sym_array_value,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [516] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(399), 2,
      sym_array_value,
      sym_value,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [570] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [623] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [676] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [729] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    STATE(397), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [779] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [829] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    STATE(428), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [879] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    STATE(384), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [929] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [979] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1029] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1076] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(337), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1123] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(452), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1170] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_typeof,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
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
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1217] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(156), 15,
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
  [1245] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(160), 15,
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
  [1273] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(164), 15,
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
  [1301] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(168), 15,
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
  [1329] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(172), 15,
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
  [1357] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(176), 15,
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
  [1385] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(180), 15,
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
  [1413] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(184), 15,
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
  [1441] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(188), 15,
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
  [1469] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(192), 15,
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
  [1497] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(196), 15,
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
  [1525] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(200), 15,
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
  [1553] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(204), 15,
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
  [1581] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(208), 15,
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
  [1609] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(212), 15,
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
  [1637] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(216), 15,
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
  [1665] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(220), 15,
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
  [1693] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(224), 15,
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
  [1721] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(228), 15,
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
  [1749] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(232), 15,
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
  [1777] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(236), 15,
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
  [1805] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(240), 15,
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
  [1833] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(244), 15,
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
  [1861] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(248), 15,
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
  [1889] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(252), 15,
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
  [1917] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(256), 15,
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
  [1945] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(260), 15,
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
  [1973] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(264), 15,
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
  [2001] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(268), 15,
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
  [2029] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(272), 15,
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
  [2057] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(276), 15,
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
  [2085] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(280), 15,
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
  [2113] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(284), 15,
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
  [2141] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(288), 15,
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
  [2169] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(292), 15,
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
  [2197] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(296), 15,
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
  [2225] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(300), 15,
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
  [2253] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(304), 15,
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
  [2281] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(308), 15,
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
  [2309] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(312), 15,
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
  [2337] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(316), 15,
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
  [2365] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(320), 15,
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
  [2393] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(324), 15,
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
  [2421] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(328), 15,
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
  [2449] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(332), 15,
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
  [2477] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(336), 15,
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
  [2505] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(340), 15,
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
  [2533] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(344), 15,
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
  [2561] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(348), 15,
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
  [2589] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(352), 15,
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
  [2617] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(356), 15,
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
  [2645] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(362), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(360), 15,
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
  [2673] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(364), 15,
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
  [2701] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(370), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(368), 15,
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
  [2729] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(372), 15,
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
  [2757] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(378), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(376), 15,
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
  [2785] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(380), 15,
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
  [2813] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(384), 15,
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
  [2841] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(388), 15,
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
  [2869] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(394), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(392), 15,
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
  [2897] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(396), 15,
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
  [2925] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(402), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(400), 15,
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
  [2953] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(404), 15,
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
  [2981] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(408), 15,
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
  [3009] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(412), 15,
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
  [3037] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(416), 15,
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
  [3065] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(420), 15,
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
  [3093] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(426), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(424), 15,
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
  [3121] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(428), 15,
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
  [3149] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(432), 15,
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
  [3177] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(436), 15,
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
  [3205] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(440), 15,
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
  [3233] = 12,
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
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_translation_domain,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(126), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(112), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3276] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
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
  [3305] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(456), 1,
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
  [3334] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(103), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3363] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(460), 1,
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
  [3392] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(95), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3421] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(464), 1,
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
  [3450] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(466), 1,
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
  [3479] = 7,
    ACTIONS(468), 1,
      sym_ident,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_section,
    ACTIONS(476), 1,
      anon_sym_submenu,
    ACTIONS(479), 1,
      anon_sym_item,
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
  [3508] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(482), 1,
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
  [3537] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3566] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3595] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(110), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3624] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(490), 1,
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
  [3653] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(111), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3682] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(494), 1,
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
  [3711] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(496), 1,
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
  [3740] = 7,
    ACTIONS(446), 1,
      sym_ident,
    ACTIONS(450), 1,
      anon_sym_section,
    ACTIONS(452), 1,
      anon_sym_submenu,
    ACTIONS(454), 1,
      anon_sym_item,
    ACTIONS(498), 1,
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
  [3769] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3799] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(357), 1,
      sym__ext_combo_box_item,
    STATE(369), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3833] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(357), 1,
      sym__ext_combo_box_item,
    STATE(369), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3867] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(112), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3897] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3927] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(116), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3957] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      sym__ext_combo_box_item,
    STATE(369), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3991] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [4021] = 8,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(520), 1,
      anon_sym_template,
    ACTIONS(523), 1,
      anon_sym_menu,
    STATE(300), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [4051] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(374), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4080] = 6,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(540), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(122), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4105] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(374), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4134] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(136), 1,
      anon_sym_C_,
    ACTIONS(502), 1,
      sym_ident,
    STATE(357), 1,
      sym__ext_combo_box_item,
    STATE(369), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4165] = 6,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_section,
    ACTIONS(549), 1,
      anon_sym_submenu,
    ACTIONS(551), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(122), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4190] = 5,
    ACTIONS(557), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(126), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(553), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(555), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4213] = 6,
    ACTIONS(547), 1,
      anon_sym_section,
    ACTIONS(549), 1,
      anon_sym_submenu,
    ACTIONS(551), 1,
      anon_sym_item,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(122), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4238] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(279), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4267] = 6,
    ACTIONS(547), 1,
      anon_sym_section,
    ACTIONS(549), 1,
      anon_sym_submenu,
    ACTIONS(551), 1,
      anon_sym_item,
    ACTIONS(564), 1,
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
  [4292] = 6,
    ACTIONS(547), 1,
      anon_sym_section,
    ACTIONS(549), 1,
      anon_sym_submenu,
    ACTIONS(551), 1,
      anon_sym_item,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(125), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4317] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4345] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4373] = 6,
    ACTIONS(572), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(576), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(135), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4397] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4425] = 6,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_as,
    ACTIONS(582), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(584), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(139), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4449] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(374), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4475] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4503] = 6,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
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
    STATE(140), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4527] = 6,
    ACTIONS(592), 1,
      sym_ident,
    ACTIONS(594), 1,
      anon_sym_DOT,
    ACTIONS(599), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(597), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(139), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4551] = 6,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_as,
    ACTIONS(602), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(139), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4575] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(608), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4592] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(396), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4617] = 7,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4642] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(354), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4667] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(435), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4692] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(378), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4717] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(390), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4742] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(416), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4767] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      anon_sym_C_,
    STATE(423), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4792] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(614), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(616), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4808] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(430), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4824] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(434), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4840] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(620), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4856] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(436), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(424), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(426), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4888] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(624), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4904] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(626), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(628), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4920] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(630), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(632), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4936] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(634), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(636), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4951] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(640), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4966] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(644), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4981] = 3,
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
  [4996] = 3,
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
  [5011] = 3,
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
  [5026] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(658), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(660), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5041] = 5,
    ACTIONS(662), 1,
      sym_ident,
    ACTIONS(664), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(666), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(454), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [5060] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(670), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5075] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(674), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5090] = 6,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5111] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(686), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(688), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5126] = 6,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5147] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(694), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(696), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5162] = 5,
    ACTIONS(698), 1,
      sym_integer_literal,
    STATE(364), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(702), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5181] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(704), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(706), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5196] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(708), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(710), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5211] = 3,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5225] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5245] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5265] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5277] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5297] = 5,
    ACTIONS(724), 1,
      sym_ident,
    ACTIONS(726), 1,
      sym_integer_literal,
    STATE(350), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(728), 2,
      sym_hex_literal,
      sym_float_literal,
  [5315] = 3,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(730), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5329] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(734), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5341] = 5,
    ACTIONS(736), 1,
      sym_ident,
    STATE(23), 1,
      sym_object,
    STATE(327), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5359] = 4,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(690), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5375] = 4,
    ACTIONS(740), 1,
      anon_sym_PIPE,
    STATE(187), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(738), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5391] = 4,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    STATE(187), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(742), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5407] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5427] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5439] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(190), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5455] = 3,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5469] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5489] = 3,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(758), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5503] = 3,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(762), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5517] = 3,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(766), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5531] = 3,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(770), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5545] = 3,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(774), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5559] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym__ext_file_filter_item,
    STATE(351), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5579] = 3,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(780), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5593] = 3,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(784), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5607] = 3,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5621] = 3,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5635] = 3,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(796), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5649] = 3,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5663] = 3,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(804), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5677] = 3,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5691] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      sym__ext_file_filter_item,
    STATE(351), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5711] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      sym__ext_file_filter_item,
    STATE(351), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5731] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5751] = 3,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5765] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(768), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5776] = 4,
    ACTIONS(822), 1,
      sym_ident,
    STATE(228), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5791] = 5,
    ACTIONS(826), 1,
      sym_escape_sequence,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    ACTIONS(831), 1,
      aux_sym_quoted_token2,
    STATE(213), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5808] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(714), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5819] = 4,
    ACTIONS(836), 1,
      sym_integer_literal,
    STATE(457), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_hex_literal,
      sym_float_literal,
  [5834] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(782), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5845] = 5,
    ACTIONS(840), 1,
      sym_escape_sequence,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    ACTIONS(844), 1,
      aux_sym_quoted_token1,
    STATE(234), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5862] = 4,
    ACTIONS(846), 1,
      sym_ident,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5877] = 5,
    ACTIONS(842), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 1,
      sym_escape_sequence,
    ACTIONS(853), 1,
      aux_sym_quoted_token2,
    STATE(225), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5894] = 4,
    ACTIONS(855), 1,
      sym_ident,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(238), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5909] = 4,
    ACTIONS(859), 1,
      sym_integer_literal,
    STATE(344), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(861), 2,
      sym_hex_literal,
      sym_float_literal,
  [5924] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(786), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5935] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5952] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(802), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5963] = 5,
    ACTIONS(865), 1,
      sym_escape_sequence,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
    ACTIONS(869), 1,
      aux_sym_quoted_token2,
    STATE(213), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5980] = 4,
    ACTIONS(736), 1,
      sym_ident,
    STATE(405), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5995] = 4,
    ACTIONS(736), 1,
      sym_ident,
    STATE(424), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6010] = 4,
    ACTIONS(822), 1,
      sym_ident,
    STATE(190), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6025] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      sym_quoted,
    STATE(360), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6042] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6053] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6070] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6081] = 4,
    ACTIONS(736), 1,
      sym_ident,
    STATE(280), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6096] = 5,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(875), 1,
      sym_escape_sequence,
    ACTIONS(877), 1,
      aux_sym_quoted_token1,
    STATE(257), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6113] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(879), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6124] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(760), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6135] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(764), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6146] = 4,
    ACTIONS(855), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6161] = 4,
    ACTIONS(736), 1,
      sym_ident,
    STATE(356), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6176] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6187] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(885), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6198] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(772), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6209] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6226] = 4,
    ACTIONS(736), 1,
      sym_ident,
    STATE(379), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6241] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6252] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(794), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6263] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(798), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6274] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(742), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [6285] = 3,
    ACTIONS(889), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6298] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(776), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6309] = 5,
    ACTIONS(893), 1,
      sym_escape_sequence,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    ACTIONS(897), 1,
      aux_sym_quoted_token1,
    STATE(253), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6326] = 5,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_escape_sequence,
    ACTIONS(901), 1,
      aux_sym_quoted_token2,
    STATE(254), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6343] = 5,
    ACTIONS(875), 1,
      sym_escape_sequence,
    ACTIONS(877), 1,
      aux_sym_quoted_token1,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6360] = 5,
    ACTIONS(865), 1,
      sym_escape_sequence,
    ACTIONS(869), 1,
      aux_sym_quoted_token2,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6377] = 4,
    ACTIONS(905), 1,
      sym_integer_literal,
    STATE(150), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(907), 2,
      sym_hex_literal,
      sym_float_literal,
  [6392] = 4,
    ACTIONS(855), 1,
      sym_ident,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(258), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6407] = 5,
    ACTIONS(911), 1,
      sym_escape_sequence,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      aux_sym_quoted_token1,
    STATE(257), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6424] = 4,
    ACTIONS(855), 1,
      sym_ident,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6439] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(820), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6450] = 4,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6464] = 4,
    ACTIONS(923), 1,
      sym_ident,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6478] = 4,
    ACTIONS(928), 1,
      sym_ident,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6492] = 4,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
    ACTIONS(934), 1,
      anon_sym_mark,
    STATE(339), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6506] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6520] = 4,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6534] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6548] = 4,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6562] = 4,
    ACTIONS(949), 1,
      sym_ident,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6576] = 4,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6590] = 4,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6604] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(411), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6618] = 4,
    ACTIONS(959), 1,
      sym_ident,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    STATE(287), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6632] = 4,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6646] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(967), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6660] = 4,
    ACTIONS(969), 1,
      sym_ident,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6674] = 4,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6688] = 4,
    ACTIONS(978), 1,
      sym_ident,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6702] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(983), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6716] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6730] = 4,
    ACTIONS(989), 1,
      anon_sym_COLON,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6744] = 4,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6758] = 4,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6772] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1002), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6782] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6796] = 4,
    ACTIONS(1008), 1,
      sym_ident,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6810] = 4,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6824] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6838] = 4,
    ACTIONS(1018), 1,
      sym_ident,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6852] = 4,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6866] = 4,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6880] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6894] = 4,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6908] = 4,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6922] = 4,
    ACTIONS(949), 1,
      sym_ident,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6936] = 4,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6950] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6964] = 4,
    ACTIONS(1050), 1,
      sym_ident,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
    STATE(305), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6978] = 4,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6992] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7006] = 4,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(1061), 1,
      sym_ident,
    STATE(155), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7020] = 4,
    ACTIONS(1063), 1,
      sym_ident,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7034] = 4,
    ACTIONS(1068), 1,
      sym_ident,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7048] = 4,
    ACTIONS(1072), 1,
      sym_ident,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7062] = 4,
    ACTIONS(1076), 1,
      sym_ident,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
    STATE(325), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7076] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7090] = 4,
    ACTIONS(934), 1,
      anon_sym_mark,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7104] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(632), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7114] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(445), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7128] = 4,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7142] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7152] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7166] = 4,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7180] = 4,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7194] = 4,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7208] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(437), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7222] = 4,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7236] = 4,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7250] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(439), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7264] = 4,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7278] = 4,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7292] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
    STATE(321), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7306] = 4,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7320] = 4,
    ACTIONS(928), 1,
      sym_ident,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7334] = 4,
    ACTIONS(1127), 1,
      sym_ident,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    STATE(274), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7348] = 4,
    ACTIONS(965), 1,
      sym_ident,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7362] = 4,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7376] = 4,
    ACTIONS(1137), 1,
      sym_ident,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7390] = 4,
    ACTIONS(1141), 1,
      sym_ident,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    STATE(278), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7404] = 4,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7418] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1150), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [7428] = 4,
    ACTIONS(1072), 1,
      sym_ident,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7442] = 4,
    ACTIONS(949), 1,
      sym_ident,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7456] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(436), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7470] = 4,
    ACTIONS(1068), 1,
      sym_ident,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7484] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1158), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7494] = 4,
    ACTIONS(934), 1,
      anon_sym_mark,
    ACTIONS(1160), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7508] = 4,
    ACTIONS(822), 1,
      sym_ident,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7522] = 4,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7536] = 4,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7550] = 4,
    ACTIONS(822), 1,
      sym_ident,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7564] = 4,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    STATE(286), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7578] = 3,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7589] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1176), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7598] = 3,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7609] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7618] = 3,
    ACTIONS(934), 1,
      anon_sym_mark,
    STATE(367), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7629] = 3,
    ACTIONS(940), 1,
      sym_ident,
    STATE(370), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7640] = 3,
    ACTIONS(1184), 1,
      sym_ident,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7651] = 3,
    ACTIONS(1188), 1,
      anon_sym_RBRACK,
    ACTIONS(1190), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7662] = 3,
    ACTIONS(1192), 1,
      anon_sym_RBRACK,
    ACTIONS(1194), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7673] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7682] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1089), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7691] = 3,
    ACTIONS(1198), 1,
      sym_ident,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7702] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7711] = 3,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7722] = 3,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7733] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7742] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7751] = 3,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7762] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7771] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1214), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7780] = 3,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7791] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7800] = 3,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7811] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1043), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7820] = 3,
    ACTIONS(949), 1,
      sym_ident,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7831] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7840] = 3,
    ACTIONS(1226), 1,
      sym_ident,
    ACTIONS(1228), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7851] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7860] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7869] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7878] = 3,
    ACTIONS(1236), 1,
      sym_ident,
    ACTIONS(1238), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7889] = 3,
    ACTIONS(1240), 1,
      sym_ident,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7900] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1035), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7909] = 3,
    ACTIONS(1244), 1,
      sym_ident,
    ACTIONS(1246), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7920] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7929] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7938] = 3,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7949] = 3,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7960] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7969] = 3,
    ACTIONS(1258), 1,
      sym_ident,
    ACTIONS(1260), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7980] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7989] = 3,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8000] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8009] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 2,
      sym_ident,
      anon_sym_RBRACE,
  [8018] = 3,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
    ACTIONS(1270), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8029] = 3,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    ACTIONS(1274), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8040] = 3,
    ACTIONS(1276), 1,
      sym_ident,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8051] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1280), 2,
      sym_ident,
      anon_sym_RBRACE,
  [8060] = 3,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8071] = 3,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8082] = 3,
    ACTIONS(1290), 1,
      sym_ident,
    ACTIONS(1292), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8093] = 3,
    ACTIONS(1294), 1,
      sym_ident,
    ACTIONS(1296), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8104] = 3,
    ACTIONS(1298), 1,
      anon_sym_LBRACE,
    ACTIONS(1300), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8115] = 3,
    ACTIONS(1302), 1,
      sym_ident,
    ACTIONS(1304), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8126] = 2,
    ACTIONS(1306), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8134] = 2,
    ACTIONS(1308), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8142] = 2,
    ACTIONS(1310), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8150] = 2,
    ACTIONS(1312), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8158] = 2,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8166] = 2,
    ACTIONS(1316), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8174] = 2,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8182] = 2,
    ACTIONS(889), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8190] = 2,
    ACTIONS(1320), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8198] = 2,
    ACTIONS(1322), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8206] = 2,
    ACTIONS(1324), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8214] = 2,
    ACTIONS(1326), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8222] = 2,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8230] = 2,
    ACTIONS(1330), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8238] = 2,
    ACTIONS(1332), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8246] = 2,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8254] = 2,
    ACTIONS(1336), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8262] = 2,
    ACTIONS(1338), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8270] = 2,
    ACTIONS(1340), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8278] = 2,
    ACTIONS(1342), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8286] = 2,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8294] = 2,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8302] = 2,
    ACTIONS(1348), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8310] = 2,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8318] = 2,
    ACTIONS(1352), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8326] = 2,
    ACTIONS(1354), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8334] = 2,
    ACTIONS(1356), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8342] = 2,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8350] = 2,
    ACTIONS(1360), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8358] = 2,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8366] = 2,
    ACTIONS(1364), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8374] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8382] = 2,
    ACTIONS(1368), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8390] = 2,
    ACTIONS(1370), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8398] = 2,
    ACTIONS(1372), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8406] = 2,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8414] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8422] = 2,
    ACTIONS(1376), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8430] = 2,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8438] = 2,
    ACTIONS(1380), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8446] = 2,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8454] = 2,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8462] = 2,
    ACTIONS(1386), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8470] = 2,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8478] = 2,
    ACTIONS(1390), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8486] = 2,
    ACTIONS(1392), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8494] = 2,
    ACTIONS(1394), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8502] = 2,
    ACTIONS(1396), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8510] = 2,
    ACTIONS(1398), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8518] = 2,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8526] = 2,
    ACTIONS(1402), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8534] = 2,
    ACTIONS(1404), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8542] = 2,
    ACTIONS(1406), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8550] = 2,
    ACTIONS(1408), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8558] = 2,
    ACTIONS(1410), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8566] = 2,
    ACTIONS(1412), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8574] = 2,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8582] = 2,
    ACTIONS(1416), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8590] = 2,
    ACTIONS(1418), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8598] = 2,
    ACTIONS(1420), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8606] = 2,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8614] = 2,
    ACTIONS(1424), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8622] = 2,
    ACTIONS(1426), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8630] = 2,
    ACTIONS(1428), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8638] = 2,
    ACTIONS(1430), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8646] = 2,
    ACTIONS(1432), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8654] = 2,
    ACTIONS(1434), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8662] = 2,
    ACTIONS(1436), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8670] = 2,
    ACTIONS(1438), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8678] = 2,
    ACTIONS(1440), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8686] = 2,
    ACTIONS(1442), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8694] = 2,
    ACTIONS(1444), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8702] = 2,
    ACTIONS(1446), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8710] = 2,
    ACTIONS(1448), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8718] = 2,
    ACTIONS(1450), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8726] = 2,
    ACTIONS(1452), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8734] = 2,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8742] = 2,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8750] = 2,
    ACTIONS(1458), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8758] = 2,
    ACTIONS(1460), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8766] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8774] = 2,
    ACTIONS(1464), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8782] = 2,
    ACTIONS(1466), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8790] = 2,
    ACTIONS(1468), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8798] = 2,
    ACTIONS(1470), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8806] = 2,
    ACTIONS(1472), 1,
      sym_ident,
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
  [SMALL_STATE(8)] = 516,
  [SMALL_STATE(9)] = 570,
  [SMALL_STATE(10)] = 623,
  [SMALL_STATE(11)] = 676,
  [SMALL_STATE(12)] = 729,
  [SMALL_STATE(13)] = 779,
  [SMALL_STATE(14)] = 829,
  [SMALL_STATE(15)] = 879,
  [SMALL_STATE(16)] = 929,
  [SMALL_STATE(17)] = 979,
  [SMALL_STATE(18)] = 1029,
  [SMALL_STATE(19)] = 1076,
  [SMALL_STATE(20)] = 1123,
  [SMALL_STATE(21)] = 1170,
  [SMALL_STATE(22)] = 1217,
  [SMALL_STATE(23)] = 1245,
  [SMALL_STATE(24)] = 1273,
  [SMALL_STATE(25)] = 1301,
  [SMALL_STATE(26)] = 1329,
  [SMALL_STATE(27)] = 1357,
  [SMALL_STATE(28)] = 1385,
  [SMALL_STATE(29)] = 1413,
  [SMALL_STATE(30)] = 1441,
  [SMALL_STATE(31)] = 1469,
  [SMALL_STATE(32)] = 1497,
  [SMALL_STATE(33)] = 1525,
  [SMALL_STATE(34)] = 1553,
  [SMALL_STATE(35)] = 1581,
  [SMALL_STATE(36)] = 1609,
  [SMALL_STATE(37)] = 1637,
  [SMALL_STATE(38)] = 1665,
  [SMALL_STATE(39)] = 1693,
  [SMALL_STATE(40)] = 1721,
  [SMALL_STATE(41)] = 1749,
  [SMALL_STATE(42)] = 1777,
  [SMALL_STATE(43)] = 1805,
  [SMALL_STATE(44)] = 1833,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1889,
  [SMALL_STATE(47)] = 1917,
  [SMALL_STATE(48)] = 1945,
  [SMALL_STATE(49)] = 1973,
  [SMALL_STATE(50)] = 2001,
  [SMALL_STATE(51)] = 2029,
  [SMALL_STATE(52)] = 2057,
  [SMALL_STATE(53)] = 2085,
  [SMALL_STATE(54)] = 2113,
  [SMALL_STATE(55)] = 2141,
  [SMALL_STATE(56)] = 2169,
  [SMALL_STATE(57)] = 2197,
  [SMALL_STATE(58)] = 2225,
  [SMALL_STATE(59)] = 2253,
  [SMALL_STATE(60)] = 2281,
  [SMALL_STATE(61)] = 2309,
  [SMALL_STATE(62)] = 2337,
  [SMALL_STATE(63)] = 2365,
  [SMALL_STATE(64)] = 2393,
  [SMALL_STATE(65)] = 2421,
  [SMALL_STATE(66)] = 2449,
  [SMALL_STATE(67)] = 2477,
  [SMALL_STATE(68)] = 2505,
  [SMALL_STATE(69)] = 2533,
  [SMALL_STATE(70)] = 2561,
  [SMALL_STATE(71)] = 2589,
  [SMALL_STATE(72)] = 2617,
  [SMALL_STATE(73)] = 2645,
  [SMALL_STATE(74)] = 2673,
  [SMALL_STATE(75)] = 2701,
  [SMALL_STATE(76)] = 2729,
  [SMALL_STATE(77)] = 2757,
  [SMALL_STATE(78)] = 2785,
  [SMALL_STATE(79)] = 2813,
  [SMALL_STATE(80)] = 2841,
  [SMALL_STATE(81)] = 2869,
  [SMALL_STATE(82)] = 2897,
  [SMALL_STATE(83)] = 2925,
  [SMALL_STATE(84)] = 2953,
  [SMALL_STATE(85)] = 2981,
  [SMALL_STATE(86)] = 3009,
  [SMALL_STATE(87)] = 3037,
  [SMALL_STATE(88)] = 3065,
  [SMALL_STATE(89)] = 3093,
  [SMALL_STATE(90)] = 3121,
  [SMALL_STATE(91)] = 3149,
  [SMALL_STATE(92)] = 3177,
  [SMALL_STATE(93)] = 3205,
  [SMALL_STATE(94)] = 3233,
  [SMALL_STATE(95)] = 3276,
  [SMALL_STATE(96)] = 3305,
  [SMALL_STATE(97)] = 3334,
  [SMALL_STATE(98)] = 3363,
  [SMALL_STATE(99)] = 3392,
  [SMALL_STATE(100)] = 3421,
  [SMALL_STATE(101)] = 3450,
  [SMALL_STATE(102)] = 3479,
  [SMALL_STATE(103)] = 3508,
  [SMALL_STATE(104)] = 3537,
  [SMALL_STATE(105)] = 3566,
  [SMALL_STATE(106)] = 3595,
  [SMALL_STATE(107)] = 3624,
  [SMALL_STATE(108)] = 3653,
  [SMALL_STATE(109)] = 3682,
  [SMALL_STATE(110)] = 3711,
  [SMALL_STATE(111)] = 3740,
  [SMALL_STATE(112)] = 3769,
  [SMALL_STATE(113)] = 3799,
  [SMALL_STATE(114)] = 3833,
  [SMALL_STATE(115)] = 3867,
  [SMALL_STATE(116)] = 3897,
  [SMALL_STATE(117)] = 3927,
  [SMALL_STATE(118)] = 3957,
  [SMALL_STATE(119)] = 3991,
  [SMALL_STATE(120)] = 4021,
  [SMALL_STATE(121)] = 4051,
  [SMALL_STATE(122)] = 4080,
  [SMALL_STATE(123)] = 4105,
  [SMALL_STATE(124)] = 4134,
  [SMALL_STATE(125)] = 4165,
  [SMALL_STATE(126)] = 4190,
  [SMALL_STATE(127)] = 4213,
  [SMALL_STATE(128)] = 4238,
  [SMALL_STATE(129)] = 4267,
  [SMALL_STATE(130)] = 4292,
  [SMALL_STATE(131)] = 4317,
  [SMALL_STATE(132)] = 4345,
  [SMALL_STATE(133)] = 4373,
  [SMALL_STATE(134)] = 4397,
  [SMALL_STATE(135)] = 4425,
  [SMALL_STATE(136)] = 4449,
  [SMALL_STATE(137)] = 4475,
  [SMALL_STATE(138)] = 4503,
  [SMALL_STATE(139)] = 4527,
  [SMALL_STATE(140)] = 4551,
  [SMALL_STATE(141)] = 4575,
  [SMALL_STATE(142)] = 4592,
  [SMALL_STATE(143)] = 4617,
  [SMALL_STATE(144)] = 4642,
  [SMALL_STATE(145)] = 4667,
  [SMALL_STATE(146)] = 4692,
  [SMALL_STATE(147)] = 4717,
  [SMALL_STATE(148)] = 4742,
  [SMALL_STATE(149)] = 4767,
  [SMALL_STATE(150)] = 4792,
  [SMALL_STATE(151)] = 4808,
  [SMALL_STATE(152)] = 4824,
  [SMALL_STATE(153)] = 4840,
  [SMALL_STATE(154)] = 4856,
  [SMALL_STATE(155)] = 4872,
  [SMALL_STATE(156)] = 4888,
  [SMALL_STATE(157)] = 4904,
  [SMALL_STATE(158)] = 4920,
  [SMALL_STATE(159)] = 4936,
  [SMALL_STATE(160)] = 4951,
  [SMALL_STATE(161)] = 4966,
  [SMALL_STATE(162)] = 4981,
  [SMALL_STATE(163)] = 4996,
  [SMALL_STATE(164)] = 5011,
  [SMALL_STATE(165)] = 5026,
  [SMALL_STATE(166)] = 5041,
  [SMALL_STATE(167)] = 5060,
  [SMALL_STATE(168)] = 5075,
  [SMALL_STATE(169)] = 5090,
  [SMALL_STATE(170)] = 5111,
  [SMALL_STATE(171)] = 5126,
  [SMALL_STATE(172)] = 5147,
  [SMALL_STATE(173)] = 5162,
  [SMALL_STATE(174)] = 5181,
  [SMALL_STATE(175)] = 5196,
  [SMALL_STATE(176)] = 5211,
  [SMALL_STATE(177)] = 5225,
  [SMALL_STATE(178)] = 5245,
  [SMALL_STATE(179)] = 5265,
  [SMALL_STATE(180)] = 5277,
  [SMALL_STATE(181)] = 5297,
  [SMALL_STATE(182)] = 5315,
  [SMALL_STATE(183)] = 5329,
  [SMALL_STATE(184)] = 5341,
  [SMALL_STATE(185)] = 5359,
  [SMALL_STATE(186)] = 5375,
  [SMALL_STATE(187)] = 5391,
  [SMALL_STATE(188)] = 5407,
  [SMALL_STATE(189)] = 5427,
  [SMALL_STATE(190)] = 5439,
  [SMALL_STATE(191)] = 5455,
  [SMALL_STATE(192)] = 5469,
  [SMALL_STATE(193)] = 5489,
  [SMALL_STATE(194)] = 5503,
  [SMALL_STATE(195)] = 5517,
  [SMALL_STATE(196)] = 5531,
  [SMALL_STATE(197)] = 5545,
  [SMALL_STATE(198)] = 5559,
  [SMALL_STATE(199)] = 5579,
  [SMALL_STATE(200)] = 5593,
  [SMALL_STATE(201)] = 5607,
  [SMALL_STATE(202)] = 5621,
  [SMALL_STATE(203)] = 5635,
  [SMALL_STATE(204)] = 5649,
  [SMALL_STATE(205)] = 5663,
  [SMALL_STATE(206)] = 5677,
  [SMALL_STATE(207)] = 5691,
  [SMALL_STATE(208)] = 5711,
  [SMALL_STATE(209)] = 5731,
  [SMALL_STATE(210)] = 5751,
  [SMALL_STATE(211)] = 5765,
  [SMALL_STATE(212)] = 5776,
  [SMALL_STATE(213)] = 5791,
  [SMALL_STATE(214)] = 5808,
  [SMALL_STATE(215)] = 5819,
  [SMALL_STATE(216)] = 5834,
  [SMALL_STATE(217)] = 5845,
  [SMALL_STATE(218)] = 5862,
  [SMALL_STATE(219)] = 5877,
  [SMALL_STATE(220)] = 5894,
  [SMALL_STATE(221)] = 5909,
  [SMALL_STATE(222)] = 5924,
  [SMALL_STATE(223)] = 5935,
  [SMALL_STATE(224)] = 5952,
  [SMALL_STATE(225)] = 5963,
  [SMALL_STATE(226)] = 5980,
  [SMALL_STATE(227)] = 5995,
  [SMALL_STATE(228)] = 6010,
  [SMALL_STATE(229)] = 6025,
  [SMALL_STATE(230)] = 6042,
  [SMALL_STATE(231)] = 6053,
  [SMALL_STATE(232)] = 6070,
  [SMALL_STATE(233)] = 6081,
  [SMALL_STATE(234)] = 6096,
  [SMALL_STATE(235)] = 6113,
  [SMALL_STATE(236)] = 6124,
  [SMALL_STATE(237)] = 6135,
  [SMALL_STATE(238)] = 6146,
  [SMALL_STATE(239)] = 6161,
  [SMALL_STATE(240)] = 6176,
  [SMALL_STATE(241)] = 6187,
  [SMALL_STATE(242)] = 6198,
  [SMALL_STATE(243)] = 6209,
  [SMALL_STATE(244)] = 6226,
  [SMALL_STATE(245)] = 6241,
  [SMALL_STATE(246)] = 6252,
  [SMALL_STATE(247)] = 6263,
  [SMALL_STATE(248)] = 6274,
  [SMALL_STATE(249)] = 6285,
  [SMALL_STATE(250)] = 6298,
  [SMALL_STATE(251)] = 6309,
  [SMALL_STATE(252)] = 6326,
  [SMALL_STATE(253)] = 6343,
  [SMALL_STATE(254)] = 6360,
  [SMALL_STATE(255)] = 6377,
  [SMALL_STATE(256)] = 6392,
  [SMALL_STATE(257)] = 6407,
  [SMALL_STATE(258)] = 6424,
  [SMALL_STATE(259)] = 6439,
  [SMALL_STATE(260)] = 6450,
  [SMALL_STATE(261)] = 6464,
  [SMALL_STATE(262)] = 6478,
  [SMALL_STATE(263)] = 6492,
  [SMALL_STATE(264)] = 6506,
  [SMALL_STATE(265)] = 6520,
  [SMALL_STATE(266)] = 6534,
  [SMALL_STATE(267)] = 6548,
  [SMALL_STATE(268)] = 6562,
  [SMALL_STATE(269)] = 6576,
  [SMALL_STATE(270)] = 6590,
  [SMALL_STATE(271)] = 6604,
  [SMALL_STATE(272)] = 6618,
  [SMALL_STATE(273)] = 6632,
  [SMALL_STATE(274)] = 6646,
  [SMALL_STATE(275)] = 6660,
  [SMALL_STATE(276)] = 6674,
  [SMALL_STATE(277)] = 6688,
  [SMALL_STATE(278)] = 6702,
  [SMALL_STATE(279)] = 6716,
  [SMALL_STATE(280)] = 6730,
  [SMALL_STATE(281)] = 6744,
  [SMALL_STATE(282)] = 6758,
  [SMALL_STATE(283)] = 6772,
  [SMALL_STATE(284)] = 6782,
  [SMALL_STATE(285)] = 6796,
  [SMALL_STATE(286)] = 6810,
  [SMALL_STATE(287)] = 6824,
  [SMALL_STATE(288)] = 6838,
  [SMALL_STATE(289)] = 6852,
  [SMALL_STATE(290)] = 6866,
  [SMALL_STATE(291)] = 6880,
  [SMALL_STATE(292)] = 6894,
  [SMALL_STATE(293)] = 6908,
  [SMALL_STATE(294)] = 6922,
  [SMALL_STATE(295)] = 6936,
  [SMALL_STATE(296)] = 6950,
  [SMALL_STATE(297)] = 6964,
  [SMALL_STATE(298)] = 6978,
  [SMALL_STATE(299)] = 6992,
  [SMALL_STATE(300)] = 7006,
  [SMALL_STATE(301)] = 7020,
  [SMALL_STATE(302)] = 7034,
  [SMALL_STATE(303)] = 7048,
  [SMALL_STATE(304)] = 7062,
  [SMALL_STATE(305)] = 7076,
  [SMALL_STATE(306)] = 7090,
  [SMALL_STATE(307)] = 7104,
  [SMALL_STATE(308)] = 7114,
  [SMALL_STATE(309)] = 7128,
  [SMALL_STATE(310)] = 7142,
  [SMALL_STATE(311)] = 7152,
  [SMALL_STATE(312)] = 7166,
  [SMALL_STATE(313)] = 7180,
  [SMALL_STATE(314)] = 7194,
  [SMALL_STATE(315)] = 7208,
  [SMALL_STATE(316)] = 7222,
  [SMALL_STATE(317)] = 7236,
  [SMALL_STATE(318)] = 7250,
  [SMALL_STATE(319)] = 7264,
  [SMALL_STATE(320)] = 7278,
  [SMALL_STATE(321)] = 7292,
  [SMALL_STATE(322)] = 7306,
  [SMALL_STATE(323)] = 7320,
  [SMALL_STATE(324)] = 7334,
  [SMALL_STATE(325)] = 7348,
  [SMALL_STATE(326)] = 7362,
  [SMALL_STATE(327)] = 7376,
  [SMALL_STATE(328)] = 7390,
  [SMALL_STATE(329)] = 7404,
  [SMALL_STATE(330)] = 7418,
  [SMALL_STATE(331)] = 7428,
  [SMALL_STATE(332)] = 7442,
  [SMALL_STATE(333)] = 7456,
  [SMALL_STATE(334)] = 7470,
  [SMALL_STATE(335)] = 7484,
  [SMALL_STATE(336)] = 7494,
  [SMALL_STATE(337)] = 7508,
  [SMALL_STATE(338)] = 7522,
  [SMALL_STATE(339)] = 7536,
  [SMALL_STATE(340)] = 7550,
  [SMALL_STATE(341)] = 7564,
  [SMALL_STATE(342)] = 7578,
  [SMALL_STATE(343)] = 7589,
  [SMALL_STATE(344)] = 7598,
  [SMALL_STATE(345)] = 7609,
  [SMALL_STATE(346)] = 7618,
  [SMALL_STATE(347)] = 7629,
  [SMALL_STATE(348)] = 7640,
  [SMALL_STATE(349)] = 7651,
  [SMALL_STATE(350)] = 7662,
  [SMALL_STATE(351)] = 7673,
  [SMALL_STATE(352)] = 7682,
  [SMALL_STATE(353)] = 7691,
  [SMALL_STATE(354)] = 7702,
  [SMALL_STATE(355)] = 7711,
  [SMALL_STATE(356)] = 7722,
  [SMALL_STATE(357)] = 7733,
  [SMALL_STATE(358)] = 7742,
  [SMALL_STATE(359)] = 7751,
  [SMALL_STATE(360)] = 7762,
  [SMALL_STATE(361)] = 7771,
  [SMALL_STATE(362)] = 7780,
  [SMALL_STATE(363)] = 7791,
  [SMALL_STATE(364)] = 7800,
  [SMALL_STATE(365)] = 7811,
  [SMALL_STATE(366)] = 7820,
  [SMALL_STATE(367)] = 7831,
  [SMALL_STATE(368)] = 7840,
  [SMALL_STATE(369)] = 7851,
  [SMALL_STATE(370)] = 7860,
  [SMALL_STATE(371)] = 7869,
  [SMALL_STATE(372)] = 7878,
  [SMALL_STATE(373)] = 7889,
  [SMALL_STATE(374)] = 7900,
  [SMALL_STATE(375)] = 7909,
  [SMALL_STATE(376)] = 7920,
  [SMALL_STATE(377)] = 7929,
  [SMALL_STATE(378)] = 7938,
  [SMALL_STATE(379)] = 7949,
  [SMALL_STATE(380)] = 7960,
  [SMALL_STATE(381)] = 7969,
  [SMALL_STATE(382)] = 7980,
  [SMALL_STATE(383)] = 7989,
  [SMALL_STATE(384)] = 8000,
  [SMALL_STATE(385)] = 8009,
  [SMALL_STATE(386)] = 8018,
  [SMALL_STATE(387)] = 8029,
  [SMALL_STATE(388)] = 8040,
  [SMALL_STATE(389)] = 8051,
  [SMALL_STATE(390)] = 8060,
  [SMALL_STATE(391)] = 8071,
  [SMALL_STATE(392)] = 8082,
  [SMALL_STATE(393)] = 8093,
  [SMALL_STATE(394)] = 8104,
  [SMALL_STATE(395)] = 8115,
  [SMALL_STATE(396)] = 8126,
  [SMALL_STATE(397)] = 8134,
  [SMALL_STATE(398)] = 8142,
  [SMALL_STATE(399)] = 8150,
  [SMALL_STATE(400)] = 8158,
  [SMALL_STATE(401)] = 8166,
  [SMALL_STATE(402)] = 8174,
  [SMALL_STATE(403)] = 8182,
  [SMALL_STATE(404)] = 8190,
  [SMALL_STATE(405)] = 8198,
  [SMALL_STATE(406)] = 8206,
  [SMALL_STATE(407)] = 8214,
  [SMALL_STATE(408)] = 8222,
  [SMALL_STATE(409)] = 8230,
  [SMALL_STATE(410)] = 8238,
  [SMALL_STATE(411)] = 8246,
  [SMALL_STATE(412)] = 8254,
  [SMALL_STATE(413)] = 8262,
  [SMALL_STATE(414)] = 8270,
  [SMALL_STATE(415)] = 8278,
  [SMALL_STATE(416)] = 8286,
  [SMALL_STATE(417)] = 8294,
  [SMALL_STATE(418)] = 8302,
  [SMALL_STATE(419)] = 8310,
  [SMALL_STATE(420)] = 8318,
  [SMALL_STATE(421)] = 8326,
  [SMALL_STATE(422)] = 8334,
  [SMALL_STATE(423)] = 8342,
  [SMALL_STATE(424)] = 8350,
  [SMALL_STATE(425)] = 8358,
  [SMALL_STATE(426)] = 8366,
  [SMALL_STATE(427)] = 8374,
  [SMALL_STATE(428)] = 8382,
  [SMALL_STATE(429)] = 8390,
  [SMALL_STATE(430)] = 8398,
  [SMALL_STATE(431)] = 8406,
  [SMALL_STATE(432)] = 8414,
  [SMALL_STATE(433)] = 8422,
  [SMALL_STATE(434)] = 8430,
  [SMALL_STATE(435)] = 8438,
  [SMALL_STATE(436)] = 8446,
  [SMALL_STATE(437)] = 8454,
  [SMALL_STATE(438)] = 8462,
  [SMALL_STATE(439)] = 8470,
  [SMALL_STATE(440)] = 8478,
  [SMALL_STATE(441)] = 8486,
  [SMALL_STATE(442)] = 8494,
  [SMALL_STATE(443)] = 8502,
  [SMALL_STATE(444)] = 8510,
  [SMALL_STATE(445)] = 8518,
  [SMALL_STATE(446)] = 8526,
  [SMALL_STATE(447)] = 8534,
  [SMALL_STATE(448)] = 8542,
  [SMALL_STATE(449)] = 8550,
  [SMALL_STATE(450)] = 8558,
  [SMALL_STATE(451)] = 8566,
  [SMALL_STATE(452)] = 8574,
  [SMALL_STATE(453)] = 8582,
  [SMALL_STATE(454)] = 8590,
  [SMALL_STATE(455)] = 8598,
  [SMALL_STATE(456)] = 8606,
  [SMALL_STATE(457)] = 8614,
  [SMALL_STATE(458)] = 8622,
  [SMALL_STATE(459)] = 8630,
  [SMALL_STATE(460)] = 8638,
  [SMALL_STATE(461)] = 8646,
  [SMALL_STATE(462)] = 8654,
  [SMALL_STATE(463)] = 8662,
  [SMALL_STATE(464)] = 8670,
  [SMALL_STATE(465)] = 8678,
  [SMALL_STATE(466)] = 8686,
  [SMALL_STATE(467)] = 8694,
  [SMALL_STATE(468)] = 8702,
  [SMALL_STATE(469)] = 8710,
  [SMALL_STATE(470)] = 8718,
  [SMALL_STATE(471)] = 8726,
  [SMALL_STATE(472)] = 8734,
  [SMALL_STATE(473)] = 8742,
  [SMALL_STATE(474)] = 8750,
  [SMALL_STATE(475)] = 8758,
  [SMALL_STATE(476)] = 8766,
  [SMALL_STATE(477)] = 8774,
  [SMALL_STATE(478)] = 8782,
  [SMALL_STATE(479)] = 8790,
  [SMALL_STATE(480)] = 8798,
  [SMALL_STATE(481)] = 8806,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 49),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 49),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 54),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 54),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 55),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 55),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 56),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 56),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 59),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 59),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 60),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 60),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 61),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 61),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 62),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 62),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 64),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 64),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 65),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 65),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 66),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 66),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 67),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 67),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(441),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(233),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(368),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 51),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(235),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 52),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 52),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(478),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(440),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(347),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(266),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18), SHIFT_REPEAT(402),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(229),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(124),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 4, 0, 16),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 50),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 57),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 58),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 63),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 58),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 63),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 5, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 4, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_value, 2, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 2, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 3, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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

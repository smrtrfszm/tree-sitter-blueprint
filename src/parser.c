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
#define STATE_COUNT 480
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
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
  [4] = 4,
  [5] = 4,
  [6] = 2,
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
  [101] = 97,
  [102] = 102,
  [103] = 96,
  [104] = 100,
  [105] = 98,
  [106] = 95,
  [107] = 107,
  [108] = 99,
  [109] = 107,
  [110] = 94,
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
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 147,
  [148] = 140,
  [149] = 59,
  [150] = 57,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 22,
  [155] = 60,
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
  [210] = 181,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 218,
  [222] = 216,
  [223] = 223,
  [224] = 220,
  [225] = 219,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 217,
  [235] = 235,
  [236] = 236,
  [237] = 183,
  [238] = 238,
  [239] = 180,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 208,
  [244] = 187,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 194,
  [255] = 193,
  [256] = 204,
  [257] = 186,
  [258] = 258,
  [259] = 175,
  [260] = 213,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 179,
  [270] = 190,
  [271] = 271,
  [272] = 272,
  [273] = 192,
  [274] = 176,
  [275] = 177,
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
  [304] = 278,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 156,
  [314] = 314,
  [315] = 152,
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
  [348] = 348,
  [349] = 341,
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
  [367] = 363,
  [368] = 196,
  [369] = 369,
  [370] = 346,
  [371] = 345,
  [372] = 343,
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
  [385] = 353,
  [386] = 386,
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
  [466] = 466,
  [467] = 467,
  [468] = 401,
  [469] = 469,
  [470] = 470,
  [471] = 449,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 412,
  [476] = 410,
  [477] = 477,
  [478] = 478,
  [479] = 443,
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
    case 2:
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
        '[', 396,
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
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 201},
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
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 200},
  [112] = {.lex_state = 200},
  [113] = {.lex_state = 200},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 200},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 200},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 200},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 201},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 201},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 200},
  [150] = {.lex_state = 200},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 200},
  [155] = {.lex_state = 200},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 200},
  [159] = {.lex_state = 200},
  [160] = {.lex_state = 200},
  [161] = {.lex_state = 200},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 200},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 200},
  [167] = {.lex_state = 200},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 22},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 22},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 22},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 22},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 20},
  [270] = {.lex_state = 20},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 20},
  [274] = {.lex_state = 20},
  [275] = {.lex_state = 20},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 20},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 20},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 20},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 20},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 20},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 9},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 9},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 9},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 9},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 201},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 9},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 201},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 9},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 9},
  [462] = {.lex_state = 9},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 9},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 9},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 9},
  [479] = {.lex_state = 0},
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
    [sym_source_file] = STATE(466),
    [sym_type_name] = STATE(278),
    [sym_using] = STATE(93),
    [sym_translation_domain] = STATE(117),
    [sym_template] = STATE(111),
    [sym_object] = STATE(111),
    [sym_menu] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(93),
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
    STATE(195), 1,
      sym_child_annotation,
    STATE(304), 1,
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
    ACTIONS(53), 1,
      sym_ident,
    ACTIONS(59), 1,
      anon_sym_template,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_accessibility,
    ACTIONS(70), 1,
      anon_sym_responses,
    ACTIONS(73), 1,
      anon_sym_condition,
    ACTIONS(76), 1,
      anon_sym_setters,
    ACTIONS(79), 1,
      anon_sym_items,
    ACTIONS(82), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(85), 1,
      anon_sym_patterns,
    ACTIONS(88), 1,
      anon_sym_suffixes,
    ACTIONS(91), 1,
      anon_sym_layout,
    ACTIONS(94), 1,
      anon_sym_marks,
    ACTIONS(97), 1,
      anon_sym_widgets,
    ACTIONS(100), 1,
      anon_sym_strings,
    ACTIONS(103), 1,
      anon_sym_styles,
    STATE(195), 1,
      sym_child_annotation,
    STATE(304), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(56), 2,
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
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_child_annotation,
    STATE(304), 1,
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
    STATE(195), 1,
      sym_child_annotation,
    STATE(304), 1,
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
    STATE(195), 1,
      sym_child_annotation,
    STATE(304), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(5), 20,
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
    STATE(469), 1,
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
    STATE(335), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(470), 4,
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
  [512] = 14,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(407), 2,
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
  [566] = 14,
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
    STATE(379), 1,
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
  [619] = 14,
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
    STATE(379), 1,
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
  [672] = 14,
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
    STATE(319), 1,
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
  [725] = 13,
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
    STATE(457), 1,
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
  [775] = 13,
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
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [825] = 13,
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
  [875] = 13,
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
    STATE(379), 1,
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
  [925] = 13,
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
    STATE(387), 1,
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
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [975] = 13,
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
    STATE(387), 1,
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
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1025] = 12,
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
    STATE(444), 1,
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
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1072] = 12,
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
    STATE(307), 1,
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
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1119] = 12,
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
    STATE(387), 1,
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
    STATE(131), 2,
      sym_closure_expression,
      sym_literal,
    STATE(157), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1166] = 3,
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
  [1194] = 3,
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
  [1222] = 3,
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
  [1250] = 3,
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
  [1278] = 3,
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
  [1306] = 3,
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
  [1334] = 3,
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
  [1362] = 3,
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
  [1390] = 3,
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
  [1418] = 3,
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
  [1446] = 3,
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
  [1474] = 3,
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
  [1502] = 3,
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
  [1530] = 3,
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
  [1558] = 3,
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
  [1586] = 3,
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
  [1614] = 3,
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
  [1642] = 3,
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
  [1670] = 3,
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
  [1698] = 3,
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
  [1726] = 3,
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
  [1754] = 3,
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
  [1782] = 3,
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
  [1810] = 3,
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
  [1838] = 3,
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
  [1866] = 3,
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
  [1894] = 3,
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
  [1922] = 3,
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
  [1950] = 3,
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
  [1978] = 3,
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
  [2006] = 3,
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
  [2034] = 3,
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
  [2062] = 3,
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
  [2090] = 3,
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
  [2118] = 3,
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
  [2146] = 3,
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
  [2174] = 3,
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
  [2202] = 3,
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
  [2230] = 3,
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
  [2258] = 3,
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
  [2286] = 3,
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
  [2314] = 3,
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
  [2342] = 3,
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
  [2370] = 3,
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
  [2398] = 3,
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
  [2426] = 3,
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
  [2454] = 3,
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
  [2482] = 3,
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
  [2510] = 3,
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
  [2538] = 3,
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
  [2566] = 3,
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
  [2594] = 3,
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
  [2622] = 3,
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
  [2650] = 3,
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
  [2678] = 3,
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
  [2706] = 3,
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
  [2734] = 3,
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
  [2762] = 3,
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
  [2790] = 3,
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
  [2818] = 3,
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
  [2846] = 3,
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
  [2874] = 3,
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
  [2902] = 3,
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
  [2930] = 3,
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
  [2958] = 3,
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
  [2986] = 3,
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
  [3014] = 3,
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
  [3042] = 3,
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
  [3070] = 3,
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
  [3098] = 3,
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
  [3126] = 3,
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
  [3154] = 3,
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
  [3182] = 12,
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
    STATE(119), 1,
      sym_translation_domain,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(124), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3225] = 7,
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
    STATE(97), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3254] = 7,
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
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3283] = 7,
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
    STATE(108), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3312] = 7,
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
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3341] = 7,
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
  [3370] = 7,
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
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3399] = 7,
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
  [3428] = 7,
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
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3457] = 7,
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
  [3486] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3515] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(484), 1,
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
  [3544] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(486), 1,
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
  [3573] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(488), 1,
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
  [3602] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(100), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3631] = 7,
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
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3660] = 7,
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
    STATE(104), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3689] = 7,
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
    STATE(101), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3718] = 8,
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
    STATE(112), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3748] = 8,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_template,
    ACTIONS(509), 1,
      anon_sym_menu,
    STATE(278), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(503), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(112), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3778] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
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
  [3808] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      sym_string_value,
    STATE(378), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3842] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
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
  [3872] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      sym_string_value,
    STATE(378), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3906] = 8,
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
  [3936] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__ext_combo_box_item,
    STATE(366), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3970] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(518), 1,
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
  [4000] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(365), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4029] = 6,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      anon_sym_section,
    ACTIONS(534), 1,
      anon_sym_submenu,
    ACTIONS(536), 1,
      anon_sym_item,
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
  [4054] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(365), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4083] = 6,
    ACTIONS(532), 1,
      anon_sym_section,
    ACTIONS(534), 1,
      anon_sym_submenu,
    ACTIONS(536), 1,
      anon_sym_item,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(128), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4108] = 5,
    ACTIONS(546), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(124), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(542), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(544), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4131] = 6,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_section,
    ACTIONS(554), 1,
      anon_sym_submenu,
    ACTIONS(557), 1,
      anon_sym_item,
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
  [4156] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      sym_ident,
    STATE(366), 1,
      sym_string_value,
    STATE(378), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4187] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(282), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4216] = 6,
    ACTIONS(532), 1,
      anon_sym_section,
    ACTIONS(534), 1,
      anon_sym_submenu,
    ACTIONS(536), 1,
      anon_sym_item,
    ACTIONS(562), 1,
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
  [4241] = 6,
    ACTIONS(532), 1,
      anon_sym_section,
    ACTIONS(534), 1,
      anon_sym_submenu,
    ACTIONS(536), 1,
      anon_sym_item,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(121), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4266] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(365), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4292] = 6,
    ACTIONS(566), 1,
      sym_ident,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(570), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(135), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4316] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4344] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(576), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(578), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(136), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4368] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4396] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
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
    STATE(137), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4420] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(586), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(588), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(137), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4444] = 6,
    ACTIONS(590), 1,
      sym_ident,
    ACTIONS(592), 1,
      anon_sym_DOT,
    ACTIONS(597), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(595), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(137), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4468] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4496] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4524] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(401), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4549] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(415), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4574] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(385), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4599] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(422), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4624] = 7,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4649] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(377), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4674] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(353), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4699] = 3,
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
  [4716] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_C_,
    STATE(468), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(184), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4741] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(308), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4757] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4773] = 3,
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
  [4789] = 3,
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
  [4805] = 3,
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
  [4821] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4837] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4853] = 3,
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
  [4869] = 3,
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
  [4885] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(634), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4900] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(638), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4915] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(640), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(642), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4930] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(646), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4945] = 6,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    ACTIONS(654), 1,
      anon_sym_PIPE,
    STATE(200), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4966] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(656), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(658), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4981] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(662), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4996] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(664), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(666), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5011] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(670), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5026] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(674), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5041] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(678), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5056] = 6,
    ACTIONS(650), 1,
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
    ACTIONS(648), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5077] = 3,
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
  [5092] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(690), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(692), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5107] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(694), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(696), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5122] = 5,
    ACTIONS(698), 1,
      sym_ident,
    ACTIONS(700), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(702), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(402), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [5141] = 5,
    ACTIONS(704), 1,
      sym_integer_literal,
    STATE(358), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(706), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(708), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5160] = 3,
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
  [5174] = 3,
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
  [5188] = 3,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(718), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5202] = 4,
    ACTIONS(724), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(722), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5218] = 3,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(727), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5232] = 3,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(731), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5246] = 3,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5260] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5280] = 3,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5294] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5306] = 4,
    ACTIONS(654), 1,
      anon_sym_PIPE,
    STATE(200), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5322] = 3,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(747), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5336] = 3,
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
  [5350] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5370] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5390] = 3,
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
  [5404] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5416] = 3,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5430] = 3,
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
  [5444] = 3,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5458] = 5,
    ACTIONS(777), 1,
      sym_ident,
    STATE(92), 1,
      sym_object,
    STATE(304), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5476] = 3,
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
  [5490] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5502] = 5,
    ACTIONS(785), 1,
      sym_ident,
    ACTIONS(787), 1,
      sym_integer_literal,
    STATE(388), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      sym_hex_literal,
      sym_float_literal,
  [5520] = 4,
    ACTIONS(791), 1,
      sym_ident,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(794), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5536] = 4,
    ACTIONS(798), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(796), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5552] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5572] = 3,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5586] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5606] = 3,
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
  [5620] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5640] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5660] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5680] = 3,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(814), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5694] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5714] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(737), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5725] = 4,
    ACTIONS(820), 1,
      sym_integer_literal,
    STATE(151), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 2,
      sym_hex_literal,
      sym_float_literal,
  [5740] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(291), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5755] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5770] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5781] = 4,
    ACTIONS(830), 1,
      sym_integer_literal,
    STATE(445), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 2,
      sym_hex_literal,
      sym_float_literal,
  [5796] = 5,
    ACTIONS(834), 1,
      sym_escape_sequence,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    ACTIONS(838), 1,
      aux_sym_quoted_token1,
    STATE(224), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5813] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(213), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5828] = 5,
    ACTIONS(836), 1,
      anon_sym_SQUOTE,
    ACTIONS(844), 1,
      sym_escape_sequence,
    ACTIONS(846), 1,
      aux_sym_quoted_token2,
    STATE(225), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5845] = 5,
    ACTIONS(848), 1,
      sym_escape_sequence,
    ACTIONS(850), 1,
      anon_sym_SQUOTE,
    ACTIONS(852), 1,
      aux_sym_quoted_token2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5862] = 5,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    ACTIONS(854), 1,
      sym_escape_sequence,
    ACTIONS(856), 1,
      aux_sym_quoted_token1,
    STATE(230), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5879] = 5,
    ACTIONS(858), 1,
      sym_escape_sequence,
    ACTIONS(860), 1,
      anon_sym_SQUOTE,
    ACTIONS(862), 1,
      aux_sym_quoted_token2,
    STATE(219), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5896] = 5,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 1,
      sym_escape_sequence,
    ACTIONS(866), 1,
      aux_sym_quoted_token1,
    STATE(220), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5913] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5924] = 5,
    ACTIONS(854), 1,
      sym_escape_sequence,
    ACTIONS(856), 1,
      aux_sym_quoted_token1,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5941] = 5,
    ACTIONS(848), 1,
      sym_escape_sequence,
    ACTIONS(852), 1,
      aux_sym_quoted_token2,
    ACTIONS(870), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [5958] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(381), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5973] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(394), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5988] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(395), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6003] = 4,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6018] = 5,
    ACTIONS(876), 1,
      sym_escape_sequence,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      aux_sym_quoted_token1,
    STATE(230), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [6035] = 5,
    ACTIONS(884), 1,
      sym_escape_sequence,
    ACTIONS(887), 1,
      anon_sym_SQUOTE,
    ACTIONS(889), 1,
      aux_sym_quoted_token2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_line_comment,
      sym_block_comment,
  [6052] = 4,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6067] = 4,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6082] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(260), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6097] = 4,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6112] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6129] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6140] = 4,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6155] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(733), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6166] = 4,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(908), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6181] = 4,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6196] = 4,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(914), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6211] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6222] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6233] = 4,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6248] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(722), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [6259] = 3,
    ACTIONS(918), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(920), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6272] = 4,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(924), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6287] = 4,
    ACTIONS(926), 1,
      sym_ident,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6302] = 4,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(933), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6317] = 4,
    ACTIONS(936), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6332] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6349] = 4,
    ACTIONS(940), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(942), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6364] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6375] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6386] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6397] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6408] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(944), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6419] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6430] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6445] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      sym__ext_file_filter_item,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6462] = 4,
    ACTIONS(948), 1,
      sym_ident,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6477] = 4,
    ACTIONS(952), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(954), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6492] = 4,
    ACTIONS(956), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(958), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6507] = 4,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6522] = 4,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(964), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6537] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(440), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6552] = 4,
    ACTIONS(948), 1,
      sym_ident,
    STATE(262), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(966), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6567] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6578] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(761), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6589] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(968), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6606] = 4,
    ACTIONS(970), 1,
      sym_integer_literal,
    STATE(355), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(972), 2,
      sym_hex_literal,
      sym_float_literal,
  [6621] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(767), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6632] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6643] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6654] = 4,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6668] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(456), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6682] = 4,
    ACTIONS(978), 1,
      sym_ident,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6696] = 4,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6710] = 4,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6724] = 4,
    ACTIONS(991), 1,
      sym_ident,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6738] = 4,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6752] = 4,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6766] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6780] = 4,
    ACTIONS(1009), 1,
      sym_ident,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6794] = 4,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6808] = 4,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6822] = 4,
    ACTIONS(1019), 1,
      sym_ident,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6836] = 4,
    ACTIONS(1023), 1,
      sym_ident,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6850] = 4,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6864] = 4,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(1032), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6878] = 4,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6892] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6906] = 4,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6920] = 4,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6934] = 4,
    ACTIONS(1051), 1,
      anon_sym_RBRACK,
    ACTIONS(1053), 1,
      anon_sym_mark,
    STATE(360), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6948] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6962] = 4,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
    ACTIONS(1062), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6976] = 4,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6990] = 4,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(1068), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7004] = 4,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7018] = 4,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7032] = 4,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7046] = 4,
    ACTIONS(1083), 1,
      sym_ident,
    ACTIONS(1085), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7060] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1087), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [7070] = 4,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    STATE(306), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7084] = 4,
    ACTIONS(948), 1,
      sym_ident,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7098] = 4,
    ACTIONS(1096), 1,
      sym_ident,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7112] = 4,
    ACTIONS(1009), 1,
      sym_ident,
    ACTIONS(1101), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7126] = 4,
    ACTIONS(1103), 1,
      sym_ident,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7140] = 4,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7154] = 4,
    ACTIONS(1053), 1,
      anon_sym_mark,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7168] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(626), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7178] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(451), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7192] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7202] = 4,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7216] = 4,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7230] = 4,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7244] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7258] = 4,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7272] = 4,
    ACTIONS(1131), 1,
      sym_ident,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7286] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7300] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1139), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [7310] = 4,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7324] = 4,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7338] = 4,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7352] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(414), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7366] = 4,
    ACTIONS(1131), 1,
      sym_ident,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7380] = 4,
    ACTIONS(1009), 1,
      sym_ident,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7394] = 4,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7408] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(437), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7422] = 4,
    ACTIONS(1103), 1,
      sym_ident,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    STATE(310), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7436] = 4,
    ACTIONS(1019), 1,
      sym_ident,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7450] = 4,
    ACTIONS(1053), 1,
      anon_sym_mark,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
    STATE(286), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7464] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1164), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7474] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(398), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7488] = 4,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7502] = 4,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7516] = 4,
    ACTIONS(948), 1,
      sym_ident,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7530] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(369), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7544] = 3,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7555] = 3,
    ACTIONS(1178), 1,
      anon_sym_RBRACK,
    ACTIONS(1180), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7566] = 3,
    ACTIONS(1182), 1,
      anon_sym_LBRACE,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7577] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1186), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7586] = 3,
    ACTIONS(1188), 1,
      sym_ident,
    ACTIONS(1190), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7597] = 3,
    ACTIONS(1192), 1,
      sym_ident,
    ACTIONS(1194), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7608] = 3,
    ACTIONS(1009), 1,
      sym_ident,
    STATE(373), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7619] = 3,
    ACTIONS(1196), 1,
      sym_ident,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7630] = 3,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7641] = 3,
    ACTIONS(1204), 1,
      sym_ident,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7652] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7661] = 3,
    ACTIONS(1210), 1,
      sym_ident,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7672] = 3,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7683] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1218), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7692] = 3,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7703] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7712] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7721] = 3,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7732] = 3,
    ACTIONS(1053), 1,
      anon_sym_mark,
    STATE(360), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7743] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7752] = 3,
    ACTIONS(974), 1,
      sym_ident,
    STATE(362), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7763] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7772] = 3,
    ACTIONS(1085), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7783] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7792] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1092), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7801] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7810] = 3,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7821] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7830] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7839] = 3,
    ACTIONS(1240), 1,
      sym_ident,
    ACTIONS(1242), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7850] = 3,
    ACTIONS(1244), 1,
      sym_ident,
    ACTIONS(1246), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7861] = 3,
    ACTIONS(1248), 1,
      anon_sym_LBRACE,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7872] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1037), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7881] = 3,
    ACTIONS(1252), 1,
      sym_ident,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7892] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7901] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7910] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1260), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7919] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7928] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7937] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1264), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7946] = 3,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7957] = 3,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7968] = 3,
    ACTIONS(1270), 1,
      sym_ident,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7979] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7988] = 3,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7999] = 3,
    ACTIONS(1280), 1,
      anon_sym_RBRACK,
    ACTIONS(1282), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8010] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1143), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8019] = 3,
    ACTIONS(1284), 1,
      anon_sym_RBRACK,
    ACTIONS(1286), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8030] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1288), 2,
      sym_ident,
      anon_sym_RBRACE,
  [8039] = 3,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8050] = 3,
    ACTIONS(1294), 1,
      sym_ident,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8061] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8070] = 3,
    ACTIONS(1300), 1,
      sym_ident,
    ACTIONS(1302), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8081] = 3,
    ACTIONS(1085), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8092] = 2,
    ACTIONS(1304), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8100] = 2,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8108] = 2,
    ACTIONS(1308), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8116] = 2,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8124] = 2,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8132] = 2,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8140] = 2,
    ACTIONS(1316), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8148] = 2,
    ACTIONS(1318), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8156] = 2,
    ACTIONS(1320), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8164] = 2,
    ACTIONS(1178), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8172] = 2,
    ACTIONS(1322), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8180] = 2,
    ACTIONS(1324), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8188] = 2,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8196] = 2,
    ACTIONS(918), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8204] = 2,
    ACTIONS(1328), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8212] = 2,
    ACTIONS(1330), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8220] = 2,
    ACTIONS(1332), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8228] = 2,
    ACTIONS(1334), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8236] = 2,
    ACTIONS(1336), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8244] = 2,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8252] = 2,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8260] = 2,
    ACTIONS(1342), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8268] = 2,
    ACTIONS(1344), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8276] = 2,
    ACTIONS(1346), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8284] = 2,
    ACTIONS(1348), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8292] = 2,
    ACTIONS(1350), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8300] = 2,
    ACTIONS(1352), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8308] = 2,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8316] = 2,
    ACTIONS(1356), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8324] = 2,
    ACTIONS(1358), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8332] = 2,
    ACTIONS(1360), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8340] = 2,
    ACTIONS(1362), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8348] = 2,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8356] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8364] = 2,
    ACTIONS(1368), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8372] = 2,
    ACTIONS(1370), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8380] = 2,
    ACTIONS(1372), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8388] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8396] = 2,
    ACTIONS(1376), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8404] = 2,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8412] = 2,
    ACTIONS(1380), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8420] = 2,
    ACTIONS(1382), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8428] = 2,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8436] = 2,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8444] = 2,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8452] = 2,
    ACTIONS(1390), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8460] = 2,
    ACTIONS(1392), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8468] = 2,
    ACTIONS(1394), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8476] = 2,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8484] = 2,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8492] = 2,
    ACTIONS(1400), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8500] = 2,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8508] = 2,
    ACTIONS(1404), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8516] = 2,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8524] = 2,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8532] = 2,
    ACTIONS(1410), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8540] = 2,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8548] = 2,
    ACTIONS(1414), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8556] = 2,
    ACTIONS(1416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8564] = 2,
    ACTIONS(1418), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8572] = 2,
    ACTIONS(1420), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8580] = 2,
    ACTIONS(1422), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8588] = 2,
    ACTIONS(1424), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8596] = 2,
    ACTIONS(1426), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8604] = 2,
    ACTIONS(1428), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8612] = 2,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8620] = 2,
    ACTIONS(1432), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8628] = 2,
    ACTIONS(1434), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8636] = 2,
    ACTIONS(1436), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8644] = 2,
    ACTIONS(1438), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8652] = 2,
    ACTIONS(1440), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8660] = 2,
    ACTIONS(1442), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8668] = 2,
    ACTIONS(1444), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8676] = 2,
    ACTIONS(1446), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8684] = 2,
    ACTIONS(1448), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8692] = 2,
    ACTIONS(1450), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8700] = 2,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8708] = 2,
    ACTIONS(1454), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8716] = 2,
    ACTIONS(1456), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8724] = 2,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8732] = 2,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8740] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8748] = 2,
    ACTIONS(1464), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8756] = 2,
    ACTIONS(1466), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8764] = 2,
    ACTIONS(1468), 1,
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
  [SMALL_STATE(9)] = 566,
  [SMALL_STATE(10)] = 619,
  [SMALL_STATE(11)] = 672,
  [SMALL_STATE(12)] = 725,
  [SMALL_STATE(13)] = 775,
  [SMALL_STATE(14)] = 825,
  [SMALL_STATE(15)] = 875,
  [SMALL_STATE(16)] = 925,
  [SMALL_STATE(17)] = 975,
  [SMALL_STATE(18)] = 1025,
  [SMALL_STATE(19)] = 1072,
  [SMALL_STATE(20)] = 1119,
  [SMALL_STATE(21)] = 1166,
  [SMALL_STATE(22)] = 1194,
  [SMALL_STATE(23)] = 1222,
  [SMALL_STATE(24)] = 1250,
  [SMALL_STATE(25)] = 1278,
  [SMALL_STATE(26)] = 1306,
  [SMALL_STATE(27)] = 1334,
  [SMALL_STATE(28)] = 1362,
  [SMALL_STATE(29)] = 1390,
  [SMALL_STATE(30)] = 1418,
  [SMALL_STATE(31)] = 1446,
  [SMALL_STATE(32)] = 1474,
  [SMALL_STATE(33)] = 1502,
  [SMALL_STATE(34)] = 1530,
  [SMALL_STATE(35)] = 1558,
  [SMALL_STATE(36)] = 1586,
  [SMALL_STATE(37)] = 1614,
  [SMALL_STATE(38)] = 1642,
  [SMALL_STATE(39)] = 1670,
  [SMALL_STATE(40)] = 1698,
  [SMALL_STATE(41)] = 1726,
  [SMALL_STATE(42)] = 1754,
  [SMALL_STATE(43)] = 1782,
  [SMALL_STATE(44)] = 1810,
  [SMALL_STATE(45)] = 1838,
  [SMALL_STATE(46)] = 1866,
  [SMALL_STATE(47)] = 1894,
  [SMALL_STATE(48)] = 1922,
  [SMALL_STATE(49)] = 1950,
  [SMALL_STATE(50)] = 1978,
  [SMALL_STATE(51)] = 2006,
  [SMALL_STATE(52)] = 2034,
  [SMALL_STATE(53)] = 2062,
  [SMALL_STATE(54)] = 2090,
  [SMALL_STATE(55)] = 2118,
  [SMALL_STATE(56)] = 2146,
  [SMALL_STATE(57)] = 2174,
  [SMALL_STATE(58)] = 2202,
  [SMALL_STATE(59)] = 2230,
  [SMALL_STATE(60)] = 2258,
  [SMALL_STATE(61)] = 2286,
  [SMALL_STATE(62)] = 2314,
  [SMALL_STATE(63)] = 2342,
  [SMALL_STATE(64)] = 2370,
  [SMALL_STATE(65)] = 2398,
  [SMALL_STATE(66)] = 2426,
  [SMALL_STATE(67)] = 2454,
  [SMALL_STATE(68)] = 2482,
  [SMALL_STATE(69)] = 2510,
  [SMALL_STATE(70)] = 2538,
  [SMALL_STATE(71)] = 2566,
  [SMALL_STATE(72)] = 2594,
  [SMALL_STATE(73)] = 2622,
  [SMALL_STATE(74)] = 2650,
  [SMALL_STATE(75)] = 2678,
  [SMALL_STATE(76)] = 2706,
  [SMALL_STATE(77)] = 2734,
  [SMALL_STATE(78)] = 2762,
  [SMALL_STATE(79)] = 2790,
  [SMALL_STATE(80)] = 2818,
  [SMALL_STATE(81)] = 2846,
  [SMALL_STATE(82)] = 2874,
  [SMALL_STATE(83)] = 2902,
  [SMALL_STATE(84)] = 2930,
  [SMALL_STATE(85)] = 2958,
  [SMALL_STATE(86)] = 2986,
  [SMALL_STATE(87)] = 3014,
  [SMALL_STATE(88)] = 3042,
  [SMALL_STATE(89)] = 3070,
  [SMALL_STATE(90)] = 3098,
  [SMALL_STATE(91)] = 3126,
  [SMALL_STATE(92)] = 3154,
  [SMALL_STATE(93)] = 3182,
  [SMALL_STATE(94)] = 3225,
  [SMALL_STATE(95)] = 3254,
  [SMALL_STATE(96)] = 3283,
  [SMALL_STATE(97)] = 3312,
  [SMALL_STATE(98)] = 3341,
  [SMALL_STATE(99)] = 3370,
  [SMALL_STATE(100)] = 3399,
  [SMALL_STATE(101)] = 3428,
  [SMALL_STATE(102)] = 3457,
  [SMALL_STATE(103)] = 3486,
  [SMALL_STATE(104)] = 3515,
  [SMALL_STATE(105)] = 3544,
  [SMALL_STATE(106)] = 3573,
  [SMALL_STATE(107)] = 3602,
  [SMALL_STATE(108)] = 3631,
  [SMALL_STATE(109)] = 3660,
  [SMALL_STATE(110)] = 3689,
  [SMALL_STATE(111)] = 3718,
  [SMALL_STATE(112)] = 3748,
  [SMALL_STATE(113)] = 3778,
  [SMALL_STATE(114)] = 3808,
  [SMALL_STATE(115)] = 3842,
  [SMALL_STATE(116)] = 3872,
  [SMALL_STATE(117)] = 3906,
  [SMALL_STATE(118)] = 3936,
  [SMALL_STATE(119)] = 3970,
  [SMALL_STATE(120)] = 4000,
  [SMALL_STATE(121)] = 4029,
  [SMALL_STATE(122)] = 4054,
  [SMALL_STATE(123)] = 4083,
  [SMALL_STATE(124)] = 4108,
  [SMALL_STATE(125)] = 4131,
  [SMALL_STATE(126)] = 4156,
  [SMALL_STATE(127)] = 4187,
  [SMALL_STATE(128)] = 4216,
  [SMALL_STATE(129)] = 4241,
  [SMALL_STATE(130)] = 4266,
  [SMALL_STATE(131)] = 4292,
  [SMALL_STATE(132)] = 4316,
  [SMALL_STATE(133)] = 4344,
  [SMALL_STATE(134)] = 4368,
  [SMALL_STATE(135)] = 4396,
  [SMALL_STATE(136)] = 4420,
  [SMALL_STATE(137)] = 4444,
  [SMALL_STATE(138)] = 4468,
  [SMALL_STATE(139)] = 4496,
  [SMALL_STATE(140)] = 4524,
  [SMALL_STATE(141)] = 4549,
  [SMALL_STATE(142)] = 4574,
  [SMALL_STATE(143)] = 4599,
  [SMALL_STATE(144)] = 4624,
  [SMALL_STATE(145)] = 4649,
  [SMALL_STATE(146)] = 4674,
  [SMALL_STATE(147)] = 4699,
  [SMALL_STATE(148)] = 4716,
  [SMALL_STATE(149)] = 4741,
  [SMALL_STATE(150)] = 4757,
  [SMALL_STATE(151)] = 4773,
  [SMALL_STATE(152)] = 4789,
  [SMALL_STATE(153)] = 4805,
  [SMALL_STATE(154)] = 4821,
  [SMALL_STATE(155)] = 4837,
  [SMALL_STATE(156)] = 4853,
  [SMALL_STATE(157)] = 4869,
  [SMALL_STATE(158)] = 4885,
  [SMALL_STATE(159)] = 4900,
  [SMALL_STATE(160)] = 4915,
  [SMALL_STATE(161)] = 4930,
  [SMALL_STATE(162)] = 4945,
  [SMALL_STATE(163)] = 4966,
  [SMALL_STATE(164)] = 4981,
  [SMALL_STATE(165)] = 4996,
  [SMALL_STATE(166)] = 5011,
  [SMALL_STATE(167)] = 5026,
  [SMALL_STATE(168)] = 5041,
  [SMALL_STATE(169)] = 5056,
  [SMALL_STATE(170)] = 5077,
  [SMALL_STATE(171)] = 5092,
  [SMALL_STATE(172)] = 5107,
  [SMALL_STATE(173)] = 5122,
  [SMALL_STATE(174)] = 5141,
  [SMALL_STATE(175)] = 5160,
  [SMALL_STATE(176)] = 5174,
  [SMALL_STATE(177)] = 5188,
  [SMALL_STATE(178)] = 5202,
  [SMALL_STATE(179)] = 5218,
  [SMALL_STATE(180)] = 5232,
  [SMALL_STATE(181)] = 5246,
  [SMALL_STATE(182)] = 5260,
  [SMALL_STATE(183)] = 5280,
  [SMALL_STATE(184)] = 5294,
  [SMALL_STATE(185)] = 5306,
  [SMALL_STATE(186)] = 5322,
  [SMALL_STATE(187)] = 5336,
  [SMALL_STATE(188)] = 5350,
  [SMALL_STATE(189)] = 5370,
  [SMALL_STATE(190)] = 5390,
  [SMALL_STATE(191)] = 5404,
  [SMALL_STATE(192)] = 5416,
  [SMALL_STATE(193)] = 5430,
  [SMALL_STATE(194)] = 5444,
  [SMALL_STATE(195)] = 5458,
  [SMALL_STATE(196)] = 5476,
  [SMALL_STATE(197)] = 5490,
  [SMALL_STATE(198)] = 5502,
  [SMALL_STATE(199)] = 5520,
  [SMALL_STATE(200)] = 5536,
  [SMALL_STATE(201)] = 5552,
  [SMALL_STATE(202)] = 5572,
  [SMALL_STATE(203)] = 5586,
  [SMALL_STATE(204)] = 5606,
  [SMALL_STATE(205)] = 5620,
  [SMALL_STATE(206)] = 5640,
  [SMALL_STATE(207)] = 5660,
  [SMALL_STATE(208)] = 5680,
  [SMALL_STATE(209)] = 5694,
  [SMALL_STATE(210)] = 5714,
  [SMALL_STATE(211)] = 5725,
  [SMALL_STATE(212)] = 5740,
  [SMALL_STATE(213)] = 5755,
  [SMALL_STATE(214)] = 5770,
  [SMALL_STATE(215)] = 5781,
  [SMALL_STATE(216)] = 5796,
  [SMALL_STATE(217)] = 5813,
  [SMALL_STATE(218)] = 5828,
  [SMALL_STATE(219)] = 5845,
  [SMALL_STATE(220)] = 5862,
  [SMALL_STATE(221)] = 5879,
  [SMALL_STATE(222)] = 5896,
  [SMALL_STATE(223)] = 5913,
  [SMALL_STATE(224)] = 5924,
  [SMALL_STATE(225)] = 5941,
  [SMALL_STATE(226)] = 5958,
  [SMALL_STATE(227)] = 5973,
  [SMALL_STATE(228)] = 5988,
  [SMALL_STATE(229)] = 6003,
  [SMALL_STATE(230)] = 6018,
  [SMALL_STATE(231)] = 6035,
  [SMALL_STATE(232)] = 6052,
  [SMALL_STATE(233)] = 6067,
  [SMALL_STATE(234)] = 6082,
  [SMALL_STATE(235)] = 6097,
  [SMALL_STATE(236)] = 6112,
  [SMALL_STATE(237)] = 6129,
  [SMALL_STATE(238)] = 6140,
  [SMALL_STATE(239)] = 6155,
  [SMALL_STATE(240)] = 6166,
  [SMALL_STATE(241)] = 6181,
  [SMALL_STATE(242)] = 6196,
  [SMALL_STATE(243)] = 6211,
  [SMALL_STATE(244)] = 6222,
  [SMALL_STATE(245)] = 6233,
  [SMALL_STATE(246)] = 6248,
  [SMALL_STATE(247)] = 6259,
  [SMALL_STATE(248)] = 6272,
  [SMALL_STATE(249)] = 6287,
  [SMALL_STATE(250)] = 6302,
  [SMALL_STATE(251)] = 6317,
  [SMALL_STATE(252)] = 6332,
  [SMALL_STATE(253)] = 6349,
  [SMALL_STATE(254)] = 6364,
  [SMALL_STATE(255)] = 6375,
  [SMALL_STATE(256)] = 6386,
  [SMALL_STATE(257)] = 6397,
  [SMALL_STATE(258)] = 6408,
  [SMALL_STATE(259)] = 6419,
  [SMALL_STATE(260)] = 6430,
  [SMALL_STATE(261)] = 6445,
  [SMALL_STATE(262)] = 6462,
  [SMALL_STATE(263)] = 6477,
  [SMALL_STATE(264)] = 6492,
  [SMALL_STATE(265)] = 6507,
  [SMALL_STATE(266)] = 6522,
  [SMALL_STATE(267)] = 6537,
  [SMALL_STATE(268)] = 6552,
  [SMALL_STATE(269)] = 6567,
  [SMALL_STATE(270)] = 6578,
  [SMALL_STATE(271)] = 6589,
  [SMALL_STATE(272)] = 6606,
  [SMALL_STATE(273)] = 6621,
  [SMALL_STATE(274)] = 6632,
  [SMALL_STATE(275)] = 6643,
  [SMALL_STATE(276)] = 6654,
  [SMALL_STATE(277)] = 6668,
  [SMALL_STATE(278)] = 6682,
  [SMALL_STATE(279)] = 6696,
  [SMALL_STATE(280)] = 6710,
  [SMALL_STATE(281)] = 6724,
  [SMALL_STATE(282)] = 6738,
  [SMALL_STATE(283)] = 6752,
  [SMALL_STATE(284)] = 6766,
  [SMALL_STATE(285)] = 6780,
  [SMALL_STATE(286)] = 6794,
  [SMALL_STATE(287)] = 6808,
  [SMALL_STATE(288)] = 6822,
  [SMALL_STATE(289)] = 6836,
  [SMALL_STATE(290)] = 6850,
  [SMALL_STATE(291)] = 6864,
  [SMALL_STATE(292)] = 6878,
  [SMALL_STATE(293)] = 6892,
  [SMALL_STATE(294)] = 6906,
  [SMALL_STATE(295)] = 6920,
  [SMALL_STATE(296)] = 6934,
  [SMALL_STATE(297)] = 6948,
  [SMALL_STATE(298)] = 6962,
  [SMALL_STATE(299)] = 6976,
  [SMALL_STATE(300)] = 6990,
  [SMALL_STATE(301)] = 7004,
  [SMALL_STATE(302)] = 7018,
  [SMALL_STATE(303)] = 7032,
  [SMALL_STATE(304)] = 7046,
  [SMALL_STATE(305)] = 7060,
  [SMALL_STATE(306)] = 7070,
  [SMALL_STATE(307)] = 7084,
  [SMALL_STATE(308)] = 7098,
  [SMALL_STATE(309)] = 7112,
  [SMALL_STATE(310)] = 7126,
  [SMALL_STATE(311)] = 7140,
  [SMALL_STATE(312)] = 7154,
  [SMALL_STATE(313)] = 7168,
  [SMALL_STATE(314)] = 7178,
  [SMALL_STATE(315)] = 7192,
  [SMALL_STATE(316)] = 7202,
  [SMALL_STATE(317)] = 7216,
  [SMALL_STATE(318)] = 7230,
  [SMALL_STATE(319)] = 7244,
  [SMALL_STATE(320)] = 7258,
  [SMALL_STATE(321)] = 7272,
  [SMALL_STATE(322)] = 7286,
  [SMALL_STATE(323)] = 7300,
  [SMALL_STATE(324)] = 7310,
  [SMALL_STATE(325)] = 7324,
  [SMALL_STATE(326)] = 7338,
  [SMALL_STATE(327)] = 7352,
  [SMALL_STATE(328)] = 7366,
  [SMALL_STATE(329)] = 7380,
  [SMALL_STATE(330)] = 7394,
  [SMALL_STATE(331)] = 7408,
  [SMALL_STATE(332)] = 7422,
  [SMALL_STATE(333)] = 7436,
  [SMALL_STATE(334)] = 7450,
  [SMALL_STATE(335)] = 7464,
  [SMALL_STATE(336)] = 7474,
  [SMALL_STATE(337)] = 7488,
  [SMALL_STATE(338)] = 7502,
  [SMALL_STATE(339)] = 7516,
  [SMALL_STATE(340)] = 7530,
  [SMALL_STATE(341)] = 7544,
  [SMALL_STATE(342)] = 7555,
  [SMALL_STATE(343)] = 7566,
  [SMALL_STATE(344)] = 7577,
  [SMALL_STATE(345)] = 7586,
  [SMALL_STATE(346)] = 7597,
  [SMALL_STATE(347)] = 7608,
  [SMALL_STATE(348)] = 7619,
  [SMALL_STATE(349)] = 7630,
  [SMALL_STATE(350)] = 7641,
  [SMALL_STATE(351)] = 7652,
  [SMALL_STATE(352)] = 7661,
  [SMALL_STATE(353)] = 7672,
  [SMALL_STATE(354)] = 7683,
  [SMALL_STATE(355)] = 7692,
  [SMALL_STATE(356)] = 7703,
  [SMALL_STATE(357)] = 7712,
  [SMALL_STATE(358)] = 7721,
  [SMALL_STATE(359)] = 7732,
  [SMALL_STATE(360)] = 7743,
  [SMALL_STATE(361)] = 7752,
  [SMALL_STATE(362)] = 7763,
  [SMALL_STATE(363)] = 7772,
  [SMALL_STATE(364)] = 7783,
  [SMALL_STATE(365)] = 7792,
  [SMALL_STATE(366)] = 7801,
  [SMALL_STATE(367)] = 7810,
  [SMALL_STATE(368)] = 7821,
  [SMALL_STATE(369)] = 7830,
  [SMALL_STATE(370)] = 7839,
  [SMALL_STATE(371)] = 7850,
  [SMALL_STATE(372)] = 7861,
  [SMALL_STATE(373)] = 7872,
  [SMALL_STATE(374)] = 7881,
  [SMALL_STATE(375)] = 7892,
  [SMALL_STATE(376)] = 7901,
  [SMALL_STATE(377)] = 7910,
  [SMALL_STATE(378)] = 7919,
  [SMALL_STATE(379)] = 7928,
  [SMALL_STATE(380)] = 7937,
  [SMALL_STATE(381)] = 7946,
  [SMALL_STATE(382)] = 7957,
  [SMALL_STATE(383)] = 7968,
  [SMALL_STATE(384)] = 7979,
  [SMALL_STATE(385)] = 7988,
  [SMALL_STATE(386)] = 7999,
  [SMALL_STATE(387)] = 8010,
  [SMALL_STATE(388)] = 8019,
  [SMALL_STATE(389)] = 8030,
  [SMALL_STATE(390)] = 8039,
  [SMALL_STATE(391)] = 8050,
  [SMALL_STATE(392)] = 8061,
  [SMALL_STATE(393)] = 8070,
  [SMALL_STATE(394)] = 8081,
  [SMALL_STATE(395)] = 8092,
  [SMALL_STATE(396)] = 8100,
  [SMALL_STATE(397)] = 8108,
  [SMALL_STATE(398)] = 8116,
  [SMALL_STATE(399)] = 8124,
  [SMALL_STATE(400)] = 8132,
  [SMALL_STATE(401)] = 8140,
  [SMALL_STATE(402)] = 8148,
  [SMALL_STATE(403)] = 8156,
  [SMALL_STATE(404)] = 8164,
  [SMALL_STATE(405)] = 8172,
  [SMALL_STATE(406)] = 8180,
  [SMALL_STATE(407)] = 8188,
  [SMALL_STATE(408)] = 8196,
  [SMALL_STATE(409)] = 8204,
  [SMALL_STATE(410)] = 8212,
  [SMALL_STATE(411)] = 8220,
  [SMALL_STATE(412)] = 8228,
  [SMALL_STATE(413)] = 8236,
  [SMALL_STATE(414)] = 8244,
  [SMALL_STATE(415)] = 8252,
  [SMALL_STATE(416)] = 8260,
  [SMALL_STATE(417)] = 8268,
  [SMALL_STATE(418)] = 8276,
  [SMALL_STATE(419)] = 8284,
  [SMALL_STATE(420)] = 8292,
  [SMALL_STATE(421)] = 8300,
  [SMALL_STATE(422)] = 8308,
  [SMALL_STATE(423)] = 8316,
  [SMALL_STATE(424)] = 8324,
  [SMALL_STATE(425)] = 8332,
  [SMALL_STATE(426)] = 8340,
  [SMALL_STATE(427)] = 8348,
  [SMALL_STATE(428)] = 8356,
  [SMALL_STATE(429)] = 8364,
  [SMALL_STATE(430)] = 8372,
  [SMALL_STATE(431)] = 8380,
  [SMALL_STATE(432)] = 8388,
  [SMALL_STATE(433)] = 8396,
  [SMALL_STATE(434)] = 8404,
  [SMALL_STATE(435)] = 8412,
  [SMALL_STATE(436)] = 8420,
  [SMALL_STATE(437)] = 8428,
  [SMALL_STATE(438)] = 8436,
  [SMALL_STATE(439)] = 8444,
  [SMALL_STATE(440)] = 8452,
  [SMALL_STATE(441)] = 8460,
  [SMALL_STATE(442)] = 8468,
  [SMALL_STATE(443)] = 8476,
  [SMALL_STATE(444)] = 8484,
  [SMALL_STATE(445)] = 8492,
  [SMALL_STATE(446)] = 8500,
  [SMALL_STATE(447)] = 8508,
  [SMALL_STATE(448)] = 8516,
  [SMALL_STATE(449)] = 8524,
  [SMALL_STATE(450)] = 8532,
  [SMALL_STATE(451)] = 8540,
  [SMALL_STATE(452)] = 8548,
  [SMALL_STATE(453)] = 8556,
  [SMALL_STATE(454)] = 8564,
  [SMALL_STATE(455)] = 8572,
  [SMALL_STATE(456)] = 8580,
  [SMALL_STATE(457)] = 8588,
  [SMALL_STATE(458)] = 8596,
  [SMALL_STATE(459)] = 8604,
  [SMALL_STATE(460)] = 8612,
  [SMALL_STATE(461)] = 8620,
  [SMALL_STATE(462)] = 8628,
  [SMALL_STATE(463)] = 8636,
  [SMALL_STATE(464)] = 8644,
  [SMALL_STATE(465)] = 8652,
  [SMALL_STATE(466)] = 8660,
  [SMALL_STATE(467)] = 8668,
  [SMALL_STATE(468)] = 8676,
  [SMALL_STATE(469)] = 8684,
  [SMALL_STATE(470)] = 8692,
  [SMALL_STATE(471)] = 8700,
  [SMALL_STATE(472)] = 8708,
  [SMALL_STATE(473)] = 8716,
  [SMALL_STATE(474)] = 8724,
  [SMALL_STATE(475)] = 8732,
  [SMALL_STATE(476)] = 8740,
  [SMALL_STATE(477)] = 8748,
  [SMALL_STATE(478)] = 8756,
  [SMALL_STATE(479)] = 8764,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 59),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 59),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 57),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 57),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 59),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 59),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 56),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 56),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 53),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 53),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 57),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 57),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 52),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 52),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 56),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 56),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 48),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 48),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 47),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 47),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 52),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 52),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 44),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 44),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(202),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(461),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(212),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(350),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 50),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(258),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(231),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(231),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(126),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(416),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(261),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(442),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(361),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18), SHIFT_REPEAT(459),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(340),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 4, 0, 16),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 58),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 55),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 49),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 58),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 54),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 55),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 2, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 3, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 4, 0, 0),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 5, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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

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
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_LBRACK = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACK = 25,
  anon_sym_as = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_typeof = 29,
  anon_sym_DASH = 30,
  anon_sym_PLUS = 31,
  anon_sym_bind = 32,
  anon_sym_bind_DASHproperty = 33,
  anon_sym__ = 34,
  anon_sym_C_ = 35,
  anon_sym_PIPE = 36,
  anon_sym_internal_DASHchild = 37,
  anon_sym_action = 38,
  anon_sym_menu = 39,
  anon_sym_section = 40,
  anon_sym_submenu = 41,
  anon_sym_item = 42,
  sym_line_comment = 43,
  sym_block_comment = 44,
  anon_sym_accessibility = 45,
  anon_sym_responses = 46,
  anon_sym_condition = 47,
  anon_sym_setters = 48,
  anon_sym_items = 49,
  anon_sym_mime_DASHtypes = 50,
  anon_sym_patterns = 51,
  anon_sym_suffixes = 52,
  anon_sym_layout = 53,
  anon_sym_marks = 54,
  anon_sym_mark = 55,
  anon_sym_widgets = 56,
  anon_sym_strings = 57,
  anon_sym_styles = 58,
  anon_sym_response = 59,
  anon_sym_EQ = 60,
  anon_sym_default = 61,
  sym_source_file = 62,
  sym__number = 63,
  sym_quoted = 64,
  sym_type_name = 65,
  sym_using = 66,
  sym_translation_domain = 67,
  sym_template = 68,
  sym_object = 69,
  sym_object_content = 70,
  sym_signal = 71,
  sym_property = 72,
  sym_array_value = 73,
  sym_closure_expression = 74,
  sym_lookup_expression = 75,
  sym_cast_expression = 76,
  sym_literal = 77,
  sym__type_literal = 78,
  sym__quoted_literal = 79,
  sym__number_literal = 80,
  sym__ident_literal = 81,
  sym__expression = 82,
  sym_binding = 83,
  sym_object_value = 84,
  sym_value = 85,
  sym_translated = 86,
  sym_flags = 87,
  sym_child_internal = 88,
  sym_child_annotation = 89,
  sym__child = 90,
  sym_menu = 91,
  sym__menu_child = 92,
  sym_menu_section = 93,
  sym_menu_submenu = 94,
  sym_menu_item = 95,
  sym_menu_attribute = 96,
  sym_string_value = 97,
  sym_menu_item_shorthand = 98,
  sym__extension = 99,
  sym_ext_accessibility = 100,
  sym_ext_adw_dialog = 101,
  sym_ext_adw_dialog_response = 102,
  sym_ext_adw_breakpoint_condition = 103,
  sym_ext_adw_breakpoint = 104,
  sym_ext_combo_box_items = 105,
  sym__ext_combo_box_item = 106,
  sym_ext_file_filter_mime_types = 107,
  sym_ext_file_filter_patterns = 108,
  sym_ext_file_filter_suffixes = 109,
  sym__ext_file_filter_item = 110,
  sym_ext_layout = 111,
  sym_ext_list_item_factory = 112,
  sym_ext_scale_marks = 113,
  sym_ext_scale_mark = 114,
  sym_ext_size_group_widgets = 115,
  sym__ext_size_group_widget = 116,
  sym_ext_string_list_strings = 117,
  sym__ext_strings_list_item = 118,
  sym_ext_styles = 119,
  sym__child_extension = 120,
  sym_ext_response = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_source_file_repeat2 = 123,
  aux_sym_quoted_repeat1 = 124,
  aux_sym_quoted_repeat2 = 125,
  aux_sym_object_content_repeat1 = 126,
  aux_sym_signal_repeat1 = 127,
  aux_sym_array_value_repeat1 = 128,
  aux_sym_closure_expression_repeat1 = 129,
  aux_sym__expression_repeat1 = 130,
  aux_sym_binding_repeat1 = 131,
  aux_sym_flags_repeat1 = 132,
  aux_sym_menu_repeat1 = 133,
  aux_sym_menu_section_repeat1 = 134,
  aux_sym_menu_item_repeat1 = 135,
  aux_sym_ext_accessibility_repeat1 = 136,
  aux_sym_ext_adw_dialog_repeat1 = 137,
  aux_sym_ext_adw_breakpoint_repeat1 = 138,
  aux_sym_ext_combo_box_items_repeat1 = 139,
  aux_sym_ext_file_filter_mime_types_repeat1 = 140,
  aux_sym_ext_layout_repeat1 = 141,
  aux_sym_ext_scale_marks_repeat1 = 142,
  aux_sym_ext_size_group_widgets_repeat1 = 143,
  aux_sym_ext_string_list_strings_repeat1 = 144,
  aux_sym_ext_styles_repeat1 = 145,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 94,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 100,
  [106] = 96,
  [107] = 97,
  [108] = 102,
  [109] = 103,
  [110] = 104,
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
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 133,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 144,
  [148] = 140,
  [149] = 149,
  [150] = 87,
  [151] = 151,
  [152] = 90,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 89,
  [157] = 88,
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
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 189,
  [217] = 190,
  [218] = 209,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 180,
  [225] = 181,
  [226] = 182,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 192,
  [232] = 232,
  [233] = 233,
  [234] = 227,
  [235] = 193,
  [236] = 194,
  [237] = 237,
  [238] = 238,
  [239] = 183,
  [240] = 184,
  [241] = 241,
  [242] = 185,
  [243] = 186,
  [244] = 187,
  [245] = 245,
  [246] = 188,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 212,
  [253] = 213,
  [254] = 249,
  [255] = 250,
  [256] = 256,
  [257] = 248,
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
  [324] = 149,
  [325] = 325,
  [326] = 326,
  [327] = 151,
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
  [340] = 332,
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
  [370] = 342,
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
  [381] = 196,
  [382] = 382,
  [383] = 383,
  [384] = 358,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 387,
  [390] = 390,
  [391] = 376,
  [392] = 378,
  [393] = 373,
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
  [467] = 405,
  [468] = 468,
  [469] = 469,
  [470] = 446,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 418,
  [475] = 433,
  [476] = 476,
  [477] = 477,
  [478] = 419,
  [479] = 479,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '"', 251,
        '$', 257,
        '\'', 253,
        '(', 267,
        ')', 268,
        '+', 277,
        ',', 270,
        '-', 276,
        '.', 256,
        '/', 13,
        '0', 245,
        ':', 262,
        ';', 259,
        '<', 273,
        '=', 313,
        '>', 274,
        'C', 59,
        '[', 269,
        '\\', 3,
        ']', 271,
        '_', 280,
        'a', 73,
        'b', 122,
        'c', 178,
        'd', 86,
        'i', 153,
        'l', 60,
        'm', 61,
        'p', 62,
        'r', 90,
        's', 91,
        't', 94,
        'u', 213,
        'w', 123,
        '{', 263,
        '|', 282,
        '}', 264,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 251,
        '$', 257,
        '\'', 253,
        '(', 267,
        ')', 268,
        '+', 277,
        '-', 276,
        '.', 51,
        '/', 13,
        '0', 245,
        't', 239,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 251,
        '$', 257,
        '\'', 253,
        '+', 277,
        '-', 276,
        '.', 256,
        '/', 13,
        '0', 245,
        'C', 59,
        '[', 269,
        '_', 280,
        'b', 122,
        't', 239,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 251,
        '\'', 253,
        '+', 277,
        '-', 276,
        '.', 51,
        '/', 13,
        '0', 245,
        'C', 59,
        '[', 269,
        ']', 271,
        '_', 280,
        't', 239,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(251);
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
        '$', 257,
        ')', 268,
        ',', 270,
        '.', 255,
        '/', 13,
        ':', 262,
        ';', 259,
        '=', 20,
        '>', 274,
        ']', 271,
        '{', 263,
        '|', 282,
        '}', 264,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '$', 257,
        '.', 255,
        '/', 13,
        '=', 20,
        '[', 269,
        'a', 77,
        'c', 178,
        'i', 227,
        'l', 60,
        'm', 66,
        'p', 62,
        'r', 113,
        's', 111,
        't', 96,
        'w', 123,
        '}', 264,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(268);
      if (lookahead == ',') ADVANCE(270);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(293);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '/', 13,
        ']', 271,
        'd', 25,
        'i', 48,
        'm', 21,
        'r', 26,
        's', 27,
        '}', 264,
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(266);
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
      if (lookahead == 'e') ADVANCE(310);
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
      if (lookahead == 'k') ADVANCE(305);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(286);
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
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(248);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(248);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(266);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
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
  [93] = {.lex_state = 54},
  [94] = {.lex_state = 19},
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
  [111] = {.lex_state = 53},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 53},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 53},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 54},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 53},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 53},
  [157] = {.lex_state = 53},
  [158] = {.lex_state = 53},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 53},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 53},
  [166] = {.lex_state = 53},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 53},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 17},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 17},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 17},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 17},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 9},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 9},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 54},
  [404] = {.lex_state = 9},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 54},
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
  [428] = {.lex_state = 9},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 9},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 9},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 9},
  [466] = {.lex_state = 9},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
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
  [479] = {.lex_state = 9},
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
    [sym_source_file] = STATE(410),
    [sym_type_name] = STATE(340),
    [sym_using] = STATE(93),
    [sym_translation_domain] = STATE(111),
    [sym_template] = STATE(114),
    [sym_object] = STATE(114),
    [sym_menu] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(93),
    [aux_sym_source_file_repeat2] = STATE(114),
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
    STATE(206), 1,
      sym_child_annotation,
    STATE(332), 1,
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
    STATE(206), 1,
      sym_child_annotation,
    STATE(332), 1,
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
    STATE(206), 1,
      sym_child_annotation,
    STATE(332), 1,
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
  [264] = 22,
    ACTIONS(57), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_template,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_accessibility,
    ACTIONS(74), 1,
      anon_sym_responses,
    ACTIONS(77), 1,
      anon_sym_condition,
    ACTIONS(80), 1,
      anon_sym_setters,
    ACTIONS(83), 1,
      anon_sym_items,
    ACTIONS(86), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(89), 1,
      anon_sym_patterns,
    ACTIONS(92), 1,
      anon_sym_suffixes,
    ACTIONS(95), 1,
      anon_sym_layout,
    ACTIONS(98), 1,
      anon_sym_marks,
    ACTIONS(101), 1,
      anon_sym_widgets,
    ACTIONS(104), 1,
      anon_sym_strings,
    ACTIONS(107), 1,
      anon_sym_styles,
    STATE(206), 1,
      sym_child_annotation,
    STATE(332), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(60), 2,
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
    STATE(206), 1,
      sym_child_annotation,
    STATE(332), 1,
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
    STATE(340), 1,
      sym_type_name,
    STATE(422), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(450), 4,
      sym_array_value,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(154), 6,
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
    STATE(472), 2,
      sym_array_value,
      sym_value,
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(328), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(371), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(371), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(402), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(371), 1,
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
    STATE(275), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(154), 6,
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
    STATE(369), 1,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(369), 1,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(331), 1,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(448), 1,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(369), 1,
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
    STATE(132), 2,
      sym_closure_expression,
      sym_literal,
    STATE(154), 6,
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
    STATE(113), 1,
      sym_translation_domain,
    STATE(340), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(121), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(119), 4,
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
    STATE(95), 7,
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
    STATE(99), 7,
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
    STATE(102), 7,
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
    STATE(104), 7,
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
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3370] = 7,
    ACTIONS(462), 1,
      sym_ident,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_section,
    ACTIONS(470), 1,
      anon_sym_submenu,
    ACTIONS(473), 1,
      anon_sym_item,
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
  [3399] = 7,
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
    STATE(99), 7,
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
    ACTIONS(478), 1,
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
  [3457] = 7,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(448), 1,
      anon_sym_section,
    ACTIONS(450), 1,
      anon_sym_submenu,
    ACTIONS(452), 1,
      anon_sym_item,
    ACTIONS(480), 1,
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
    STATE(100), 7,
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
    STATE(99), 7,
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
    STATE(99), 7,
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
    STATE(108), 7,
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
    STATE(110), 7,
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
    STATE(99), 7,
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
    STATE(105), 7,
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
    STATE(99), 7,
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
    STATE(340), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(119), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3748] = 10,
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
    STATE(347), 1,
      sym_string_value,
    STATE(362), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3782] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
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
  [3812] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
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
  [3842] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
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
  [3872] = 10,
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
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_string_value,
    STATE(362), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3906] = 8,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 1,
      sym_ident,
    ACTIONS(516), 1,
      anon_sym_template,
    ACTIONS(519), 1,
      anon_sym_menu,
    STATE(340), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(513), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(117), 4,
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
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym__ext_combo_box_item,
    STATE(347), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
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
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    STATE(340), 1,
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
  [4000] = 9,
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
    STATE(347), 1,
      sym_string_value,
    STATE(362), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4031] = 5,
    ACTIONS(528), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(121), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(524), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(526), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4054] = 6,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
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
  [4079] = 8,
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
    STATE(361), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4108] = 6,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
      anon_sym_item,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(129), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [4133] = 6,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym_section,
    ACTIONS(552), 1,
      anon_sym_submenu,
    ACTIONS(555), 1,
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
  [4158] = 6,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
      anon_sym_item,
    ACTIONS(558), 1,
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
  [4183] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(313), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(195), 3,
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
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(361), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4241] = 6,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
      anon_sym_item,
    ACTIONS(564), 1,
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
  [4266] = 6,
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
  [4290] = 6,
    ACTIONS(574), 1,
      sym_ident,
    ACTIONS(576), 1,
      anon_sym_DOT,
    ACTIONS(581), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(579), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4314] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(138), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4338] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4366] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4394] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(592), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4418] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4446] = 7,
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
    STATE(361), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4472] = 6,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_as,
    ACTIONS(598), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4496] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4524] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(387), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4549] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(357), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4574] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(606), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4591] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(421), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4616] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(405), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4641] = 7,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4666] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(414), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4691] = 7,
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
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4716] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_C_,
    STATE(389), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4741] = 3,
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
  [4757] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(420), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4773] = 3,
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
  [4789] = 3,
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
    ACTIONS(624), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(626), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4837] = 3,
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
  [4853] = 3,
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
  [4869] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(424), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
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
    ACTIONS(640), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(642), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4930] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(646), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4945] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(650), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4960] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(654), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4975] = 3,
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
  [4990] = 3,
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
  [5005] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(664), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(666), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5020] = 6,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(676), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5041] = 5,
    ACTIONS(678), 1,
      sym_integer_literal,
    STATE(349), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(680), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(682), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5060] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(684), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(686), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5075] = 6,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 2,
      sym_ident,
      anon_sym_LBRACE,
  [5096] = 3,
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
  [5111] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(696), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(698), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5126] = 5,
    ACTIONS(700), 1,
      sym_ident,
    ACTIONS(702), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(704), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(477), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [5145] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(706), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(708), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5160] = 4,
    ACTIONS(712), 1,
      anon_sym_PIPE,
    STATE(175), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(710), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5176] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5196] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5216] = 4,
    ACTIONS(719), 1,
      sym_ident,
    STATE(178), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(722), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5232] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5252] = 3,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5266] = 3,
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
  [5280] = 3,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(734), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5294] = 3,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(738), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5308] = 3,
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
  [5322] = 3,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(746), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5336] = 3,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(750), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5350] = 3,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5364] = 3,
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
  [5378] = 3,
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
  [5392] = 3,
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
  [5406] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5426] = 3,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(772), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5440] = 3,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(776), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5454] = 3,
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
  [5468] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(784), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5480] = 3,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(786), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5494] = 4,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(175), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5510] = 3,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5524] = 4,
    ACTIONS(690), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5540] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(794), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5552] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym__ext_file_filter_item,
    STATE(350), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5572] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(798), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5584] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym__ext_file_filter_item,
    STATE(350), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5604] = 5,
    ACTIONS(802), 1,
      sym_ident,
    ACTIONS(804), 1,
      sym_integer_literal,
    STATE(364), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 2,
      sym_hex_literal,
      sym_float_literal,
  [5622] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5642] = 5,
    ACTIONS(810), 1,
      sym_ident,
    STATE(22), 1,
      sym_object,
    STATE(332), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5660] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5680] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym__ext_file_filter_item,
    STATE(350), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5700] = 3,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5714] = 4,
    ACTIONS(820), 1,
      sym_ident,
    STATE(233), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5729] = 4,
    ACTIONS(824), 1,
      sym_integer_literal,
    STATE(431), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 2,
      sym_hex_literal,
      sym_float_literal,
  [5744] = 5,
    ACTIONS(828), 1,
      sym_escape_sequence,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    ACTIONS(832), 1,
      aux_sym_quoted_token1,
    STATE(249), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5761] = 5,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_escape_sequence,
    ACTIONS(838), 1,
      aux_sym_quoted_token2,
    STATE(250), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [5778] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5795] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    STATE(363), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5812] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(764), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5823] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(768), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5834] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5845] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(710), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [5856] = 3,
    ACTIONS(844), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5869] = 4,
    ACTIONS(810), 1,
      sym_ident,
    STATE(388), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5884] = 4,
    ACTIONS(810), 1,
      sym_ident,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5899] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(848), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5910] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(728), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5921] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5932] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(736), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5943] = 4,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(245), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5958] = 4,
    ACTIONS(854), 1,
      sym_integer_literal,
    STATE(344), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 2,
      sym_hex_literal,
      sym_float_literal,
  [5973] = 4,
    ACTIONS(858), 1,
      sym_integer_literal,
    STATE(155), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 2,
      sym_hex_literal,
      sym_float_literal,
  [5988] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(363), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6005] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(774), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6016] = 4,
    ACTIONS(810), 1,
      sym_ident,
    STATE(398), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6031] = 4,
    ACTIONS(820), 1,
      sym_ident,
    STATE(178), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6046] = 4,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(245), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6061] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(778), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6072] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(782), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6083] = 5,
    ACTIONS(868), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      aux_sym_quoted_token1,
    STATE(237), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6100] = 5,
    ACTIONS(876), 1,
      sym_escape_sequence,
    ACTIONS(879), 1,
      anon_sym_SQUOTE,
    ACTIONS(881), 1,
      aux_sym_quoted_token2,
    STATE(238), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6117] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(740), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6128] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(744), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6139] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(884), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6150] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(748), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6161] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(752), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6172] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(756), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6183] = 4,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(245), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6198] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(760), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6209] = 4,
    ACTIONS(810), 1,
      sym_ident,
    STATE(441), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6224] = 4,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(227), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6239] = 5,
    ACTIONS(893), 1,
      sym_escape_sequence,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    ACTIONS(897), 1,
      aux_sym_quoted_token1,
    STATE(237), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6256] = 5,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 1,
      sym_escape_sequence,
    ACTIONS(901), 1,
      aux_sym_quoted_token2,
    STATE(238), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6273] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(903), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6284] = 5,
    ACTIONS(905), 1,
      sym_escape_sequence,
    ACTIONS(907), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      aux_sym_quoted_token1,
    STATE(254), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6301] = 5,
    ACTIONS(907), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_escape_sequence,
    ACTIONS(913), 1,
      aux_sym_quoted_token2,
    STATE(255), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6318] = 5,
    ACTIONS(893), 1,
      sym_escape_sequence,
    ACTIONS(897), 1,
      aux_sym_quoted_token1,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6335] = 5,
    ACTIONS(899), 1,
      sym_escape_sequence,
    ACTIONS(901), 1,
      aux_sym_quoted_token2,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(834), 2,
      sym_line_comment,
      sym_block_comment,
  [6352] = 4,
    ACTIONS(810), 1,
      sym_ident,
    STATE(374), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6367] = 4,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(234), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6382] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(350), 1,
      sym_quoted,
    STATE(372), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6399] = 4,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    ACTIONS(921), 1,
      anon_sym_mark,
    STATE(351), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6413] = 4,
    ACTIONS(923), 1,
      sym_ident,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6427] = 4,
    ACTIONS(927), 1,
      sym_ident,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6441] = 4,
    ACTIONS(931), 1,
      sym_ident,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6455] = 4,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6469] = 4,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6483] = 4,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6497] = 4,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6511] = 4,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6525] = 4,
    ACTIONS(927), 1,
      sym_ident,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6539] = 4,
    ACTIONS(921), 1,
      anon_sym_mark,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6553] = 4,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6567] = 4,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6581] = 4,
    ACTIONS(927), 1,
      sym_ident,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6595] = 4,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6609] = 4,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6623] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(981), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6633] = 4,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6647] = 4,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6661] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(424), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6675] = 4,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6689] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(997), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6699] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(999), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6709] = 4,
    ACTIONS(1001), 1,
      sym_ident,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6723] = 4,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6737] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1009), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6751] = 4,
    ACTIONS(1011), 1,
      sym_ident,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
    STATE(301), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6765] = 4,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6779] = 4,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6793] = 4,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6807] = 4,
    ACTIONS(1025), 1,
      sym_ident,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6821] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6835] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6849] = 4,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6863] = 4,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6877] = 4,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6891] = 4,
    ACTIONS(1045), 1,
      sym_ident,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    STATE(307), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6905] = 4,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6919] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6933] = 4,
    ACTIONS(1055), 1,
      sym_ident,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6947] = 4,
    ACTIONS(1060), 1,
      sym_ident,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    STATE(310), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6961] = 4,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6975] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6989] = 4,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7003] = 4,
    ACTIONS(1074), 1,
      sym_ident,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7017] = 4,
    ACTIONS(1079), 1,
      sym_ident,
    ACTIONS(1081), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7031] = 4,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7045] = 4,
    ACTIONS(1085), 1,
      sym_ident,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7059] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7073] = 4,
    ACTIONS(1091), 1,
      sym_ident,
    ACTIONS(1093), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7087] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7101] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1099), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7115] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7129] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(438), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7143] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RBRACK,
    STATE(286), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7157] = 4,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7171] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7185] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7199] = 4,
    ACTIONS(1120), 1,
      sym_ident,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7213] = 4,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7227] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7241] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(425), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7255] = 4,
    ACTIONS(1025), 1,
      sym_ident,
    ACTIONS(1130), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7269] = 4,
    ACTIONS(1007), 1,
      sym_ident,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7283] = 4,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7297] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(614), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7307] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(415), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7321] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(416), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7335] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7345] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7359] = 4,
    ACTIONS(1079), 1,
      sym_ident,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7373] = 4,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_array_value_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7387] = 4,
    ACTIONS(820), 1,
      sym_ident,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7401] = 4,
    ACTIONS(1148), 1,
      sym_ident,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7415] = 4,
    ACTIONS(921), 1,
      anon_sym_mark,
    ACTIONS(1152), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7429] = 4,
    ACTIONS(1154), 1,
      sym_ident,
    ACTIONS(1157), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      aux_sym_ext_layout_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7443] = 4,
    ACTIONS(820), 1,
      sym_ident,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7457] = 4,
    ACTIONS(1161), 1,
      sym_ident,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7471] = 4,
    ACTIONS(931), 1,
      sym_ident,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7485] = 4,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7499] = 4,
    ACTIONS(931), 1,
      sym_ident,
    ACTIONS(1170), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7513] = 4,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    ACTIONS(1172), 1,
      sym_ident,
    STATE(150), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7527] = 3,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    ACTIONS(1176), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7538] = 3,
    ACTIONS(1178), 1,
      anon_sym_LBRACE,
    ACTIONS(1180), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7549] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1182), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7558] = 3,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7569] = 3,
    ACTIONS(921), 1,
      anon_sym_mark,
    STATE(351), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7580] = 3,
    ACTIONS(927), 1,
      sym_ident,
    STATE(356), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7591] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7600] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(938), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7609] = 3,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7620] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7629] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7638] = 3,
    ACTIONS(1196), 1,
      sym_ident,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7649] = 3,
    ACTIONS(1200), 1,
      sym_ident,
    ACTIONS(1202), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7660] = 3,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
    ACTIONS(1206), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7671] = 3,
    ACTIONS(1208), 1,
      sym_ident,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7682] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7691] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7700] = 3,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7711] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7720] = 3,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7731] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(979), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7740] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7749] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7758] = 3,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    ACTIONS(1228), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7769] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7778] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1232), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7787] = 3,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7798] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7807] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1109), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7816] = 3,
    ACTIONS(1240), 1,
      anon_sym_LBRACE,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7827] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(995), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7836] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7845] = 3,
    ACTIONS(1246), 1,
      sym_ident,
    ACTIONS(1248), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7856] = 3,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7867] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7876] = 3,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7887] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7896] = 3,
    ACTIONS(1258), 1,
      sym_ident,
    ACTIONS(1260), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7907] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7916] = 3,
    ACTIONS(1264), 1,
      sym_ident,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7927] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7936] = 3,
    ACTIONS(1268), 1,
      sym_ident,
    ACTIONS(1270), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7947] = 3,
    ACTIONS(1272), 1,
      sym_ident,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7958] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7969] = 3,
    ACTIONS(1276), 1,
      sym_ident,
    ACTIONS(1278), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7980] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1280), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7989] = 3,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8000] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8011] = 3,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8022] = 3,
    ACTIONS(931), 1,
      sym_ident,
    STATE(348), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8033] = 3,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8044] = 3,
    ACTIONS(1294), 1,
      sym_ident,
    ACTIONS(1296), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8055] = 3,
    ACTIONS(1298), 1,
      sym_ident,
    ACTIONS(1300), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8066] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8075] = 2,
    ACTIONS(1304), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8083] = 2,
    ACTIONS(1306), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8091] = 2,
    ACTIONS(1308), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8099] = 2,
    ACTIONS(1310), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8107] = 2,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8115] = 2,
    ACTIONS(1314), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8123] = 2,
    ACTIONS(1316), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8131] = 2,
    ACTIONS(1318), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8139] = 2,
    ACTIONS(1320), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8147] = 2,
    ACTIONS(1322), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8155] = 2,
    ACTIONS(1324), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8163] = 2,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8171] = 2,
    ACTIONS(1328), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8179] = 2,
    ACTIONS(1330), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8187] = 2,
    ACTIONS(1332), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8195] = 2,
    ACTIONS(1334), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8203] = 2,
    ACTIONS(1336), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8211] = 2,
    ACTIONS(1338), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8219] = 2,
    ACTIONS(1340), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8227] = 2,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8235] = 2,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8243] = 2,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8251] = 2,
    ACTIONS(1348), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8259] = 2,
    ACTIONS(1350), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8267] = 2,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8275] = 2,
    ACTIONS(1354), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8283] = 2,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8291] = 2,
    ACTIONS(1358), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8299] = 2,
    ACTIONS(1360), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8307] = 2,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8315] = 2,
    ACTIONS(1364), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8323] = 2,
    ACTIONS(1366), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8331] = 2,
    ACTIONS(1368), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8339] = 2,
    ACTIONS(1370), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8347] = 2,
    ACTIONS(1372), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8355] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8363] = 2,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8371] = 2,
    ACTIONS(844), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8379] = 2,
    ACTIONS(1378), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8387] = 2,
    ACTIONS(1380), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8395] = 2,
    ACTIONS(1382), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8403] = 2,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8411] = 2,
    ACTIONS(1386), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8419] = 2,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8427] = 2,
    ACTIONS(1390), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8435] = 2,
    ACTIONS(1392), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8443] = 2,
    ACTIONS(1394), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8451] = 2,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8459] = 2,
    ACTIONS(1398), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8467] = 2,
    ACTIONS(1400), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8475] = 2,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8483] = 2,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8491] = 2,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8499] = 2,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8507] = 2,
    ACTIONS(1410), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8515] = 2,
    ACTIONS(1412), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8523] = 2,
    ACTIONS(1414), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8531] = 2,
    ACTIONS(1416), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8539] = 2,
    ACTIONS(1418), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8547] = 2,
    ACTIONS(1420), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8555] = 2,
    ACTIONS(1422), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8563] = 2,
    ACTIONS(1424), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8571] = 2,
    ACTIONS(1426), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8579] = 2,
    ACTIONS(1428), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8587] = 2,
    ACTIONS(1430), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8595] = 2,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8603] = 2,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8611] = 2,
    ACTIONS(1434), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8619] = 2,
    ACTIONS(1436), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8627] = 2,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8635] = 2,
    ACTIONS(1440), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8643] = 2,
    ACTIONS(1442), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8651] = 2,
    ACTIONS(1444), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8659] = 2,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8667] = 2,
    ACTIONS(1448), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8675] = 2,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8683] = 2,
    ACTIONS(1452), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8691] = 2,
    ACTIONS(1454), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8699] = 2,
    ACTIONS(1456), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8707] = 2,
    ACTIONS(1458), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8715] = 2,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8723] = 2,
    ACTIONS(1462), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8731] = 2,
    ACTIONS(1464), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8739] = 2,
    ACTIONS(1466), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8747] = 2,
    ACTIONS(1468), 1,
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
  [SMALL_STATE(113)] = 3782,
  [SMALL_STATE(114)] = 3812,
  [SMALL_STATE(115)] = 3842,
  [SMALL_STATE(116)] = 3872,
  [SMALL_STATE(117)] = 3906,
  [SMALL_STATE(118)] = 3936,
  [SMALL_STATE(119)] = 3970,
  [SMALL_STATE(120)] = 4000,
  [SMALL_STATE(121)] = 4031,
  [SMALL_STATE(122)] = 4054,
  [SMALL_STATE(123)] = 4079,
  [SMALL_STATE(124)] = 4108,
  [SMALL_STATE(125)] = 4133,
  [SMALL_STATE(126)] = 4158,
  [SMALL_STATE(127)] = 4183,
  [SMALL_STATE(128)] = 4212,
  [SMALL_STATE(129)] = 4241,
  [SMALL_STATE(130)] = 4266,
  [SMALL_STATE(131)] = 4290,
  [SMALL_STATE(132)] = 4314,
  [SMALL_STATE(133)] = 4338,
  [SMALL_STATE(134)] = 4366,
  [SMALL_STATE(135)] = 4394,
  [SMALL_STATE(136)] = 4418,
  [SMALL_STATE(137)] = 4446,
  [SMALL_STATE(138)] = 4472,
  [SMALL_STATE(139)] = 4496,
  [SMALL_STATE(140)] = 4524,
  [SMALL_STATE(141)] = 4549,
  [SMALL_STATE(142)] = 4574,
  [SMALL_STATE(143)] = 4591,
  [SMALL_STATE(144)] = 4616,
  [SMALL_STATE(145)] = 4641,
  [SMALL_STATE(146)] = 4666,
  [SMALL_STATE(147)] = 4691,
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
  [SMALL_STATE(163)] = 4960,
  [SMALL_STATE(164)] = 4975,
  [SMALL_STATE(165)] = 4990,
  [SMALL_STATE(166)] = 5005,
  [SMALL_STATE(167)] = 5020,
  [SMALL_STATE(168)] = 5041,
  [SMALL_STATE(169)] = 5060,
  [SMALL_STATE(170)] = 5075,
  [SMALL_STATE(171)] = 5096,
  [SMALL_STATE(172)] = 5111,
  [SMALL_STATE(173)] = 5126,
  [SMALL_STATE(174)] = 5145,
  [SMALL_STATE(175)] = 5160,
  [SMALL_STATE(176)] = 5176,
  [SMALL_STATE(177)] = 5196,
  [SMALL_STATE(178)] = 5216,
  [SMALL_STATE(179)] = 5232,
  [SMALL_STATE(180)] = 5252,
  [SMALL_STATE(181)] = 5266,
  [SMALL_STATE(182)] = 5280,
  [SMALL_STATE(183)] = 5294,
  [SMALL_STATE(184)] = 5308,
  [SMALL_STATE(185)] = 5322,
  [SMALL_STATE(186)] = 5336,
  [SMALL_STATE(187)] = 5350,
  [SMALL_STATE(188)] = 5364,
  [SMALL_STATE(189)] = 5378,
  [SMALL_STATE(190)] = 5392,
  [SMALL_STATE(191)] = 5406,
  [SMALL_STATE(192)] = 5426,
  [SMALL_STATE(193)] = 5440,
  [SMALL_STATE(194)] = 5454,
  [SMALL_STATE(195)] = 5468,
  [SMALL_STATE(196)] = 5480,
  [SMALL_STATE(197)] = 5494,
  [SMALL_STATE(198)] = 5510,
  [SMALL_STATE(199)] = 5524,
  [SMALL_STATE(200)] = 5540,
  [SMALL_STATE(201)] = 5552,
  [SMALL_STATE(202)] = 5572,
  [SMALL_STATE(203)] = 5584,
  [SMALL_STATE(204)] = 5604,
  [SMALL_STATE(205)] = 5622,
  [SMALL_STATE(206)] = 5642,
  [SMALL_STATE(207)] = 5660,
  [SMALL_STATE(208)] = 5680,
  [SMALL_STATE(209)] = 5700,
  [SMALL_STATE(210)] = 5714,
  [SMALL_STATE(211)] = 5729,
  [SMALL_STATE(212)] = 5744,
  [SMALL_STATE(213)] = 5761,
  [SMALL_STATE(214)] = 5778,
  [SMALL_STATE(215)] = 5795,
  [SMALL_STATE(216)] = 5812,
  [SMALL_STATE(217)] = 5823,
  [SMALL_STATE(218)] = 5834,
  [SMALL_STATE(219)] = 5845,
  [SMALL_STATE(220)] = 5856,
  [SMALL_STATE(221)] = 5869,
  [SMALL_STATE(222)] = 5884,
  [SMALL_STATE(223)] = 5899,
  [SMALL_STATE(224)] = 5910,
  [SMALL_STATE(225)] = 5921,
  [SMALL_STATE(226)] = 5932,
  [SMALL_STATE(227)] = 5943,
  [SMALL_STATE(228)] = 5958,
  [SMALL_STATE(229)] = 5973,
  [SMALL_STATE(230)] = 5988,
  [SMALL_STATE(231)] = 6005,
  [SMALL_STATE(232)] = 6016,
  [SMALL_STATE(233)] = 6031,
  [SMALL_STATE(234)] = 6046,
  [SMALL_STATE(235)] = 6061,
  [SMALL_STATE(236)] = 6072,
  [SMALL_STATE(237)] = 6083,
  [SMALL_STATE(238)] = 6100,
  [SMALL_STATE(239)] = 6117,
  [SMALL_STATE(240)] = 6128,
  [SMALL_STATE(241)] = 6139,
  [SMALL_STATE(242)] = 6150,
  [SMALL_STATE(243)] = 6161,
  [SMALL_STATE(244)] = 6172,
  [SMALL_STATE(245)] = 6183,
  [SMALL_STATE(246)] = 6198,
  [SMALL_STATE(247)] = 6209,
  [SMALL_STATE(248)] = 6224,
  [SMALL_STATE(249)] = 6239,
  [SMALL_STATE(250)] = 6256,
  [SMALL_STATE(251)] = 6273,
  [SMALL_STATE(252)] = 6284,
  [SMALL_STATE(253)] = 6301,
  [SMALL_STATE(254)] = 6318,
  [SMALL_STATE(255)] = 6335,
  [SMALL_STATE(256)] = 6352,
  [SMALL_STATE(257)] = 6367,
  [SMALL_STATE(258)] = 6382,
  [SMALL_STATE(259)] = 6399,
  [SMALL_STATE(260)] = 6413,
  [SMALL_STATE(261)] = 6427,
  [SMALL_STATE(262)] = 6441,
  [SMALL_STATE(263)] = 6455,
  [SMALL_STATE(264)] = 6469,
  [SMALL_STATE(265)] = 6483,
  [SMALL_STATE(266)] = 6497,
  [SMALL_STATE(267)] = 6511,
  [SMALL_STATE(268)] = 6525,
  [SMALL_STATE(269)] = 6539,
  [SMALL_STATE(270)] = 6553,
  [SMALL_STATE(271)] = 6567,
  [SMALL_STATE(272)] = 6581,
  [SMALL_STATE(273)] = 6595,
  [SMALL_STATE(274)] = 6609,
  [SMALL_STATE(275)] = 6623,
  [SMALL_STATE(276)] = 6633,
  [SMALL_STATE(277)] = 6647,
  [SMALL_STATE(278)] = 6661,
  [SMALL_STATE(279)] = 6675,
  [SMALL_STATE(280)] = 6689,
  [SMALL_STATE(281)] = 6699,
  [SMALL_STATE(282)] = 6709,
  [SMALL_STATE(283)] = 6723,
  [SMALL_STATE(284)] = 6737,
  [SMALL_STATE(285)] = 6751,
  [SMALL_STATE(286)] = 6765,
  [SMALL_STATE(287)] = 6779,
  [SMALL_STATE(288)] = 6793,
  [SMALL_STATE(289)] = 6807,
  [SMALL_STATE(290)] = 6821,
  [SMALL_STATE(291)] = 6835,
  [SMALL_STATE(292)] = 6849,
  [SMALL_STATE(293)] = 6863,
  [SMALL_STATE(294)] = 6877,
  [SMALL_STATE(295)] = 6891,
  [SMALL_STATE(296)] = 6905,
  [SMALL_STATE(297)] = 6919,
  [SMALL_STATE(298)] = 6933,
  [SMALL_STATE(299)] = 6947,
  [SMALL_STATE(300)] = 6961,
  [SMALL_STATE(301)] = 6975,
  [SMALL_STATE(302)] = 6989,
  [SMALL_STATE(303)] = 7003,
  [SMALL_STATE(304)] = 7017,
  [SMALL_STATE(305)] = 7031,
  [SMALL_STATE(306)] = 7045,
  [SMALL_STATE(307)] = 7059,
  [SMALL_STATE(308)] = 7073,
  [SMALL_STATE(309)] = 7087,
  [SMALL_STATE(310)] = 7101,
  [SMALL_STATE(311)] = 7115,
  [SMALL_STATE(312)] = 7129,
  [SMALL_STATE(313)] = 7143,
  [SMALL_STATE(314)] = 7157,
  [SMALL_STATE(315)] = 7171,
  [SMALL_STATE(316)] = 7185,
  [SMALL_STATE(317)] = 7199,
  [SMALL_STATE(318)] = 7213,
  [SMALL_STATE(319)] = 7227,
  [SMALL_STATE(320)] = 7241,
  [SMALL_STATE(321)] = 7255,
  [SMALL_STATE(322)] = 7269,
  [SMALL_STATE(323)] = 7283,
  [SMALL_STATE(324)] = 7297,
  [SMALL_STATE(325)] = 7307,
  [SMALL_STATE(326)] = 7321,
  [SMALL_STATE(327)] = 7335,
  [SMALL_STATE(328)] = 7345,
  [SMALL_STATE(329)] = 7359,
  [SMALL_STATE(330)] = 7373,
  [SMALL_STATE(331)] = 7387,
  [SMALL_STATE(332)] = 7401,
  [SMALL_STATE(333)] = 7415,
  [SMALL_STATE(334)] = 7429,
  [SMALL_STATE(335)] = 7443,
  [SMALL_STATE(336)] = 7457,
  [SMALL_STATE(337)] = 7471,
  [SMALL_STATE(338)] = 7485,
  [SMALL_STATE(339)] = 7499,
  [SMALL_STATE(340)] = 7513,
  [SMALL_STATE(341)] = 7527,
  [SMALL_STATE(342)] = 7538,
  [SMALL_STATE(343)] = 7549,
  [SMALL_STATE(344)] = 7558,
  [SMALL_STATE(345)] = 7569,
  [SMALL_STATE(346)] = 7580,
  [SMALL_STATE(347)] = 7591,
  [SMALL_STATE(348)] = 7600,
  [SMALL_STATE(349)] = 7609,
  [SMALL_STATE(350)] = 7620,
  [SMALL_STATE(351)] = 7629,
  [SMALL_STATE(352)] = 7638,
  [SMALL_STATE(353)] = 7649,
  [SMALL_STATE(354)] = 7660,
  [SMALL_STATE(355)] = 7671,
  [SMALL_STATE(356)] = 7682,
  [SMALL_STATE(357)] = 7691,
  [SMALL_STATE(358)] = 7700,
  [SMALL_STATE(359)] = 7711,
  [SMALL_STATE(360)] = 7720,
  [SMALL_STATE(361)] = 7731,
  [SMALL_STATE(362)] = 7740,
  [SMALL_STATE(363)] = 7749,
  [SMALL_STATE(364)] = 7758,
  [SMALL_STATE(365)] = 7769,
  [SMALL_STATE(366)] = 7778,
  [SMALL_STATE(367)] = 7787,
  [SMALL_STATE(368)] = 7798,
  [SMALL_STATE(369)] = 7807,
  [SMALL_STATE(370)] = 7816,
  [SMALL_STATE(371)] = 7827,
  [SMALL_STATE(372)] = 7836,
  [SMALL_STATE(373)] = 7845,
  [SMALL_STATE(374)] = 7856,
  [SMALL_STATE(375)] = 7867,
  [SMALL_STATE(376)] = 7876,
  [SMALL_STATE(377)] = 7887,
  [SMALL_STATE(378)] = 7896,
  [SMALL_STATE(379)] = 7907,
  [SMALL_STATE(380)] = 7916,
  [SMALL_STATE(381)] = 7927,
  [SMALL_STATE(382)] = 7936,
  [SMALL_STATE(383)] = 7947,
  [SMALL_STATE(384)] = 7958,
  [SMALL_STATE(385)] = 7969,
  [SMALL_STATE(386)] = 7980,
  [SMALL_STATE(387)] = 7989,
  [SMALL_STATE(388)] = 8000,
  [SMALL_STATE(389)] = 8011,
  [SMALL_STATE(390)] = 8022,
  [SMALL_STATE(391)] = 8033,
  [SMALL_STATE(392)] = 8044,
  [SMALL_STATE(393)] = 8055,
  [SMALL_STATE(394)] = 8066,
  [SMALL_STATE(395)] = 8075,
  [SMALL_STATE(396)] = 8083,
  [SMALL_STATE(397)] = 8091,
  [SMALL_STATE(398)] = 8099,
  [SMALL_STATE(399)] = 8107,
  [SMALL_STATE(400)] = 8115,
  [SMALL_STATE(401)] = 8123,
  [SMALL_STATE(402)] = 8131,
  [SMALL_STATE(403)] = 8139,
  [SMALL_STATE(404)] = 8147,
  [SMALL_STATE(405)] = 8155,
  [SMALL_STATE(406)] = 8163,
  [SMALL_STATE(407)] = 8171,
  [SMALL_STATE(408)] = 8179,
  [SMALL_STATE(409)] = 8187,
  [SMALL_STATE(410)] = 8195,
  [SMALL_STATE(411)] = 8203,
  [SMALL_STATE(412)] = 8211,
  [SMALL_STATE(413)] = 8219,
  [SMALL_STATE(414)] = 8227,
  [SMALL_STATE(415)] = 8235,
  [SMALL_STATE(416)] = 8243,
  [SMALL_STATE(417)] = 8251,
  [SMALL_STATE(418)] = 8259,
  [SMALL_STATE(419)] = 8267,
  [SMALL_STATE(420)] = 8275,
  [SMALL_STATE(421)] = 8283,
  [SMALL_STATE(422)] = 8291,
  [SMALL_STATE(423)] = 8299,
  [SMALL_STATE(424)] = 8307,
  [SMALL_STATE(425)] = 8315,
  [SMALL_STATE(426)] = 8323,
  [SMALL_STATE(427)] = 8331,
  [SMALL_STATE(428)] = 8339,
  [SMALL_STATE(429)] = 8347,
  [SMALL_STATE(430)] = 8355,
  [SMALL_STATE(431)] = 8363,
  [SMALL_STATE(432)] = 8371,
  [SMALL_STATE(433)] = 8379,
  [SMALL_STATE(434)] = 8387,
  [SMALL_STATE(435)] = 8395,
  [SMALL_STATE(436)] = 8403,
  [SMALL_STATE(437)] = 8411,
  [SMALL_STATE(438)] = 8419,
  [SMALL_STATE(439)] = 8427,
  [SMALL_STATE(440)] = 8435,
  [SMALL_STATE(441)] = 8443,
  [SMALL_STATE(442)] = 8451,
  [SMALL_STATE(443)] = 8459,
  [SMALL_STATE(444)] = 8467,
  [SMALL_STATE(445)] = 8475,
  [SMALL_STATE(446)] = 8483,
  [SMALL_STATE(447)] = 8491,
  [SMALL_STATE(448)] = 8499,
  [SMALL_STATE(449)] = 8507,
  [SMALL_STATE(450)] = 8515,
  [SMALL_STATE(451)] = 8523,
  [SMALL_STATE(452)] = 8531,
  [SMALL_STATE(453)] = 8539,
  [SMALL_STATE(454)] = 8547,
  [SMALL_STATE(455)] = 8555,
  [SMALL_STATE(456)] = 8563,
  [SMALL_STATE(457)] = 8571,
  [SMALL_STATE(458)] = 8579,
  [SMALL_STATE(459)] = 8587,
  [SMALL_STATE(460)] = 8595,
  [SMALL_STATE(461)] = 8603,
  [SMALL_STATE(462)] = 8611,
  [SMALL_STATE(463)] = 8619,
  [SMALL_STATE(464)] = 8627,
  [SMALL_STATE(465)] = 8635,
  [SMALL_STATE(466)] = 8643,
  [SMALL_STATE(467)] = 8651,
  [SMALL_STATE(468)] = 8659,
  [SMALL_STATE(469)] = 8667,
  [SMALL_STATE(470)] = 8675,
  [SMALL_STATE(471)] = 8683,
  [SMALL_STATE(472)] = 8691,
  [SMALL_STATE(473)] = 8699,
  [SMALL_STATE(474)] = 8707,
  [SMALL_STATE(475)] = 8715,
  [SMALL_STATE(476)] = 8723,
  [SMALL_STATE(477)] = 8731,
  [SMALL_STATE(478)] = 8739,
  [SMALL_STATE(479)] = 8747,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 60),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 60),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 49),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 49),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 54),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 54),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 55),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 55),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 56),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 56),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 59),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 59),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 61),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 61),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 62),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 62),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 64),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 64),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 65),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 65),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 66),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 66),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 67),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 67),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(458),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(222),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(353),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(223),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 52),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 52),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 51),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(238),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(238),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(120),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(258),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(346),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(291),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_value_repeat1, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(403),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18), SHIFT_REPEAT(445),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 2, 0, 18),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(426),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_layout_repeat1, 4, 0, 16),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 50),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 57),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 58),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 63),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 58),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 63),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 3, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 4, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 2, 0, 0),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 5, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
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

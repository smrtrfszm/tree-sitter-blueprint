#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 56

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_integer_literal = 2,
  sym_hex_literal = 3,
  sym_float_literal = 4,
  sym_escape_sequence = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_quoted_token1 = 7,
  anon_sym_DQUOTE2 = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_quoted_token2 = 10,
  anon_sym_SQUOTE2 = 11,
  anon_sym_DOT = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_using = 14,
  anon_sym_SEMI = 15,
  anon_sym_translation_DASHdomain = 16,
  anon_sym_template = 17,
  anon_sym_COLON = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON_COLON = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_after = 25,
  anon_sym_swapped = 26,
  anon_sym_COMMA = 27,
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
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_menu = 42,
  anon_sym_section = 43,
  anon_sym_submenu = 44,
  anon_sym_item = 45,
  sym_line_comment = 46,
  sym_block_comment = 47,
  anon_sym_accessibility = 48,
  anon_sym_responses = 49,
  anon_sym_condition = 50,
  anon_sym_setters = 51,
  anon_sym_items = 52,
  anon_sym_mime_DASHtypes = 53,
  anon_sym_patterns = 54,
  anon_sym_suffixes = 55,
  anon_sym_layout = 56,
  anon_sym_marks = 57,
  anon_sym_mark = 58,
  anon_sym_widgets = 59,
  anon_sym_strings = 60,
  anon_sym_styles = 61,
  anon_sym_action = 62,
  anon_sym_response = 63,
  anon_sym_EQ = 64,
  anon_sym_default = 65,
  sym_source_file = 66,
  sym__number = 67,
  sym_quoted = 68,
  sym_type_name = 69,
  sym_using = 70,
  sym_translation_domain = 71,
  sym_template = 72,
  sym_object = 73,
  sym_object_content = 74,
  sym_signal = 75,
  sym_property = 76,
  sym_closure_expression = 77,
  sym_lookup_expression = 78,
  sym_cast_expression = 79,
  sym_literal = 80,
  sym__type_literal = 81,
  sym__quoted_literal = 82,
  sym__number_literal = 83,
  sym__ident_literal = 84,
  sym__expression = 85,
  sym_binding = 86,
  sym_object_value = 87,
  sym_value = 88,
  sym_translated = 89,
  sym_flags = 90,
  sym_child_internal = 91,
  sym_child_annotation = 92,
  sym__child = 93,
  sym_menu = 94,
  sym__menu_child = 95,
  sym_menu_section = 96,
  sym_menu_submenu = 97,
  sym_menu_item = 98,
  sym_menu_attribute = 99,
  sym_string_value = 100,
  sym_menu_item_shorthand = 101,
  sym__extension = 102,
  sym_ext_accessibility = 103,
  sym_ext_adw_dialog = 104,
  sym_ext_adw_dialog_response = 105,
  sym_ext_adw_breakpoint_condition = 106,
  sym_ext_adw_breakpoint = 107,
  sym_ext_combo_box_items = 108,
  sym__ext_combo_box_item = 109,
  sym_ext_file_filter_mime_types = 110,
  sym_ext_file_filter_patterns = 111,
  sym_ext_file_filter_suffixes = 112,
  sym__ext_file_filter_item = 113,
  sym_ext_layout = 114,
  sym_ext_list_item_factory = 115,
  sym_ext_scale_marks = 116,
  sym_ext_scale_mark = 117,
  sym_ext_size_group_widgets = 118,
  sym__ext_size_group_widget = 119,
  sym_ext_string_list_strings = 120,
  sym__ext_strings_list_item = 121,
  sym_ext_styles = 122,
  sym__child_extension = 123,
  sym_ext_response = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_source_file_repeat2 = 126,
  aux_sym_quoted_repeat1 = 127,
  aux_sym_quoted_repeat2 = 128,
  aux_sym_object_content_repeat1 = 129,
  aux_sym_signal_repeat1 = 130,
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
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_token2] = "quoted_token2",
  [anon_sym_SQUOTE2] = "'",
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_action] = "action",
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
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_token2] = aux_sym_quoted_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_action] = anon_sym_action,
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
  [anon_sym_DQUOTE2] = {
    .visible = true,
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
  [anon_sym_SQUOTE2] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_action] = {
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
  [44] = {.index = 81, .length = 3},
  [45] = {.index = 84, .length = 1},
  [46] = {.index = 85, .length = 2},
  [47] = {.index = 87, .length = 1},
  [48] = {.index = 88, .length = 2},
  [49] = {.index = 90, .length = 3},
  [50] = {.index = 93, .length = 3},
  [51] = {.index = 96, .length = 3},
  [52] = {.index = 99, .length = 2},
  [53] = {.index = 101, .length = 3},
  [54] = {.index = 104, .length = 2},
  [55] = {.index = 106, .length = 4},
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
    {field_flags, 3, .inherited = true},
    {field_id, 0},
    {field_value, 2},
  [84] =
    {field_value, 2},
  [85] =
    {field_handler, 3},
    {field_name, 0},
  [87] =
    {field_value, 3},
  [88] =
    {field_context, 2},
    {field_string, 4},
  [90] =
    {field_action, 4},
    {field_icon, 6},
    {field_label, 2},
  [93] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [96] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [99] =
    {field_position, 4},
    {field_value, 2},
  [101] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [104] =
    {field_position, 5},
    {field_value, 3},
  [106] =
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
  [5] = 5,
  [6] = 5,
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
  [86] = 81,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 89,
  [93] = 85,
  [94] = 83,
  [95] = 84,
  [96] = 82,
  [97] = 91,
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
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 29,
  [143] = 28,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 25,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 26,
  [153] = 153,
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
  [193] = 155,
  [194] = 194,
  [195] = 188,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 191,
  [204] = 189,
  [205] = 179,
  [206] = 176,
  [207] = 207,
  [208] = 173,
  [209] = 192,
  [210] = 181,
  [211] = 211,
  [212] = 190,
  [213] = 174,
  [214] = 207,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 216,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 187,
  [230] = 184,
  [231] = 201,
  [232] = 183,
  [233] = 233,
  [234] = 226,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 236,
  [239] = 177,
  [240] = 240,
  [241] = 241,
  [242] = 215,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 135,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 136,
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
  [306] = 292,
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
  [330] = 161,
  [331] = 331,
  [332] = 320,
  [333] = 333,
  [334] = 329,
  [335] = 317,
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
  [349] = 315,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 314,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 313,
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
  [385] = 385,
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
  [431] = 395,
  [432] = 432,
  [433] = 433,
  [434] = 386,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 384,
  [439] = 375,
  [440] = 440,
  [441] = 441,
  [442] = 396,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == ':') ADVANCE(395);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(407);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(408);
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(377);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(377);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(382);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(382);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(395);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(408);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(469);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(260);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(435);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(131);
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
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(458);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(457);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 192:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(373);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(374);
      if (lookahead == '\r') ADVANCE(375);
      END_STATE();
    case 200:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == ':') ADVANCE(395);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '<') ADVANCE(407);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(408);
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 201:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      if (lookahead == '$') ADVANCE(387);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == 'y') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'x') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'x') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(435);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(435);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(382);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(398);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 471:
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
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
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
  [80] = {.lex_state = 201},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 202},
  [103] = {.lex_state = 202},
  [104] = {.lex_state = 202},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 202},
  [108] = {.lex_state = 202},
  [109] = {.lex_state = 202},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 201},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 201},
  [138] = {.lex_state = 201},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 202},
  [143] = {.lex_state = 202},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 202},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 202},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 202},
  [158] = {.lex_state = 202},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 202},
  [163] = {.lex_state = 201},
  [164] = {.lex_state = 201},
  [165] = {.lex_state = 201},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 201},
  [168] = {.lex_state = 201},
  [169] = {.lex_state = 202},
  [170] = {.lex_state = 202},
  [171] = {.lex_state = 201},
  [172] = {.lex_state = 202},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 201},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 201},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 202},
  [186] = {.lex_state = 201},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 201},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 201},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 201},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 201},
  [225] = {.lex_state = 201},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 201},
  [228] = {.lex_state = 201},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 201},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 201},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 201},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 201},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 201},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 201},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 19},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 19},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 9},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 9},
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
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 9},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 201},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 9},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(428),
    [sym_type_name] = STATE(306),
    [sym_using] = STATE(80),
    [sym_translation_domain] = STATE(103),
    [sym_template] = STATE(102),
    [sym_object] = STATE(102),
    [sym_menu] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(80),
    [aux_sym_source_file_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
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
    ACTIONS(22), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_template,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_accessibility,
    ACTIONS(36), 1,
      anon_sym_responses,
    ACTIONS(39), 1,
      anon_sym_condition,
    ACTIONS(42), 1,
      anon_sym_setters,
    ACTIONS(45), 1,
      anon_sym_items,
    ACTIONS(48), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(51), 1,
      anon_sym_patterns,
    ACTIONS(54), 1,
      anon_sym_suffixes,
    ACTIONS(57), 1,
      anon_sym_layout,
    ACTIONS(60), 1,
      anon_sym_marks,
    ACTIONS(63), 1,
      anon_sym_widgets,
    ACTIONS(66), 1,
      anon_sym_strings,
    ACTIONS(69), 1,
      anon_sym_styles,
    STATE(221), 1,
      sym_child_annotation,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 20,
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
  [87] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_template,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_accessibility,
    ACTIONS(82), 1,
      anon_sym_responses,
    ACTIONS(84), 1,
      anon_sym_condition,
    ACTIONS(86), 1,
      anon_sym_setters,
    ACTIONS(88), 1,
      anon_sym_items,
    ACTIONS(90), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(92), 1,
      anon_sym_patterns,
    ACTIONS(94), 1,
      anon_sym_suffixes,
    ACTIONS(96), 1,
      anon_sym_layout,
    ACTIONS(98), 1,
      anon_sym_marks,
    ACTIONS(100), 1,
      anon_sym_widgets,
    ACTIONS(102), 1,
      anon_sym_strings,
    ACTIONS(104), 1,
      anon_sym_styles,
    STATE(221), 1,
      sym_child_annotation,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 20,
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
  [174] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_template,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_accessibility,
    ACTIONS(82), 1,
      anon_sym_responses,
    ACTIONS(84), 1,
      anon_sym_condition,
    ACTIONS(86), 1,
      anon_sym_setters,
    ACTIONS(88), 1,
      anon_sym_items,
    ACTIONS(90), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(92), 1,
      anon_sym_patterns,
    ACTIONS(94), 1,
      anon_sym_suffixes,
    ACTIONS(96), 1,
      anon_sym_layout,
    ACTIONS(98), 1,
      anon_sym_marks,
    ACTIONS(100), 1,
      anon_sym_widgets,
    ACTIONS(102), 1,
      anon_sym_strings,
    ACTIONS(104), 1,
      anon_sym_styles,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_child_annotation,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 20,
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
  [261] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_template,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_accessibility,
    ACTIONS(82), 1,
      anon_sym_responses,
    ACTIONS(84), 1,
      anon_sym_condition,
    ACTIONS(86), 1,
      anon_sym_setters,
    ACTIONS(88), 1,
      anon_sym_items,
    ACTIONS(90), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(92), 1,
      anon_sym_patterns,
    ACTIONS(94), 1,
      anon_sym_suffixes,
    ACTIONS(96), 1,
      anon_sym_layout,
    ACTIONS(98), 1,
      anon_sym_marks,
    ACTIONS(100), 1,
      anon_sym_widgets,
    ACTIONS(102), 1,
      anon_sym_strings,
    ACTIONS(104), 1,
      anon_sym_styles,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_child_annotation,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
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
  [348] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(72), 1,
      sym_ident,
    ACTIONS(74), 1,
      anon_sym_template,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_accessibility,
    ACTIONS(82), 1,
      anon_sym_responses,
    ACTIONS(84), 1,
      anon_sym_condition,
    ACTIONS(86), 1,
      anon_sym_setters,
    ACTIONS(88), 1,
      anon_sym_items,
    ACTIONS(90), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(92), 1,
      anon_sym_patterns,
    ACTIONS(94), 1,
      anon_sym_suffixes,
    ACTIONS(96), 1,
      anon_sym_layout,
    ACTIONS(98), 1,
      anon_sym_marks,
    ACTIONS(100), 1,
      anon_sym_widgets,
    ACTIONS(102), 1,
      anon_sym_strings,
    ACTIONS(104), 1,
      anon_sym_styles,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_child_annotation,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
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
  [435] = 19,
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
      anon_sym_typeof,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    STATE(306), 1,
      sym_type_name,
    STATE(408), 1,
      sym_object,
    STATE(409), 1,
      sym_literal,
    STATE(411), 1,
      sym_translated,
    STATE(412), 1,
      sym_flags,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(126), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(410), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [504] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [554] = 15,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    STATE(372), 1,
      sym_value,
    STATE(409), 1,
      sym_literal,
    STATE(411), 1,
      sym_translated,
    STATE(412), 1,
      sym_flags,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [608] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [658] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [708] = 15,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(138), 1,
      sym_ident,
    STATE(371), 1,
      sym_value,
    STATE(409), 1,
      sym_literal,
    STATE(411), 1,
      sym_translated,
    STATE(412), 1,
      sym_flags,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [762] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [809] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(381), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [856] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
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
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 2,
      sym_closure_expression,
      sym_literal,
    STATE(150), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [903] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(144), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [930] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(148), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [957] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(152), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [984] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
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
  [1011] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
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
  [1038] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 3,
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
  [1065] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 3,
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
  [1092] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 3,
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
  [1119] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 3,
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
  [1146] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 3,
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
  [1173] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 3,
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
  [1200] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 3,
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
  [1227] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 3,
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
  [1254] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 3,
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
  [1281] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
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
  [1308] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 3,
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
  [1335] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 3,
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
  [1362] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 3,
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
  [1389] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 3,
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
  [1416] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 3,
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
  [1443] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 3,
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
  [1470] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 3,
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
  [1497] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 3,
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
  [1524] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 3,
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
  [1551] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 3,
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
  [1578] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 3,
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
  [1605] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 3,
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
  [1632] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 3,
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
  [1659] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 3,
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
  [1686] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 3,
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
  [1713] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 3,
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
  [1740] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 3,
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
  [1767] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 3,
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
  [1794] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 3,
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
  [1821] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 3,
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
  [1848] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
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
  [1875] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
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
  [1902] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
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
  [1929] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
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
  [1956] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 3,
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
  [1983] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
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
  [2010] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 3,
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
  [2037] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 3,
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
  [2064] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
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
  [2091] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 3,
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
  [2118] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 3,
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
  [2145] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 3,
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
  [2172] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 3,
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
  [2199] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 3,
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
  [2226] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 3,
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
  [2253] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 3,
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
  [2280] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 3,
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
  [2307] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 3,
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
  [2334] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 3,
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
  [2361] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(362), 3,
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
  [2388] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 3,
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
  [2415] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(370), 3,
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
  [2442] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 3,
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
  [2469] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(378), 3,
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
  [2496] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 3,
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
  [2523] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 3,
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
  [2550] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 3,
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
  [2577] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(394), 3,
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
  [2604] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
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
  [2631] = 12,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_using,
    ACTIONS(13), 1,
      anon_sym_translation_DASHdomain,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_translation_domain,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(124), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2673] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(92), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2702] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2731] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2760] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(416), 1,
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
  [2789] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(418), 1,
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
  [2818] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(89), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2847] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(83), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2876] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(94), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2905] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2934] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_section,
    ACTIONS(436), 1,
      anon_sym_submenu,
    ACTIONS(439), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2963] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2992] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3021] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(91), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3050] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3079] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(82), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3108] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3137] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3166] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(456), 1,
      sym_ident,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym_string_value,
    STATE(361), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3200] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(456), 1,
      sym_ident,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym_string_value,
    STATE(361), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3234] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(456), 1,
      sym_ident,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym__ext_combo_box_item,
    STATE(322), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3268] = 6,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      anon_sym_section,
    ACTIONS(468), 1,
      anon_sym_submenu,
    ACTIONS(470), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3293] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3322] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3351] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3380] = 6,
    ACTIONS(466), 1,
      anon_sym_section,
    ACTIONS(468), 1,
      anon_sym_submenu,
    ACTIONS(470), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(114), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3405] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(456), 1,
      sym_ident,
    STATE(322), 1,
      sym_string_value,
    STATE(361), 1,
      sym__ext_combo_box_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3436] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3465] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(104), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3494] = 8,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 1,
      sym_ident,
    ACTIONS(483), 1,
      anon_sym_DOLLAR,
    ACTIONS(486), 1,
      anon_sym_template,
    ACTIONS(489), 1,
      anon_sym_menu,
    STATE(306), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3523] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(311), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3552] = 6,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(500), 1,
      anon_sym_section,
    ACTIONS(503), 1,
      anon_sym_submenu,
    ACTIONS(506), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(111), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3577] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(311), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3606] = 6,
    ACTIONS(466), 1,
      anon_sym_section,
    ACTIONS(468), 1,
      anon_sym_submenu,
    ACTIONS(470), 1,
      anon_sym_item,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(111), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3631] = 6,
    ACTIONS(466), 1,
      anon_sym_section,
    ACTIONS(468), 1,
      anon_sym_submenu,
    ACTIONS(470), 1,
      anon_sym_item,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(111), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3656] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(294), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3685] = 6,
    ACTIONS(517), 1,
      sym_ident,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(125), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [3709] = 6,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_as,
    ACTIONS(525), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(122), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [3733] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3761] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3789] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3817] = 6,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_as,
    ACTIONS(535), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(537), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(117), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [3841] = 6,
    ACTIONS(539), 1,
      sym_ident,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(546), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(544), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(122), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [3865] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3893] = 5,
    ACTIONS(555), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(124), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(553), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [3915] = 6,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_as,
    ACTIONS(558), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(560), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(122), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [3939] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(311), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3965] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3990] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(431), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4015] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(385), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4040] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(395), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4065] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(332), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4090] = 7,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4115] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(379), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4140] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_C_,
    STATE(320), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4165] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(568), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4181] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(570), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(572), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4197] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(576), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4213] = 5,
    ACTIONS(578), 1,
      sym_integer_literal,
    STATE(347), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(580), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(582), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4232] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(584), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(586), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4247] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(588), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(590), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4262] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(594), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4277] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4292] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4307] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(598), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4322] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(602), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4337] = 6,
    ACTIONS(606), 1,
      anon_sym_DOT,
    ACTIONS(608), 1,
      anon_sym_COLON,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(612), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4358] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4373] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(614), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(616), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4388] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(620), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4403] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(624), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4418] = 5,
    ACTIONS(626), 1,
      sym_ident,
    ACTIONS(628), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(630), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(362), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [4437] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4452] = 6,
    ACTIONS(606), 1,
      anon_sym_DOT,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    ACTIONS(634), 1,
      anon_sym_PIPE,
    STATE(282), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4473] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(638), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4488] = 3,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(640), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4502] = 5,
    ACTIONS(644), 1,
      sym_ident,
    ACTIONS(646), 1,
      sym_integer_literal,
    STATE(348), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 2,
      sym_hex_literal,
      sym_float_literal,
  [4520] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(652), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4534] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(654), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(656), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4548] = 4,
    ACTIONS(658), 1,
      sym_ident,
    STATE(159), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(661), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4564] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4576] = 3,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(665), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4590] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(671), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4604] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      sym__ext_file_filter_item,
    STATE(323), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4624] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__ext_file_filter_item,
    STATE(323), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4644] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym__ext_file_filter_item,
    STATE(323), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4664] = 3,
    ACTIONS(606), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4678] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4698] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4718] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(685), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4732] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(689), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4746] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4766] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(695), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4780] = 3,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(697), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4794] = 3,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4808] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4828] = 3,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(707), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4842] = 3,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(711), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4856] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4876] = 3,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(717), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4890] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(721), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4902] = 3,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(723), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4916] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(727), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4928] = 3,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4942] = 3,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(733), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4956] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(739), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4970] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4990] = 3,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5004] = 3,
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
  [5018] = 3,
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
  [5032] = 3,
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
  [5046] = 3,
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
  [5060] = 3,
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
  [5074] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5085] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5102] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5113] = 4,
    ACTIONS(769), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5128] = 4,
    ACTIONS(773), 1,
      sym_integer_literal,
    STATE(327), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 2,
      sym_hex_literal,
      sym_float_literal,
  [5143] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(211), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5158] = 4,
    ACTIONS(781), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5173] = 4,
    ACTIONS(788), 1,
      anon_sym_DQUOTE2,
    STATE(200), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(785), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
  [5188] = 4,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(202), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5203] = 4,
    ACTIONS(796), 1,
      sym_ident,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(202), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5218] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(761), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5229] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5240] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5251] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5262] = 4,
    ACTIONS(803), 1,
      anon_sym_DQUOTE2,
    STATE(234), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5277] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(699), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5288] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5299] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5310] = 4,
    ACTIONS(777), 1,
      sym_ident,
    STATE(159), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5325] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5336] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5347] = 4,
    ACTIONS(809), 1,
      anon_sym_DQUOTE2,
    STATE(226), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(807), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5362] = 4,
    ACTIONS(809), 1,
      anon_sym_SQUOTE2,
    STATE(238), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(811), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5377] = 4,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(231), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5392] = 4,
    ACTIONS(815), 1,
      sym_integer_literal,
    STATE(387), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(817), 2,
      sym_hex_literal,
      sym_float_literal,
  [5407] = 4,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5422] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5433] = 4,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(825), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5448] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(60), 1,
      sym_object,
    STATE(292), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5465] = 4,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5480] = 4,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(833), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5495] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      sym_quoted,
    STATE(324), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5512] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5529] = 4,
    ACTIONS(840), 1,
      anon_sym_DQUOTE2,
    STATE(200), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5544] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5561] = 4,
    ACTIONS(844), 1,
      sym_integer_literal,
    STATE(154), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      sym_hex_literal,
      sym_float_literal,
  [5576] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5587] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5598] = 4,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(202), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5613] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(731), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5624] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(850), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5635] = 4,
    ACTIONS(852), 1,
      anon_sym_DQUOTE2,
    STATE(200), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5650] = 4,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5665] = 4,
    ACTIONS(852), 1,
      anon_sym_SQUOTE2,
    STATE(237), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5680] = 4,
    ACTIONS(861), 1,
      anon_sym_SQUOTE2,
    STATE(237), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5695] = 4,
    ACTIONS(840), 1,
      anon_sym_SQUOTE2,
    STATE(237), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5710] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(713), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5721] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(863), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5732] = 4,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5747] = 4,
    ACTIONS(803), 1,
      anon_sym_SQUOTE2,
    STATE(236), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(790), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(867), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5762] = 4,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(871), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5777] = 4,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(875), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5792] = 4,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5806] = 4,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5820] = 4,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5834] = 4,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5848] = 4,
    ACTIONS(777), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5862] = 4,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    ACTIONS(895), 1,
      anon_sym_PIPE,
    STATE(250), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5876] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5886] = 4,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5900] = 4,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5914] = 4,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    ACTIONS(634), 1,
      anon_sym_PIPE,
    STATE(282), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5928] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(572), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5938] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(337), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5952] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5966] = 4,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5980] = 4,
    ACTIONS(911), 1,
      sym_ident,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5994] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6008] = 4,
    ACTIONS(920), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6022] = 4,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6036] = 4,
    ACTIONS(911), 1,
      sym_ident,
    ACTIONS(928), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6050] = 4,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    ACTIONS(932), 1,
      anon_sym_mark,
    STATE(297), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6064] = 4,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6078] = 4,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    ACTIONS(932), 1,
      anon_sym_mark,
    STATE(346), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6092] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6106] = 4,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6120] = 4,
    ACTIONS(920), 1,
      sym_ident,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6134] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6148] = 4,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6162] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6176] = 4,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6190] = 4,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6204] = 4,
    ACTIONS(966), 1,
      sym_ident,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6218] = 4,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6232] = 4,
    ACTIONS(911), 1,
      sym_ident,
    ACTIONS(973), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6246] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(354), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6260] = 4,
    ACTIONS(975), 1,
      sym_ident,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6274] = 4,
    ACTIONS(777), 1,
      sym_ident,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6288] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(383), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6302] = 4,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(250), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6316] = 4,
    ACTIONS(932), 1,
      anon_sym_mark,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6330] = 4,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6344] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(391), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6358] = 4,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6372] = 4,
    ACTIONS(920), 1,
      sym_ident,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6386] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(393), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6400] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6414] = 4,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6428] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6442] = 4,
    ACTIONS(1008), 1,
      sym_ident,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6456] = 4,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6470] = 4,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6484] = 4,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6498] = 4,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(1027), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6512] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6526] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6540] = 4,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6554] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6568] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(389), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6582] = 4,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6596] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6610] = 4,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6624] = 4,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6638] = 4,
    ACTIONS(1027), 1,
      anon_sym_LBRACE,
    ACTIONS(1058), 1,
      sym_ident,
    STATE(142), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6652] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(374), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6666] = 4,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6680] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(827), 1,
      sym_ident,
    STATE(296), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6694] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(418), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6708] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1015), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6717] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1062), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6726] = 3,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6737] = 3,
    ACTIONS(1068), 1,
      sym_ident,
    ACTIONS(1070), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6748] = 3,
    ACTIONS(1072), 1,
      sym_ident,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6759] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1076), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6768] = 3,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6779] = 3,
    ACTIONS(1082), 1,
      sym_ident,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6790] = 3,
    ACTIONS(911), 1,
      sym_ident,
    STATE(353), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6801] = 3,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6812] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1090), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [6821] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1092), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6830] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6839] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1096), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6848] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1098), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [6857] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1100), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6866] = 3,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6877] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6886] = 3,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6897] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(667), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6906] = 3,
    ACTIONS(932), 1,
      anon_sym_mark,
    STATE(346), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6917] = 3,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6928] = 3,
    ACTIONS(920), 1,
      sym_ident,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6939] = 3,
    ACTIONS(1027), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6950] = 3,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6961] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1116), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6970] = 3,
    ACTIONS(1027), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6981] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6990] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6999] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7008] = 3,
    ACTIONS(1122), 1,
      sym_ident,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7019] = 3,
    ACTIONS(1126), 1,
      sym_ident,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7030] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7039] = 3,
    ACTIONS(1132), 1,
      anon_sym_RBRACK,
    ACTIONS(1134), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7050] = 3,
    ACTIONS(1136), 1,
      sym_ident,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7061] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7070] = 3,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7081] = 3,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    ACTIONS(1146), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7092] = 3,
    ACTIONS(1148), 1,
      sym_ident,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7103] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7112] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(902), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7121] = 3,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7132] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(918), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7141] = 3,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7152] = 3,
    ACTIONS(1158), 1,
      sym_ident,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7163] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7172] = 3,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7183] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1168), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7192] = 3,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(1172), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7203] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7212] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7221] = 2,
    ACTIONS(1178), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7229] = 2,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7237] = 2,
    ACTIONS(1182), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7245] = 2,
    ACTIONS(1184), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7253] = 2,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7261] = 2,
    ACTIONS(1188), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7269] = 2,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7277] = 2,
    ACTIONS(1192), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7285] = 2,
    ACTIONS(1194), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7293] = 2,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7301] = 2,
    ACTIONS(1198), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7309] = 2,
    ACTIONS(1200), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7317] = 2,
    ACTIONS(1202), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7325] = 2,
    ACTIONS(1204), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7333] = 2,
    ACTIONS(1206), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7341] = 2,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7349] = 2,
    ACTIONS(1210), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7357] = 2,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7365] = 2,
    ACTIONS(1214), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7373] = 2,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7381] = 2,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7389] = 2,
    ACTIONS(1220), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7397] = 2,
    ACTIONS(1222), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7405] = 2,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7413] = 2,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7421] = 2,
    ACTIONS(1228), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7429] = 2,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7437] = 2,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7445] = 2,
    ACTIONS(1234), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7453] = 2,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7461] = 2,
    ACTIONS(1238), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7469] = 2,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7477] = 2,
    ACTIONS(1242), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7485] = 2,
    ACTIONS(1244), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7493] = 2,
    ACTIONS(1246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7501] = 2,
    ACTIONS(1248), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7509] = 2,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7517] = 2,
    ACTIONS(1252), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7525] = 2,
    ACTIONS(1254), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7533] = 2,
    ACTIONS(1256), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7541] = 2,
    ACTIONS(1258), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7549] = 2,
    ACTIONS(1260), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7557] = 2,
    ACTIONS(1262), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7565] = 2,
    ACTIONS(1264), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7573] = 2,
    ACTIONS(1122), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7581] = 2,
    ACTIONS(1266), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7589] = 2,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7597] = 2,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7605] = 2,
    ACTIONS(1272), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7613] = 2,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7621] = 2,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7629] = 2,
    ACTIONS(1274), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7637] = 2,
    ACTIONS(1276), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7645] = 2,
    ACTIONS(1278), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7653] = 2,
    ACTIONS(1280), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7661] = 2,
    ACTIONS(1282), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7669] = 2,
    ACTIONS(1284), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7677] = 2,
    ACTIONS(1286), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7685] = 2,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7693] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7701] = 2,
    ACTIONS(1292), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7709] = 2,
    ACTIONS(1294), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7717] = 2,
    ACTIONS(1296), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7725] = 2,
    ACTIONS(1298), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7733] = 2,
    ACTIONS(1300), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7741] = 2,
    ACTIONS(1302), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7749] = 2,
    ACTIONS(1304), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7757] = 2,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7765] = 2,
    ACTIONS(1308), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7773] = 2,
    ACTIONS(1310), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7781] = 2,
    ACTIONS(1312), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7789] = 2,
    ACTIONS(1314), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7797] = 2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7805] = 2,
    ACTIONS(1318), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7813] = 2,
    ACTIONS(1320), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7821] = 2,
    ACTIONS(1322), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7829] = 2,
    ACTIONS(1324), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7837] = 2,
    ACTIONS(1326), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7845] = 2,
    ACTIONS(1328), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7853] = 2,
    ACTIONS(1330), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7861] = 2,
    ACTIONS(1332), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 348,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 504,
  [SMALL_STATE(9)] = 554,
  [SMALL_STATE(10)] = 608,
  [SMALL_STATE(11)] = 658,
  [SMALL_STATE(12)] = 708,
  [SMALL_STATE(13)] = 762,
  [SMALL_STATE(14)] = 809,
  [SMALL_STATE(15)] = 856,
  [SMALL_STATE(16)] = 903,
  [SMALL_STATE(17)] = 930,
  [SMALL_STATE(18)] = 957,
  [SMALL_STATE(19)] = 984,
  [SMALL_STATE(20)] = 1011,
  [SMALL_STATE(21)] = 1038,
  [SMALL_STATE(22)] = 1065,
  [SMALL_STATE(23)] = 1092,
  [SMALL_STATE(24)] = 1119,
  [SMALL_STATE(25)] = 1146,
  [SMALL_STATE(26)] = 1173,
  [SMALL_STATE(27)] = 1200,
  [SMALL_STATE(28)] = 1227,
  [SMALL_STATE(29)] = 1254,
  [SMALL_STATE(30)] = 1281,
  [SMALL_STATE(31)] = 1308,
  [SMALL_STATE(32)] = 1335,
  [SMALL_STATE(33)] = 1362,
  [SMALL_STATE(34)] = 1389,
  [SMALL_STATE(35)] = 1416,
  [SMALL_STATE(36)] = 1443,
  [SMALL_STATE(37)] = 1470,
  [SMALL_STATE(38)] = 1497,
  [SMALL_STATE(39)] = 1524,
  [SMALL_STATE(40)] = 1551,
  [SMALL_STATE(41)] = 1578,
  [SMALL_STATE(42)] = 1605,
  [SMALL_STATE(43)] = 1632,
  [SMALL_STATE(44)] = 1659,
  [SMALL_STATE(45)] = 1686,
  [SMALL_STATE(46)] = 1713,
  [SMALL_STATE(47)] = 1740,
  [SMALL_STATE(48)] = 1767,
  [SMALL_STATE(49)] = 1794,
  [SMALL_STATE(50)] = 1821,
  [SMALL_STATE(51)] = 1848,
  [SMALL_STATE(52)] = 1875,
  [SMALL_STATE(53)] = 1902,
  [SMALL_STATE(54)] = 1929,
  [SMALL_STATE(55)] = 1956,
  [SMALL_STATE(56)] = 1983,
  [SMALL_STATE(57)] = 2010,
  [SMALL_STATE(58)] = 2037,
  [SMALL_STATE(59)] = 2064,
  [SMALL_STATE(60)] = 2091,
  [SMALL_STATE(61)] = 2118,
  [SMALL_STATE(62)] = 2145,
  [SMALL_STATE(63)] = 2172,
  [SMALL_STATE(64)] = 2199,
  [SMALL_STATE(65)] = 2226,
  [SMALL_STATE(66)] = 2253,
  [SMALL_STATE(67)] = 2280,
  [SMALL_STATE(68)] = 2307,
  [SMALL_STATE(69)] = 2334,
  [SMALL_STATE(70)] = 2361,
  [SMALL_STATE(71)] = 2388,
  [SMALL_STATE(72)] = 2415,
  [SMALL_STATE(73)] = 2442,
  [SMALL_STATE(74)] = 2469,
  [SMALL_STATE(75)] = 2496,
  [SMALL_STATE(76)] = 2523,
  [SMALL_STATE(77)] = 2550,
  [SMALL_STATE(78)] = 2577,
  [SMALL_STATE(79)] = 2604,
  [SMALL_STATE(80)] = 2631,
  [SMALL_STATE(81)] = 2673,
  [SMALL_STATE(82)] = 2702,
  [SMALL_STATE(83)] = 2731,
  [SMALL_STATE(84)] = 2760,
  [SMALL_STATE(85)] = 2789,
  [SMALL_STATE(86)] = 2818,
  [SMALL_STATE(87)] = 2847,
  [SMALL_STATE(88)] = 2876,
  [SMALL_STATE(89)] = 2905,
  [SMALL_STATE(90)] = 2934,
  [SMALL_STATE(91)] = 2963,
  [SMALL_STATE(92)] = 2992,
  [SMALL_STATE(93)] = 3021,
  [SMALL_STATE(94)] = 3050,
  [SMALL_STATE(95)] = 3079,
  [SMALL_STATE(96)] = 3108,
  [SMALL_STATE(97)] = 3137,
  [SMALL_STATE(98)] = 3166,
  [SMALL_STATE(99)] = 3200,
  [SMALL_STATE(100)] = 3234,
  [SMALL_STATE(101)] = 3268,
  [SMALL_STATE(102)] = 3293,
  [SMALL_STATE(103)] = 3322,
  [SMALL_STATE(104)] = 3351,
  [SMALL_STATE(105)] = 3380,
  [SMALL_STATE(106)] = 3405,
  [SMALL_STATE(107)] = 3436,
  [SMALL_STATE(108)] = 3465,
  [SMALL_STATE(109)] = 3494,
  [SMALL_STATE(110)] = 3523,
  [SMALL_STATE(111)] = 3552,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3606,
  [SMALL_STATE(114)] = 3631,
  [SMALL_STATE(115)] = 3656,
  [SMALL_STATE(116)] = 3685,
  [SMALL_STATE(117)] = 3709,
  [SMALL_STATE(118)] = 3733,
  [SMALL_STATE(119)] = 3761,
  [SMALL_STATE(120)] = 3789,
  [SMALL_STATE(121)] = 3817,
  [SMALL_STATE(122)] = 3841,
  [SMALL_STATE(123)] = 3865,
  [SMALL_STATE(124)] = 3893,
  [SMALL_STATE(125)] = 3915,
  [SMALL_STATE(126)] = 3939,
  [SMALL_STATE(127)] = 3965,
  [SMALL_STATE(128)] = 3990,
  [SMALL_STATE(129)] = 4015,
  [SMALL_STATE(130)] = 4040,
  [SMALL_STATE(131)] = 4065,
  [SMALL_STATE(132)] = 4090,
  [SMALL_STATE(133)] = 4115,
  [SMALL_STATE(134)] = 4140,
  [SMALL_STATE(135)] = 4165,
  [SMALL_STATE(136)] = 4181,
  [SMALL_STATE(137)] = 4197,
  [SMALL_STATE(138)] = 4213,
  [SMALL_STATE(139)] = 4232,
  [SMALL_STATE(140)] = 4247,
  [SMALL_STATE(141)] = 4262,
  [SMALL_STATE(142)] = 4277,
  [SMALL_STATE(143)] = 4292,
  [SMALL_STATE(144)] = 4307,
  [SMALL_STATE(145)] = 4322,
  [SMALL_STATE(146)] = 4337,
  [SMALL_STATE(147)] = 4358,
  [SMALL_STATE(148)] = 4373,
  [SMALL_STATE(149)] = 4388,
  [SMALL_STATE(150)] = 4403,
  [SMALL_STATE(151)] = 4418,
  [SMALL_STATE(152)] = 4437,
  [SMALL_STATE(153)] = 4452,
  [SMALL_STATE(154)] = 4473,
  [SMALL_STATE(155)] = 4488,
  [SMALL_STATE(156)] = 4502,
  [SMALL_STATE(157)] = 4520,
  [SMALL_STATE(158)] = 4534,
  [SMALL_STATE(159)] = 4548,
  [SMALL_STATE(160)] = 4564,
  [SMALL_STATE(161)] = 4576,
  [SMALL_STATE(162)] = 4590,
  [SMALL_STATE(163)] = 4604,
  [SMALL_STATE(164)] = 4624,
  [SMALL_STATE(165)] = 4644,
  [SMALL_STATE(166)] = 4664,
  [SMALL_STATE(167)] = 4678,
  [SMALL_STATE(168)] = 4698,
  [SMALL_STATE(169)] = 4718,
  [SMALL_STATE(170)] = 4732,
  [SMALL_STATE(171)] = 4746,
  [SMALL_STATE(172)] = 4766,
  [SMALL_STATE(173)] = 4780,
  [SMALL_STATE(174)] = 4794,
  [SMALL_STATE(175)] = 4808,
  [SMALL_STATE(176)] = 4828,
  [SMALL_STATE(177)] = 4842,
  [SMALL_STATE(178)] = 4856,
  [SMALL_STATE(179)] = 4876,
  [SMALL_STATE(180)] = 4890,
  [SMALL_STATE(181)] = 4902,
  [SMALL_STATE(182)] = 4916,
  [SMALL_STATE(183)] = 4928,
  [SMALL_STATE(184)] = 4942,
  [SMALL_STATE(185)] = 4956,
  [SMALL_STATE(186)] = 4970,
  [SMALL_STATE(187)] = 4990,
  [SMALL_STATE(188)] = 5004,
  [SMALL_STATE(189)] = 5018,
  [SMALL_STATE(190)] = 5032,
  [SMALL_STATE(191)] = 5046,
  [SMALL_STATE(192)] = 5060,
  [SMALL_STATE(193)] = 5074,
  [SMALL_STATE(194)] = 5085,
  [SMALL_STATE(195)] = 5102,
  [SMALL_STATE(196)] = 5113,
  [SMALL_STATE(197)] = 5128,
  [SMALL_STATE(198)] = 5143,
  [SMALL_STATE(199)] = 5158,
  [SMALL_STATE(200)] = 5173,
  [SMALL_STATE(201)] = 5188,
  [SMALL_STATE(202)] = 5203,
  [SMALL_STATE(203)] = 5218,
  [SMALL_STATE(204)] = 5229,
  [SMALL_STATE(205)] = 5240,
  [SMALL_STATE(206)] = 5251,
  [SMALL_STATE(207)] = 5262,
  [SMALL_STATE(208)] = 5277,
  [SMALL_STATE(209)] = 5288,
  [SMALL_STATE(210)] = 5299,
  [SMALL_STATE(211)] = 5310,
  [SMALL_STATE(212)] = 5325,
  [SMALL_STATE(213)] = 5336,
  [SMALL_STATE(214)] = 5347,
  [SMALL_STATE(215)] = 5362,
  [SMALL_STATE(216)] = 5377,
  [SMALL_STATE(217)] = 5392,
  [SMALL_STATE(218)] = 5407,
  [SMALL_STATE(219)] = 5422,
  [SMALL_STATE(220)] = 5433,
  [SMALL_STATE(221)] = 5448,
  [SMALL_STATE(222)] = 5465,
  [SMALL_STATE(223)] = 5480,
  [SMALL_STATE(224)] = 5495,
  [SMALL_STATE(225)] = 5512,
  [SMALL_STATE(226)] = 5529,
  [SMALL_STATE(227)] = 5544,
  [SMALL_STATE(228)] = 5561,
  [SMALL_STATE(229)] = 5576,
  [SMALL_STATE(230)] = 5587,
  [SMALL_STATE(231)] = 5598,
  [SMALL_STATE(232)] = 5613,
  [SMALL_STATE(233)] = 5624,
  [SMALL_STATE(234)] = 5635,
  [SMALL_STATE(235)] = 5650,
  [SMALL_STATE(236)] = 5665,
  [SMALL_STATE(237)] = 5680,
  [SMALL_STATE(238)] = 5695,
  [SMALL_STATE(239)] = 5710,
  [SMALL_STATE(240)] = 5721,
  [SMALL_STATE(241)] = 5732,
  [SMALL_STATE(242)] = 5747,
  [SMALL_STATE(243)] = 5762,
  [SMALL_STATE(244)] = 5777,
  [SMALL_STATE(245)] = 5792,
  [SMALL_STATE(246)] = 5806,
  [SMALL_STATE(247)] = 5820,
  [SMALL_STATE(248)] = 5834,
  [SMALL_STATE(249)] = 5848,
  [SMALL_STATE(250)] = 5862,
  [SMALL_STATE(251)] = 5876,
  [SMALL_STATE(252)] = 5886,
  [SMALL_STATE(253)] = 5900,
  [SMALL_STATE(254)] = 5914,
  [SMALL_STATE(255)] = 5928,
  [SMALL_STATE(256)] = 5938,
  [SMALL_STATE(257)] = 5952,
  [SMALL_STATE(258)] = 5966,
  [SMALL_STATE(259)] = 5980,
  [SMALL_STATE(260)] = 5994,
  [SMALL_STATE(261)] = 6008,
  [SMALL_STATE(262)] = 6022,
  [SMALL_STATE(263)] = 6036,
  [SMALL_STATE(264)] = 6050,
  [SMALL_STATE(265)] = 6064,
  [SMALL_STATE(266)] = 6078,
  [SMALL_STATE(267)] = 6092,
  [SMALL_STATE(268)] = 6106,
  [SMALL_STATE(269)] = 6120,
  [SMALL_STATE(270)] = 6134,
  [SMALL_STATE(271)] = 6148,
  [SMALL_STATE(272)] = 6162,
  [SMALL_STATE(273)] = 6176,
  [SMALL_STATE(274)] = 6190,
  [SMALL_STATE(275)] = 6204,
  [SMALL_STATE(276)] = 6218,
  [SMALL_STATE(277)] = 6232,
  [SMALL_STATE(278)] = 6246,
  [SMALL_STATE(279)] = 6260,
  [SMALL_STATE(280)] = 6274,
  [SMALL_STATE(281)] = 6288,
  [SMALL_STATE(282)] = 6302,
  [SMALL_STATE(283)] = 6316,
  [SMALL_STATE(284)] = 6330,
  [SMALL_STATE(285)] = 6344,
  [SMALL_STATE(286)] = 6358,
  [SMALL_STATE(287)] = 6372,
  [SMALL_STATE(288)] = 6386,
  [SMALL_STATE(289)] = 6400,
  [SMALL_STATE(290)] = 6414,
  [SMALL_STATE(291)] = 6428,
  [SMALL_STATE(292)] = 6442,
  [SMALL_STATE(293)] = 6456,
  [SMALL_STATE(294)] = 6470,
  [SMALL_STATE(295)] = 6484,
  [SMALL_STATE(296)] = 6498,
  [SMALL_STATE(297)] = 6512,
  [SMALL_STATE(298)] = 6526,
  [SMALL_STATE(299)] = 6540,
  [SMALL_STATE(300)] = 6554,
  [SMALL_STATE(301)] = 6568,
  [SMALL_STATE(302)] = 6582,
  [SMALL_STATE(303)] = 6596,
  [SMALL_STATE(304)] = 6610,
  [SMALL_STATE(305)] = 6624,
  [SMALL_STATE(306)] = 6638,
  [SMALL_STATE(307)] = 6652,
  [SMALL_STATE(308)] = 6666,
  [SMALL_STATE(309)] = 6680,
  [SMALL_STATE(310)] = 6694,
  [SMALL_STATE(311)] = 6708,
  [SMALL_STATE(312)] = 6717,
  [SMALL_STATE(313)] = 6726,
  [SMALL_STATE(314)] = 6737,
  [SMALL_STATE(315)] = 6748,
  [SMALL_STATE(316)] = 6759,
  [SMALL_STATE(317)] = 6768,
  [SMALL_STATE(318)] = 6779,
  [SMALL_STATE(319)] = 6790,
  [SMALL_STATE(320)] = 6801,
  [SMALL_STATE(321)] = 6812,
  [SMALL_STATE(322)] = 6821,
  [SMALL_STATE(323)] = 6830,
  [SMALL_STATE(324)] = 6839,
  [SMALL_STATE(325)] = 6848,
  [SMALL_STATE(326)] = 6857,
  [SMALL_STATE(327)] = 6866,
  [SMALL_STATE(328)] = 6877,
  [SMALL_STATE(329)] = 6886,
  [SMALL_STATE(330)] = 6897,
  [SMALL_STATE(331)] = 6906,
  [SMALL_STATE(332)] = 6917,
  [SMALL_STATE(333)] = 6928,
  [SMALL_STATE(334)] = 6939,
  [SMALL_STATE(335)] = 6950,
  [SMALL_STATE(336)] = 6961,
  [SMALL_STATE(337)] = 6970,
  [SMALL_STATE(338)] = 6981,
  [SMALL_STATE(339)] = 6990,
  [SMALL_STATE(340)] = 6999,
  [SMALL_STATE(341)] = 7008,
  [SMALL_STATE(342)] = 7019,
  [SMALL_STATE(343)] = 7030,
  [SMALL_STATE(344)] = 7039,
  [SMALL_STATE(345)] = 7050,
  [SMALL_STATE(346)] = 7061,
  [SMALL_STATE(347)] = 7070,
  [SMALL_STATE(348)] = 7081,
  [SMALL_STATE(349)] = 7092,
  [SMALL_STATE(350)] = 7103,
  [SMALL_STATE(351)] = 7112,
  [SMALL_STATE(352)] = 7121,
  [SMALL_STATE(353)] = 7132,
  [SMALL_STATE(354)] = 7141,
  [SMALL_STATE(355)] = 7152,
  [SMALL_STATE(356)] = 7163,
  [SMALL_STATE(357)] = 7172,
  [SMALL_STATE(358)] = 7183,
  [SMALL_STATE(359)] = 7192,
  [SMALL_STATE(360)] = 7203,
  [SMALL_STATE(361)] = 7212,
  [SMALL_STATE(362)] = 7221,
  [SMALL_STATE(363)] = 7229,
  [SMALL_STATE(364)] = 7237,
  [SMALL_STATE(365)] = 7245,
  [SMALL_STATE(366)] = 7253,
  [SMALL_STATE(367)] = 7261,
  [SMALL_STATE(368)] = 7269,
  [SMALL_STATE(369)] = 7277,
  [SMALL_STATE(370)] = 7285,
  [SMALL_STATE(371)] = 7293,
  [SMALL_STATE(372)] = 7301,
  [SMALL_STATE(373)] = 7309,
  [SMALL_STATE(374)] = 7317,
  [SMALL_STATE(375)] = 7325,
  [SMALL_STATE(376)] = 7333,
  [SMALL_STATE(377)] = 7341,
  [SMALL_STATE(378)] = 7349,
  [SMALL_STATE(379)] = 7357,
  [SMALL_STATE(380)] = 7365,
  [SMALL_STATE(381)] = 7373,
  [SMALL_STATE(382)] = 7381,
  [SMALL_STATE(383)] = 7389,
  [SMALL_STATE(384)] = 7397,
  [SMALL_STATE(385)] = 7405,
  [SMALL_STATE(386)] = 7413,
  [SMALL_STATE(387)] = 7421,
  [SMALL_STATE(388)] = 7429,
  [SMALL_STATE(389)] = 7437,
  [SMALL_STATE(390)] = 7445,
  [SMALL_STATE(391)] = 7453,
  [SMALL_STATE(392)] = 7461,
  [SMALL_STATE(393)] = 7469,
  [SMALL_STATE(394)] = 7477,
  [SMALL_STATE(395)] = 7485,
  [SMALL_STATE(396)] = 7493,
  [SMALL_STATE(397)] = 7501,
  [SMALL_STATE(398)] = 7509,
  [SMALL_STATE(399)] = 7517,
  [SMALL_STATE(400)] = 7525,
  [SMALL_STATE(401)] = 7533,
  [SMALL_STATE(402)] = 7541,
  [SMALL_STATE(403)] = 7549,
  [SMALL_STATE(404)] = 7557,
  [SMALL_STATE(405)] = 7565,
  [SMALL_STATE(406)] = 7573,
  [SMALL_STATE(407)] = 7581,
  [SMALL_STATE(408)] = 7589,
  [SMALL_STATE(409)] = 7597,
  [SMALL_STATE(410)] = 7605,
  [SMALL_STATE(411)] = 7613,
  [SMALL_STATE(412)] = 7621,
  [SMALL_STATE(413)] = 7629,
  [SMALL_STATE(414)] = 7637,
  [SMALL_STATE(415)] = 7645,
  [SMALL_STATE(416)] = 7653,
  [SMALL_STATE(417)] = 7661,
  [SMALL_STATE(418)] = 7669,
  [SMALL_STATE(419)] = 7677,
  [SMALL_STATE(420)] = 7685,
  [SMALL_STATE(421)] = 7693,
  [SMALL_STATE(422)] = 7701,
  [SMALL_STATE(423)] = 7709,
  [SMALL_STATE(424)] = 7717,
  [SMALL_STATE(425)] = 7725,
  [SMALL_STATE(426)] = 7733,
  [SMALL_STATE(427)] = 7741,
  [SMALL_STATE(428)] = 7749,
  [SMALL_STATE(429)] = 7757,
  [SMALL_STATE(430)] = 7765,
  [SMALL_STATE(431)] = 7773,
  [SMALL_STATE(432)] = 7781,
  [SMALL_STATE(433)] = 7789,
  [SMALL_STATE(434)] = 7797,
  [SMALL_STATE(435)] = 7805,
  [SMALL_STATE(436)] = 7813,
  [SMALL_STATE(437)] = 7821,
  [SMALL_STATE(438)] = 7829,
  [SMALL_STATE(439)] = 7837,
  [SMALL_STATE(440)] = 7845,
  [SMALL_STATE(441)] = 7853,
  [SMALL_STATE(442)] = 7861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(146),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(441),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(278),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(151),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(390),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(392),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(400),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(407),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(416),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(420),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(421),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(423),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(425),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(427),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(404),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(437),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(432),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 35),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 35),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 35),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 35),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 53),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 53),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 55),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 55),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 16),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 53),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 53),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 46),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 46),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 50),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 50),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 46),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 46),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 40),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 40),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 38),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 38),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 35),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 35),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 35),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 35),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 35),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 35),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 32),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 32),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 40),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 40),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 38),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 38),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 32),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 32),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 35),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 35),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 55),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 55),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(396),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(315),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(314),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(313),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(166),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(441),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(309),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(318),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(349),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(355),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(359),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(380),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(378),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(440),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 8),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 8),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 6),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 6),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, .production_id = 43), SHIFT_REPEAT(240),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, .production_id = 43),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 16),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 16),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 9),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 9),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 9),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 9),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 42),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 42),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 42),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 42),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 48),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 15),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 15),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 9),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 9),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 9),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 15),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 15),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 9),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 9),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 9),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 9),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 30),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(200),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(442),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 44),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, .production_id = 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(223),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2), SHIFT_REPEAT(237),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, .production_id = 26),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, .production_id = 27),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2), SHIFT_REPEAT(406),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(15),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(319),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 33), SHIFT_REPEAT(106),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 33),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 36), SHIFT_REPEAT(224),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 36),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21), SHIFT_REPEAT(433),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18), SHIFT_REPEAT(422),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(331),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 39), SHIFT_REPEAT(333),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 39),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(126),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 41), SHIFT_REPEAT(291),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 41),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 54),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 16),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 12),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 13),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 34),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, .production_id = 11),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 14),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 45),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 54),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 52),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 37),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 28),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 29),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 47),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 52),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 51),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 30),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 31),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 29),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 28),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blueprint(void) {
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

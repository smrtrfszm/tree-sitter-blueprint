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
#define STATE_COUNT 463
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
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
  anon_sym_COMMA = 25,
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
  anon_sym_LBRACK = 38,
  anon_sym_action = 39,
  anon_sym_RBRACK = 40,
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
  sym_closure_expression = 75,
  sym_lookup_expression = 76,
  sym_cast_expression = 77,
  sym_literal = 78,
  sym__type_literal = 79,
  sym__quoted_literal = 80,
  sym__number_literal = 81,
  sym__ident_literal = 82,
  sym__expression = 83,
  sym_binding = 84,
  sym_object_value = 85,
  sym_value = 86,
  sym_translated = 87,
  sym_flags = 88,
  sym_child_internal = 89,
  sym_child_annotation = 90,
  sym__child = 91,
  sym_menu = 92,
  sym__menu_child = 93,
  sym_menu_section = 94,
  sym_menu_submenu = 95,
  sym_menu_item = 96,
  sym_menu_attribute = 97,
  sym_string_value = 98,
  sym_menu_item_shorthand = 99,
  sym__extension = 100,
  sym_ext_accessibility = 101,
  sym_ext_adw_dialog = 102,
  sym_ext_adw_dialog_response = 103,
  sym_ext_adw_breakpoint_condition = 104,
  sym_ext_adw_breakpoint = 105,
  sym_ext_combo_box_items = 106,
  sym__ext_combo_box_item = 107,
  sym_ext_file_filter_mime_types = 108,
  sym_ext_file_filter_patterns = 109,
  sym_ext_file_filter_suffixes = 110,
  sym__ext_file_filter_item = 111,
  sym_ext_layout = 112,
  sym_ext_list_item_factory = 113,
  sym_ext_scale_marks = 114,
  sym_ext_scale_mark = 115,
  sym_ext_size_group_widgets = 116,
  sym__ext_size_group_widget = 117,
  sym_ext_string_list_strings = 118,
  sym__ext_strings_list_item = 119,
  sym_ext_styles = 120,
  sym__child_extension = 121,
  sym_ext_response = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_source_file_repeat2 = 124,
  aux_sym_quoted_repeat1 = 125,
  aux_sym_quoted_repeat2 = 126,
  aux_sym_object_content_repeat1 = 127,
  aux_sym_signal_repeat1 = 128,
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
  aux_sym_ext_scale_marks_repeat1 = 141,
  aux_sym_ext_size_group_widgets_repeat1 = 142,
  aux_sym_ext_string_list_strings_repeat1 = 143,
  aux_sym_ext_styles_repeat1 = 144,
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
  [anon_sym_action] = "action",
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
  [anon_sym_action] = anon_sym_action,
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
  [anon_sym_action] = {
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
  [4] = 2,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 94,
  [101] = 89,
  [102] = 96,
  [103] = 99,
  [104] = 104,
  [105] = 104,
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
  [131] = 127,
  [132] = 126,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 137,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 86,
  [145] = 84,
  [146] = 146,
  [147] = 147,
  [148] = 87,
  [149] = 85,
  [150] = 150,
  [151] = 151,
  [152] = 152,
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
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 191,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 187,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 190,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 198,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 189,
  [225] = 225,
  [226] = 180,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 175,
  [232] = 230,
  [233] = 170,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 194,
  [238] = 195,
  [239] = 174,
  [240] = 240,
  [241] = 241,
  [242] = 227,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 205,
  [251] = 251,
  [252] = 209,
  [253] = 253,
  [254] = 201,
  [255] = 255,
  [256] = 256,
  [257] = 196,
  [258] = 258,
  [259] = 259,
  [260] = 241,
  [261] = 261,
  [262] = 258,
  [263] = 200,
  [264] = 197,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 272,
  [275] = 275,
  [276] = 147,
  [277] = 277,
  [278] = 278,
  [279] = 146,
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
  [338] = 338,
  [339] = 339,
  [340] = 333,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 338,
  [351] = 351,
  [352] = 352,
  [353] = 336,
  [354] = 335,
  [355] = 349,
  [356] = 356,
  [357] = 171,
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
  [377] = 344,
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
  [454] = 434,
  [455] = 455,
  [456] = 456,
  [457] = 451,
  [458] = 421,
  [459] = 420,
  [460] = 460,
  [461] = 461,
  [462] = 400,
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
        '+', 404,
        ',', 396,
        '-', 403,
        '.', 378,
        '/', 13,
        '0', 367,
        ':', 387,
        ';', 382,
        '<', 399,
        '=', 462,
        '>', 400,
        'C', 24,
        '[', 416,
        '\\', 3,
        ']', 419,
        '_', 409,
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
        '|', 413,
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
        '+', 404,
        '-', 403,
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
        '+', 404,
        '-', 403,
        '.', 378,
        '/', 13,
        '0', 367,
        'C', 206,
        '_', 410,
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
        '+', 404,
        '-', 403,
        '.', 198,
        '/', 13,
        '0', 367,
        'C', 206,
        '_', 410,
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
      if (lookahead == ']') ADVANCE(419);
      if (lookahead == '_') ADVANCE(410);
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
        ',', 396,
        '.', 377,
        '/', 13,
        ':', 387,
        ';', 382,
        '=', 23,
        '>', 400,
        ']', 419,
        '{', 388,
        '|', 413,
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
        '[', 416,
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
      if (lookahead == ',') ADVANCE(396);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(382);
      if (lookahead == ']') ADVANCE(419);
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
      if (lookahead == ']') ADVANCE(419);
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
      if (lookahead == '_') ADVANCE(411);
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
      if (lookahead == 's') ADVANCE(397);
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
      if (lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(414);
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
      if (lookahead == 'f') ADVANCE(401);
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
      if (lookahead == 'n') ADVANCE(417);
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
      if (lookahead == 'y') ADVANCE(407);
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
      if (lookahead == '_') ADVANCE(412);
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
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(415);
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
      if (lookahead == 'f') ADVANCE(402);
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
      if (lookahead == 'n') ADVANCE(418);
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
      if (lookahead == 's') ADVANCE(398);
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
      if (lookahead == 'y') ADVANCE(408);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
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
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 201},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
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
  [106] = {.lex_state = 200},
  [107] = {.lex_state = 200},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 200},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 200},
  [112] = {.lex_state = 200},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 200},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 201},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 201},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 200},
  [145] = {.lex_state = 200},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 200},
  [149] = {.lex_state = 200},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 200},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 200},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 200},
  [158] = {.lex_state = 200},
  [159] = {.lex_state = 200},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 200},
  [166] = {.lex_state = 200},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 22},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 22},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 22},
  [196] = {.lex_state = 22},
  [197] = {.lex_state = 22},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 22},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 20},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 20},
  [264] = {.lex_state = 20},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 20},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 20},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 20},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 20},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 20},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 9},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
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
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 201},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 201},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 9},
  [420] = {.lex_state = 0},
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
  [440] = {.lex_state = 9},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 9},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 9},
  [462] = {.lex_state = 0},
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
    [anon_sym_action] = ACTIONS(1),
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
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(450),
    [sym_type_name] = STATE(272),
    [sym_using] = STATE(88),
    [sym_translation_domain] = STATE(109),
    [sym_template] = STATE(114),
    [sym_object] = STATE(114),
    [sym_menu] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(88),
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
    STATE(188), 1,
      sym_child_annotation,
    STATE(274), 1,
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
    STATE(188), 1,
      sym_child_annotation,
    STATE(274), 1,
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
    STATE(188), 1,
      sym_child_annotation,
    STATE(274), 1,
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
    STATE(188), 1,
      sym_child_annotation,
    STATE(274), 1,
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
    STATE(188), 1,
      sym_child_annotation,
    STATE(274), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
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
  [440] = 18,
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
      anon_sym_typeof,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    STATE(272), 1,
      sym_type_name,
    STATE(395), 1,
      sym_object,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(393), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(394), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [508] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [558] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
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
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [658] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(144), 1,
      sym_ident,
    STATE(413), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(394), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [708] = 13,
    ACTIONS(114), 1,
      sym_integer_literal,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(144), 1,
      sym_ident,
    STATE(383), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(394), 3,
      sym_literal,
      sym_translated,
      sym_flags,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [758] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [805] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(378), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [852] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
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
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 2,
      sym_closure_expression,
      sym_literal,
    STATE(161), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [899] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(146), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [927] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(150), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [955] = 3,
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
  [983] = 3,
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
  [1011] = 3,
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
  [1039] = 3,
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
  [1067] = 3,
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
  [1095] = 3,
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
  [1123] = 3,
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
  [1151] = 3,
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
  [1179] = 3,
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
  [1207] = 3,
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
  [1235] = 3,
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
  [1263] = 3,
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
  [1291] = 3,
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
  [1319] = 3,
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
  [1347] = 3,
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
  [1375] = 3,
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
  [1403] = 3,
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
  [1431] = 3,
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
  [1459] = 3,
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
  [1487] = 3,
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
  [1515] = 3,
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
  [1543] = 3,
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
  [1571] = 3,
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
  [1599] = 3,
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
  [1627] = 3,
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
  [1655] = 3,
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
  [1683] = 3,
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
  [1711] = 3,
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
  [1739] = 3,
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
  [1767] = 3,
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
  [1795] = 3,
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
  [1823] = 3,
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
  [1851] = 3,
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
  [1879] = 3,
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
  [1907] = 3,
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
  [1935] = 3,
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
  [1963] = 3,
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
  [1991] = 3,
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
  [2019] = 3,
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
  [2047] = 3,
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
  [2075] = 3,
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
  [2103] = 3,
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
  [2131] = 3,
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
  [2159] = 3,
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
  [2187] = 3,
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
  [2215] = 3,
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
  [2243] = 3,
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
  [2271] = 3,
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
  [2299] = 3,
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
  [2327] = 3,
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
  [2355] = 3,
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
  [2383] = 3,
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
  [2411] = 3,
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
  [2439] = 3,
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
  [2467] = 3,
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
  [2495] = 3,
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
  [2523] = 3,
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
  [2551] = 3,
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
  [2579] = 3,
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
  [2607] = 3,
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
  [2635] = 3,
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
  [2663] = 3,
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
  [2691] = 3,
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
  [2719] = 3,
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
  [2747] = 3,
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
  [2775] = 3,
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
  [2803] = 3,
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
  [2831] = 3,
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
  [2859] = 3,
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
  [2887] = 3,
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
  [2915] = 12,
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
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_translation_domain,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(119), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(106), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2958] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
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
  [2987] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(446), 1,
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
  [3016] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(448), 1,
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
  [3045] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(450), 1,
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
  [3074] = 7,
    ACTIONS(452), 1,
      sym_ident,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_section,
    ACTIONS(460), 1,
      anon_sym_submenu,
    ACTIONS(463), 1,
      anon_sym_item,
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
  [3103] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(466), 1,
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
  [3132] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(468), 1,
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
  [3161] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(470), 1,
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
  [3190] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(472), 1,
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
  [3219] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(474), 1,
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
  [3248] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(476), 1,
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
  [3277] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(478), 1,
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
  [3306] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
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
  [3335] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(482), 1,
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
  [3364] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(484), 1,
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
  [3393] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
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
  [3422] = 7,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(440), 1,
      anon_sym_section,
    ACTIONS(442), 1,
      anon_sym_submenu,
    ACTIONS(444), 1,
      anon_sym_item,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
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
  [3451] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3481] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
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
  [3511] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(492), 1,
      sym_ident,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      sym__ext_combo_box_item,
    STATE(368), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3545] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(106), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3575] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(492), 1,
      sym_ident,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      sym__ext_combo_box_item,
    STATE(368), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3609] = 8,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 1,
      sym_ident,
    ACTIONS(506), 1,
      anon_sym_template,
    ACTIONS(509), 1,
      anon_sym_menu,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(503), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3639] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3669] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(492), 1,
      sym_ident,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      sym__ext_combo_box_item,
    STATE(368), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3703] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3733] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym__,
    ACTIONS(132), 1,
      anon_sym_C_,
    ACTIONS(492), 1,
      sym_ident,
    STATE(366), 1,
      sym__ext_combo_box_item,
    STATE(368), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3764] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(379), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3793] = 6,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      anon_sym_section,
    ACTIONS(526), 1,
      anon_sym_submenu,
    ACTIONS(528), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(120), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3818] = 6,
    ACTIONS(524), 1,
      anon_sym_section,
    ACTIONS(526), 1,
      anon_sym_submenu,
    ACTIONS(528), 1,
      anon_sym_item,
    ACTIONS(530), 1,
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
  [3843] = 5,
    ACTIONS(536), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(119), 2,
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
  [3866] = 6,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_section,
    ACTIONS(544), 1,
      anon_sym_submenu,
    ACTIONS(547), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(120), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3891] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(379), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3920] = 6,
    ACTIONS(524), 1,
      anon_sym_section,
    ACTIONS(526), 1,
      anon_sym_submenu,
    ACTIONS(528), 1,
      anon_sym_item,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(120), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3945] = 6,
    ACTIONS(524), 1,
      anon_sym_section,
    ACTIONS(526), 1,
      anon_sym_submenu,
    ACTIONS(528), 1,
      anon_sym_item,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(117), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3970] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(314), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3999] = 6,
    ACTIONS(558), 1,
      sym_ident,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(562), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(129), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4023] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4051] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4079] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(379), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4105] = 6,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      anon_sym_as,
    ACTIONS(570), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(572), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(133), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4129] = 6,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      anon_sym_as,
    ACTIONS(574), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(576), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(133), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4153] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4181] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4209] = 6,
    ACTIONS(582), 1,
      sym_ident,
    ACTIONS(584), 1,
      anon_sym_DOT,
    ACTIONS(589), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(587), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(133), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4233] = 6,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
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
    STATE(130), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4257] = 7,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4282] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(457), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4307] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(344), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4332] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(405), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4357] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(451), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4382] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(377), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4407] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(602), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4424] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(341), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4449] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_C_,
    STATE(398), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(173), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4474] = 3,
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
  [4490] = 3,
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
  [4506] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(606), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4522] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(610), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4538] = 3,
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
  [4554] = 3,
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
  [4570] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(614), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4585] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(618), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4600] = 6,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(626), 1,
      anon_sym_COLON_COLON,
    ACTIONS(628), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4621] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(630), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(632), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4636] = 5,
    ACTIONS(634), 1,
      sym_ident,
    ACTIONS(636), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(638), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(412), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [4655] = 3,
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
  [4670] = 3,
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
  [4685] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(650), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4700] = 3,
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
  [4715] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(656), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(658), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4730] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(662), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4745] = 3,
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
  [4760] = 5,
    ACTIONS(668), 1,
      sym_integer_literal,
    STATE(374), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(670), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(672), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4779] = 6,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    STATE(323), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4800] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(678), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(680), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4815] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(684), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4830] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(686), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
    ACTIONS(688), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4845] = 3,
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
  [4860] = 3,
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
  [4875] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(698), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(700), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4890] = 3,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4904] = 3,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(706), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4918] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4938] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4950] = 3,
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
  [4964] = 3,
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
  [4978] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4998] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5018] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5030] = 3,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5044] = 3,
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
  [5058] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(732), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      sym__ext_file_filter_item,
    STATE(329), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5078] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym__ext_file_filter_item,
    STATE(329), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5098] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      sym__ext_file_filter_item,
    STATE(329), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5118] = 4,
    ACTIONS(738), 1,
      sym_ident,
    STATE(184), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5134] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5146] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5166] = 3,
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
  [5180] = 5,
    ACTIONS(751), 1,
      sym_ident,
    STATE(44), 1,
      sym_object,
    STATE(274), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5198] = 3,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5212] = 3,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5226] = 3,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(761), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5240] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5260] = 5,
    ACTIONS(767), 1,
      sym_ident,
    ACTIONS(769), 1,
      sym_integer_literal,
    STATE(367), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 2,
      sym_hex_literal,
      sym_float_literal,
  [5278] = 3,
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
  [5292] = 3,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5306] = 3,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5320] = 3,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(785), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5334] = 3,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5348] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5368] = 3,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5382] = 3,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5396] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5407] = 4,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5422] = 4,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5437] = 5,
    ACTIONS(812), 1,
      sym_escape_sequence,
    ACTIONS(814), 1,
      anon_sym_SQUOTE,
    ACTIONS(816), 1,
      aux_sym_quoted_token2,
    STATE(242), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5454] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(362), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5469] = 4,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5484] = 4,
    ACTIONS(824), 1,
      sym_ident,
    STATE(184), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5499] = 5,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    ACTIONS(828), 1,
      sym_escape_sequence,
    ACTIONS(830), 1,
      aux_sym_quoted_token1,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5527] = 4,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(834), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5542] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(329), 1,
      sym_quoted,
    STATE(334), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5559] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(418), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5574] = 4,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5589] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5600] = 4,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5615] = 4,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5630] = 5,
    ACTIONS(844), 1,
      sym_escape_sequence,
    ACTIONS(847), 1,
      anon_sym_DQUOTE,
    ACTIONS(849), 1,
      aux_sym_quoted_token1,
    STATE(218), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5647] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5658] = 4,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5673] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(358), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5688] = 5,
    ACTIONS(856), 1,
      sym_escape_sequence,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    ACTIONS(861), 1,
      aux_sym_quoted_token2,
    STATE(222), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5705] = 4,
    ACTIONS(864), 1,
      sym_ident,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(223), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5720] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(755), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5731] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(431), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [5746] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(730), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5757] = 5,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    ACTIONS(873), 1,
      aux_sym_quoted_token2,
    STATE(222), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5774] = 4,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(877), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5789] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5806] = 5,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      sym_escape_sequence,
    ACTIONS(883), 1,
      aux_sym_quoted_token1,
    STATE(218), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5823] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5834] = 5,
    ACTIONS(881), 1,
      sym_escape_sequence,
    ACTIONS(883), 1,
      aux_sym_quoted_token1,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5851] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(704), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5862] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5879] = 4,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5894] = 4,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5909] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5920] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5931] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5942] = 4,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5957] = 4,
    ACTIONS(895), 1,
      sym_ident,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(258), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5972] = 5,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(873), 1,
      aux_sym_quoted_token2,
    ACTIONS(885), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [5989] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(899), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6000] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6017] = 4,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6032] = 4,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(907), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6047] = 4,
    ACTIONS(909), 1,
      sym_integer_literal,
    STATE(167), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(911), 2,
      sym_hex_literal,
      sym_float_literal,
  [6062] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6073] = 4,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6088] = 5,
    ACTIONS(917), 1,
      sym_escape_sequence,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    ACTIONS(921), 1,
      aux_sym_quoted_token2,
    STATE(227), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [6105] = 4,
    ACTIONS(923), 1,
      sym_integer_literal,
    STATE(347), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(925), 2,
      sym_hex_literal,
      sym_float_literal,
  [6120] = 5,
    ACTIONS(919), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      sym_escape_sequence,
    ACTIONS(929), 1,
      aux_sym_quoted_token1,
    STATE(230), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(818), 2,
      sym_line_comment,
      sym_block_comment,
  [6137] = 4,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(933), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6152] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6163] = 4,
    ACTIONS(935), 1,
      sym_integer_literal,
    STATE(442), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(937), 2,
      sym_hex_literal,
      sym_float_literal,
  [6178] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(939), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [6189] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6200] = 4,
    ACTIONS(895), 1,
      sym_ident,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(223), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6215] = 4,
    ACTIONS(824), 1,
      sym_ident,
    STATE(208), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(943), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6230] = 4,
    ACTIONS(895), 1,
      sym_ident,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(262), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6245] = 4,
    ACTIONS(751), 1,
      sym_ident,
    STATE(273), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6260] = 4,
    ACTIONS(895), 1,
      sym_ident,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(223), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [6275] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6286] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(787), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6297] = 4,
    ACTIONS(949), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(951), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6312] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(371), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6326] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6340] = 4,
    ACTIONS(957), 1,
      sym_ident,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6354] = 4,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6368] = 4,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6382] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(446), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6396] = 4,
    ACTIONS(971), 1,
      sym_ident,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6410] = 4,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
    ACTIONS(975), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6424] = 4,
    ACTIONS(977), 1,
      sym_ident,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6438] = 4,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6452] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(610), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6462] = 4,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(294), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6476] = 4,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    STATE(323), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6490] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6500] = 4,
    ACTIONS(957), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6514] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(408), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6528] = 4,
    ACTIONS(992), 1,
      sym_ident,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6542] = 4,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6556] = 4,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
    ACTIONS(1000), 1,
      anon_sym_mark,
    STATE(307), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6570] = 4,
    ACTIONS(1002), 1,
      sym_ident,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6584] = 4,
    ACTIONS(1000), 1,
      anon_sym_mark,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6598] = 4,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6612] = 4,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6626] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1018), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6636] = 4,
    ACTIONS(1002), 1,
      sym_ident,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6650] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6664] = 4,
    ACTIONS(1024), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6678] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1029), 3,
      sym_ident,
      anon_sym_DOT,
      anon_sym_DOLLAR,
  [6688] = 4,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6702] = 4,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6716] = 4,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6730] = 4,
    ACTIONS(992), 1,
      sym_ident,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6744] = 4,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6758] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    STATE(325), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6772] = 4,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    ACTIONS(957), 1,
      sym_ident,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6786] = 4,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6800] = 4,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(1057), 1,
      anon_sym_PIPE,
    STATE(302), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6814] = 4,
    ACTIONS(1060), 1,
      sym_ident,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6828] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(439), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6842] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6856] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(460), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6870] = 4,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6884] = 4,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6898] = 4,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6912] = 4,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6926] = 4,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6940] = 4,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6954] = 4,
    ACTIONS(1002), 1,
      sym_ident,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6968] = 4,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6982] = 4,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6996] = 4,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7010] = 4,
    ACTIONS(1000), 1,
      anon_sym_mark,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7024] = 4,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7038] = 4,
    ACTIONS(824), 1,
      sym_ident,
    ACTIONS(1109), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7052] = 4,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7066] = 4,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(1115), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7080] = 4,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7094] = 4,
    ACTIONS(1121), 1,
      anon_sym_SEMI,
    ACTIONS(1123), 1,
      anon_sym_PIPE,
    STATE(302), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7108] = 4,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7122] = 4,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7136] = 4,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7150] = 4,
    ACTIONS(1137), 1,
      sym_ident,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7164] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(402), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7178] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7187] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7196] = 3,
    ACTIONS(1146), 1,
      sym_ident,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7207] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1055), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7216] = 3,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7227] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7236] = 3,
    ACTIONS(1156), 1,
      anon_sym_LBRACE,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7247] = 3,
    ACTIONS(1160), 1,
      sym_ident,
    ACTIONS(1162), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7258] = 3,
    ACTIONS(1164), 1,
      sym_ident,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7269] = 3,
    ACTIONS(1168), 1,
      sym_ident,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7280] = 3,
    ACTIONS(1172), 1,
      sym_ident,
    ACTIONS(1174), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7291] = 3,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7302] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7311] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1182), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7320] = 3,
    ACTIONS(957), 1,
      sym_ident,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7331] = 3,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7342] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7351] = 3,
    ACTIONS(1188), 1,
      sym_ident,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7362] = 3,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7373] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7382] = 3,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7393] = 3,
    ACTIONS(1198), 1,
      sym_ident,
    ACTIONS(1200), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7404] = 3,
    ACTIONS(1000), 1,
      anon_sym_mark,
    STATE(375), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7415] = 3,
    ACTIONS(1002), 1,
      sym_ident,
    STATE(376), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7426] = 3,
    ACTIONS(1202), 1,
      sym_ident,
    ACTIONS(1204), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7437] = 3,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7448] = 3,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7459] = 3,
    ACTIONS(1210), 1,
      sym_ident,
    ACTIONS(1212), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7470] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(708), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7479] = 3,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7490] = 3,
    ACTIONS(1214), 1,
      sym_ident,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7501] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7510] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    ACTIONS(1222), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7521] = 3,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7532] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7541] = 3,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    ACTIONS(1228), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7552] = 3,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7563] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7572] = 3,
    ACTIONS(1236), 1,
      anon_sym_RBRACK,
    ACTIONS(1238), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7583] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7592] = 3,
    ACTIONS(1242), 1,
      anon_sym_RBRACK,
    ACTIONS(1244), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7603] = 3,
    ACTIONS(1246), 1,
      sym_ident,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7614] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7623] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7632] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7641] = 3,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7652] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1011), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7661] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1260), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7670] = 3,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7681] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1013), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7690] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1040), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7699] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7708] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1268), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7717] = 3,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7728] = 2,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7736] = 2,
    ACTIONS(1276), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7744] = 2,
    ACTIONS(1278), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7752] = 2,
    ACTIONS(1280), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7760] = 2,
    ACTIONS(1282), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7768] = 2,
    ACTIONS(1284), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7776] = 2,
    ACTIONS(1286), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7784] = 2,
    ACTIONS(1288), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7792] = 2,
    ACTIONS(1290), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7800] = 2,
    ACTIONS(1292), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7808] = 2,
    ACTIONS(1294), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7816] = 2,
    ACTIONS(1296), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7824] = 2,
    ACTIONS(1298), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7832] = 2,
    ACTIONS(1300), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7840] = 2,
    ACTIONS(1302), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7848] = 2,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7856] = 2,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7864] = 2,
    ACTIONS(1308), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7872] = 2,
    ACTIONS(1310), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7880] = 2,
    ACTIONS(1312), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7888] = 2,
    ACTIONS(1314), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7896] = 2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7904] = 2,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7912] = 2,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7920] = 2,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7928] = 2,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7936] = 2,
    ACTIONS(1326), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7944] = 2,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7952] = 2,
    ACTIONS(1330), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7960] = 2,
    ACTIONS(1332), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7968] = 2,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7976] = 2,
    ACTIONS(1336), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7984] = 2,
    ACTIONS(1338), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7992] = 2,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8000] = 2,
    ACTIONS(1340), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8008] = 2,
    ACTIONS(1342), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8016] = 2,
    ACTIONS(1344), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8024] = 2,
    ACTIONS(1346), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8032] = 2,
    ACTIONS(1348), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8040] = 2,
    ACTIONS(1350), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8048] = 2,
    ACTIONS(1352), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8056] = 2,
    ACTIONS(1354), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8064] = 2,
    ACTIONS(1356), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8072] = 2,
    ACTIONS(1358), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8080] = 2,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8088] = 2,
    ACTIONS(1362), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8096] = 2,
    ACTIONS(1364), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8104] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8112] = 2,
    ACTIONS(1368), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8120] = 2,
    ACTIONS(1370), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8128] = 2,
    ACTIONS(1372), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8136] = 2,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8144] = 2,
    ACTIONS(1376), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8152] = 2,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8160] = 2,
    ACTIONS(1380), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8168] = 2,
    ACTIONS(1382), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8176] = 2,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8184] = 2,
    ACTIONS(1146), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8192] = 2,
    ACTIONS(1386), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8200] = 2,
    ACTIONS(1388), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8208] = 2,
    ACTIONS(1390), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8216] = 2,
    ACTIONS(1392), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8224] = 2,
    ACTIONS(1394), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8232] = 2,
    ACTIONS(1396), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8240] = 2,
    ACTIONS(1398), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8248] = 2,
    ACTIONS(1400), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8256] = 2,
    ACTIONS(1402), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8264] = 2,
    ACTIONS(1404), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8272] = 2,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8280] = 2,
    ACTIONS(1408), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8288] = 2,
    ACTIONS(1410), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8296] = 2,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8304] = 2,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8312] = 2,
    ACTIONS(1416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8320] = 2,
    ACTIONS(1418), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8328] = 2,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8336] = 2,
    ACTIONS(1422), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8344] = 2,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8352] = 2,
    ACTIONS(1426), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8360] = 2,
    ACTIONS(1428), 1,
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
  [SMALL_STATE(8)] = 508,
  [SMALL_STATE(9)] = 558,
  [SMALL_STATE(10)] = 608,
  [SMALL_STATE(11)] = 658,
  [SMALL_STATE(12)] = 708,
  [SMALL_STATE(13)] = 758,
  [SMALL_STATE(14)] = 805,
  [SMALL_STATE(15)] = 852,
  [SMALL_STATE(16)] = 899,
  [SMALL_STATE(17)] = 927,
  [SMALL_STATE(18)] = 955,
  [SMALL_STATE(19)] = 983,
  [SMALL_STATE(20)] = 1011,
  [SMALL_STATE(21)] = 1039,
  [SMALL_STATE(22)] = 1067,
  [SMALL_STATE(23)] = 1095,
  [SMALL_STATE(24)] = 1123,
  [SMALL_STATE(25)] = 1151,
  [SMALL_STATE(26)] = 1179,
  [SMALL_STATE(27)] = 1207,
  [SMALL_STATE(28)] = 1235,
  [SMALL_STATE(29)] = 1263,
  [SMALL_STATE(30)] = 1291,
  [SMALL_STATE(31)] = 1319,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1403,
  [SMALL_STATE(35)] = 1431,
  [SMALL_STATE(36)] = 1459,
  [SMALL_STATE(37)] = 1487,
  [SMALL_STATE(38)] = 1515,
  [SMALL_STATE(39)] = 1543,
  [SMALL_STATE(40)] = 1571,
  [SMALL_STATE(41)] = 1599,
  [SMALL_STATE(42)] = 1627,
  [SMALL_STATE(43)] = 1655,
  [SMALL_STATE(44)] = 1683,
  [SMALL_STATE(45)] = 1711,
  [SMALL_STATE(46)] = 1739,
  [SMALL_STATE(47)] = 1767,
  [SMALL_STATE(48)] = 1795,
  [SMALL_STATE(49)] = 1823,
  [SMALL_STATE(50)] = 1851,
  [SMALL_STATE(51)] = 1879,
  [SMALL_STATE(52)] = 1907,
  [SMALL_STATE(53)] = 1935,
  [SMALL_STATE(54)] = 1963,
  [SMALL_STATE(55)] = 1991,
  [SMALL_STATE(56)] = 2019,
  [SMALL_STATE(57)] = 2047,
  [SMALL_STATE(58)] = 2075,
  [SMALL_STATE(59)] = 2103,
  [SMALL_STATE(60)] = 2131,
  [SMALL_STATE(61)] = 2159,
  [SMALL_STATE(62)] = 2187,
  [SMALL_STATE(63)] = 2215,
  [SMALL_STATE(64)] = 2243,
  [SMALL_STATE(65)] = 2271,
  [SMALL_STATE(66)] = 2299,
  [SMALL_STATE(67)] = 2327,
  [SMALL_STATE(68)] = 2355,
  [SMALL_STATE(69)] = 2383,
  [SMALL_STATE(70)] = 2411,
  [SMALL_STATE(71)] = 2439,
  [SMALL_STATE(72)] = 2467,
  [SMALL_STATE(73)] = 2495,
  [SMALL_STATE(74)] = 2523,
  [SMALL_STATE(75)] = 2551,
  [SMALL_STATE(76)] = 2579,
  [SMALL_STATE(77)] = 2607,
  [SMALL_STATE(78)] = 2635,
  [SMALL_STATE(79)] = 2663,
  [SMALL_STATE(80)] = 2691,
  [SMALL_STATE(81)] = 2719,
  [SMALL_STATE(82)] = 2747,
  [SMALL_STATE(83)] = 2775,
  [SMALL_STATE(84)] = 2803,
  [SMALL_STATE(85)] = 2831,
  [SMALL_STATE(86)] = 2859,
  [SMALL_STATE(87)] = 2887,
  [SMALL_STATE(88)] = 2915,
  [SMALL_STATE(89)] = 2958,
  [SMALL_STATE(90)] = 2987,
  [SMALL_STATE(91)] = 3016,
  [SMALL_STATE(92)] = 3045,
  [SMALL_STATE(93)] = 3074,
  [SMALL_STATE(94)] = 3103,
  [SMALL_STATE(95)] = 3132,
  [SMALL_STATE(96)] = 3161,
  [SMALL_STATE(97)] = 3190,
  [SMALL_STATE(98)] = 3219,
  [SMALL_STATE(99)] = 3248,
  [SMALL_STATE(100)] = 3277,
  [SMALL_STATE(101)] = 3306,
  [SMALL_STATE(102)] = 3335,
  [SMALL_STATE(103)] = 3364,
  [SMALL_STATE(104)] = 3393,
  [SMALL_STATE(105)] = 3422,
  [SMALL_STATE(106)] = 3451,
  [SMALL_STATE(107)] = 3481,
  [SMALL_STATE(108)] = 3511,
  [SMALL_STATE(109)] = 3545,
  [SMALL_STATE(110)] = 3575,
  [SMALL_STATE(111)] = 3609,
  [SMALL_STATE(112)] = 3639,
  [SMALL_STATE(113)] = 3669,
  [SMALL_STATE(114)] = 3703,
  [SMALL_STATE(115)] = 3733,
  [SMALL_STATE(116)] = 3764,
  [SMALL_STATE(117)] = 3793,
  [SMALL_STATE(118)] = 3818,
  [SMALL_STATE(119)] = 3843,
  [SMALL_STATE(120)] = 3866,
  [SMALL_STATE(121)] = 3891,
  [SMALL_STATE(122)] = 3920,
  [SMALL_STATE(123)] = 3945,
  [SMALL_STATE(124)] = 3970,
  [SMALL_STATE(125)] = 3999,
  [SMALL_STATE(126)] = 4023,
  [SMALL_STATE(127)] = 4051,
  [SMALL_STATE(128)] = 4079,
  [SMALL_STATE(129)] = 4105,
  [SMALL_STATE(130)] = 4129,
  [SMALL_STATE(131)] = 4153,
  [SMALL_STATE(132)] = 4181,
  [SMALL_STATE(133)] = 4209,
  [SMALL_STATE(134)] = 4233,
  [SMALL_STATE(135)] = 4257,
  [SMALL_STATE(136)] = 4282,
  [SMALL_STATE(137)] = 4307,
  [SMALL_STATE(138)] = 4332,
  [SMALL_STATE(139)] = 4357,
  [SMALL_STATE(140)] = 4382,
  [SMALL_STATE(141)] = 4407,
  [SMALL_STATE(142)] = 4424,
  [SMALL_STATE(143)] = 4449,
  [SMALL_STATE(144)] = 4474,
  [SMALL_STATE(145)] = 4490,
  [SMALL_STATE(146)] = 4506,
  [SMALL_STATE(147)] = 4522,
  [SMALL_STATE(148)] = 4538,
  [SMALL_STATE(149)] = 4554,
  [SMALL_STATE(150)] = 4570,
  [SMALL_STATE(151)] = 4585,
  [SMALL_STATE(152)] = 4600,
  [SMALL_STATE(153)] = 4621,
  [SMALL_STATE(154)] = 4636,
  [SMALL_STATE(155)] = 4655,
  [SMALL_STATE(156)] = 4670,
  [SMALL_STATE(157)] = 4685,
  [SMALL_STATE(158)] = 4700,
  [SMALL_STATE(159)] = 4715,
  [SMALL_STATE(160)] = 4730,
  [SMALL_STATE(161)] = 4745,
  [SMALL_STATE(162)] = 4760,
  [SMALL_STATE(163)] = 4779,
  [SMALL_STATE(164)] = 4800,
  [SMALL_STATE(165)] = 4815,
  [SMALL_STATE(166)] = 4830,
  [SMALL_STATE(167)] = 4845,
  [SMALL_STATE(168)] = 4860,
  [SMALL_STATE(169)] = 4875,
  [SMALL_STATE(170)] = 4890,
  [SMALL_STATE(171)] = 4904,
  [SMALL_STATE(172)] = 4918,
  [SMALL_STATE(173)] = 4938,
  [SMALL_STATE(174)] = 4950,
  [SMALL_STATE(175)] = 4964,
  [SMALL_STATE(176)] = 4978,
  [SMALL_STATE(177)] = 4998,
  [SMALL_STATE(178)] = 5018,
  [SMALL_STATE(179)] = 5030,
  [SMALL_STATE(180)] = 5044,
  [SMALL_STATE(181)] = 5058,
  [SMALL_STATE(182)] = 5078,
  [SMALL_STATE(183)] = 5098,
  [SMALL_STATE(184)] = 5118,
  [SMALL_STATE(185)] = 5134,
  [SMALL_STATE(186)] = 5146,
  [SMALL_STATE(187)] = 5166,
  [SMALL_STATE(188)] = 5180,
  [SMALL_STATE(189)] = 5198,
  [SMALL_STATE(190)] = 5212,
  [SMALL_STATE(191)] = 5226,
  [SMALL_STATE(192)] = 5240,
  [SMALL_STATE(193)] = 5260,
  [SMALL_STATE(194)] = 5278,
  [SMALL_STATE(195)] = 5292,
  [SMALL_STATE(196)] = 5306,
  [SMALL_STATE(197)] = 5320,
  [SMALL_STATE(198)] = 5334,
  [SMALL_STATE(199)] = 5348,
  [SMALL_STATE(200)] = 5368,
  [SMALL_STATE(201)] = 5382,
  [SMALL_STATE(202)] = 5396,
  [SMALL_STATE(203)] = 5407,
  [SMALL_STATE(204)] = 5422,
  [SMALL_STATE(205)] = 5437,
  [SMALL_STATE(206)] = 5454,
  [SMALL_STATE(207)] = 5469,
  [SMALL_STATE(208)] = 5484,
  [SMALL_STATE(209)] = 5499,
  [SMALL_STATE(210)] = 5516,
  [SMALL_STATE(211)] = 5527,
  [SMALL_STATE(212)] = 5542,
  [SMALL_STATE(213)] = 5559,
  [SMALL_STATE(214)] = 5574,
  [SMALL_STATE(215)] = 5589,
  [SMALL_STATE(216)] = 5600,
  [SMALL_STATE(217)] = 5615,
  [SMALL_STATE(218)] = 5630,
  [SMALL_STATE(219)] = 5647,
  [SMALL_STATE(220)] = 5658,
  [SMALL_STATE(221)] = 5673,
  [SMALL_STATE(222)] = 5688,
  [SMALL_STATE(223)] = 5705,
  [SMALL_STATE(224)] = 5720,
  [SMALL_STATE(225)] = 5731,
  [SMALL_STATE(226)] = 5746,
  [SMALL_STATE(227)] = 5757,
  [SMALL_STATE(228)] = 5774,
  [SMALL_STATE(229)] = 5789,
  [SMALL_STATE(230)] = 5806,
  [SMALL_STATE(231)] = 5823,
  [SMALL_STATE(232)] = 5834,
  [SMALL_STATE(233)] = 5851,
  [SMALL_STATE(234)] = 5862,
  [SMALL_STATE(235)] = 5879,
  [SMALL_STATE(236)] = 5894,
  [SMALL_STATE(237)] = 5909,
  [SMALL_STATE(238)] = 5920,
  [SMALL_STATE(239)] = 5931,
  [SMALL_STATE(240)] = 5942,
  [SMALL_STATE(241)] = 5957,
  [SMALL_STATE(242)] = 5972,
  [SMALL_STATE(243)] = 5989,
  [SMALL_STATE(244)] = 6000,
  [SMALL_STATE(245)] = 6017,
  [SMALL_STATE(246)] = 6032,
  [SMALL_STATE(247)] = 6047,
  [SMALL_STATE(248)] = 6062,
  [SMALL_STATE(249)] = 6073,
  [SMALL_STATE(250)] = 6088,
  [SMALL_STATE(251)] = 6105,
  [SMALL_STATE(252)] = 6120,
  [SMALL_STATE(253)] = 6137,
  [SMALL_STATE(254)] = 6152,
  [SMALL_STATE(255)] = 6163,
  [SMALL_STATE(256)] = 6178,
  [SMALL_STATE(257)] = 6189,
  [SMALL_STATE(258)] = 6200,
  [SMALL_STATE(259)] = 6215,
  [SMALL_STATE(260)] = 6230,
  [SMALL_STATE(261)] = 6245,
  [SMALL_STATE(262)] = 6260,
  [SMALL_STATE(263)] = 6275,
  [SMALL_STATE(264)] = 6286,
  [SMALL_STATE(265)] = 6297,
  [SMALL_STATE(266)] = 6312,
  [SMALL_STATE(267)] = 6326,
  [SMALL_STATE(268)] = 6340,
  [SMALL_STATE(269)] = 6354,
  [SMALL_STATE(270)] = 6368,
  [SMALL_STATE(271)] = 6382,
  [SMALL_STATE(272)] = 6396,
  [SMALL_STATE(273)] = 6410,
  [SMALL_STATE(274)] = 6424,
  [SMALL_STATE(275)] = 6438,
  [SMALL_STATE(276)] = 6452,
  [SMALL_STATE(277)] = 6462,
  [SMALL_STATE(278)] = 6476,
  [SMALL_STATE(279)] = 6490,
  [SMALL_STATE(280)] = 6500,
  [SMALL_STATE(281)] = 6514,
  [SMALL_STATE(282)] = 6528,
  [SMALL_STATE(283)] = 6542,
  [SMALL_STATE(284)] = 6556,
  [SMALL_STATE(285)] = 6570,
  [SMALL_STATE(286)] = 6584,
  [SMALL_STATE(287)] = 6598,
  [SMALL_STATE(288)] = 6612,
  [SMALL_STATE(289)] = 6626,
  [SMALL_STATE(290)] = 6636,
  [SMALL_STATE(291)] = 6650,
  [SMALL_STATE(292)] = 6664,
  [SMALL_STATE(293)] = 6678,
  [SMALL_STATE(294)] = 6688,
  [SMALL_STATE(295)] = 6702,
  [SMALL_STATE(296)] = 6716,
  [SMALL_STATE(297)] = 6730,
  [SMALL_STATE(298)] = 6744,
  [SMALL_STATE(299)] = 6758,
  [SMALL_STATE(300)] = 6772,
  [SMALL_STATE(301)] = 6786,
  [SMALL_STATE(302)] = 6800,
  [SMALL_STATE(303)] = 6814,
  [SMALL_STATE(304)] = 6828,
  [SMALL_STATE(305)] = 6842,
  [SMALL_STATE(306)] = 6856,
  [SMALL_STATE(307)] = 6870,
  [SMALL_STATE(308)] = 6884,
  [SMALL_STATE(309)] = 6898,
  [SMALL_STATE(310)] = 6912,
  [SMALL_STATE(311)] = 6926,
  [SMALL_STATE(312)] = 6940,
  [SMALL_STATE(313)] = 6954,
  [SMALL_STATE(314)] = 6968,
  [SMALL_STATE(315)] = 6982,
  [SMALL_STATE(316)] = 6996,
  [SMALL_STATE(317)] = 7010,
  [SMALL_STATE(318)] = 7024,
  [SMALL_STATE(319)] = 7038,
  [SMALL_STATE(320)] = 7052,
  [SMALL_STATE(321)] = 7066,
  [SMALL_STATE(322)] = 7080,
  [SMALL_STATE(323)] = 7094,
  [SMALL_STATE(324)] = 7108,
  [SMALL_STATE(325)] = 7122,
  [SMALL_STATE(326)] = 7136,
  [SMALL_STATE(327)] = 7150,
  [SMALL_STATE(328)] = 7164,
  [SMALL_STATE(329)] = 7178,
  [SMALL_STATE(330)] = 7187,
  [SMALL_STATE(331)] = 7196,
  [SMALL_STATE(332)] = 7207,
  [SMALL_STATE(333)] = 7216,
  [SMALL_STATE(334)] = 7227,
  [SMALL_STATE(335)] = 7236,
  [SMALL_STATE(336)] = 7247,
  [SMALL_STATE(337)] = 7258,
  [SMALL_STATE(338)] = 7269,
  [SMALL_STATE(339)] = 7280,
  [SMALL_STATE(340)] = 7291,
  [SMALL_STATE(341)] = 7302,
  [SMALL_STATE(342)] = 7311,
  [SMALL_STATE(343)] = 7320,
  [SMALL_STATE(344)] = 7331,
  [SMALL_STATE(345)] = 7342,
  [SMALL_STATE(346)] = 7351,
  [SMALL_STATE(347)] = 7362,
  [SMALL_STATE(348)] = 7373,
  [SMALL_STATE(349)] = 7382,
  [SMALL_STATE(350)] = 7393,
  [SMALL_STATE(351)] = 7404,
  [SMALL_STATE(352)] = 7415,
  [SMALL_STATE(353)] = 7426,
  [SMALL_STATE(354)] = 7437,
  [SMALL_STATE(355)] = 7448,
  [SMALL_STATE(356)] = 7459,
  [SMALL_STATE(357)] = 7470,
  [SMALL_STATE(358)] = 7479,
  [SMALL_STATE(359)] = 7490,
  [SMALL_STATE(360)] = 7501,
  [SMALL_STATE(361)] = 7510,
  [SMALL_STATE(362)] = 7521,
  [SMALL_STATE(363)] = 7532,
  [SMALL_STATE(364)] = 7541,
  [SMALL_STATE(365)] = 7552,
  [SMALL_STATE(366)] = 7563,
  [SMALL_STATE(367)] = 7572,
  [SMALL_STATE(368)] = 7583,
  [SMALL_STATE(369)] = 7592,
  [SMALL_STATE(370)] = 7603,
  [SMALL_STATE(371)] = 7614,
  [SMALL_STATE(372)] = 7623,
  [SMALL_STATE(373)] = 7632,
  [SMALL_STATE(374)] = 7641,
  [SMALL_STATE(375)] = 7652,
  [SMALL_STATE(376)] = 7661,
  [SMALL_STATE(377)] = 7670,
  [SMALL_STATE(378)] = 7681,
  [SMALL_STATE(379)] = 7690,
  [SMALL_STATE(380)] = 7699,
  [SMALL_STATE(381)] = 7708,
  [SMALL_STATE(382)] = 7717,
  [SMALL_STATE(383)] = 7728,
  [SMALL_STATE(384)] = 7736,
  [SMALL_STATE(385)] = 7744,
  [SMALL_STATE(386)] = 7752,
  [SMALL_STATE(387)] = 7760,
  [SMALL_STATE(388)] = 7768,
  [SMALL_STATE(389)] = 7776,
  [SMALL_STATE(390)] = 7784,
  [SMALL_STATE(391)] = 7792,
  [SMALL_STATE(392)] = 7800,
  [SMALL_STATE(393)] = 7808,
  [SMALL_STATE(394)] = 7816,
  [SMALL_STATE(395)] = 7824,
  [SMALL_STATE(396)] = 7832,
  [SMALL_STATE(397)] = 7840,
  [SMALL_STATE(398)] = 7848,
  [SMALL_STATE(399)] = 7856,
  [SMALL_STATE(400)] = 7864,
  [SMALL_STATE(401)] = 7872,
  [SMALL_STATE(402)] = 7880,
  [SMALL_STATE(403)] = 7888,
  [SMALL_STATE(404)] = 7896,
  [SMALL_STATE(405)] = 7904,
  [SMALL_STATE(406)] = 7912,
  [SMALL_STATE(407)] = 7920,
  [SMALL_STATE(408)] = 7928,
  [SMALL_STATE(409)] = 7936,
  [SMALL_STATE(410)] = 7944,
  [SMALL_STATE(411)] = 7952,
  [SMALL_STATE(412)] = 7960,
  [SMALL_STATE(413)] = 7968,
  [SMALL_STATE(414)] = 7976,
  [SMALL_STATE(415)] = 7984,
  [SMALL_STATE(416)] = 7992,
  [SMALL_STATE(417)] = 8000,
  [SMALL_STATE(418)] = 8008,
  [SMALL_STATE(419)] = 8016,
  [SMALL_STATE(420)] = 8024,
  [SMALL_STATE(421)] = 8032,
  [SMALL_STATE(422)] = 8040,
  [SMALL_STATE(423)] = 8048,
  [SMALL_STATE(424)] = 8056,
  [SMALL_STATE(425)] = 8064,
  [SMALL_STATE(426)] = 8072,
  [SMALL_STATE(427)] = 8080,
  [SMALL_STATE(428)] = 8088,
  [SMALL_STATE(429)] = 8096,
  [SMALL_STATE(430)] = 8104,
  [SMALL_STATE(431)] = 8112,
  [SMALL_STATE(432)] = 8120,
  [SMALL_STATE(433)] = 8128,
  [SMALL_STATE(434)] = 8136,
  [SMALL_STATE(435)] = 8144,
  [SMALL_STATE(436)] = 8152,
  [SMALL_STATE(437)] = 8160,
  [SMALL_STATE(438)] = 8168,
  [SMALL_STATE(439)] = 8176,
  [SMALL_STATE(440)] = 8184,
  [SMALL_STATE(441)] = 8192,
  [SMALL_STATE(442)] = 8200,
  [SMALL_STATE(443)] = 8208,
  [SMALL_STATE(444)] = 8216,
  [SMALL_STATE(445)] = 8224,
  [SMALL_STATE(446)] = 8232,
  [SMALL_STATE(447)] = 8240,
  [SMALL_STATE(448)] = 8248,
  [SMALL_STATE(449)] = 8256,
  [SMALL_STATE(450)] = 8264,
  [SMALL_STATE(451)] = 8272,
  [SMALL_STATE(452)] = 8280,
  [SMALL_STATE(453)] = 8288,
  [SMALL_STATE(454)] = 8296,
  [SMALL_STATE(455)] = 8304,
  [SMALL_STATE(456)] = 8312,
  [SMALL_STATE(457)] = 8320,
  [SMALL_STATE(458)] = 8328,
  [SMALL_STATE(459)] = 8336,
  [SMALL_STATE(460)] = 8344,
  [SMALL_STATE(461)] = 8352,
  [SMALL_STATE(462)] = 8360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 57),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 57),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 52),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 52),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 56),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 56),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 48),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 48),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 47),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 47),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 53),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 53),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 56),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 56),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 59),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 59),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 52),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 52),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 57),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 57),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 44),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 44),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 59),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 59),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(179),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(388),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(261),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(339),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(248),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 50),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(222),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(222),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(115),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(212),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(352),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(266),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(386),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(409),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 55),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 49),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 58),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 55),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 58),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 54),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1404] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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

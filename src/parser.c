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
#define STATE_COUNT 465
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
  anon_sym_RBRACK = 39,
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
  anon_sym_action = 60,
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
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 90,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 98,
  [101] = 101,
  [102] = 96,
  [103] = 93,
  [104] = 92,
  [105] = 95,
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
  [129] = 126,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 125,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 135,
  [140] = 140,
  [141] = 141,
  [142] = 137,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 43,
  [151] = 52,
  [152] = 152,
  [153] = 63,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 64,
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
  [203] = 172,
  [204] = 204,
  [205] = 192,
  [206] = 206,
  [207] = 207,
  [208] = 188,
  [209] = 191,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 201,
  [220] = 174,
  [221] = 221,
  [222] = 177,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 227,
  [232] = 226,
  [233] = 233,
  [234] = 198,
  [235] = 181,
  [236] = 236,
  [237] = 179,
  [238] = 238,
  [239] = 178,
  [240] = 217,
  [241] = 241,
  [242] = 228,
  [243] = 243,
  [244] = 184,
  [245] = 204,
  [246] = 246,
  [247] = 247,
  [248] = 194,
  [249] = 249,
  [250] = 250,
  [251] = 199,
  [252] = 252,
  [253] = 253,
  [254] = 183,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 175,
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
  [270] = 145,
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
  [293] = 143,
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
  [321] = 274,
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
  [340] = 327,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 338,
  [350] = 350,
  [351] = 337,
  [352] = 352,
  [353] = 336,
  [354] = 347,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 167,
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
  [374] = 339,
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
  [453] = 389,
  [454] = 454,
  [455] = 455,
  [456] = 448,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 427,
  [461] = 426,
  [462] = 462,
  [463] = 463,
  [464] = 418,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        '"', 375,
        '$', 380,
        '\'', 377,
        '(', 393,
        ')', 394,
        '+', 405,
        ',', 397,
        '-', 404,
        '.', 379,
        '/', 13,
        '0', 369,
        ':', 388,
        ';', 383,
        '<', 400,
        '=', 463,
        '>', 401,
        'C', 24,
        '[', 417,
        '\\', 3,
        ']', 418,
        '_', 410,
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
        '{', 389,
        '|', 414,
        '}', 390,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 375,
        '$', 380,
        '\'', 377,
        '(', 393,
        ')', 394,
        '+', 405,
        '-', 404,
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
        '"', 375,
        '$', 380,
        '\'', 377,
        '+', 405,
        '-', 404,
        '.', 198,
        '/', 13,
        '0', 367,
        'C', 206,
        '_', 411,
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
        '"', 375,
        '\'', 377,
        '+', 405,
        '-', 404,
        '.', 198,
        '/', 13,
        '0', 367,
        'C', 206,
        '_', 411,
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
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '_') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(375);
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
        '$', 380,
        ')', 394,
        ',', 397,
        '.', 379,
        '/', 13,
        ':', 388,
        ';', 383,
        '=', 23,
        '>', 401,
        ']', 418,
        '{', 389,
        '|', 414,
        '}', 390,
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
        '$', 380,
        '/', 13,
        '=', 23,
        '[', 417,
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
        '}', 390,
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
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(394);
      if (lookahead == ',') ADVANCE(397);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(383);
      if (lookahead == ']') ADVANCE(418);
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
      if (lookahead == '/') ADVANCE(428);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(429);
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
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '}') ADVANCE(390);
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
      if (lookahead == '}') ADVANCE(390);
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
      if (lookahead == '>') ADVANCE(392);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(412);
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
      if (lookahead == 's') ADVANCE(398);
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
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(415);
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
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(460);
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
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(381);
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
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(450);
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
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(425);
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
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(384);
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
      if (lookahead == 'r') ADVANCE(395);
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
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(440);
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
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(464);
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
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(423);
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
      if (lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 200:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        '$', 380,
        '+', 405,
        '-', 404,
        '.', 198,
        '/', 13,
        '0', 367,
        '=', 462,
        'm', 227,
        't', 228,
        'u', 323,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 't') ADVANCE(229);
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
      if (lookahead == '_') ADVANCE(413);
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
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(416);
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
      if (lookahead == 'e') ADVANCE(387);
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
      if (lookahead == 'f') ADVANCE(403);
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
      if (lookahead == 'g') ADVANCE(382);
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
      if (lookahead == 'm') ADVANCE(427);
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
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(459);
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
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(399);
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
      if (lookahead == 't') ADVANCE(447);
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
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(424);
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
      if (lookahead == 'y') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(409);
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
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'x') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(392);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 200},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
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
  [88] = {.lex_state = 200},
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
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 201},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 201},
  [114] = {.lex_state = 201},
  [115] = {.lex_state = 201},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 201},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 201},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 200},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 200},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 200},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 201},
  [151] = {.lex_state = 201},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 201},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 201},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 201},
  [169] = {.lex_state = 201},
  [170] = {.lex_state = 201},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 22},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 201},
  [181] = {.lex_state = 22},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 22},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 201},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 201},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 201},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 22},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 200},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 200},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 200},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 20},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 20},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 20},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 20},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 9},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 20},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 9},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 9},
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
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 200},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 9},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 10},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 9},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 20},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 9},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 9},
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
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 9},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 9},
  [464] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(455),
    [sym_type_name] = STATE(321),
    [sym_using] = STATE(88),
    [sym_translation_domain] = STATE(115),
    [sym_template] = STATE(113),
    [sym_object] = STATE(113),
    [sym_menu] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(88),
    [aux_sym_source_file_repeat2] = STATE(113),
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
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
    STATE(243), 1,
      sym_child_annotation,
    STATE(274), 1,
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
  [87] = 22,
    ACTIONS(53), 1,
      sym_ident,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
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
    STATE(243), 1,
      sym_child_annotation,
    STATE(274), 1,
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
  [174] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
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
    STATE(243), 1,
      sym_child_annotation,
    STATE(274), 1,
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
  [261] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
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
    STATE(243), 1,
      sym_child_annotation,
    STATE(274), 1,
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
  [348] = 22,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
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
    STATE(243), 1,
      sym_child_annotation,
    STATE(274), 1,
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
    STATE(321), 1,
      sym_type_name,
    STATE(409), 1,
      sym_flags,
    STATE(411), 1,
      sym_translated,
    STATE(413), 1,
      sym_literal,
    STATE(414), 1,
      sym_object,
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
    STATE(412), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(159), 6,
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
    STATE(377), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
    STATE(409), 1,
      sym_flags,
    STATE(411), 1,
      sym_translated,
    STATE(413), 1,
      sym_literal,
    STATE(454), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(159), 6,
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
    STATE(377), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
    STATE(263), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
    STATE(383), 1,
      sym_value,
    STATE(409), 1,
      sym_flags,
    STATE(411), 1,
      sym_translated,
    STATE(413), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(159), 6,
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
    STATE(377), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
    STATE(324), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
    STATE(423), 1,
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
    STATE(128), 2,
      sym_closure_expression,
      sym_literal,
    STATE(159), 6,
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
  [2631] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(402), 3,
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
  [2658] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 3,
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
  [2685] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 3,
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
  [2712] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 3,
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
  [2739] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 3,
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
  [2766] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 3,
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
  [2793] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(426), 3,
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
  [2820] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 3,
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
  [2847] = 12,
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
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_translation_domain,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(122), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2889] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
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
  [2918] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(444), 1,
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
  [2947] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(446), 1,
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
  [2976] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(448), 1,
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
  [3005] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(450), 1,
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
  [3034] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(452), 1,
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
  [3063] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(454), 1,
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
  [3092] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(456), 1,
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
  [3121] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(458), 1,
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
  [3150] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(460), 1,
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
  [3179] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(462), 1,
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
  [3208] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(464), 1,
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
  [3237] = 7,
    ACTIONS(466), 1,
      sym_ident,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(471), 1,
      anon_sym_section,
    ACTIONS(474), 1,
      anon_sym_submenu,
    ACTIONS(477), 1,
      anon_sym_item,
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
  [3266] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(480), 1,
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
  [3295] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(482), 1,
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
  [3324] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(484), 1,
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
  [3353] = 7,
    ACTIONS(434), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_section,
    ACTIONS(440), 1,
      anon_sym_submenu,
    ACTIONS(442), 1,
      anon_sym_item,
    ACTIONS(486), 1,
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
  [3382] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      sym__ext_combo_box_item,
    STATE(375), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3416] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym__ext_combo_box_item,
    STATE(375), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3450] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym__ext_combo_box_item,
    STATE(375), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3484] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    STATE(348), 1,
      sym__ext_combo_box_item,
    STATE(375), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3515] = 6,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(498), 1,
      anon_sym_section,
    ACTIONS(500), 1,
      anon_sym_submenu,
    ACTIONS(502), 1,
      anon_sym_item,
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
  [3540] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3569] = 6,
    ACTIONS(498), 1,
      anon_sym_section,
    ACTIONS(500), 1,
      anon_sym_submenu,
    ACTIONS(502), 1,
      anon_sym_item,
    ACTIONS(506), 1,
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
  [3594] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3623] = 8,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 1,
      sym_ident,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_template,
    ACTIONS(519), 1,
      anon_sym_menu,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3652] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(122), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3681] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(341), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3710] = 6,
    ACTIONS(498), 1,
      anon_sym_section,
    ACTIONS(500), 1,
      anon_sym_submenu,
    ACTIONS(502), 1,
      anon_sym_item,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(112), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3735] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(295), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3764] = 6,
    ACTIONS(498), 1,
      anon_sym_section,
    ACTIONS(500), 1,
      anon_sym_submenu,
    ACTIONS(502), 1,
      anon_sym_item,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(110), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3789] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3818] = 6,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_section,
    ACTIONS(541), 1,
      anon_sym_submenu,
    ACTIONS(544), 1,
      anon_sym_item,
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
  [3843] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(321), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3872] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(341), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3901] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(341), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3927] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3955] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3983] = 6,
    ACTIONS(553), 1,
      sym_ident,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(557), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4007] = 6,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_as,
    ACTIONS(561), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(132), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4031] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4059] = 6,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_as,
    ACTIONS(567), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(569), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(127), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4083] = 6,
    ACTIONS(571), 1,
      sym_ident,
    ACTIONS(573), 1,
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
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4107] = 6,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_as,
    ACTIONS(581), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(583), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(131), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
  [4131] = 5,
    ACTIONS(589), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(587), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4153] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4181] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(340), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4206] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(407), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4231] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(453), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4256] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(400), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4281] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(327), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4306] = 7,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    ACTIONS(596), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4331] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(350), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4356] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(389), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(176), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4381] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(600), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4397] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(604), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4413] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(608), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4429] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(610), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(612), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4444] = 5,
    ACTIONS(614), 1,
      sym_integer_literal,
    STATE(345), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(618), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4463] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(622), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4478] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(626), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4493] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4508] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4523] = 6,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(632), 1,
      anon_sym_COLON,
    ACTIONS(634), 1,
      anon_sym_COLON_COLON,
    ACTIONS(636), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4544] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4559] = 5,
    ACTIONS(638), 1,
      sym_ident,
    ACTIONS(640), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(642), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(419), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [4578] = 3,
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
  [4593] = 3,
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
  [4608] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 2,
      sym_ident,
      anon_sym_as,
    ACTIONS(654), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4623] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4638] = 3,
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
  [4653] = 3,
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
  [4668] = 6,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    STATE(267), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4689] = 3,
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
  [4704] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4724] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4744] = 4,
    ACTIONS(676), 1,
      sym_ident,
    STATE(165), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4760] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4772] = 3,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4786] = 3,
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
  [4800] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(693), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4814] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(697), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4828] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4848] = 3,
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
  [4862] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4882] = 3,
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
  [4896] = 3,
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
  [4910] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4922] = 3,
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
  [4936] = 3,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(721), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4950] = 3,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4964] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(731), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4978] = 3,
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
  [4992] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(737), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5004] = 3,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5018] = 3,
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
  [5032] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5052] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5072] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5092] = 3,
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
  [5106] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5126] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(761), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5140] = 3,
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
  [5154] = 3,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(767), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5168] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(773), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5182] = 3,
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
  [5196] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(781), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5210] = 5,
    ACTIONS(783), 1,
      sym_ident,
    ACTIONS(785), 1,
      sym_integer_literal,
    STATE(357), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(787), 2,
      sym_hex_literal,
      sym_float_literal,
  [5228] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5248] = 3,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5262] = 3,
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
  [5276] = 3,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5290] = 5,
    ACTIONS(799), 1,
      sym_escape_sequence,
    ACTIONS(801), 1,
      anon_sym_SQUOTE,
    ACTIONS(803), 1,
      aux_sym_quoted_token2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5307] = 4,
    ACTIONS(807), 1,
      sym_ident,
    STATE(206), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5322] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5333] = 4,
    ACTIONS(811), 1,
      sym_ident,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5348] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(769), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5359] = 4,
    ACTIONS(807), 1,
      sym_ident,
    STATE(165), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(815), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5374] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      sym__ext_file_filter_item,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5391] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(755), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5402] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5413] = 4,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(819), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5428] = 4,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5443] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5460] = 4,
    ACTIONS(827), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5475] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(829), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5486] = 4,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    STATE(256), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(833), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5501] = 4,
    ACTIONS(835), 1,
      sym_integer_literal,
    STATE(447), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(837), 2,
      sym_hex_literal,
      sym_float_literal,
  [5516] = 5,
    ACTIONS(839), 1,
      sym_escape_sequence,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym_quoted_token1,
    STATE(226), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5533] = 4,
    ACTIONS(845), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(847), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5548] = 5,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(849), 1,
      sym_escape_sequence,
    ACTIONS(851), 1,
      aux_sym_quoted_token2,
    STATE(227), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5565] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5576] = 4,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(855), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5591] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5602] = 4,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5617] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(859), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5628] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5645] = 5,
    ACTIONS(863), 1,
      sym_escape_sequence,
    ACTIONS(865), 1,
      anon_sym_DQUOTE,
    ACTIONS(867), 1,
      aux_sym_quoted_token1,
    STATE(260), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5662] = 5,
    ACTIONS(865), 1,
      anon_sym_SQUOTE,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      aux_sym_quoted_token2,
    STATE(257), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5679] = 4,
    ACTIONS(811), 1,
      sym_ident,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(245), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5694] = 4,
    ACTIONS(875), 1,
      sym_integer_literal,
    STATE(332), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(877), 2,
      sym_hex_literal,
      sym_float_literal,
  [5709] = 4,
    ACTIONS(879), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5724] = 5,
    ACTIONS(869), 1,
      sym_escape_sequence,
    ACTIONS(871), 1,
      aux_sym_quoted_token2,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5741] = 5,
    ACTIONS(863), 1,
      sym_escape_sequence,
    ACTIONS(867), 1,
      aux_sym_quoted_token1,
    ACTIONS(881), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5758] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5775] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5786] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5797] = 4,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5812] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(727), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5823] = 4,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(889), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5838] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(723), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5849] = 5,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(891), 1,
      sym_escape_sequence,
    ACTIONS(893), 1,
      aux_sym_quoted_token1,
    STATE(232), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [5866] = 4,
    ACTIONS(895), 1,
      sym_integer_literal,
    STATE(160), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(897), 2,
      sym_hex_literal,
      sym_float_literal,
  [5881] = 4,
    ACTIONS(811), 1,
      sym_ident,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(204), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5896] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(74), 1,
      sym_object,
    STATE(274), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5913] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5924] = 4,
    ACTIONS(811), 1,
      sym_ident,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5939] = 4,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5954] = 4,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5969] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5980] = 4,
    ACTIONS(909), 1,
      sym_ident,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(249), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5995] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(914), 4,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6006] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6017] = 4,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(918), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6032] = 4,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(922), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6047] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6058] = 4,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(927), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6073] = 4,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6088] = 5,
    ACTIONS(931), 1,
      sym_escape_sequence,
    ACTIONS(934), 1,
      anon_sym_SQUOTE,
    ACTIONS(936), 1,
      aux_sym_quoted_token2,
    STATE(257), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [6105] = 4,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(941), 2,
      anon_sym_after,
      anon_sym_swapped,
  [6120] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(713), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [6131] = 5,
    ACTIONS(943), 1,
      sym_escape_sequence,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(948), 1,
      aux_sym_quoted_token1,
    STATE(260), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(805), 2,
      sym_line_comment,
      sym_block_comment,
  [6148] = 4,
    ACTIONS(951), 1,
      sym_ident,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6162] = 4,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6176] = 4,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6190] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(386), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6204] = 4,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6218] = 4,
    ACTIONS(969), 1,
      sym_ident,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6232] = 4,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    ACTIONS(975), 1,
      anon_sym_PIPE,
    STATE(294), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6246] = 4,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    STATE(267), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6260] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(379), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6274] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6284] = 4,
    ACTIONS(807), 1,
      sym_ident,
    ACTIONS(977), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6298] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6312] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6326] = 4,
    ACTIONS(984), 1,
      sym_ident,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6340] = 4,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6354] = 4,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6368] = 4,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6382] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6396] = 4,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6410] = 4,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6424] = 4,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6438] = 4,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6452] = 4,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6466] = 4,
    ACTIONS(1021), 1,
      sym_ident,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6480] = 4,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6494] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(363), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6508] = 4,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6522] = 4,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    ACTIONS(1033), 1,
      anon_sym_mark,
    STATE(344), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6536] = 4,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6550] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6564] = 4,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6578] = 4,
    ACTIONS(1021), 1,
      sym_ident,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6592] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6602] = 4,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(1052), 1,
      anon_sym_PIPE,
    STATE(294), 1,
      aux_sym_flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6616] = 4,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6630] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(361), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6644] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6658] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6672] = 4,
    ACTIONS(1033), 1,
      anon_sym_mark,
    ACTIONS(1046), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6686] = 4,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6700] = 4,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6714] = 4,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6728] = 4,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6742] = 4,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6756] = 4,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6770] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(449), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6784] = 4,
    ACTIONS(951), 1,
      sym_ident,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6798] = 4,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6812] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6826] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(397), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6840] = 4,
    ACTIONS(1102), 1,
      anon_sym_COLON,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6854] = 4,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6868] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(445), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6882] = 4,
    ACTIONS(969), 1,
      sym_ident,
    ACTIONS(1110), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6896] = 4,
    ACTIONS(1033), 1,
      anon_sym_mark,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6910] = 4,
    ACTIONS(1114), 1,
      sym_ident,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6924] = 4,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6938] = 4,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6952] = 4,
    ACTIONS(951), 1,
      sym_ident,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6966] = 4,
    ACTIONS(1125), 1,
      sym_ident,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6980] = 4,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    ACTIONS(1130), 1,
      sym_ident,
    STATE(150), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6994] = 4,
    ACTIONS(1021), 1,
      sym_ident,
    ACTIONS(1132), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7008] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(311), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7022] = 4,
    ACTIONS(807), 1,
      sym_ident,
    ACTIONS(1134), 1,
      anon_sym_SEMI,
    STATE(271), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7036] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(451), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7050] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(901), 1,
      sym_ident,
    STATE(385), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7064] = 3,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7075] = 3,
    ACTIONS(1140), 1,
      sym_ident,
    ACTIONS(1142), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7086] = 3,
    ACTIONS(1144), 1,
      sym_ident,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7097] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1148), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7106] = 3,
    ACTIONS(951), 1,
      sym_ident,
    STATE(352), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7117] = 3,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7128] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7137] = 3,
    ACTIONS(1033), 1,
      anon_sym_mark,
    STATE(344), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7148] = 3,
    ACTIONS(1156), 1,
      sym_ident,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7159] = 3,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7170] = 3,
    ACTIONS(1164), 1,
      sym_ident,
    ACTIONS(1166), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7181] = 3,
    ACTIONS(1168), 1,
      sym_ident,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7192] = 3,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7203] = 3,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7214] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7223] = 3,
    ACTIONS(1021), 1,
      sym_ident,
    STATE(343), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7234] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7243] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1038), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7252] = 3,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7263] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7272] = 3,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7283] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7292] = 3,
    ACTIONS(1190), 1,
      sym_ident,
    ACTIONS(1192), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7303] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7312] = 3,
    ACTIONS(1196), 1,
      sym_ident,
    ACTIONS(1198), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7323] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7332] = 3,
    ACTIONS(1200), 1,
      anon_sym_LBRACE,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7343] = 3,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7354] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1204), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [7363] = 3,
    ACTIONS(1206), 1,
      sym_ident,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7374] = 3,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    ACTIONS(1212), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7385] = 3,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
    ACTIONS(1216), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7396] = 3,
    ACTIONS(1218), 1,
      sym_ident,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7407] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7416] = 3,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7427] = 3,
    ACTIONS(1222), 1,
      sym_ident,
    ACTIONS(1224), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7438] = 3,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7449] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7458] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7467] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7476] = 3,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7487] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1236), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [7496] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1238), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7505] = 3,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7525] = 3,
    ACTIONS(1246), 1,
      sym_ident,
    ACTIONS(1248), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7536] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1050), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7545] = 3,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7556] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7565] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7574] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1093), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7583] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7592] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1260), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7601] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7610] = 3,
    ACTIONS(1264), 1,
      sym_ident,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7621] = 2,
    ACTIONS(1268), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7629] = 2,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7637] = 2,
    ACTIONS(1272), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7645] = 2,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7653] = 2,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7661] = 2,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7669] = 2,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7677] = 2,
    ACTIONS(1282), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7685] = 2,
    ACTIONS(1284), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7693] = 2,
    ACTIONS(1286), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7701] = 2,
    ACTIONS(1288), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7709] = 2,
    ACTIONS(1246), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7717] = 2,
    ACTIONS(1290), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7725] = 2,
    ACTIONS(1292), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7733] = 2,
    ACTIONS(1294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7741] = 2,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7749] = 2,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7757] = 2,
    ACTIONS(1300), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7765] = 2,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7773] = 2,
    ACTIONS(1304), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7781] = 2,
    ACTIONS(1306), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7789] = 2,
    ACTIONS(1308), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7797] = 2,
    ACTIONS(1310), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7805] = 2,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7813] = 2,
    ACTIONS(1314), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7821] = 2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7829] = 2,
    ACTIONS(1318), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7837] = 2,
    ACTIONS(1320), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7845] = 2,
    ACTIONS(1322), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7853] = 2,
    ACTIONS(1320), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7861] = 2,
    ACTIONS(1324), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7869] = 2,
    ACTIONS(1320), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7877] = 2,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7885] = 2,
    ACTIONS(1328), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7893] = 2,
    ACTIONS(1330), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7901] = 2,
    ACTIONS(1332), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7909] = 2,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7917] = 2,
    ACTIONS(1336), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7925] = 2,
    ACTIONS(1338), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7933] = 2,
    ACTIONS(1340), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7941] = 2,
    ACTIONS(1342), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7949] = 2,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7957] = 2,
    ACTIONS(1346), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7965] = 2,
    ACTIONS(1348), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7973] = 2,
    ACTIONS(1350), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7981] = 2,
    ACTIONS(1352), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7989] = 2,
    ACTIONS(1354), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7997] = 2,
    ACTIONS(1356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8005] = 2,
    ACTIONS(1358), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8013] = 2,
    ACTIONS(1360), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8021] = 2,
    ACTIONS(1362), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8029] = 2,
    ACTIONS(1364), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8037] = 2,
    ACTIONS(1366), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8045] = 2,
    ACTIONS(1368), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8053] = 2,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8061] = 2,
    ACTIONS(1372), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8069] = 2,
    ACTIONS(1374), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8077] = 2,
    ACTIONS(1376), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8085] = 2,
    ACTIONS(1378), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8093] = 2,
    ACTIONS(1380), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8101] = 2,
    ACTIONS(1382), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8109] = 2,
    ACTIONS(1384), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8117] = 2,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8125] = 2,
    ACTIONS(1388), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8133] = 2,
    ACTIONS(1390), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8141] = 2,
    ACTIONS(1392), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8149] = 2,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8157] = 2,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8165] = 2,
    ACTIONS(1398), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8173] = 2,
    ACTIONS(1400), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8181] = 2,
    ACTIONS(1402), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8189] = 2,
    ACTIONS(1404), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8197] = 2,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8205] = 2,
    ACTIONS(1408), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8213] = 2,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8221] = 2,
    ACTIONS(1412), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8229] = 2,
    ACTIONS(1414), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8237] = 2,
    ACTIONS(1416), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8245] = 2,
    ACTIONS(1418), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8253] = 2,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8261] = 2,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8269] = 2,
    ACTIONS(1424), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8277] = 2,
    ACTIONS(1426), 1,
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
  [SMALL_STATE(81)] = 2658,
  [SMALL_STATE(82)] = 2685,
  [SMALL_STATE(83)] = 2712,
  [SMALL_STATE(84)] = 2739,
  [SMALL_STATE(85)] = 2766,
  [SMALL_STATE(86)] = 2793,
  [SMALL_STATE(87)] = 2820,
  [SMALL_STATE(88)] = 2847,
  [SMALL_STATE(89)] = 2889,
  [SMALL_STATE(90)] = 2918,
  [SMALL_STATE(91)] = 2947,
  [SMALL_STATE(92)] = 2976,
  [SMALL_STATE(93)] = 3005,
  [SMALL_STATE(94)] = 3034,
  [SMALL_STATE(95)] = 3063,
  [SMALL_STATE(96)] = 3092,
  [SMALL_STATE(97)] = 3121,
  [SMALL_STATE(98)] = 3150,
  [SMALL_STATE(99)] = 3179,
  [SMALL_STATE(100)] = 3208,
  [SMALL_STATE(101)] = 3237,
  [SMALL_STATE(102)] = 3266,
  [SMALL_STATE(103)] = 3295,
  [SMALL_STATE(104)] = 3324,
  [SMALL_STATE(105)] = 3353,
  [SMALL_STATE(106)] = 3382,
  [SMALL_STATE(107)] = 3416,
  [SMALL_STATE(108)] = 3450,
  [SMALL_STATE(109)] = 3484,
  [SMALL_STATE(110)] = 3515,
  [SMALL_STATE(111)] = 3540,
  [SMALL_STATE(112)] = 3569,
  [SMALL_STATE(113)] = 3594,
  [SMALL_STATE(114)] = 3623,
  [SMALL_STATE(115)] = 3652,
  [SMALL_STATE(116)] = 3681,
  [SMALL_STATE(117)] = 3710,
  [SMALL_STATE(118)] = 3735,
  [SMALL_STATE(119)] = 3764,
  [SMALL_STATE(120)] = 3789,
  [SMALL_STATE(121)] = 3818,
  [SMALL_STATE(122)] = 3843,
  [SMALL_STATE(123)] = 3872,
  [SMALL_STATE(124)] = 3901,
  [SMALL_STATE(125)] = 3927,
  [SMALL_STATE(126)] = 3955,
  [SMALL_STATE(127)] = 3983,
  [SMALL_STATE(128)] = 4007,
  [SMALL_STATE(129)] = 4031,
  [SMALL_STATE(130)] = 4059,
  [SMALL_STATE(131)] = 4083,
  [SMALL_STATE(132)] = 4107,
  [SMALL_STATE(133)] = 4131,
  [SMALL_STATE(134)] = 4153,
  [SMALL_STATE(135)] = 4181,
  [SMALL_STATE(136)] = 4206,
  [SMALL_STATE(137)] = 4231,
  [SMALL_STATE(138)] = 4256,
  [SMALL_STATE(139)] = 4281,
  [SMALL_STATE(140)] = 4306,
  [SMALL_STATE(141)] = 4331,
  [SMALL_STATE(142)] = 4356,
  [SMALL_STATE(143)] = 4381,
  [SMALL_STATE(144)] = 4397,
  [SMALL_STATE(145)] = 4413,
  [SMALL_STATE(146)] = 4429,
  [SMALL_STATE(147)] = 4444,
  [SMALL_STATE(148)] = 4463,
  [SMALL_STATE(149)] = 4478,
  [SMALL_STATE(150)] = 4493,
  [SMALL_STATE(151)] = 4508,
  [SMALL_STATE(152)] = 4523,
  [SMALL_STATE(153)] = 4544,
  [SMALL_STATE(154)] = 4559,
  [SMALL_STATE(155)] = 4578,
  [SMALL_STATE(156)] = 4593,
  [SMALL_STATE(157)] = 4608,
  [SMALL_STATE(158)] = 4623,
  [SMALL_STATE(159)] = 4638,
  [SMALL_STATE(160)] = 4653,
  [SMALL_STATE(161)] = 4668,
  [SMALL_STATE(162)] = 4689,
  [SMALL_STATE(163)] = 4704,
  [SMALL_STATE(164)] = 4724,
  [SMALL_STATE(165)] = 4744,
  [SMALL_STATE(166)] = 4760,
  [SMALL_STATE(167)] = 4772,
  [SMALL_STATE(168)] = 4786,
  [SMALL_STATE(169)] = 4800,
  [SMALL_STATE(170)] = 4814,
  [SMALL_STATE(171)] = 4828,
  [SMALL_STATE(172)] = 4848,
  [SMALL_STATE(173)] = 4862,
  [SMALL_STATE(174)] = 4882,
  [SMALL_STATE(175)] = 4896,
  [SMALL_STATE(176)] = 4910,
  [SMALL_STATE(177)] = 4922,
  [SMALL_STATE(178)] = 4936,
  [SMALL_STATE(179)] = 4950,
  [SMALL_STATE(180)] = 4964,
  [SMALL_STATE(181)] = 4978,
  [SMALL_STATE(182)] = 4992,
  [SMALL_STATE(183)] = 5004,
  [SMALL_STATE(184)] = 5018,
  [SMALL_STATE(185)] = 5032,
  [SMALL_STATE(186)] = 5052,
  [SMALL_STATE(187)] = 5072,
  [SMALL_STATE(188)] = 5092,
  [SMALL_STATE(189)] = 5106,
  [SMALL_STATE(190)] = 5126,
  [SMALL_STATE(191)] = 5140,
  [SMALL_STATE(192)] = 5154,
  [SMALL_STATE(193)] = 5168,
  [SMALL_STATE(194)] = 5182,
  [SMALL_STATE(195)] = 5196,
  [SMALL_STATE(196)] = 5210,
  [SMALL_STATE(197)] = 5228,
  [SMALL_STATE(198)] = 5248,
  [SMALL_STATE(199)] = 5262,
  [SMALL_STATE(200)] = 5276,
  [SMALL_STATE(201)] = 5290,
  [SMALL_STATE(202)] = 5307,
  [SMALL_STATE(203)] = 5322,
  [SMALL_STATE(204)] = 5333,
  [SMALL_STATE(205)] = 5348,
  [SMALL_STATE(206)] = 5359,
  [SMALL_STATE(207)] = 5374,
  [SMALL_STATE(208)] = 5391,
  [SMALL_STATE(209)] = 5402,
  [SMALL_STATE(210)] = 5413,
  [SMALL_STATE(211)] = 5428,
  [SMALL_STATE(212)] = 5443,
  [SMALL_STATE(213)] = 5460,
  [SMALL_STATE(214)] = 5475,
  [SMALL_STATE(215)] = 5486,
  [SMALL_STATE(216)] = 5501,
  [SMALL_STATE(217)] = 5516,
  [SMALL_STATE(218)] = 5533,
  [SMALL_STATE(219)] = 5548,
  [SMALL_STATE(220)] = 5565,
  [SMALL_STATE(221)] = 5576,
  [SMALL_STATE(222)] = 5591,
  [SMALL_STATE(223)] = 5602,
  [SMALL_STATE(224)] = 5617,
  [SMALL_STATE(225)] = 5628,
  [SMALL_STATE(226)] = 5645,
  [SMALL_STATE(227)] = 5662,
  [SMALL_STATE(228)] = 5679,
  [SMALL_STATE(229)] = 5694,
  [SMALL_STATE(230)] = 5709,
  [SMALL_STATE(231)] = 5724,
  [SMALL_STATE(232)] = 5741,
  [SMALL_STATE(233)] = 5758,
  [SMALL_STATE(234)] = 5775,
  [SMALL_STATE(235)] = 5786,
  [SMALL_STATE(236)] = 5797,
  [SMALL_STATE(237)] = 5812,
  [SMALL_STATE(238)] = 5823,
  [SMALL_STATE(239)] = 5838,
  [SMALL_STATE(240)] = 5849,
  [SMALL_STATE(241)] = 5866,
  [SMALL_STATE(242)] = 5881,
  [SMALL_STATE(243)] = 5896,
  [SMALL_STATE(244)] = 5913,
  [SMALL_STATE(245)] = 5924,
  [SMALL_STATE(246)] = 5939,
  [SMALL_STATE(247)] = 5954,
  [SMALL_STATE(248)] = 5969,
  [SMALL_STATE(249)] = 5980,
  [SMALL_STATE(250)] = 5995,
  [SMALL_STATE(251)] = 6006,
  [SMALL_STATE(252)] = 6017,
  [SMALL_STATE(253)] = 6032,
  [SMALL_STATE(254)] = 6047,
  [SMALL_STATE(255)] = 6058,
  [SMALL_STATE(256)] = 6073,
  [SMALL_STATE(257)] = 6088,
  [SMALL_STATE(258)] = 6105,
  [SMALL_STATE(259)] = 6120,
  [SMALL_STATE(260)] = 6131,
  [SMALL_STATE(261)] = 6148,
  [SMALL_STATE(262)] = 6162,
  [SMALL_STATE(263)] = 6176,
  [SMALL_STATE(264)] = 6190,
  [SMALL_STATE(265)] = 6204,
  [SMALL_STATE(266)] = 6218,
  [SMALL_STATE(267)] = 6232,
  [SMALL_STATE(268)] = 6246,
  [SMALL_STATE(269)] = 6260,
  [SMALL_STATE(270)] = 6274,
  [SMALL_STATE(271)] = 6284,
  [SMALL_STATE(272)] = 6298,
  [SMALL_STATE(273)] = 6312,
  [SMALL_STATE(274)] = 6326,
  [SMALL_STATE(275)] = 6340,
  [SMALL_STATE(276)] = 6354,
  [SMALL_STATE(277)] = 6368,
  [SMALL_STATE(278)] = 6382,
  [SMALL_STATE(279)] = 6396,
  [SMALL_STATE(280)] = 6410,
  [SMALL_STATE(281)] = 6424,
  [SMALL_STATE(282)] = 6438,
  [SMALL_STATE(283)] = 6452,
  [SMALL_STATE(284)] = 6466,
  [SMALL_STATE(285)] = 6480,
  [SMALL_STATE(286)] = 6494,
  [SMALL_STATE(287)] = 6508,
  [SMALL_STATE(288)] = 6522,
  [SMALL_STATE(289)] = 6536,
  [SMALL_STATE(290)] = 6550,
  [SMALL_STATE(291)] = 6564,
  [SMALL_STATE(292)] = 6578,
  [SMALL_STATE(293)] = 6592,
  [SMALL_STATE(294)] = 6602,
  [SMALL_STATE(295)] = 6616,
  [SMALL_STATE(296)] = 6630,
  [SMALL_STATE(297)] = 6644,
  [SMALL_STATE(298)] = 6658,
  [SMALL_STATE(299)] = 6672,
  [SMALL_STATE(300)] = 6686,
  [SMALL_STATE(301)] = 6700,
  [SMALL_STATE(302)] = 6714,
  [SMALL_STATE(303)] = 6728,
  [SMALL_STATE(304)] = 6742,
  [SMALL_STATE(305)] = 6756,
  [SMALL_STATE(306)] = 6770,
  [SMALL_STATE(307)] = 6784,
  [SMALL_STATE(308)] = 6798,
  [SMALL_STATE(309)] = 6812,
  [SMALL_STATE(310)] = 6826,
  [SMALL_STATE(311)] = 6840,
  [SMALL_STATE(312)] = 6854,
  [SMALL_STATE(313)] = 6868,
  [SMALL_STATE(314)] = 6882,
  [SMALL_STATE(315)] = 6896,
  [SMALL_STATE(316)] = 6910,
  [SMALL_STATE(317)] = 6924,
  [SMALL_STATE(318)] = 6938,
  [SMALL_STATE(319)] = 6952,
  [SMALL_STATE(320)] = 6966,
  [SMALL_STATE(321)] = 6980,
  [SMALL_STATE(322)] = 6994,
  [SMALL_STATE(323)] = 7008,
  [SMALL_STATE(324)] = 7022,
  [SMALL_STATE(325)] = 7036,
  [SMALL_STATE(326)] = 7050,
  [SMALL_STATE(327)] = 7064,
  [SMALL_STATE(328)] = 7075,
  [SMALL_STATE(329)] = 7086,
  [SMALL_STATE(330)] = 7097,
  [SMALL_STATE(331)] = 7106,
  [SMALL_STATE(332)] = 7117,
  [SMALL_STATE(333)] = 7128,
  [SMALL_STATE(334)] = 7137,
  [SMALL_STATE(335)] = 7148,
  [SMALL_STATE(336)] = 7159,
  [SMALL_STATE(337)] = 7170,
  [SMALL_STATE(338)] = 7181,
  [SMALL_STATE(339)] = 7192,
  [SMALL_STATE(340)] = 7203,
  [SMALL_STATE(341)] = 7214,
  [SMALL_STATE(342)] = 7223,
  [SMALL_STATE(343)] = 7234,
  [SMALL_STATE(344)] = 7243,
  [SMALL_STATE(345)] = 7252,
  [SMALL_STATE(346)] = 7263,
  [SMALL_STATE(347)] = 7272,
  [SMALL_STATE(348)] = 7283,
  [SMALL_STATE(349)] = 7292,
  [SMALL_STATE(350)] = 7303,
  [SMALL_STATE(351)] = 7312,
  [SMALL_STATE(352)] = 7323,
  [SMALL_STATE(353)] = 7332,
  [SMALL_STATE(354)] = 7343,
  [SMALL_STATE(355)] = 7354,
  [SMALL_STATE(356)] = 7363,
  [SMALL_STATE(357)] = 7374,
  [SMALL_STATE(358)] = 7385,
  [SMALL_STATE(359)] = 7396,
  [SMALL_STATE(360)] = 7407,
  [SMALL_STATE(361)] = 7416,
  [SMALL_STATE(362)] = 7427,
  [SMALL_STATE(363)] = 7438,
  [SMALL_STATE(364)] = 7449,
  [SMALL_STATE(365)] = 7458,
  [SMALL_STATE(366)] = 7467,
  [SMALL_STATE(367)] = 7476,
  [SMALL_STATE(368)] = 7487,
  [SMALL_STATE(369)] = 7496,
  [SMALL_STATE(370)] = 7505,
  [SMALL_STATE(371)] = 7516,
  [SMALL_STATE(372)] = 7525,
  [SMALL_STATE(373)] = 7536,
  [SMALL_STATE(374)] = 7545,
  [SMALL_STATE(375)] = 7556,
  [SMALL_STATE(376)] = 7565,
  [SMALL_STATE(377)] = 7574,
  [SMALL_STATE(378)] = 7583,
  [SMALL_STATE(379)] = 7592,
  [SMALL_STATE(380)] = 7601,
  [SMALL_STATE(381)] = 7610,
  [SMALL_STATE(382)] = 7621,
  [SMALL_STATE(383)] = 7629,
  [SMALL_STATE(384)] = 7637,
  [SMALL_STATE(385)] = 7645,
  [SMALL_STATE(386)] = 7653,
  [SMALL_STATE(387)] = 7661,
  [SMALL_STATE(388)] = 7669,
  [SMALL_STATE(389)] = 7677,
  [SMALL_STATE(390)] = 7685,
  [SMALL_STATE(391)] = 7693,
  [SMALL_STATE(392)] = 7701,
  [SMALL_STATE(393)] = 7709,
  [SMALL_STATE(394)] = 7717,
  [SMALL_STATE(395)] = 7725,
  [SMALL_STATE(396)] = 7733,
  [SMALL_STATE(397)] = 7741,
  [SMALL_STATE(398)] = 7749,
  [SMALL_STATE(399)] = 7757,
  [SMALL_STATE(400)] = 7765,
  [SMALL_STATE(401)] = 7773,
  [SMALL_STATE(402)] = 7781,
  [SMALL_STATE(403)] = 7789,
  [SMALL_STATE(404)] = 7797,
  [SMALL_STATE(405)] = 7805,
  [SMALL_STATE(406)] = 7813,
  [SMALL_STATE(407)] = 7821,
  [SMALL_STATE(408)] = 7829,
  [SMALL_STATE(409)] = 7837,
  [SMALL_STATE(410)] = 7845,
  [SMALL_STATE(411)] = 7853,
  [SMALL_STATE(412)] = 7861,
  [SMALL_STATE(413)] = 7869,
  [SMALL_STATE(414)] = 7877,
  [SMALL_STATE(415)] = 7885,
  [SMALL_STATE(416)] = 7893,
  [SMALL_STATE(417)] = 7901,
  [SMALL_STATE(418)] = 7909,
  [SMALL_STATE(419)] = 7917,
  [SMALL_STATE(420)] = 7925,
  [SMALL_STATE(421)] = 7933,
  [SMALL_STATE(422)] = 7941,
  [SMALL_STATE(423)] = 7949,
  [SMALL_STATE(424)] = 7957,
  [SMALL_STATE(425)] = 7965,
  [SMALL_STATE(426)] = 7973,
  [SMALL_STATE(427)] = 7981,
  [SMALL_STATE(428)] = 7989,
  [SMALL_STATE(429)] = 7997,
  [SMALL_STATE(430)] = 8005,
  [SMALL_STATE(431)] = 8013,
  [SMALL_STATE(432)] = 8021,
  [SMALL_STATE(433)] = 8029,
  [SMALL_STATE(434)] = 8037,
  [SMALL_STATE(435)] = 8045,
  [SMALL_STATE(436)] = 8053,
  [SMALL_STATE(437)] = 8061,
  [SMALL_STATE(438)] = 8069,
  [SMALL_STATE(439)] = 8077,
  [SMALL_STATE(440)] = 8085,
  [SMALL_STATE(441)] = 8093,
  [SMALL_STATE(442)] = 8101,
  [SMALL_STATE(443)] = 8109,
  [SMALL_STATE(444)] = 8117,
  [SMALL_STATE(445)] = 8125,
  [SMALL_STATE(446)] = 8133,
  [SMALL_STATE(447)] = 8141,
  [SMALL_STATE(448)] = 8149,
  [SMALL_STATE(449)] = 8157,
  [SMALL_STATE(450)] = 8165,
  [SMALL_STATE(451)] = 8173,
  [SMALL_STATE(452)] = 8181,
  [SMALL_STATE(453)] = 8189,
  [SMALL_STATE(454)] = 8197,
  [SMALL_STATE(455)] = 8205,
  [SMALL_STATE(456)] = 8213,
  [SMALL_STATE(457)] = 8221,
  [SMALL_STATE(458)] = 8229,
  [SMALL_STATE(459)] = 8237,
  [SMALL_STATE(460)] = 8245,
  [SMALL_STATE(461)] = 8253,
  [SMALL_STATE(462)] = 8261,
  [SMALL_STATE(463)] = 8269,
  [SMALL_STATE(464)] = 8277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 35),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, 0, 32),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 56),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 56),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 52),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 52),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 40),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 57),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 57),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, 0, 53),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, 0, 53),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, 0, 35),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, 0, 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 56),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 56),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, 0, 25),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 59),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 59),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 38),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, 0, 57),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, 0, 57),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, 0, 38),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, 0, 59),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, 0, 59),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, 0, 24),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, 0, 24),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 35),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, 0, 23),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, 0, 19),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, 0, 23),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 35),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, 0, 40),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, 0, 23),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 32),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, 0, 35),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, 0, 22),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, 0, 20),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 47),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 47),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 44),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 44),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 48),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 48),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, 0, 48),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, 0, 48),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 16),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 16),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 53),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 53),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, 0, 35),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 52),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 52),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, 0, 47),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, 0, 47),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, 0, 25),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6, 0, 44),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6, 0, 44),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, 0, 17),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, 0, 17),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, 0, 23),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, 0, 23),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, 0, 23),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, 0, 22),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(335),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, 0, 8),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, 0, 8),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, 0, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, 0, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, 0, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_literal, 2, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, 0, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43), SHIFT_REPEAT(250),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 43),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, 0, 16),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, 0, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 6),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 6),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, 0, 15),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, 0, 51),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, 0, 42),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, 0, 42),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, 0, 15),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, 0, 9),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 9),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 9),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, 0, 9),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, 0, 9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, 0, 50),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, 0, 9),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, 0, 9),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 9),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, 0, 10),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, 0, 10),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, 0, 9),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, 0, 9),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, 0, 30),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, 0, 45),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, 0, 4),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 1, 0, 26),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(257),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2, 0, 0), SHIFT_REPEAT(257),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39), SHIFT_REPEAT(342),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 39),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 2, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 27),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33), SHIFT_REPEAT(109),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 33),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36), SHIFT_REPEAT(207),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 36),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41), SHIFT_REPEAT(269),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 41),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21), SHIFT_REPEAT(396),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, 0, 21),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18), SHIFT_REPEAT(398),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, 0, 18),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, 0, 16),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, 0, 46),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, 0, 37),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, 0, 34),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, 0, 31),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, 0, 30),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 11),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 29),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, 0, 28),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, 0, 58),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, 0, 49),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, 0, 55),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, 0, 54),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, 0, 55),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 3, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, 0, 12),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, 0, 58),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, 0, 14),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, 0, 2),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, 0, 13),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, 0, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 29),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, 0, 28),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
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

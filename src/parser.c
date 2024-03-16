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
#define STATE_COUNT 447
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  anon_sym_inverted = 36,
  anon_sym_bidirectional = 37,
  anon_sym_no_DASHsync_DASHcreate = 38,
  anon_sym_sync_DASHcreate = 39,
  anon_sym__ = 40,
  anon_sym_C_ = 41,
  anon_sym_PIPE = 42,
  anon_sym_LBRACK = 43,
  anon_sym_internal_DASHchild = 44,
  anon_sym_RBRACK = 45,
  anon_sym_menu = 46,
  anon_sym_section = 47,
  anon_sym_submenu = 48,
  anon_sym_item = 49,
  sym_line_comment = 50,
  sym_block_comment = 51,
  anon_sym_accessibility = 52,
  anon_sym_responses = 53,
  anon_sym_condition = 54,
  anon_sym_setters = 55,
  anon_sym_items = 56,
  anon_sym_mime_DASHtypes = 57,
  anon_sym_patterns = 58,
  anon_sym_suffixes = 59,
  anon_sym_layout = 60,
  anon_sym_marks = 61,
  anon_sym_mark = 62,
  anon_sym_widgets = 63,
  anon_sym_strings = 64,
  anon_sym_styles = 65,
  anon_sym_action = 66,
  anon_sym_response = 67,
  anon_sym_EQ = 68,
  anon_sym_default = 69,
  sym_source_file = 70,
  sym__number = 71,
  sym_quoted = 72,
  sym_type_name = 73,
  sym_using = 74,
  sym_translation_domain = 75,
  sym_template = 76,
  sym_object = 77,
  sym_object_content = 78,
  sym_signal = 79,
  sym_property = 80,
  sym_closure_expression = 81,
  sym_lookup_expression = 82,
  sym_cast_expression = 83,
  sym_literal = 84,
  sym__type_literal = 85,
  sym__quoted_literal = 86,
  sym__number_literal = 87,
  sym__ident_literal = 88,
  sym__expression = 89,
  sym_binding = 90,
  sym_object_value = 91,
  sym_value = 92,
  sym_translated = 93,
  sym__flags = 94,
  sym__child = 95,
  sym_menu = 96,
  sym__menu_child = 97,
  sym_menu_section = 98,
  sym_menu_submenu = 99,
  sym_menu_item = 100,
  sym_menu_attribute = 101,
  sym_string_value = 102,
  sym_menu_item_shorthand = 103,
  sym__extension = 104,
  sym_ext_accessibility = 105,
  sym_ext_adw_dialog = 106,
  sym_ext_adw_dialog_response = 107,
  sym_ext_adw_breakpoint_condition = 108,
  sym_ext_adw_breakpoint = 109,
  sym_ext_combo_box_items = 110,
  sym__ext_combo_box_item = 111,
  sym_ext_file_filter_mime_types = 112,
  sym_ext_file_filter_patterns = 113,
  sym_ext_file_filter_suffixes = 114,
  sym__ext_file_filter_item = 115,
  sym_ext_layout = 116,
  sym_ext_list_item_factory = 117,
  sym_ext_scale_marks = 118,
  sym_ext_scale_mark = 119,
  sym_ext_size_group_widgets = 120,
  sym__ext_size_group_widget = 121,
  sym_ext_string_list_strings = 122,
  sym__ext_strings_list_item = 123,
  sym_ext_styles = 124,
  sym_child_extension = 125,
  sym_ext_response = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_source_file_repeat2 = 128,
  aux_sym_quoted_repeat1 = 129,
  aux_sym_quoted_repeat2 = 130,
  aux_sym_object_content_repeat1 = 131,
  aux_sym_signal_repeat1 = 132,
  aux_sym_closure_expression_repeat1 = 133,
  aux_sym__expression_repeat1 = 134,
  aux_sym_binding_repeat1 = 135,
  aux_sym__flags_repeat1 = 136,
  aux_sym_menu_repeat1 = 137,
  aux_sym_menu_section_repeat1 = 138,
  aux_sym_menu_item_repeat1 = 139,
  aux_sym_ext_accessibility_repeat1 = 140,
  aux_sym_ext_adw_dialog_repeat1 = 141,
  aux_sym_ext_adw_dialog_response_repeat1 = 142,
  aux_sym_ext_adw_breakpoint_repeat1 = 143,
  aux_sym_ext_combo_box_items_repeat1 = 144,
  aux_sym_ext_file_filter_mime_types_repeat1 = 145,
  aux_sym_ext_scale_marks_repeat1 = 146,
  aux_sym_ext_size_group_widgets_repeat1 = 147,
  aux_sym_ext_string_list_strings_repeat1 = 148,
  aux_sym_ext_styles_repeat1 = 149,
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
  [anon_sym_inverted] = "inverted",
  [anon_sym_bidirectional] = "bidirectional",
  [anon_sym_no_DASHsync_DASHcreate] = "no-sync-create",
  [anon_sym_sync_DASHcreate] = "sync-create",
  [anon_sym__] = "_",
  [anon_sym_C_] = "C_",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_internal_DASHchild] = "internal-child",
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
  [sym__flags] = "_flags",
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
  [sym_child_extension] = "child_extension",
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
  [aux_sym__flags_repeat1] = "_flags_repeat1",
  [aux_sym_menu_repeat1] = "menu_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym_menu_item_repeat1] = "menu_item_repeat1",
  [aux_sym_ext_accessibility_repeat1] = "ext_accessibility_repeat1",
  [aux_sym_ext_adw_dialog_repeat1] = "ext_adw_dialog_repeat1",
  [aux_sym_ext_adw_dialog_response_repeat1] = "ext_adw_dialog_response_repeat1",
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
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_bidirectional] = anon_sym_bidirectional,
  [anon_sym_no_DASHsync_DASHcreate] = anon_sym_no_DASHsync_DASHcreate,
  [anon_sym_sync_DASHcreate] = anon_sym_sync_DASHcreate,
  [anon_sym__] = anon_sym__,
  [anon_sym_C_] = anon_sym_C_,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_internal_DASHchild] = anon_sym_internal_DASHchild,
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
  [sym__flags] = sym__flags,
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
  [sym_child_extension] = sym_child_extension,
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
  [aux_sym__flags_repeat1] = aux_sym__flags_repeat1,
  [aux_sym_menu_repeat1] = aux_sym_menu_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym_menu_item_repeat1] = aux_sym_menu_item_repeat1,
  [aux_sym_ext_accessibility_repeat1] = aux_sym_ext_accessibility_repeat1,
  [aux_sym_ext_adw_dialog_repeat1] = aux_sym_ext_adw_dialog_repeat1,
  [aux_sym_ext_adw_dialog_response_repeat1] = aux_sym_ext_adw_dialog_response_repeat1,
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
  [anon_sym_inverted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bidirectional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsync_DASHcreate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sync_DASHcreate] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal_DASHchild] = {
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
  [sym__flags] = {
    .visible = false,
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
  [sym_child_extension] = {
    .visible = true,
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
  [aux_sym__flags_repeat1] = {
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
  [aux_sym_ext_adw_dialog_response_repeat1] = {
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
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 4},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 36, .length = 1},
  [23] = {.index = 37, .length = 3},
  [24] = {.index = 40, .length = 6},
  [25] = {.index = 46, .length = 2},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 1},
  [28] = {.index = 50, .length = 1},
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 1},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 4},
  [34] = {.index = 61, .length = 4},
  [35] = {.index = 65, .length = 1},
  [36] = {.index = 66, .length = 2},
  [37] = {.index = 68, .length = 2},
  [38] = {.index = 70, .length = 1},
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
    {field_child_type, 0, .inherited = true},
  [13] =
    {field_namespace, 1},
    {field_version, 2},
  [15] =
    {field_id, 1},
  [16] =
    {field_child_type, 1, .inherited = true},
  [17] =
    {field_child_type, 0, .inherited = true},
    {field_child_type, 1, .inherited = true},
  [19] =
    {field_content, 4},
    {field_name, 1},
    {field_subclass, 2},
    {field_subclass, 3},
  [23] =
    {field_value, 0},
  [24] =
    {field_item, 0},
  [25] =
    {field_id, 0},
  [26] =
    {field_label, 2},
  [27] =
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_child_type, 1},
  [30] =
    {field_name, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [32] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [36] =
    {field_condition, 2},
  [37] =
    {field_object, 2, .inherited = true},
    {field_property, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [40] =
    {field_object, 0, .inherited = true},
    {field_object, 1, .inherited = true},
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [46] =
    {field_id, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [48] =
    {field_item, 2, .inherited = true},
  [49] =
    {field_id, 2, .inherited = true},
  [50] =
    {field_name, 2},
  [51] =
    {field_name, 3},
  [52] =
    {field_id, 3},
  [53] =
    {field_id, 0},
    {field_value, 2},
  [55] =
    {field_id, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [57] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [61] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [65] =
    {field_item, 1, .inherited = true},
  [66] =
    {field_item, 2, .inherited = true},
    {field_item, 3, .inherited = true},
  [68] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [70] =
    {field_id, 1, .inherited = true},
  [71] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
  [73] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
  [75] =
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [77] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [79] =
    {field_action, 4},
    {field_label, 2},
  [81] =
    {field_flags, 3},
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
  [4] = 4,
  [5] = 3,
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
  [89] = 85,
  [90] = 90,
  [91] = 91,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 93,
  [98] = 91,
  [99] = 99,
  [100] = 100,
  [101] = 94,
  [102] = 102,
  [103] = 100,
  [104] = 104,
  [105] = 102,
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
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 137,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 145,
  [147] = 144,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 59,
  [152] = 58,
  [153] = 153,
  [154] = 154,
  [155] = 60,
  [156] = 57,
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
  [198] = 184,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 187,
  [204] = 204,
  [205] = 189,
  [206] = 206,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 162,
  [211] = 211,
  [212] = 212,
  [213] = 160,
  [214] = 173,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 171,
  [220] = 220,
  [221] = 175,
  [222] = 181,
  [223] = 223,
  [224] = 165,
  [225] = 177,
  [226] = 226,
  [227] = 186,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 163,
  [236] = 236,
  [237] = 164,
  [238] = 238,
  [239] = 230,
  [240] = 161,
  [241] = 241,
  [242] = 242,
  [243] = 199,
  [244] = 244,
  [245] = 245,
  [246] = 241,
  [247] = 238,
  [248] = 248,
  [249] = 249,
  [250] = 245,
  [251] = 251,
  [252] = 123,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 125,
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
  [310] = 259,
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
  [325] = 324,
  [326] = 322,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 329,
  [333] = 333,
  [334] = 334,
  [335] = 190,
  [336] = 336,
  [337] = 337,
  [338] = 321,
  [339] = 319,
  [340] = 340,
  [341] = 318,
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
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 428,
  [436] = 436,
  [437] = 437,
  [438] = 397,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 378,
  [443] = 375,
  [444] = 444,
  [445] = 445,
  [446] = 422,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(420);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(405);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == ';') ADVANCE(425);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(431);
      if (lookahead == '|') ADVANCE(459);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(420);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(412);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(412);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == ';') ADVANCE(425);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '{') ADVANCE(431);
      if (lookahead == '|') ADVANCE(459);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(473);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(434);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(457);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(443);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(423);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(495);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(449);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(410);
      END_STATE();
    case 236:
      if (eof) ADVANCE(239);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == ',') ADVANCE(439);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(405);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == ';') ADVANCE(425);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(431);
      if (lookahead == '|') ADVANCE(459);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 237:
      if (eof) ADVANCE(239);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == ']') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'x') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'x') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(473);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(473);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(417);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(434);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 237},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
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
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 237},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 238},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 238},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 238},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 237},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 237},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 238},
  [153] = {.lex_state = 237},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 238},
  [156] = {.lex_state = 238},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 23},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 238},
  [168] = {.lex_state = 238},
  [169] = {.lex_state = 238},
  [170] = {.lex_state = 238},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 237},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 237},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 237},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 237},
  [179] = {.lex_state = 237},
  [180] = {.lex_state = 237},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 237},
  [183] = {.lex_state = 237},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 237},
  [189] = {.lex_state = 23},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 238},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 238},
  [197] = {.lex_state = 238},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 237},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 237},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 237},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 237},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 237},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 237},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 237},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 237},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
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
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 21},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 237},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 237},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 237},
  [298] = {.lex_state = 237},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 21},
  [304] = {.lex_state = 237},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 9},
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
  [363] = {.lex_state = 9},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 237},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 9},
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
  [390] = {.lex_state = 10},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
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
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 9},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 9},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 9},
  [430] = {.lex_state = 9},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 9},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 0},
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
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
    [anon_sym_sync_DASHcreate] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_C_] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_internal_DASHchild] = ACTIONS(1),
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
    [sym_source_file] = STATE(433),
    [sym_type_name] = STATE(310),
    [sym_using] = STATE(83),
    [sym_translation_domain] = STATE(111),
    [sym_template] = STATE(118),
    [sym_object] = STATE(118),
    [sym_menu] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(83),
    [aux_sym_source_file_repeat2] = STATE(118),
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
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_object,
      sym__child,
    STATE(2), 18,
      sym_signal,
      sym_property,
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
  [86] = 22,
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
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_object,
      sym__child,
    STATE(2), 18,
      sym_signal,
      sym_property,
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
  [172] = 22,
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
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_object,
      sym__child,
    STATE(3), 18,
      sym_signal,
      sym_property,
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
  [258] = 22,
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
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_object,
      sym__child,
    STATE(2), 18,
      sym_signal,
      sym_property,
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
  [344] = 22,
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
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_object,
      sym__child,
    STATE(5), 18,
      sym_signal,
      sym_property,
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
  [430] = 19,
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
    STATE(310), 1,
      sym_type_name,
    STATE(409), 1,
      sym__flags,
    STATE(411), 1,
      sym_translated,
    STATE(418), 1,
      sym_literal,
    STATE(424), 1,
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
    STATE(413), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [499] = 15,
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
    ACTIONS(132), 1,
      sym_ident,
    STATE(394), 1,
      sym_value,
    STATE(409), 1,
      sym__flags,
    STATE(411), 1,
      sym_translated,
    STATE(418), 1,
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
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [553] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [603] = 15,
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
    ACTIONS(132), 1,
      sym_ident,
    STATE(379), 1,
      sym_value,
    STATE(409), 1,
      sym__flags,
    STATE(411), 1,
      sym_translated,
    STATE(418), 1,
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
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [657] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [707] = 13,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [757] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [804] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(417), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [851] = 12,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_typeof,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
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
    STATE(88), 2,
      sym_closure_expression,
      sym_literal,
    STATE(133), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [898] = 3,
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
  [925] = 3,
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
  [952] = 3,
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
  [979] = 3,
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
  [1006] = 3,
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
  [1033] = 3,
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
  [1060] = 3,
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
  [1087] = 3,
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
  [1114] = 3,
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
  [1141] = 3,
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
  [1168] = 3,
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
  [1195] = 3,
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
  [1222] = 3,
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
  [1249] = 3,
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
  [1276] = 3,
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
  [1303] = 3,
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
  [1330] = 3,
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
  [1357] = 3,
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
  [1384] = 3,
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
  [1411] = 3,
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
  [1438] = 3,
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
  [1465] = 3,
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
  [1492] = 3,
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
  [1519] = 3,
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
  [1546] = 3,
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
  [1573] = 3,
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
  [1600] = 3,
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
  [1627] = 3,
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
  [1654] = 3,
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
  [1681] = 3,
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
  [1708] = 3,
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
  [1735] = 3,
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
  [1762] = 3,
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
  [1789] = 3,
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
  [1816] = 3,
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
  [1843] = 3,
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
  [1870] = 3,
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
  [1897] = 3,
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
  [1924] = 3,
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
  [1951] = 3,
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
  [1978] = 3,
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
  [2005] = 3,
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
  [2032] = 3,
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
  [2059] = 3,
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
  [2086] = 3,
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
  [2113] = 3,
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
  [2140] = 3,
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
  [2167] = 3,
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
  [2194] = 3,
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
  [2221] = 3,
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
  [2248] = 3,
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
  [2275] = 3,
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
  [2302] = 3,
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
  [2329] = 3,
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
  [2356] = 3,
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
  [2383] = 3,
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
  [2410] = 3,
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
  [2437] = 3,
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
  [2464] = 3,
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
  [2491] = 3,
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
  [2518] = 3,
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
  [2545] = 3,
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
  [2572] = 3,
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
  [2599] = 3,
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
  [2626] = 3,
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
  [2653] = 3,
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
  [2680] = 3,
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
  [2707] = 12,
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
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_translation_domain,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(131), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2749] = 7,
    ACTIONS(414), 1,
      sym_ident,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(425), 1,
      anon_sym_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2778] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
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
  [2807] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2836] = 5,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(442), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2861] = 5,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(99), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(446), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2886] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(448), 1,
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
  [2915] = 5,
    ACTIONS(450), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(453), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2940] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(458), 1,
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
  [2969] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2998] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3027] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3056] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(466), 1,
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
  [3085] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(468), 1,
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
  [3114] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(470), 1,
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
  [3143] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(472), 1,
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
  [3172] = 5,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(474), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3197] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3226] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3255] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3284] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3313] = 5,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(87), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(484), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3338] = 7,
    ACTIONS(428), 1,
      sym_ident,
    ACTIONS(432), 1,
      anon_sym_section,
    ACTIONS(434), 1,
      anon_sym_submenu,
    ACTIONS(436), 1,
      anon_sym_item,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3367] = 10,
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
    STATE(353), 1,
      sym__ext_combo_box_item,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3401] = 10,
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
    STATE(273), 1,
      sym__ext_combo_box_item,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3435] = 10,
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
    STATE(353), 1,
      sym__ext_combo_box_item,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3469] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3498] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(345), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3527] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3556] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(124), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3585] = 6,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 1,
      anon_sym_section,
    ACTIONS(509), 1,
      anon_sym_submenu,
    ACTIONS(512), 1,
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
  [3610] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(345), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3639] = 8,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(519), 1,
      sym_ident,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_template,
    ACTIONS(528), 1,
      anon_sym_menu,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3668] = 6,
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
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3693] = 6,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
      anon_sym_item,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(116), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3718] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3747] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(274), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3776] = 9,
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
    STATE(353), 1,
      sym__ext_combo_box_item,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3807] = 6,
    ACTIONS(533), 1,
      anon_sym_section,
    ACTIONS(535), 1,
      anon_sym_submenu,
    ACTIONS(537), 1,
      anon_sym_item,
    ACTIONS(543), 1,
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
  [3832] = 6,
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
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3857] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 10,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
      anon_sym_RBRACK,
  [3874] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3903] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 10,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
      anon_sym_RBRACK,
  [3920] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3948] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(555), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3964] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3992] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(559), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4008] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(561), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4024] = 5,
    ACTIONS(567), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(131), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(565), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4046] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(570), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4062] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(572), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4078] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4094] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(345), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4120] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(576), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4136] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4164] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(580), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4180] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4196] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4224] = 7,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4249] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(405), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4274] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(350), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4299] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(428), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4324] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(324), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4349] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(325), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4374] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(435), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4399] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(500), 1,
      anon_sym_C_,
    STATE(389), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4424] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(592), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4440] = 6,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(600), 1,
      anon_sym_COLON_COLON,
    ACTIONS(602), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4461] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(318), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4476] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4491] = 5,
    ACTIONS(604), 1,
      sym_integer_literal,
    STATE(358), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(608), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4510] = 6,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(307), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4531] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4546] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4561] = 4,
    ACTIONS(614), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4578] = 4,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4595] = 4,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(625), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4612] = 3,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(627), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4626] = 3,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4640] = 3,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4654] = 3,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(639), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4668] = 3,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4682] = 3,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(647), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4696] = 3,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4710] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(653), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4724] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(657), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4738] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(661), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4752] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(665), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4766] = 3,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(667), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4780] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4800] = 3,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(673), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4814] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      sym__ext_file_filter_item,
    STATE(355), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4834] = 3,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4848] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4868] = 3,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4882] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4902] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym__ext_file_filter_item,
    STATE(355), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4922] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4942] = 3,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(695), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4956] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4976] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      sym__ext_file_filter_item,
    STATE(355), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4996] = 3,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5010] = 6,
    ACTIONS(707), 1,
      sym_ident,
    ACTIONS(709), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(711), 1,
      anon_sym_action,
    STATE(376), 1,
      sym_child_extension,
    STATE(382), 1,
      sym_ext_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5030] = 3,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(713), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5044] = 3,
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
  [5058] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5078] = 3,
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
  [5092] = 3,
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
  [5106] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(733), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5120] = 5,
    ACTIONS(735), 1,
      sym_ident,
    ACTIONS(737), 1,
      sym_integer_literal,
    STATE(343), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 2,
      sym_hex_literal,
      sym_float_literal,
  [5138] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5150] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5162] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5174] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(749), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5188] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(753), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [5202] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5213] = 4,
    ACTIONS(757), 1,
      anon_sym_SQUOTE2,
    STATE(234), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
  [5228] = 4,
    ACTIONS(761), 1,
      sym_ident,
    STATE(220), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5243] = 4,
    ACTIONS(765), 1,
      sym_ident,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5258] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(37), 1,
      sym_object,
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5275] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5286] = 4,
    ACTIONS(771), 1,
      sym_integer_literal,
    STATE(136), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 2,
      sym_hex_literal,
      sym_float_literal,
  [5301] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5312] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(21), 1,
      sym_object,
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5329] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(355), 1,
      sym_quoted,
    STATE(357), 1,
      sym__ext_file_filter_item,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5346] = 4,
    ACTIONS(765), 1,
      sym_ident,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5361] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5378] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(637), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5389] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5406] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5417] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(629), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5428] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(675), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5439] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(20), 1,
      sym_object,
    STATE(259), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5456] = 4,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(785), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5471] = 4,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5486] = 4,
    ACTIONS(791), 1,
      sym_ident,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5501] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5512] = 4,
    ACTIONS(796), 1,
      sym_ident,
    STATE(220), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5527] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5538] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5549] = 4,
    ACTIONS(801), 1,
      sym_integer_literal,
    STATE(330), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(803), 2,
      sym_hex_literal,
      sym_float_literal,
  [5564] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(649), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5575] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5586] = 4,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(807), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5601] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5612] = 4,
    ACTIONS(809), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5627] = 4,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(813), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5642] = 4,
    ACTIONS(765), 1,
      sym_ident,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5657] = 4,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(820), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5672] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5689] = 4,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5704] = 4,
    ACTIONS(829), 1,
      anon_sym_SQUOTE2,
    STATE(234), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5719] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(641), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5730] = 4,
    ACTIONS(831), 1,
      sym_integer_literal,
    STATE(412), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(833), 2,
      sym_hex_literal,
      sym_float_literal,
  [5745] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5756] = 4,
    ACTIONS(837), 1,
      anon_sym_DQUOTE2,
    STATE(250), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5771] = 4,
    ACTIONS(765), 1,
      sym_ident,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(208), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5786] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(633), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5797] = 4,
    ACTIONS(837), 1,
      anon_sym_SQUOTE2,
    STATE(199), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(841), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5812] = 4,
    ACTIONS(846), 1,
      anon_sym_DQUOTE2,
    STATE(242), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(843), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5827] = 4,
    ACTIONS(848), 1,
      anon_sym_SQUOTE2,
    STATE(234), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
  [5842] = 4,
    ACTIONS(850), 1,
      sym_ident,
    STATE(200), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5857] = 4,
    ACTIONS(848), 1,
      anon_sym_DQUOTE2,
    STATE(242), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5872] = 4,
    ACTIONS(858), 1,
      anon_sym_SQUOTE2,
    STATE(243), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5887] = 4,
    ACTIONS(858), 1,
      anon_sym_DQUOTE2,
    STATE(245), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5902] = 4,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5917] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(864), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5928] = 4,
    ACTIONS(757), 1,
      anon_sym_DQUOTE2,
    STATE(242), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(759), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5943] = 4,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5958] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5968] = 4,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    ACTIONS(872), 1,
      anon_sym_mark,
    STATE(352), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5982] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(351), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5996] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(364), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6010] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6020] = 4,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(307), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6034] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(407), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6048] = 4,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6062] = 4,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6076] = 4,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    ACTIONS(884), 1,
      anon_sym_PIPE,
    STATE(261), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6090] = 4,
    ACTIONS(887), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6104] = 4,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6118] = 4,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6132] = 4,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6146] = 4,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6160] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6174] = 4,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6188] = 4,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6202] = 4,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6216] = 4,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6230] = 4,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6244] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6258] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6272] = 4,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6286] = 4,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6300] = 4,
    ACTIONS(949), 1,
      sym_ident,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6314] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6328] = 4,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6342] = 4,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6356] = 4,
    ACTIONS(963), 1,
      sym_ident,
    ACTIONS(965), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6370] = 4,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6384] = 4,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6398] = 4,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6412] = 4,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6426] = 4,
    ACTIONS(872), 1,
      anon_sym_mark,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6440] = 4,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6454] = 4,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6468] = 4,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6482] = 4,
    ACTIONS(963), 1,
      sym_ident,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6496] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(427), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6510] = 4,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6524] = 4,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6538] = 4,
    ACTIONS(887), 1,
      sym_ident,
    ACTIONS(1003), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6552] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(426), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6566] = 4,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6580] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6594] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(383), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6608] = 4,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6622] = 4,
    ACTIONS(949), 1,
      sym_ident,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6636] = 4,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6650] = 4,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6664] = 4,
    ACTIONS(872), 1,
      anon_sym_mark,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6678] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(365), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6692] = 4,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6706] = 4,
    ACTIONS(963), 1,
      sym_ident,
    ACTIONS(1029), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6720] = 4,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(1033), 1,
      anon_sym_PIPE,
    STATE(261), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6734] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(421), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6748] = 4,
    ACTIONS(1035), 1,
      sym_ident,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6762] = 4,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    ACTIONS(1040), 1,
      sym_ident,
    STATE(155), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6776] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(387), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6790] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 1,
      sym_ident,
    STATE(264), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6804] = 4,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6818] = 4,
    ACTIONS(1046), 1,
      sym_ident,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6832] = 4,
    ACTIONS(887), 1,
      sym_ident,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6846] = 3,
    ACTIONS(887), 1,
      sym_ident,
    STATE(347), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6857] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1051), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6866] = 3,
    ACTIONS(1053), 1,
      anon_sym_LBRACE,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6877] = 3,
    ACTIONS(1057), 1,
      sym_ident,
    ACTIONS(1059), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6888] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1061), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6897] = 3,
    ACTIONS(1063), 1,
      sym_ident,
    ACTIONS(1065), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6908] = 3,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6919] = 3,
    ACTIONS(1071), 1,
      sym_ident,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6930] = 3,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6941] = 3,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6952] = 3,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6963] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(882), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6972] = 3,
    ACTIONS(1087), 1,
      sym_ident,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6983] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6994] = 3,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7005] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1095), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7014] = 3,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7025] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7034] = 3,
    ACTIONS(872), 1,
      anon_sym_mark,
    STATE(352), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7045] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7054] = 3,
    ACTIONS(963), 1,
      sym_ident,
    STATE(349), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7065] = 3,
    ACTIONS(1099), 1,
      sym_ident,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7076] = 3,
    ACTIONS(1103), 1,
      sym_ident,
    ACTIONS(1105), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7087] = 3,
    ACTIONS(1107), 1,
      sym_ident,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7098] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7107] = 3,
    ACTIONS(1113), 1,
      anon_sym_LBRACE,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7118] = 3,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    ACTIONS(1119), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7129] = 3,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    ACTIONS(1123), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7149] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7158] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7167] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7176] = 3,
    ACTIONS(1129), 1,
      sym_ident,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7187] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7196] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7205] = 3,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7216] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7225] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7234] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7243] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7252] = 3,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7263] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7272] = 3,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7283] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(925), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7292] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7301] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7310] = 3,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7321] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1161), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7330] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7341] = 2,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7349] = 2,
    ACTIONS(1165), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7357] = 2,
    ACTIONS(1167), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7365] = 2,
    ACTIONS(1169), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7373] = 2,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7381] = 2,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7389] = 2,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7397] = 2,
    ACTIONS(1177), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7405] = 2,
    ACTIONS(1179), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7413] = 2,
    ACTIONS(1181), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7421] = 2,
    ACTIONS(1183), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7429] = 2,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7437] = 2,
    ACTIONS(1187), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7445] = 2,
    ACTIONS(1189), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7453] = 2,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7461] = 2,
    ACTIONS(1193), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7469] = 2,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7477] = 2,
    ACTIONS(1197), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7485] = 2,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7493] = 2,
    ACTIONS(1201), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7501] = 2,
    ACTIONS(1203), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7509] = 2,
    ACTIONS(1205), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7517] = 2,
    ACTIONS(1207), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7525] = 2,
    ACTIONS(1209), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7533] = 2,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7541] = 2,
    ACTIONS(1213), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7549] = 2,
    ACTIONS(1215), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7557] = 2,
    ACTIONS(1217), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7565] = 2,
    ACTIONS(1219), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7573] = 2,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7581] = 2,
    ACTIONS(1223), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7589] = 2,
    ACTIONS(1225), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7597] = 2,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7605] = 2,
    ACTIONS(1229), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7613] = 2,
    ACTIONS(1231), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7621] = 2,
    ACTIONS(1233), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7629] = 2,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7637] = 2,
    ACTIONS(1237), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7645] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7653] = 2,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7661] = 2,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7669] = 2,
    ACTIONS(1245), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7677] = 2,
    ACTIONS(1247), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7685] = 2,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7693] = 2,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7701] = 2,
    ACTIONS(1253), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7709] = 2,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7717] = 2,
    ACTIONS(1255), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7725] = 2,
    ACTIONS(1257), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7733] = 2,
    ACTIONS(1259), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7741] = 2,
    ACTIONS(1261), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7749] = 2,
    ACTIONS(1263), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7757] = 2,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7765] = 2,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7773] = 2,
    ACTIONS(1267), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7781] = 2,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7789] = 2,
    ACTIONS(1271), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7797] = 2,
    ACTIONS(1273), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7805] = 2,
    ACTIONS(1275), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7813] = 2,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7821] = 2,
    ACTIONS(1279), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7829] = 2,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7837] = 2,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7845] = 2,
    ACTIONS(1285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7853] = 2,
    ACTIONS(1287), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7861] = 2,
    ACTIONS(1087), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7869] = 2,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7877] = 2,
    ACTIONS(1291), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7885] = 2,
    ACTIONS(1293), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7893] = 2,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7901] = 2,
    ACTIONS(1297), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7909] = 2,
    ACTIONS(1299), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7917] = 2,
    ACTIONS(1301), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7925] = 2,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7933] = 2,
    ACTIONS(1305), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7941] = 2,
    ACTIONS(1307), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7949] = 2,
    ACTIONS(1309), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7957] = 2,
    ACTIONS(1311), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7965] = 2,
    ACTIONS(1313), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7973] = 2,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7981] = 2,
    ACTIONS(1317), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7989] = 2,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 499,
  [SMALL_STATE(9)] = 553,
  [SMALL_STATE(10)] = 603,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 757,
  [SMALL_STATE(14)] = 804,
  [SMALL_STATE(15)] = 851,
  [SMALL_STATE(16)] = 898,
  [SMALL_STATE(17)] = 925,
  [SMALL_STATE(18)] = 952,
  [SMALL_STATE(19)] = 979,
  [SMALL_STATE(20)] = 1006,
  [SMALL_STATE(21)] = 1033,
  [SMALL_STATE(22)] = 1060,
  [SMALL_STATE(23)] = 1087,
  [SMALL_STATE(24)] = 1114,
  [SMALL_STATE(25)] = 1141,
  [SMALL_STATE(26)] = 1168,
  [SMALL_STATE(27)] = 1195,
  [SMALL_STATE(28)] = 1222,
  [SMALL_STATE(29)] = 1249,
  [SMALL_STATE(30)] = 1276,
  [SMALL_STATE(31)] = 1303,
  [SMALL_STATE(32)] = 1330,
  [SMALL_STATE(33)] = 1357,
  [SMALL_STATE(34)] = 1384,
  [SMALL_STATE(35)] = 1411,
  [SMALL_STATE(36)] = 1438,
  [SMALL_STATE(37)] = 1465,
  [SMALL_STATE(38)] = 1492,
  [SMALL_STATE(39)] = 1519,
  [SMALL_STATE(40)] = 1546,
  [SMALL_STATE(41)] = 1573,
  [SMALL_STATE(42)] = 1600,
  [SMALL_STATE(43)] = 1627,
  [SMALL_STATE(44)] = 1654,
  [SMALL_STATE(45)] = 1681,
  [SMALL_STATE(46)] = 1708,
  [SMALL_STATE(47)] = 1735,
  [SMALL_STATE(48)] = 1762,
  [SMALL_STATE(49)] = 1789,
  [SMALL_STATE(50)] = 1816,
  [SMALL_STATE(51)] = 1843,
  [SMALL_STATE(52)] = 1870,
  [SMALL_STATE(53)] = 1897,
  [SMALL_STATE(54)] = 1924,
  [SMALL_STATE(55)] = 1951,
  [SMALL_STATE(56)] = 1978,
  [SMALL_STATE(57)] = 2005,
  [SMALL_STATE(58)] = 2032,
  [SMALL_STATE(59)] = 2059,
  [SMALL_STATE(60)] = 2086,
  [SMALL_STATE(61)] = 2113,
  [SMALL_STATE(62)] = 2140,
  [SMALL_STATE(63)] = 2167,
  [SMALL_STATE(64)] = 2194,
  [SMALL_STATE(65)] = 2221,
  [SMALL_STATE(66)] = 2248,
  [SMALL_STATE(67)] = 2275,
  [SMALL_STATE(68)] = 2302,
  [SMALL_STATE(69)] = 2329,
  [SMALL_STATE(70)] = 2356,
  [SMALL_STATE(71)] = 2383,
  [SMALL_STATE(72)] = 2410,
  [SMALL_STATE(73)] = 2437,
  [SMALL_STATE(74)] = 2464,
  [SMALL_STATE(75)] = 2491,
  [SMALL_STATE(76)] = 2518,
  [SMALL_STATE(77)] = 2545,
  [SMALL_STATE(78)] = 2572,
  [SMALL_STATE(79)] = 2599,
  [SMALL_STATE(80)] = 2626,
  [SMALL_STATE(81)] = 2653,
  [SMALL_STATE(82)] = 2680,
  [SMALL_STATE(83)] = 2707,
  [SMALL_STATE(84)] = 2749,
  [SMALL_STATE(85)] = 2778,
  [SMALL_STATE(86)] = 2807,
  [SMALL_STATE(87)] = 2836,
  [SMALL_STATE(88)] = 2861,
  [SMALL_STATE(89)] = 2886,
  [SMALL_STATE(90)] = 2915,
  [SMALL_STATE(91)] = 2940,
  [SMALL_STATE(92)] = 2969,
  [SMALL_STATE(93)] = 2998,
  [SMALL_STATE(94)] = 3027,
  [SMALL_STATE(95)] = 3056,
  [SMALL_STATE(96)] = 3085,
  [SMALL_STATE(97)] = 3114,
  [SMALL_STATE(98)] = 3143,
  [SMALL_STATE(99)] = 3172,
  [SMALL_STATE(100)] = 3197,
  [SMALL_STATE(101)] = 3226,
  [SMALL_STATE(102)] = 3255,
  [SMALL_STATE(103)] = 3284,
  [SMALL_STATE(104)] = 3313,
  [SMALL_STATE(105)] = 3338,
  [SMALL_STATE(106)] = 3367,
  [SMALL_STATE(107)] = 3401,
  [SMALL_STATE(108)] = 3435,
  [SMALL_STATE(109)] = 3469,
  [SMALL_STATE(110)] = 3498,
  [SMALL_STATE(111)] = 3527,
  [SMALL_STATE(112)] = 3556,
  [SMALL_STATE(113)] = 3585,
  [SMALL_STATE(114)] = 3610,
  [SMALL_STATE(115)] = 3639,
  [SMALL_STATE(116)] = 3668,
  [SMALL_STATE(117)] = 3693,
  [SMALL_STATE(118)] = 3718,
  [SMALL_STATE(119)] = 3747,
  [SMALL_STATE(120)] = 3776,
  [SMALL_STATE(121)] = 3807,
  [SMALL_STATE(122)] = 3832,
  [SMALL_STATE(123)] = 3857,
  [SMALL_STATE(124)] = 3874,
  [SMALL_STATE(125)] = 3903,
  [SMALL_STATE(126)] = 3920,
  [SMALL_STATE(127)] = 3948,
  [SMALL_STATE(128)] = 3964,
  [SMALL_STATE(129)] = 3992,
  [SMALL_STATE(130)] = 4008,
  [SMALL_STATE(131)] = 4024,
  [SMALL_STATE(132)] = 4046,
  [SMALL_STATE(133)] = 4062,
  [SMALL_STATE(134)] = 4078,
  [SMALL_STATE(135)] = 4094,
  [SMALL_STATE(136)] = 4120,
  [SMALL_STATE(137)] = 4136,
  [SMALL_STATE(138)] = 4164,
  [SMALL_STATE(139)] = 4180,
  [SMALL_STATE(140)] = 4196,
  [SMALL_STATE(141)] = 4224,
  [SMALL_STATE(142)] = 4249,
  [SMALL_STATE(143)] = 4274,
  [SMALL_STATE(144)] = 4299,
  [SMALL_STATE(145)] = 4324,
  [SMALL_STATE(146)] = 4349,
  [SMALL_STATE(147)] = 4374,
  [SMALL_STATE(148)] = 4399,
  [SMALL_STATE(149)] = 4424,
  [SMALL_STATE(150)] = 4440,
  [SMALL_STATE(151)] = 4461,
  [SMALL_STATE(152)] = 4476,
  [SMALL_STATE(153)] = 4491,
  [SMALL_STATE(154)] = 4510,
  [SMALL_STATE(155)] = 4531,
  [SMALL_STATE(156)] = 4546,
  [SMALL_STATE(157)] = 4561,
  [SMALL_STATE(158)] = 4578,
  [SMALL_STATE(159)] = 4595,
  [SMALL_STATE(160)] = 4612,
  [SMALL_STATE(161)] = 4626,
  [SMALL_STATE(162)] = 4640,
  [SMALL_STATE(163)] = 4654,
  [SMALL_STATE(164)] = 4668,
  [SMALL_STATE(165)] = 4682,
  [SMALL_STATE(166)] = 4696,
  [SMALL_STATE(167)] = 4710,
  [SMALL_STATE(168)] = 4724,
  [SMALL_STATE(169)] = 4738,
  [SMALL_STATE(170)] = 4752,
  [SMALL_STATE(171)] = 4766,
  [SMALL_STATE(172)] = 4780,
  [SMALL_STATE(173)] = 4800,
  [SMALL_STATE(174)] = 4814,
  [SMALL_STATE(175)] = 4834,
  [SMALL_STATE(176)] = 4848,
  [SMALL_STATE(177)] = 4868,
  [SMALL_STATE(178)] = 4882,
  [SMALL_STATE(179)] = 4902,
  [SMALL_STATE(180)] = 4922,
  [SMALL_STATE(181)] = 4942,
  [SMALL_STATE(182)] = 4956,
  [SMALL_STATE(183)] = 4976,
  [SMALL_STATE(184)] = 4996,
  [SMALL_STATE(185)] = 5010,
  [SMALL_STATE(186)] = 5030,
  [SMALL_STATE(187)] = 5044,
  [SMALL_STATE(188)] = 5058,
  [SMALL_STATE(189)] = 5078,
  [SMALL_STATE(190)] = 5092,
  [SMALL_STATE(191)] = 5106,
  [SMALL_STATE(192)] = 5120,
  [SMALL_STATE(193)] = 5138,
  [SMALL_STATE(194)] = 5150,
  [SMALL_STATE(195)] = 5162,
  [SMALL_STATE(196)] = 5174,
  [SMALL_STATE(197)] = 5188,
  [SMALL_STATE(198)] = 5202,
  [SMALL_STATE(199)] = 5213,
  [SMALL_STATE(200)] = 5228,
  [SMALL_STATE(201)] = 5243,
  [SMALL_STATE(202)] = 5258,
  [SMALL_STATE(203)] = 5275,
  [SMALL_STATE(204)] = 5286,
  [SMALL_STATE(205)] = 5301,
  [SMALL_STATE(206)] = 5312,
  [SMALL_STATE(207)] = 5329,
  [SMALL_STATE(208)] = 5346,
  [SMALL_STATE(209)] = 5361,
  [SMALL_STATE(210)] = 5378,
  [SMALL_STATE(211)] = 5389,
  [SMALL_STATE(212)] = 5406,
  [SMALL_STATE(213)] = 5417,
  [SMALL_STATE(214)] = 5428,
  [SMALL_STATE(215)] = 5439,
  [SMALL_STATE(216)] = 5456,
  [SMALL_STATE(217)] = 5471,
  [SMALL_STATE(218)] = 5486,
  [SMALL_STATE(219)] = 5501,
  [SMALL_STATE(220)] = 5512,
  [SMALL_STATE(221)] = 5527,
  [SMALL_STATE(222)] = 5538,
  [SMALL_STATE(223)] = 5549,
  [SMALL_STATE(224)] = 5564,
  [SMALL_STATE(225)] = 5575,
  [SMALL_STATE(226)] = 5586,
  [SMALL_STATE(227)] = 5601,
  [SMALL_STATE(228)] = 5612,
  [SMALL_STATE(229)] = 5627,
  [SMALL_STATE(230)] = 5642,
  [SMALL_STATE(231)] = 5657,
  [SMALL_STATE(232)] = 5672,
  [SMALL_STATE(233)] = 5689,
  [SMALL_STATE(234)] = 5704,
  [SMALL_STATE(235)] = 5719,
  [SMALL_STATE(236)] = 5730,
  [SMALL_STATE(237)] = 5745,
  [SMALL_STATE(238)] = 5756,
  [SMALL_STATE(239)] = 5771,
  [SMALL_STATE(240)] = 5786,
  [SMALL_STATE(241)] = 5797,
  [SMALL_STATE(242)] = 5812,
  [SMALL_STATE(243)] = 5827,
  [SMALL_STATE(244)] = 5842,
  [SMALL_STATE(245)] = 5857,
  [SMALL_STATE(246)] = 5872,
  [SMALL_STATE(247)] = 5887,
  [SMALL_STATE(248)] = 5902,
  [SMALL_STATE(249)] = 5917,
  [SMALL_STATE(250)] = 5928,
  [SMALL_STATE(251)] = 5943,
  [SMALL_STATE(252)] = 5958,
  [SMALL_STATE(253)] = 5968,
  [SMALL_STATE(254)] = 5982,
  [SMALL_STATE(255)] = 5996,
  [SMALL_STATE(256)] = 6010,
  [SMALL_STATE(257)] = 6020,
  [SMALL_STATE(258)] = 6034,
  [SMALL_STATE(259)] = 6048,
  [SMALL_STATE(260)] = 6062,
  [SMALL_STATE(261)] = 6076,
  [SMALL_STATE(262)] = 6090,
  [SMALL_STATE(263)] = 6104,
  [SMALL_STATE(264)] = 6118,
  [SMALL_STATE(265)] = 6132,
  [SMALL_STATE(266)] = 6146,
  [SMALL_STATE(267)] = 6160,
  [SMALL_STATE(268)] = 6174,
  [SMALL_STATE(269)] = 6188,
  [SMALL_STATE(270)] = 6202,
  [SMALL_STATE(271)] = 6216,
  [SMALL_STATE(272)] = 6230,
  [SMALL_STATE(273)] = 6244,
  [SMALL_STATE(274)] = 6258,
  [SMALL_STATE(275)] = 6272,
  [SMALL_STATE(276)] = 6286,
  [SMALL_STATE(277)] = 6300,
  [SMALL_STATE(278)] = 6314,
  [SMALL_STATE(279)] = 6328,
  [SMALL_STATE(280)] = 6342,
  [SMALL_STATE(281)] = 6356,
  [SMALL_STATE(282)] = 6370,
  [SMALL_STATE(283)] = 6384,
  [SMALL_STATE(284)] = 6398,
  [SMALL_STATE(285)] = 6412,
  [SMALL_STATE(286)] = 6426,
  [SMALL_STATE(287)] = 6440,
  [SMALL_STATE(288)] = 6454,
  [SMALL_STATE(289)] = 6468,
  [SMALL_STATE(290)] = 6482,
  [SMALL_STATE(291)] = 6496,
  [SMALL_STATE(292)] = 6510,
  [SMALL_STATE(293)] = 6524,
  [SMALL_STATE(294)] = 6538,
  [SMALL_STATE(295)] = 6552,
  [SMALL_STATE(296)] = 6566,
  [SMALL_STATE(297)] = 6580,
  [SMALL_STATE(298)] = 6594,
  [SMALL_STATE(299)] = 6608,
  [SMALL_STATE(300)] = 6622,
  [SMALL_STATE(301)] = 6636,
  [SMALL_STATE(302)] = 6650,
  [SMALL_STATE(303)] = 6664,
  [SMALL_STATE(304)] = 6678,
  [SMALL_STATE(305)] = 6692,
  [SMALL_STATE(306)] = 6706,
  [SMALL_STATE(307)] = 6720,
  [SMALL_STATE(308)] = 6734,
  [SMALL_STATE(309)] = 6748,
  [SMALL_STATE(310)] = 6762,
  [SMALL_STATE(311)] = 6776,
  [SMALL_STATE(312)] = 6790,
  [SMALL_STATE(313)] = 6804,
  [SMALL_STATE(314)] = 6818,
  [SMALL_STATE(315)] = 6832,
  [SMALL_STATE(316)] = 6846,
  [SMALL_STATE(317)] = 6857,
  [SMALL_STATE(318)] = 6866,
  [SMALL_STATE(319)] = 6877,
  [SMALL_STATE(320)] = 6888,
  [SMALL_STATE(321)] = 6897,
  [SMALL_STATE(322)] = 6908,
  [SMALL_STATE(323)] = 6919,
  [SMALL_STATE(324)] = 6930,
  [SMALL_STATE(325)] = 6941,
  [SMALL_STATE(326)] = 6952,
  [SMALL_STATE(327)] = 6963,
  [SMALL_STATE(328)] = 6972,
  [SMALL_STATE(329)] = 6983,
  [SMALL_STATE(330)] = 6994,
  [SMALL_STATE(331)] = 7005,
  [SMALL_STATE(332)] = 7014,
  [SMALL_STATE(333)] = 7025,
  [SMALL_STATE(334)] = 7034,
  [SMALL_STATE(335)] = 7045,
  [SMALL_STATE(336)] = 7054,
  [SMALL_STATE(337)] = 7065,
  [SMALL_STATE(338)] = 7076,
  [SMALL_STATE(339)] = 7087,
  [SMALL_STATE(340)] = 7098,
  [SMALL_STATE(341)] = 7107,
  [SMALL_STATE(342)] = 7118,
  [SMALL_STATE(343)] = 7129,
  [SMALL_STATE(344)] = 7140,
  [SMALL_STATE(345)] = 7149,
  [SMALL_STATE(346)] = 7158,
  [SMALL_STATE(347)] = 7167,
  [SMALL_STATE(348)] = 7176,
  [SMALL_STATE(349)] = 7187,
  [SMALL_STATE(350)] = 7196,
  [SMALL_STATE(351)] = 7205,
  [SMALL_STATE(352)] = 7216,
  [SMALL_STATE(353)] = 7225,
  [SMALL_STATE(354)] = 7234,
  [SMALL_STATE(355)] = 7243,
  [SMALL_STATE(356)] = 7252,
  [SMALL_STATE(357)] = 7263,
  [SMALL_STATE(358)] = 7272,
  [SMALL_STATE(359)] = 7283,
  [SMALL_STATE(360)] = 7292,
  [SMALL_STATE(361)] = 7301,
  [SMALL_STATE(362)] = 7310,
  [SMALL_STATE(363)] = 7321,
  [SMALL_STATE(364)] = 7330,
  [SMALL_STATE(365)] = 7341,
  [SMALL_STATE(366)] = 7349,
  [SMALL_STATE(367)] = 7357,
  [SMALL_STATE(368)] = 7365,
  [SMALL_STATE(369)] = 7373,
  [SMALL_STATE(370)] = 7381,
  [SMALL_STATE(371)] = 7389,
  [SMALL_STATE(372)] = 7397,
  [SMALL_STATE(373)] = 7405,
  [SMALL_STATE(374)] = 7413,
  [SMALL_STATE(375)] = 7421,
  [SMALL_STATE(376)] = 7429,
  [SMALL_STATE(377)] = 7437,
  [SMALL_STATE(378)] = 7445,
  [SMALL_STATE(379)] = 7453,
  [SMALL_STATE(380)] = 7461,
  [SMALL_STATE(381)] = 7469,
  [SMALL_STATE(382)] = 7477,
  [SMALL_STATE(383)] = 7485,
  [SMALL_STATE(384)] = 7493,
  [SMALL_STATE(385)] = 7501,
  [SMALL_STATE(386)] = 7509,
  [SMALL_STATE(387)] = 7517,
  [SMALL_STATE(388)] = 7525,
  [SMALL_STATE(389)] = 7533,
  [SMALL_STATE(390)] = 7541,
  [SMALL_STATE(391)] = 7549,
  [SMALL_STATE(392)] = 7557,
  [SMALL_STATE(393)] = 7565,
  [SMALL_STATE(394)] = 7573,
  [SMALL_STATE(395)] = 7581,
  [SMALL_STATE(396)] = 7589,
  [SMALL_STATE(397)] = 7597,
  [SMALL_STATE(398)] = 7605,
  [SMALL_STATE(399)] = 7613,
  [SMALL_STATE(400)] = 7621,
  [SMALL_STATE(401)] = 7629,
  [SMALL_STATE(402)] = 7637,
  [SMALL_STATE(403)] = 7645,
  [SMALL_STATE(404)] = 7653,
  [SMALL_STATE(405)] = 7661,
  [SMALL_STATE(406)] = 7669,
  [SMALL_STATE(407)] = 7677,
  [SMALL_STATE(408)] = 7685,
  [SMALL_STATE(409)] = 7693,
  [SMALL_STATE(410)] = 7701,
  [SMALL_STATE(411)] = 7709,
  [SMALL_STATE(412)] = 7717,
  [SMALL_STATE(413)] = 7725,
  [SMALL_STATE(414)] = 7733,
  [SMALL_STATE(415)] = 7741,
  [SMALL_STATE(416)] = 7749,
  [SMALL_STATE(417)] = 7757,
  [SMALL_STATE(418)] = 7765,
  [SMALL_STATE(419)] = 7773,
  [SMALL_STATE(420)] = 7781,
  [SMALL_STATE(421)] = 7789,
  [SMALL_STATE(422)] = 7797,
  [SMALL_STATE(423)] = 7805,
  [SMALL_STATE(424)] = 7813,
  [SMALL_STATE(425)] = 7821,
  [SMALL_STATE(426)] = 7829,
  [SMALL_STATE(427)] = 7837,
  [SMALL_STATE(428)] = 7845,
  [SMALL_STATE(429)] = 7853,
  [SMALL_STATE(430)] = 7861,
  [SMALL_STATE(431)] = 7869,
  [SMALL_STATE(432)] = 7877,
  [SMALL_STATE(433)] = 7885,
  [SMALL_STATE(434)] = 7893,
  [SMALL_STATE(435)] = 7901,
  [SMALL_STATE(436)] = 7909,
  [SMALL_STATE(437)] = 7917,
  [SMALL_STATE(438)] = 7925,
  [SMALL_STATE(439)] = 7933,
  [SMALL_STATE(440)] = 7941,
  [SMALL_STATE(441)] = 7949,
  [SMALL_STATE(442)] = 7957,
  [SMALL_STATE(443)] = 7965,
  [SMALL_STATE(444)] = 7973,
  [SMALL_STATE(445)] = 7981,
  [SMALL_STATE(446)] = 7989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(150),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(439),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(255),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(185),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(403),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(402),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(401),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(400),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(399),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(398),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(396),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(395),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(393),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(391),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(388),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(386),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(385),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 19),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 19),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 18),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 7),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 55),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 55),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 53),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 53),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 55),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 55),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 53),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 53),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 46),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 46),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 46),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 46),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 50),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 50),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(422),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(321),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(319),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(318),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(416),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(415),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(338),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(339),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(341),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(166),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(439),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(312),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(323),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(445),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 9),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(158),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 13),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 13),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 6),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 48),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 10),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 10),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 10),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 10),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 44),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, .production_id = 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(446),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(220),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(229),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2), SHIFT_REPEAT(234),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(242),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 31),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(430),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(316),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34), SHIFT_REPEAT(120),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(13),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37), SHIFT_REPEAT(207),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(334),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40), SHIFT_REPEAT(336),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(135),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42), SHIFT_REPEAT(297),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24), SHIFT_REPEAT(406),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21), SHIFT_REPEAT(380),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 54),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 18),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 45),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 16),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 29),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 30),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 54),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 52),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 38),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 31),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 32),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 47),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 15),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 35),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 14),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 52),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 51),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 30),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 29),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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

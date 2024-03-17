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
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 53

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
  anon_sym_internal_DASHchild = 43,
  anon_sym_LBRACK = 44,
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
  sym_child_internal = 95,
  sym_child_annotation = 96,
  sym__child = 97,
  sym_menu = 98,
  sym__menu_child = 99,
  sym_menu_section = 100,
  sym_menu_submenu = 101,
  sym_menu_item = 102,
  sym_menu_attribute = 103,
  sym_string_value = 104,
  sym_menu_item_shorthand = 105,
  sym__extension = 106,
  sym_ext_accessibility = 107,
  sym_ext_adw_dialog = 108,
  sym_ext_adw_dialog_response = 109,
  sym_ext_adw_breakpoint_condition = 110,
  sym_ext_adw_breakpoint = 111,
  sym_ext_combo_box_items = 112,
  sym__ext_combo_box_item = 113,
  sym_ext_file_filter_mime_types = 114,
  sym_ext_file_filter_patterns = 115,
  sym_ext_file_filter_suffixes = 116,
  sym__ext_file_filter_item = 117,
  sym_ext_layout = 118,
  sym_ext_list_item_factory = 119,
  sym_ext_scale_marks = 120,
  sym_ext_scale_mark = 121,
  sym_ext_size_group_widgets = 122,
  sym__ext_size_group_widget = 123,
  sym_ext_string_list_strings = 124,
  sym__ext_strings_list_item = 125,
  sym_ext_styles = 126,
  sym__child_extension = 127,
  sym_ext_response = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_source_file_repeat2 = 130,
  aux_sym_quoted_repeat1 = 131,
  aux_sym_quoted_repeat2 = 132,
  aux_sym_object_content_repeat1 = 133,
  aux_sym_signal_repeat1 = 134,
  aux_sym_closure_expression_repeat1 = 135,
  aux_sym__expression_repeat1 = 136,
  aux_sym_binding_repeat1 = 137,
  aux_sym__flags_repeat1 = 138,
  aux_sym_menu_repeat1 = 139,
  aux_sym_menu_section_repeat1 = 140,
  aux_sym_menu_item_repeat1 = 141,
  aux_sym_ext_accessibility_repeat1 = 142,
  aux_sym_ext_adw_dialog_repeat1 = 143,
  aux_sym_ext_adw_dialog_response_repeat1 = 144,
  aux_sym_ext_adw_breakpoint_repeat1 = 145,
  aux_sym_ext_combo_box_items_repeat1 = 146,
  aux_sym_ext_file_filter_mime_types_repeat1 = 147,
  aux_sym_ext_scale_marks_repeat1 = 148,
  aux_sym_ext_size_group_widgets_repeat1 = 149,
  aux_sym_ext_string_list_strings_repeat1 = 150,
  aux_sym_ext_styles_repeat1 = 151,
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
  [sym__flags] = "_flags",
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
  [sym__flags] = sym__flags,
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
  [sym__flags] = {
    .visible = false,
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
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 4},
  [31] = {.index = 57, .length = 4},
  [32] = {.index = 61, .length = 1},
  [33] = {.index = 62, .length = 2},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 1},
  [36] = {.index = 67, .length = 2},
  [37] = {.index = 69, .length = 2},
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 2},
  [40] = {.index = 75, .length = 2},
  [41] = {.index = 77, .length = 3},
  [42] = {.index = 80, .length = 1},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 1},
  [45] = {.index = 84, .length = 2},
  [46] = {.index = 86, .length = 3},
  [47] = {.index = 89, .length = 3},
  [48] = {.index = 92, .length = 3},
  [49] = {.index = 95, .length = 2},
  [50] = {.index = 97, .length = 3},
  [51] = {.index = 100, .length = 2},
  [52] = {.index = 102, .length = 4},
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
    {field_name, 3},
  [48] =
    {field_id, 3},
  [49] =
    {field_id, 0},
    {field_value, 2},
  [51] =
    {field_id, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [53] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [57] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [61] =
    {field_item, 1, .inherited = true},
  [62] =
    {field_item, 2, .inherited = true},
    {field_item, 3, .inherited = true},
  [64] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [66] =
    {field_id, 1, .inherited = true},
  [67] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
  [69] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
  [71] =
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [73] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [75] =
    {field_action, 4},
    {field_label, 2},
  [77] =
    {field_flags, 3},
    {field_id, 0},
    {field_value, 2},
  [80] =
    {field_value, 2},
  [81] =
    {field_handler, 3},
    {field_name, 0},
  [83] =
    {field_value, 3},
  [84] =
    {field_context, 2},
    {field_string, 4},
  [86] =
    {field_action, 4},
    {field_icon, 6},
    {field_label, 2},
  [89] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [92] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [95] =
    {field_position, 4},
    {field_value, 2},
  [97] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [100] =
    {field_position, 5},
    {field_value, 3},
  [102] =
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
  [88] = 85,
  [89] = 87,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 84,
  [97] = 95,
  [98] = 94,
  [99] = 81,
  [100] = 100,
  [101] = 82,
  [102] = 100,
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
  [136] = 132,
  [137] = 131,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 146,
  [147] = 78,
  [148] = 148,
  [149] = 77,
  [150] = 150,
  [151] = 60,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 79,
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
  [196] = 170,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 185,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 177,
  [206] = 162,
  [207] = 207,
  [208] = 167,
  [209] = 209,
  [210] = 210,
  [211] = 201,
  [212] = 195,
  [213] = 213,
  [214] = 214,
  [215] = 159,
  [216] = 216,
  [217] = 203,
  [218] = 198,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 176,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 181,
  [233] = 222,
  [234] = 183,
  [235] = 235,
  [236] = 236,
  [237] = 184,
  [238] = 175,
  [239] = 239,
  [240] = 186,
  [241] = 241,
  [242] = 174,
  [243] = 187,
  [244] = 172,
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
  [287] = 106,
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
  [298] = 112,
  [299] = 299,
  [300] = 300,
  [301] = 275,
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
  [325] = 317,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 316,
  [330] = 330,
  [331] = 314,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 328,
  [337] = 333,
  [338] = 338,
  [339] = 339,
  [340] = 190,
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
  [360] = 319,
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
  [431] = 364,
  [432] = 432,
  [433] = 433,
  [434] = 411,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 398,
  [439] = 401,
  [440] = 440,
  [441] = 441,
  [442] = 426,
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
      if (lookahead == '[') ADVANCE(462);
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
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(412);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
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
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(417);
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
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '[') ADVANCE(462);
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
      if (lookahead == 'd') ADVANCE(460);
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
      if (lookahead == '[') ADVANCE(462);
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
      if (lookahead == '=') ADVANCE(507);
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
      if (lookahead == 'd') ADVANCE(461);
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
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACK);
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
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
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
  [80] = {.lex_state = 237},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 238},
  [108] = {.lex_state = 238},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 238},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 238},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 237},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 237},
  [147] = {.lex_state = 238},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 238},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 238},
  [156] = {.lex_state = 237},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 237},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 238},
  [161] = {.lex_state = 238},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 238},
  [164] = {.lex_state = 238},
  [165] = {.lex_state = 238},
  [166] = {.lex_state = 238},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 237},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 237},
  [172] = {.lex_state = 23},
  [173] = {.lex_state = 237},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 237},
  [180] = {.lex_state = 237},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 237},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 23},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 23},
  [188] = {.lex_state = 237},
  [189] = {.lex_state = 237},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 238},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 237},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 237},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 237},
  [214] = {.lex_state = 237},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 237},
  [220] = {.lex_state = 237},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 21},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 237},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 237},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 237},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 237},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 21},
  [280] = {.lex_state = 237},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 21},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 237},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 21},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 237},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
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
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
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
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 9},
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
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 237},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 9},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 9},
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
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 9},
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
    [sym_source_file] = STATE(389),
    [sym_type_name] = STATE(301),
    [sym_using] = STATE(80),
    [sym_translation_domain] = STATE(113),
    [sym_template] = STATE(108),
    [sym_object] = STATE(108),
    [sym_menu] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(80),
    [aux_sym_source_file_repeat2] = STATE(108),
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
    STATE(224), 1,
      sym_child_annotation,
    STATE(275), 1,
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
  [87] = 22,
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
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_child_annotation,
    STATE(275), 1,
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
    ACTIONS(55), 1,
      sym_ident,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
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
    STATE(224), 1,
      sym_child_annotation,
    STATE(275), 1,
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
    STATE(224), 1,
      sym_child_annotation,
    STATE(275), 1,
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
    STATE(224), 1,
      sym_child_annotation,
    STATE(275), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
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
    STATE(301), 1,
      sym_type_name,
    STATE(416), 1,
      sym__flags,
    STATE(417), 1,
      sym_translated,
    STATE(420), 1,
      sym_literal,
    STATE(421), 1,
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
    STATE(419), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(128), 6,
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
    STATE(251), 1,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
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
    STATE(407), 1,
      sym_value,
    STATE(416), 1,
      sym__flags,
    STATE(417), 1,
      sym_translated,
    STATE(420), 1,
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
    STATE(128), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [608] = 15,
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
    STATE(391), 1,
      sym_value,
    STATE(416), 1,
      sym__flags,
    STATE(417), 1,
      sym_translated,
    STATE(420), 1,
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
    STATE(128), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [662] = 13,
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
    STATE(355), 1,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
      sym__number,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [712] = 13,
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
    STATE(355), 1,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
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
    STATE(355), 1,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
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
    STATE(157), 1,
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
    STATE(83), 2,
      sym_closure_expression,
      sym_literal,
    STATE(128), 6,
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
    STATE(116), 1,
      sym_translation_domain,
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(130), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(118), 4,
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
    STATE(86), 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2731] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(416), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2756] = 7,
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
    STATE(82), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2785] = 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2814] = 7,
    ACTIONS(424), 1,
      sym_ident,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(429), 1,
      anon_sym_section,
    ACTIONS(432), 1,
      anon_sym_submenu,
    ACTIONS(435), 1,
      anon_sym_item,
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
  [2843] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(438), 1,
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
  [2872] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(440), 1,
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
  [2901] = 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2930] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(91), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(444), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2955] = 5,
    ACTIONS(446), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(91), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(449), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2980] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(91), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(454), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3005] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(92), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(456), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3030] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(458), 1,
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
  [3059] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
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
  [3088] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(462), 1,
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
  [3117] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(81), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3146] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(87), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3175] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(468), 1,
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
  [3204] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(88), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3233] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(472), 1,
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
  [3262] = 7,
    ACTIONS(402), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_section,
    ACTIONS(408), 1,
      anon_sym_submenu,
    ACTIONS(410), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(85), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3291] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(476), 1,
      sym_ident,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym__ext_combo_box_item,
    STATE(343), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3325] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(476), 1,
      sym_ident,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      sym__ext_combo_box_item,
    STATE(343), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3359] = 10,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(476), 1,
      sym_ident,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      sym__ext_combo_box_item,
    STATE(343), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3393] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(484), 10,
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
  [3410] = 8,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(491), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      anon_sym_template,
    ACTIONS(497), 1,
      anon_sym_menu,
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3439] = 8,
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
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3468] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3497] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(321), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3526] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(250), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3555] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 10,
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
  [3572] = 8,
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
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(118), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3601] = 6,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
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
  [3626] = 6,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(520), 1,
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
  [3651] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3680] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(321), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3709] = 8,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3738] = 9,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym__,
    ACTIONS(130), 1,
      anon_sym_C_,
    ACTIONS(476), 1,
      sym_ident,
    STATE(335), 1,
      sym__ext_combo_box_item,
    STATE(343), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3769] = 6,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      anon_sym_section,
    ACTIONS(531), 1,
      anon_sym_submenu,
    ACTIONS(534), 1,
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
  [3794] = 6,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(537), 1,
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
  [3819] = 6,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(115), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3844] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3860] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3876] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(545), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3892] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3908] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3924] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3940] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3956] = 5,
    ACTIONS(559), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(130), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(557), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [3978] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4006] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4034] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4050] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4066] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(321), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4092] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4120] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4148] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(336), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4173] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(328), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4198] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(311), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4223] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(385), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4248] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(379), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4273] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(431), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4298] = 7,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4323] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      anon_sym__,
    ACTIONS(504), 1,
      anon_sym_C_,
    STATE(364), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4348] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(580), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4364] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4379] = 6,
    ACTIONS(584), 1,
      anon_sym_DOT,
    ACTIONS(586), 1,
      anon_sym_COLON,
    ACTIONS(588), 1,
      anon_sym_COLON_COLON,
    ACTIONS(590), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4400] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(388), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(390), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4415] = 4,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4432] = 3,
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
  [4447] = 4,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4464] = 6,
    ACTIONS(584), 1,
      anon_sym_DOT,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_PIPE,
    STATE(291), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4485] = 5,
    ACTIONS(605), 1,
      sym_ident,
    ACTIONS(607), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(609), 1,
      anon_sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(428), 3,
      sym_child_internal,
      sym__child_extension,
      sym_ext_response,
  [4504] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4519] = 5,
    ACTIONS(611), 1,
      sym_integer_literal,
    STATE(324), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(613), 2,
      sym_hex_literal,
      sym_float_literal,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4538] = 4,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_binding_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4555] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4575] = 3,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(623), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4589] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(629), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4603] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(633), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4617] = 3,
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
  [4631] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(639), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(641), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4645] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(645), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4659] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(649), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4673] = 3,
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
  [4687] = 3,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4701] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4713] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4733] = 3,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4747] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4767] = 3,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4781] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4801] = 3,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(675), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4815] = 3,
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
  [4829] = 3,
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
  [4843] = 3,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4857] = 3,
    ACTIONS(584), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4871] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4891] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4911] = 3,
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
  [4925] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4945] = 3,
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
  [4959] = 3,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4973] = 3,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4987] = 3,
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
  [5001] = 3,
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
  [5015] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5035] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5055] = 3,
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
  [5069] = 3,
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
  [5083] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(733), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5095] = 5,
    ACTIONS(735), 1,
      sym_ident,
    ACTIONS(737), 1,
      sym_integer_literal,
    STATE(341), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 2,
      sym_hex_literal,
      sym_float_literal,
  [5113] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5125] = 4,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(211), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(665), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5151] = 4,
    ACTIONS(747), 1,
      sym_ident,
    STATE(245), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5166] = 4,
    ACTIONS(753), 1,
      anon_sym_DQUOTE2,
    STATE(225), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(751), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
  [5181] = 4,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5196] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(711), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5207] = 4,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(226), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5222] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5239] = 4,
    ACTIONS(753), 1,
      anon_sym_SQUOTE2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5254] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5271] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(689), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5282] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(637), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5293] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(769), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5315] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5326] = 4,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5341] = 4,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(226), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5356] = 4,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5371] = 4,
    ACTIONS(779), 1,
      sym_integer_literal,
    STATE(432), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 2,
      sym_hex_literal,
      sym_float_literal,
  [5386] = 4,
    ACTIONS(783), 1,
      sym_integer_literal,
    STATE(124), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(785), 2,
      sym_hex_literal,
      sym_float_literal,
  [5401] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(625), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5412] = 4,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5427] = 4,
    ACTIONS(791), 1,
      anon_sym_SQUOTE2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(765), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5442] = 4,
    ACTIONS(791), 1,
      anon_sym_DQUOTE2,
    STATE(225), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(751), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
  [5457] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(334), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5474] = 4,
    ACTIONS(793), 1,
      sym_integer_literal,
    STATE(326), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 2,
      sym_hex_literal,
      sym_float_literal,
  [5489] = 4,
    ACTIONS(799), 1,
      anon_sym_DQUOTE2,
    STATE(198), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5504] = 4,
    ACTIONS(803), 1,
      anon_sym_SQUOTE2,
    STATE(217), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5519] = 4,
    ACTIONS(803), 1,
      anon_sym_DQUOTE2,
    STATE(218), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5534] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(18), 1,
      sym_object,
    STATE(275), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5551] = 4,
    ACTIONS(812), 1,
      anon_sym_DQUOTE2,
    STATE(225), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5566] = 4,
    ACTIONS(814), 1,
      sym_ident,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(226), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5581] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5592] = 4,
    ACTIONS(819), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5607] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5624] = 4,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5639] = 4,
    ACTIONS(833), 1,
      anon_sym_SQUOTE2,
    STATE(231), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(830), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5654] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5665] = 4,
    ACTIONS(799), 1,
      anon_sym_SQUOTE2,
    STATE(203), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(755), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5680] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5691] = 4,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5706] = 4,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(210), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(841), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5721] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(707), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5732] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5743] = 4,
    ACTIONS(843), 1,
      sym_ident,
    STATE(197), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5758] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5769] = 4,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(849), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5784] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5795] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5806] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(671), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5817] = 4,
    ACTIONS(851), 1,
      sym_ident,
    STATE(245), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5832] = 4,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_signal_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5847] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5861] = 4,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5875] = 4,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5889] = 4,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5903] = 4,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5917] = 4,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5931] = 4,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_PIPE,
    STATE(291), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5945] = 4,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5959] = 4,
    ACTIONS(883), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5973] = 4,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5987] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6001] = 4,
    ACTIONS(889), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6015] = 4,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6029] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(365), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6043] = 4,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6057] = 4,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6071] = 4,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6085] = 4,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6099] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(313), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6113] = 4,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6127] = 4,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6141] = 4,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6155] = 4,
    ACTIONS(927), 1,
      sym_ident,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6169] = 4,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6183] = 4,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6197] = 4,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6211] = 4,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6225] = 4,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6239] = 4,
    ACTIONS(948), 1,
      sym_ident,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6253] = 4,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6267] = 4,
    ACTIONS(956), 1,
      sym_ident,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6281] = 4,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(962), 1,
      anon_sym_PIPE,
    STATE(278), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6295] = 4,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    ACTIONS(965), 1,
      anon_sym_mark,
    STATE(323), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6309] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6323] = 4,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_closure_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6337] = 4,
    ACTIONS(965), 1,
      anon_sym_mark,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6351] = 4,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_ext_scale_marks_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6365] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6379] = 4,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6393] = 4,
    ACTIONS(956), 1,
      sym_ident,
    ACTIONS(987), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6407] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(484), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6417] = 4,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_size_group_widgets_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6431] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(347), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6445] = 4,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6459] = 4,
    ACTIONS(998), 1,
      anon_sym_SEMI,
    ACTIONS(1000), 1,
      anon_sym_PIPE,
    STATE(278), 1,
      aux_sym__flags_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6473] = 4,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_string_list_strings_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6487] = 4,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_ext_combo_box_items_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6501] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(367), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6515] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(255), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6529] = 4,
    ACTIONS(1011), 1,
      sym_ident,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6543] = 4,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_ext_styles_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6557] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6567] = 4,
    ACTIONS(956), 1,
      sym_ident,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6581] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(414), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6595] = 4,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(1023), 1,
      sym_ident,
    STATE(149), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6609] = 4,
    ACTIONS(965), 1,
      anon_sym_mark,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6623] = 4,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6637] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      aux_sym_ext_adw_dialog_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6651] = 4,
    ACTIONS(927), 1,
      sym_ident,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6665] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    STATE(404), 1,
      sym_quoted,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6679] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      sym_ident,
    STATE(400), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6693] = 4,
    ACTIONS(889), 1,
      sym_ident,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6707] = 4,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_ext_accessibility_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6721] = 4,
    ACTIONS(889), 1,
      sym_ident,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6735] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1039), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6744] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1041), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [6753] = 3,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6764] = 3,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6775] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1047), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6784] = 3,
    ACTIONS(1049), 1,
      sym_ident,
    ACTIONS(1051), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6795] = 3,
    ACTIONS(1053), 1,
      sym_ident,
    ACTIONS(1055), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6806] = 3,
    ACTIONS(889), 1,
      sym_ident,
    STATE(338), 1,
      sym_ext_adw_dialog_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6817] = 3,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6828] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1061), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6837] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1005), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6846] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1063), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6855] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(977), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6864] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6875] = 3,
    ACTIONS(1069), 1,
      sym_ident,
    ACTIONS(1071), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6886] = 3,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6897] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1077), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6906] = 3,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6917] = 3,
    ACTIONS(1083), 1,
      sym_ident,
    ACTIONS(1085), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6928] = 3,
    ACTIONS(965), 1,
      anon_sym_mark,
    STATE(323), 1,
      sym_ext_scale_mark,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6939] = 3,
    ACTIONS(1087), 1,
      anon_sym_LBRACE,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6950] = 3,
    ACTIONS(956), 1,
      sym_ident,
    STATE(322), 1,
      sym__ext_size_group_widget,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6961] = 3,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6972] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1091), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6981] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1093), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6990] = 3,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7001] = 3,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7012] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7021] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1099), 2,
      sym_ident,
      anon_sym_DOLLAR,
  [7030] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(727), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7039] = 3,
    ACTIONS(1101), 1,
      anon_sym_RBRACK,
    ACTIONS(1103), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7050] = 3,
    ACTIONS(1105), 1,
      anon_sym_RBRACK,
    ACTIONS(1107), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7061] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1109), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7070] = 3,
    ACTIONS(1111), 1,
      sym_ident,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7081] = 3,
    ACTIONS(1115), 1,
      sym_ident,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7092] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7101] = 3,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_object_content,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7112] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7121] = 3,
    ACTIONS(1123), 1,
      sym_ident,
    ACTIONS(1125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7132] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7141] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7150] = 3,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7161] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7170] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7179] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7188] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7197] = 3,
    ACTIONS(1141), 1,
      sym_ident,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7208] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7217] = 3,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7228] = 3,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7239] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1153), 2,
      sym_ident,
      anon_sym_RBRACE,
  [7248] = 2,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7256] = 2,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7264] = 2,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7272] = 2,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7280] = 2,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7288] = 2,
    ACTIONS(1165), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7296] = 2,
    ACTIONS(1167), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7304] = 2,
    ACTIONS(1169), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7312] = 2,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7320] = 2,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7328] = 2,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7336] = 2,
    ACTIONS(1177), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7344] = 2,
    ACTIONS(1179), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7352] = 2,
    ACTIONS(1181), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7360] = 2,
    ACTIONS(1183), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7368] = 2,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7376] = 2,
    ACTIONS(1187), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7384] = 2,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7392] = 2,
    ACTIONS(1191), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7400] = 2,
    ACTIONS(1193), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7408] = 2,
    ACTIONS(1195), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7416] = 2,
    ACTIONS(1197), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7424] = 2,
    ACTIONS(1199), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7432] = 2,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7440] = 2,
    ACTIONS(1203), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7448] = 2,
    ACTIONS(1205), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7456] = 2,
    ACTIONS(1207), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7464] = 2,
    ACTIONS(1209), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7472] = 2,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7480] = 2,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7488] = 2,
    ACTIONS(1215), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7496] = 2,
    ACTIONS(1217), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7504] = 2,
    ACTIONS(1141), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7512] = 2,
    ACTIONS(1219), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7520] = 2,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7528] = 2,
    ACTIONS(1223), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7536] = 2,
    ACTIONS(1225), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7544] = 2,
    ACTIONS(1227), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7552] = 2,
    ACTIONS(1229), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7560] = 2,
    ACTIONS(1231), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7568] = 2,
    ACTIONS(1233), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7576] = 2,
    ACTIONS(1235), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7584] = 2,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7592] = 2,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7600] = 2,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7608] = 2,
    ACTIONS(1243), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7616] = 2,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7624] = 2,
    ACTIONS(1247), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7632] = 2,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7640] = 2,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7648] = 2,
    ACTIONS(1253), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7656] = 2,
    ACTIONS(1255), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7664] = 2,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7672] = 2,
    ACTIONS(1259), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7680] = 2,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7688] = 2,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7696] = 2,
    ACTIONS(1263), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7704] = 2,
    ACTIONS(1265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7712] = 2,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7720] = 2,
    ACTIONS(1267), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7728] = 2,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7736] = 2,
    ACTIONS(1271), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7744] = 2,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7752] = 2,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7760] = 2,
    ACTIONS(1277), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7768] = 2,
    ACTIONS(1279), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7776] = 2,
    ACTIONS(1281), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7784] = 2,
    ACTIONS(1283), 1,
      anon_sym_response,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7792] = 2,
    ACTIONS(1285), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7800] = 2,
    ACTIONS(1287), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7808] = 2,
    ACTIONS(1289), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7816] = 2,
    ACTIONS(1291), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7824] = 2,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7832] = 2,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7840] = 2,
    ACTIONS(1297), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7848] = 2,
    ACTIONS(1299), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7856] = 2,
    ACTIONS(1301), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7864] = 2,
    ACTIONS(1303), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7872] = 2,
    ACTIONS(1305), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7880] = 2,
    ACTIONS(1307), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7888] = 2,
    ACTIONS(1309), 1,
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
  [SMALL_STATE(11)] = 662,
  [SMALL_STATE(12)] = 712,
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
  [SMALL_STATE(84)] = 2756,
  [SMALL_STATE(85)] = 2785,
  [SMALL_STATE(86)] = 2814,
  [SMALL_STATE(87)] = 2843,
  [SMALL_STATE(88)] = 2872,
  [SMALL_STATE(89)] = 2901,
  [SMALL_STATE(90)] = 2930,
  [SMALL_STATE(91)] = 2955,
  [SMALL_STATE(92)] = 2980,
  [SMALL_STATE(93)] = 3005,
  [SMALL_STATE(94)] = 3030,
  [SMALL_STATE(95)] = 3059,
  [SMALL_STATE(96)] = 3088,
  [SMALL_STATE(97)] = 3117,
  [SMALL_STATE(98)] = 3146,
  [SMALL_STATE(99)] = 3175,
  [SMALL_STATE(100)] = 3204,
  [SMALL_STATE(101)] = 3233,
  [SMALL_STATE(102)] = 3262,
  [SMALL_STATE(103)] = 3291,
  [SMALL_STATE(104)] = 3325,
  [SMALL_STATE(105)] = 3359,
  [SMALL_STATE(106)] = 3393,
  [SMALL_STATE(107)] = 3410,
  [SMALL_STATE(108)] = 3439,
  [SMALL_STATE(109)] = 3468,
  [SMALL_STATE(110)] = 3497,
  [SMALL_STATE(111)] = 3526,
  [SMALL_STATE(112)] = 3555,
  [SMALL_STATE(113)] = 3572,
  [SMALL_STATE(114)] = 3601,
  [SMALL_STATE(115)] = 3626,
  [SMALL_STATE(116)] = 3651,
  [SMALL_STATE(117)] = 3680,
  [SMALL_STATE(118)] = 3709,
  [SMALL_STATE(119)] = 3738,
  [SMALL_STATE(120)] = 3769,
  [SMALL_STATE(121)] = 3794,
  [SMALL_STATE(122)] = 3819,
  [SMALL_STATE(123)] = 3844,
  [SMALL_STATE(124)] = 3860,
  [SMALL_STATE(125)] = 3876,
  [SMALL_STATE(126)] = 3892,
  [SMALL_STATE(127)] = 3908,
  [SMALL_STATE(128)] = 3924,
  [SMALL_STATE(129)] = 3940,
  [SMALL_STATE(130)] = 3956,
  [SMALL_STATE(131)] = 3978,
  [SMALL_STATE(132)] = 4006,
  [SMALL_STATE(133)] = 4034,
  [SMALL_STATE(134)] = 4050,
  [SMALL_STATE(135)] = 4066,
  [SMALL_STATE(136)] = 4092,
  [SMALL_STATE(137)] = 4120,
  [SMALL_STATE(138)] = 4148,
  [SMALL_STATE(139)] = 4173,
  [SMALL_STATE(140)] = 4198,
  [SMALL_STATE(141)] = 4223,
  [SMALL_STATE(142)] = 4248,
  [SMALL_STATE(143)] = 4273,
  [SMALL_STATE(144)] = 4298,
  [SMALL_STATE(145)] = 4323,
  [SMALL_STATE(146)] = 4348,
  [SMALL_STATE(147)] = 4364,
  [SMALL_STATE(148)] = 4379,
  [SMALL_STATE(149)] = 4400,
  [SMALL_STATE(150)] = 4415,
  [SMALL_STATE(151)] = 4432,
  [SMALL_STATE(152)] = 4447,
  [SMALL_STATE(153)] = 4464,
  [SMALL_STATE(154)] = 4485,
  [SMALL_STATE(155)] = 4504,
  [SMALL_STATE(156)] = 4519,
  [SMALL_STATE(157)] = 4538,
  [SMALL_STATE(158)] = 4555,
  [SMALL_STATE(159)] = 4575,
  [SMALL_STATE(160)] = 4589,
  [SMALL_STATE(161)] = 4603,
  [SMALL_STATE(162)] = 4617,
  [SMALL_STATE(163)] = 4631,
  [SMALL_STATE(164)] = 4645,
  [SMALL_STATE(165)] = 4659,
  [SMALL_STATE(166)] = 4673,
  [SMALL_STATE(167)] = 4687,
  [SMALL_STATE(168)] = 4701,
  [SMALL_STATE(169)] = 4713,
  [SMALL_STATE(170)] = 4733,
  [SMALL_STATE(171)] = 4747,
  [SMALL_STATE(172)] = 4767,
  [SMALL_STATE(173)] = 4781,
  [SMALL_STATE(174)] = 4801,
  [SMALL_STATE(175)] = 4815,
  [SMALL_STATE(176)] = 4829,
  [SMALL_STATE(177)] = 4843,
  [SMALL_STATE(178)] = 4857,
  [SMALL_STATE(179)] = 4871,
  [SMALL_STATE(180)] = 4891,
  [SMALL_STATE(181)] = 4911,
  [SMALL_STATE(182)] = 4925,
  [SMALL_STATE(183)] = 4945,
  [SMALL_STATE(184)] = 4959,
  [SMALL_STATE(185)] = 4973,
  [SMALL_STATE(186)] = 4987,
  [SMALL_STATE(187)] = 5001,
  [SMALL_STATE(188)] = 5015,
  [SMALL_STATE(189)] = 5035,
  [SMALL_STATE(190)] = 5055,
  [SMALL_STATE(191)] = 5069,
  [SMALL_STATE(192)] = 5083,
  [SMALL_STATE(193)] = 5095,
  [SMALL_STATE(194)] = 5113,
  [SMALL_STATE(195)] = 5125,
  [SMALL_STATE(196)] = 5140,
  [SMALL_STATE(197)] = 5151,
  [SMALL_STATE(198)] = 5166,
  [SMALL_STATE(199)] = 5181,
  [SMALL_STATE(200)] = 5196,
  [SMALL_STATE(201)] = 5207,
  [SMALL_STATE(202)] = 5222,
  [SMALL_STATE(203)] = 5239,
  [SMALL_STATE(204)] = 5254,
  [SMALL_STATE(205)] = 5271,
  [SMALL_STATE(206)] = 5282,
  [SMALL_STATE(207)] = 5293,
  [SMALL_STATE(208)] = 5304,
  [SMALL_STATE(209)] = 5315,
  [SMALL_STATE(210)] = 5326,
  [SMALL_STATE(211)] = 5341,
  [SMALL_STATE(212)] = 5356,
  [SMALL_STATE(213)] = 5371,
  [SMALL_STATE(214)] = 5386,
  [SMALL_STATE(215)] = 5401,
  [SMALL_STATE(216)] = 5412,
  [SMALL_STATE(217)] = 5427,
  [SMALL_STATE(218)] = 5442,
  [SMALL_STATE(219)] = 5457,
  [SMALL_STATE(220)] = 5474,
  [SMALL_STATE(221)] = 5489,
  [SMALL_STATE(222)] = 5504,
  [SMALL_STATE(223)] = 5519,
  [SMALL_STATE(224)] = 5534,
  [SMALL_STATE(225)] = 5551,
  [SMALL_STATE(226)] = 5566,
  [SMALL_STATE(227)] = 5581,
  [SMALL_STATE(228)] = 5592,
  [SMALL_STATE(229)] = 5607,
  [SMALL_STATE(230)] = 5624,
  [SMALL_STATE(231)] = 5639,
  [SMALL_STATE(232)] = 5654,
  [SMALL_STATE(233)] = 5665,
  [SMALL_STATE(234)] = 5680,
  [SMALL_STATE(235)] = 5691,
  [SMALL_STATE(236)] = 5706,
  [SMALL_STATE(237)] = 5721,
  [SMALL_STATE(238)] = 5732,
  [SMALL_STATE(239)] = 5743,
  [SMALL_STATE(240)] = 5758,
  [SMALL_STATE(241)] = 5769,
  [SMALL_STATE(242)] = 5784,
  [SMALL_STATE(243)] = 5795,
  [SMALL_STATE(244)] = 5806,
  [SMALL_STATE(245)] = 5817,
  [SMALL_STATE(246)] = 5832,
  [SMALL_STATE(247)] = 5847,
  [SMALL_STATE(248)] = 5861,
  [SMALL_STATE(249)] = 5875,
  [SMALL_STATE(250)] = 5889,
  [SMALL_STATE(251)] = 5903,
  [SMALL_STATE(252)] = 5917,
  [SMALL_STATE(253)] = 5931,
  [SMALL_STATE(254)] = 5945,
  [SMALL_STATE(255)] = 5959,
  [SMALL_STATE(256)] = 5973,
  [SMALL_STATE(257)] = 5987,
  [SMALL_STATE(258)] = 6001,
  [SMALL_STATE(259)] = 6015,
  [SMALL_STATE(260)] = 6029,
  [SMALL_STATE(261)] = 6043,
  [SMALL_STATE(262)] = 6057,
  [SMALL_STATE(263)] = 6071,
  [SMALL_STATE(264)] = 6085,
  [SMALL_STATE(265)] = 6099,
  [SMALL_STATE(266)] = 6113,
  [SMALL_STATE(267)] = 6127,
  [SMALL_STATE(268)] = 6141,
  [SMALL_STATE(269)] = 6155,
  [SMALL_STATE(270)] = 6169,
  [SMALL_STATE(271)] = 6183,
  [SMALL_STATE(272)] = 6197,
  [SMALL_STATE(273)] = 6211,
  [SMALL_STATE(274)] = 6225,
  [SMALL_STATE(275)] = 6239,
  [SMALL_STATE(276)] = 6253,
  [SMALL_STATE(277)] = 6267,
  [SMALL_STATE(278)] = 6281,
  [SMALL_STATE(279)] = 6295,
  [SMALL_STATE(280)] = 6309,
  [SMALL_STATE(281)] = 6323,
  [SMALL_STATE(282)] = 6337,
  [SMALL_STATE(283)] = 6351,
  [SMALL_STATE(284)] = 6365,
  [SMALL_STATE(285)] = 6379,
  [SMALL_STATE(286)] = 6393,
  [SMALL_STATE(287)] = 6407,
  [SMALL_STATE(288)] = 6417,
  [SMALL_STATE(289)] = 6431,
  [SMALL_STATE(290)] = 6445,
  [SMALL_STATE(291)] = 6459,
  [SMALL_STATE(292)] = 6473,
  [SMALL_STATE(293)] = 6487,
  [SMALL_STATE(294)] = 6501,
  [SMALL_STATE(295)] = 6515,
  [SMALL_STATE(296)] = 6529,
  [SMALL_STATE(297)] = 6543,
  [SMALL_STATE(298)] = 6557,
  [SMALL_STATE(299)] = 6567,
  [SMALL_STATE(300)] = 6581,
  [SMALL_STATE(301)] = 6595,
  [SMALL_STATE(302)] = 6609,
  [SMALL_STATE(303)] = 6623,
  [SMALL_STATE(304)] = 6637,
  [SMALL_STATE(305)] = 6651,
  [SMALL_STATE(306)] = 6665,
  [SMALL_STATE(307)] = 6679,
  [SMALL_STATE(308)] = 6693,
  [SMALL_STATE(309)] = 6707,
  [SMALL_STATE(310)] = 6721,
  [SMALL_STATE(311)] = 6735,
  [SMALL_STATE(312)] = 6744,
  [SMALL_STATE(313)] = 6753,
  [SMALL_STATE(314)] = 6764,
  [SMALL_STATE(315)] = 6775,
  [SMALL_STATE(316)] = 6784,
  [SMALL_STATE(317)] = 6795,
  [SMALL_STATE(318)] = 6806,
  [SMALL_STATE(319)] = 6817,
  [SMALL_STATE(320)] = 6828,
  [SMALL_STATE(321)] = 6837,
  [SMALL_STATE(322)] = 6846,
  [SMALL_STATE(323)] = 6855,
  [SMALL_STATE(324)] = 6864,
  [SMALL_STATE(325)] = 6875,
  [SMALL_STATE(326)] = 6886,
  [SMALL_STATE(327)] = 6897,
  [SMALL_STATE(328)] = 6906,
  [SMALL_STATE(329)] = 6917,
  [SMALL_STATE(330)] = 6928,
  [SMALL_STATE(331)] = 6939,
  [SMALL_STATE(332)] = 6950,
  [SMALL_STATE(333)] = 6961,
  [SMALL_STATE(334)] = 6972,
  [SMALL_STATE(335)] = 6981,
  [SMALL_STATE(336)] = 6990,
  [SMALL_STATE(337)] = 7001,
  [SMALL_STATE(338)] = 7012,
  [SMALL_STATE(339)] = 7021,
  [SMALL_STATE(340)] = 7030,
  [SMALL_STATE(341)] = 7039,
  [SMALL_STATE(342)] = 7050,
  [SMALL_STATE(343)] = 7061,
  [SMALL_STATE(344)] = 7070,
  [SMALL_STATE(345)] = 7081,
  [SMALL_STATE(346)] = 7092,
  [SMALL_STATE(347)] = 7101,
  [SMALL_STATE(348)] = 7112,
  [SMALL_STATE(349)] = 7121,
  [SMALL_STATE(350)] = 7132,
  [SMALL_STATE(351)] = 7141,
  [SMALL_STATE(352)] = 7150,
  [SMALL_STATE(353)] = 7161,
  [SMALL_STATE(354)] = 7170,
  [SMALL_STATE(355)] = 7179,
  [SMALL_STATE(356)] = 7188,
  [SMALL_STATE(357)] = 7197,
  [SMALL_STATE(358)] = 7208,
  [SMALL_STATE(359)] = 7217,
  [SMALL_STATE(360)] = 7228,
  [SMALL_STATE(361)] = 7239,
  [SMALL_STATE(362)] = 7248,
  [SMALL_STATE(363)] = 7256,
  [SMALL_STATE(364)] = 7264,
  [SMALL_STATE(365)] = 7272,
  [SMALL_STATE(366)] = 7280,
  [SMALL_STATE(367)] = 7288,
  [SMALL_STATE(368)] = 7296,
  [SMALL_STATE(369)] = 7304,
  [SMALL_STATE(370)] = 7312,
  [SMALL_STATE(371)] = 7320,
  [SMALL_STATE(372)] = 7328,
  [SMALL_STATE(373)] = 7336,
  [SMALL_STATE(374)] = 7344,
  [SMALL_STATE(375)] = 7352,
  [SMALL_STATE(376)] = 7360,
  [SMALL_STATE(377)] = 7368,
  [SMALL_STATE(378)] = 7376,
  [SMALL_STATE(379)] = 7384,
  [SMALL_STATE(380)] = 7392,
  [SMALL_STATE(381)] = 7400,
  [SMALL_STATE(382)] = 7408,
  [SMALL_STATE(383)] = 7416,
  [SMALL_STATE(384)] = 7424,
  [SMALL_STATE(385)] = 7432,
  [SMALL_STATE(386)] = 7440,
  [SMALL_STATE(387)] = 7448,
  [SMALL_STATE(388)] = 7456,
  [SMALL_STATE(389)] = 7464,
  [SMALL_STATE(390)] = 7472,
  [SMALL_STATE(391)] = 7480,
  [SMALL_STATE(392)] = 7488,
  [SMALL_STATE(393)] = 7496,
  [SMALL_STATE(394)] = 7504,
  [SMALL_STATE(395)] = 7512,
  [SMALL_STATE(396)] = 7520,
  [SMALL_STATE(397)] = 7528,
  [SMALL_STATE(398)] = 7536,
  [SMALL_STATE(399)] = 7544,
  [SMALL_STATE(400)] = 7552,
  [SMALL_STATE(401)] = 7560,
  [SMALL_STATE(402)] = 7568,
  [SMALL_STATE(403)] = 7576,
  [SMALL_STATE(404)] = 7584,
  [SMALL_STATE(405)] = 7592,
  [SMALL_STATE(406)] = 7600,
  [SMALL_STATE(407)] = 7608,
  [SMALL_STATE(408)] = 7616,
  [SMALL_STATE(409)] = 7624,
  [SMALL_STATE(410)] = 7632,
  [SMALL_STATE(411)] = 7640,
  [SMALL_STATE(412)] = 7648,
  [SMALL_STATE(413)] = 7656,
  [SMALL_STATE(414)] = 7664,
  [SMALL_STATE(415)] = 7672,
  [SMALL_STATE(416)] = 7680,
  [SMALL_STATE(417)] = 7688,
  [SMALL_STATE(418)] = 7696,
  [SMALL_STATE(419)] = 7704,
  [SMALL_STATE(420)] = 7712,
  [SMALL_STATE(421)] = 7720,
  [SMALL_STATE(422)] = 7728,
  [SMALL_STATE(423)] = 7736,
  [SMALL_STATE(424)] = 7744,
  [SMALL_STATE(425)] = 7752,
  [SMALL_STATE(426)] = 7760,
  [SMALL_STATE(427)] = 7768,
  [SMALL_STATE(428)] = 7776,
  [SMALL_STATE(429)] = 7784,
  [SMALL_STATE(430)] = 7792,
  [SMALL_STATE(431)] = 7800,
  [SMALL_STATE(432)] = 7808,
  [SMALL_STATE(433)] = 7816,
  [SMALL_STATE(434)] = 7824,
  [SMALL_STATE(435)] = 7832,
  [SMALL_STATE(436)] = 7840,
  [SMALL_STATE(437)] = 7848,
  [SMALL_STATE(438)] = 7856,
  [SMALL_STATE(439)] = 7864,
  [SMALL_STATE(440)] = 7872,
  [SMALL_STATE(441)] = 7880,
  [SMALL_STATE(442)] = 7888,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(148),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(418),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(265),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(154),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(368),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(369),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(371),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(372),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(373),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(374),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(436),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(376),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(378),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(380),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(383),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(384),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2), SHIFT_REPEAT(387),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 33),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 33),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 47),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 47),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 43),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 43),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 47),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 47),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 43),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 43),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 36),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 36),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 33),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 33),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 33),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 33),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 33),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 33),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 30),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 30),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 36),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 36),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 33),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 33),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 33),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 33),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 30),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 30),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 52),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 52),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 16),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 16),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 50),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 50),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 52),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 52),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 7),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(426),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(317),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(316),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(314),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(386),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(395),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(178),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(418),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(295),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(349),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(325),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(329),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(331),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(415),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 8),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 8),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(150),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 15),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 15),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 9),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 9),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 6),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 9),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 9),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 45),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 9),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 9),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 9),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 9),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 9),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 9),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 15),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 15),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 40),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 40),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 40),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 40),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 46),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 46),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 16),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 16),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 41),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, .production_id = 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(225),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(442),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(230),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2), SHIFT_REPEAT(231),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 28),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(245),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18), SHIFT_REPEAT(406),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(318),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 31), SHIFT_REPEAT(119),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 31),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 34), SHIFT_REPEAT(219),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 34),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(394),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(14),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(330),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 37), SHIFT_REPEAT(332),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 37),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(135),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21), SHIFT_REPEAT(403),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39), SHIFT_REPEAT(257),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 28),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 16),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 2),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 35),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 42),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 32),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 29),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_annotation, 3, .production_id = 11),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 27),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 26),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 12),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 13),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 14),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 44),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 51),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 49),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 51),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 49),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 48),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_internal, 2, .production_id = 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 27),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 26),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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

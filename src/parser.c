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
#define STATE_COUNT 385
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 47

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_number = 2,
  aux_sym_quoted_token1 = 3,
  aux_sym_quoted_token2 = 4,
  anon_sym_DOT = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_using = 7,
  anon_sym_SEMI = 8,
  anon_sym_template = 9,
  anon_sym_COLON = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COLON_COLON = 13,
  anon_sym_EQ_GT = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_after = 17,
  anon_sym_swapped = 18,
  anon_sym_COMMA = 19,
  anon_sym_as = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_typeof = 23,
  anon_sym_DASH = 24,
  anon_sym_PLUS = 25,
  anon_sym_bind = 26,
  anon_sym_inverted = 27,
  anon_sym_bidirectional = 28,
  anon_sym_sync_DASHcreate = 29,
  anon_sym__ = 30,
  anon_sym_C_ = 31,
  anon_sym_PIPE = 32,
  anon_sym_LBRACK = 33,
  anon_sym_internal_DASHchild = 34,
  anon_sym_RBRACK = 35,
  anon_sym_menu = 36,
  anon_sym_section = 37,
  anon_sym_submenu = 38,
  anon_sym_item = 39,
  sym_comment = 40,
  anon_sym_accessibility = 41,
  anon_sym_responses = 42,
  anon_sym_condition = 43,
  anon_sym_setters = 44,
  anon_sym_items = 45,
  anon_sym_mime_DASHtypes = 46,
  anon_sym_patterns = 47,
  anon_sym_suffixes = 48,
  anon_sym_layout = 49,
  anon_sym_widgets = 50,
  anon_sym_strings = 51,
  anon_sym_styles = 52,
  anon_sym_action = 53,
  anon_sym_response = 54,
  anon_sym_EQ = 55,
  anon_sym_default = 56,
  sym_source_file = 57,
  sym_quoted = 58,
  sym_type_name = 59,
  sym_using = 60,
  sym_template = 61,
  sym_object = 62,
  sym_object_content = 63,
  sym_signal = 64,
  sym_property = 65,
  sym_closure_expression = 66,
  sym_lookup_expression = 67,
  sym_cast_expression = 68,
  sym_literal = 69,
  sym__type_literal = 70,
  sym__quoted_literal = 71,
  sym__number_literal = 72,
  sym__ident_literal = 73,
  sym__expression = 74,
  sym_binding = 75,
  sym_object_value = 76,
  sym_value = 77,
  sym_translated = 78,
  sym__flags = 79,
  sym__child = 80,
  sym_menu = 81,
  sym_menu_child = 82,
  sym_menu_section = 83,
  sym_menu_submenu = 84,
  sym_menu_item = 85,
  sym_menu_attribute = 86,
  sym_string_value = 87,
  sym_menu_item_shorthand = 88,
  sym__extension = 89,
  sym_ext_accessibility = 90,
  sym_ext_adw_dialog = 91,
  sym_ext_adw_dialog_response = 92,
  sym_ext_adw_breakpoint_condition = 93,
  sym_ext_adw_breakpoint = 94,
  sym_ext_combo_box_items = 95,
  sym__ext_combo_box_item = 96,
  sym_ext_file_filter_mime_types = 97,
  sym_ext_file_filter_patterns = 98,
  sym_ext_file_filter_suffixes = 99,
  sym__ext_file_filter_item = 100,
  sym_ext_layout = 101,
  sym_ext_list_item_factory = 102,
  sym_ext_size_group_widgets = 103,
  sym__ext_size_group_widget = 104,
  sym_ext_string_list_strings = 105,
  sym__ext_strings_list_item = 106,
  sym_ext_styles = 107,
  sym_child_extension = 108,
  sym_ext_response = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_source_file_repeat2 = 111,
  aux_sym_object_content_repeat1 = 112,
  aux_sym_signal_repeat1 = 113,
  aux_sym_closure_expression_repeat1 = 114,
  aux_sym__expression_repeat1 = 115,
  aux_sym_binding_repeat1 = 116,
  aux_sym__flags_repeat1 = 117,
  aux_sym_menu_repeat1 = 118,
  aux_sym_menu_section_repeat1 = 119,
  aux_sym_ext_accessibility_repeat1 = 120,
  aux_sym_ext_adw_dialog_repeat1 = 121,
  aux_sym_ext_adw_dialog_response_repeat1 = 122,
  aux_sym_ext_adw_breakpoint_repeat1 = 123,
  aux_sym_ext_combo_box_items_repeat1 = 124,
  aux_sym_ext_file_filter_mime_types_repeat1 = 125,
  aux_sym_ext_size_group_widgets_repeat1 = 126,
  aux_sym_ext_string_list_strings_repeat1 = 127,
  aux_sym_ext_styles_repeat1 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_number] = "number",
  [aux_sym_quoted_token1] = "quoted_token1",
  [aux_sym_quoted_token2] = "quoted_token2",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_using] = "using",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_inverted] = "inverted",
  [anon_sym_bidirectional] = "bidirectional",
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
  [sym_comment] = "comment",
  [anon_sym_accessibility] = "accessibility",
  [anon_sym_responses] = "responses",
  [anon_sym_condition] = "condition",
  [anon_sym_setters] = "setters",
  [anon_sym_items] = "items",
  [anon_sym_mime_DASHtypes] = "mime-types",
  [anon_sym_patterns] = "patterns",
  [anon_sym_suffixes] = "suffixes",
  [anon_sym_layout] = "layout",
  [anon_sym_widgets] = "widgets",
  [anon_sym_strings] = "strings",
  [anon_sym_styles] = "styles",
  [anon_sym_action] = "action",
  [anon_sym_response] = "response",
  [anon_sym_EQ] = "=",
  [anon_sym_default] = "default",
  [sym_source_file] = "source_file",
  [sym_quoted] = "quoted",
  [sym_type_name] = "type_name",
  [sym_using] = "using",
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
  [sym_menu_child] = "menu_child",
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
  [sym_ext_size_group_widgets] = "ext_size_group_widgets",
  [sym__ext_size_group_widget] = "_ext_size_group_widget",
  [sym_ext_string_list_strings] = "ext_string_list_strings",
  [sym__ext_strings_list_item] = "_ext_strings_list_item",
  [sym_ext_styles] = "ext_styles",
  [sym_child_extension] = "child_extension",
  [sym_ext_response] = "ext_response",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_object_content_repeat1] = "object_content_repeat1",
  [aux_sym_signal_repeat1] = "signal_repeat1",
  [aux_sym_closure_expression_repeat1] = "closure_expression_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
  [aux_sym__flags_repeat1] = "_flags_repeat1",
  [aux_sym_menu_repeat1] = "menu_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym_ext_accessibility_repeat1] = "ext_accessibility_repeat1",
  [aux_sym_ext_adw_dialog_repeat1] = "ext_adw_dialog_repeat1",
  [aux_sym_ext_adw_dialog_response_repeat1] = "ext_adw_dialog_response_repeat1",
  [aux_sym_ext_adw_breakpoint_repeat1] = "ext_adw_breakpoint_repeat1",
  [aux_sym_ext_combo_box_items_repeat1] = "ext_combo_box_items_repeat1",
  [aux_sym_ext_file_filter_mime_types_repeat1] = "ext_file_filter_mime_types_repeat1",
  [aux_sym_ext_size_group_widgets_repeat1] = "ext_size_group_widgets_repeat1",
  [aux_sym_ext_string_list_strings_repeat1] = "ext_string_list_strings_repeat1",
  [aux_sym_ext_styles_repeat1] = "ext_styles_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [sym_number] = sym_number,
  [aux_sym_quoted_token1] = aux_sym_quoted_token1,
  [aux_sym_quoted_token2] = aux_sym_quoted_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_bidirectional] = anon_sym_bidirectional,
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
  [sym_comment] = sym_comment,
  [anon_sym_accessibility] = anon_sym_accessibility,
  [anon_sym_responses] = anon_sym_responses,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_setters] = anon_sym_setters,
  [anon_sym_items] = anon_sym_items,
  [anon_sym_mime_DASHtypes] = anon_sym_mime_DASHtypes,
  [anon_sym_patterns] = anon_sym_patterns,
  [anon_sym_suffixes] = anon_sym_suffixes,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_widgets] = anon_sym_widgets,
  [anon_sym_strings] = anon_sym_strings,
  [anon_sym_styles] = anon_sym_styles,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_default] = anon_sym_default,
  [sym_source_file] = sym_source_file,
  [sym_quoted] = sym_quoted,
  [sym_type_name] = sym_type_name,
  [sym_using] = sym_using,
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
  [sym_menu_child] = sym_menu_child,
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
  [sym_ext_size_group_widgets] = sym_ext_size_group_widgets,
  [sym__ext_size_group_widget] = sym__ext_size_group_widget,
  [sym_ext_string_list_strings] = sym_ext_string_list_strings,
  [sym__ext_strings_list_item] = sym__ext_strings_list_item,
  [sym_ext_styles] = sym_ext_styles,
  [sym_child_extension] = sym_child_extension,
  [sym_ext_response] = sym_ext_response,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_object_content_repeat1] = aux_sym_object_content_repeat1,
  [aux_sym_signal_repeat1] = aux_sym_signal_repeat1,
  [aux_sym_closure_expression_repeat1] = aux_sym_closure_expression_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
  [aux_sym__flags_repeat1] = aux_sym__flags_repeat1,
  [aux_sym_menu_repeat1] = aux_sym_menu_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym_ext_accessibility_repeat1] = aux_sym_ext_accessibility_repeat1,
  [aux_sym_ext_adw_dialog_repeat1] = aux_sym_ext_adw_dialog_repeat1,
  [aux_sym_ext_adw_dialog_response_repeat1] = aux_sym_ext_adw_dialog_response_repeat1,
  [aux_sym_ext_adw_breakpoint_repeat1] = aux_sym_ext_adw_breakpoint_repeat1,
  [aux_sym_ext_combo_box_items_repeat1] = aux_sym_ext_combo_box_items_repeat1,
  [aux_sym_ext_file_filter_mime_types_repeat1] = aux_sym_ext_file_filter_mime_types_repeat1,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_token1] = {
    .visible = false,
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
  [anon_sym_inverted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bidirectional] = {
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
  [sym_comment] = {
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
  [sym_menu_child] = {
    .visible = true,
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
  field_child_type = 1,
  field_condition = 2,
  field_content = 3,
  field_context = 4,
  field_detail = 5,
  field_flags = 6,
  field_handler = 7,
  field_id = 8,
  field_item = 9,
  field_name = 10,
  field_namespace = 11,
  field_object = 12,
  field_property = 13,
  field_string = 14,
  field_subclass = 15,
  field_value = 16,
  field_version = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child_type] = "child_type",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_context] = "context",
  [field_detail] = "detail",
  [field_flags] = "flags",
  [field_handler] = "handler",
  [field_id] = "id",
  [field_item] = "item",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_object] = "object",
  [field_property] = "property",
  [field_string] = "string",
  [field_subclass] = "subclass",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 4},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 4},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 3},
  [21] = {.index = 37, .length = 6},
  [22] = {.index = 43, .length = 2},
  [23] = {.index = 45, .length = 1},
  [24] = {.index = 46, .length = 1},
  [25] = {.index = 47, .length = 1},
  [26] = {.index = 48, .length = 2},
  [27] = {.index = 50, .length = 1},
  [28] = {.index = 51, .length = 1},
  [29] = {.index = 52, .length = 2},
  [30] = {.index = 54, .length = 2},
  [31] = {.index = 56, .length = 4},
  [32] = {.index = 60, .length = 4},
  [33] = {.index = 64, .length = 1},
  [34] = {.index = 65, .length = 2},
  [35] = {.index = 67, .length = 2},
  [36] = {.index = 69, .length = 1},
  [37] = {.index = 70, .length = 2},
  [38] = {.index = 72, .length = 2},
  [39] = {.index = 74, .length = 3},
  [40] = {.index = 77, .length = 1},
  [41] = {.index = 78, .length = 2},
  [42] = {.index = 80, .length = 2},
  [43] = {.index = 82, .length = 3},
  [44] = {.index = 85, .length = 3},
  [45] = {.index = 88, .length = 3},
  [46] = {.index = 91, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_name, 0},
  [2] =
    {field_name, 2},
    {field_namespace, 0},
  [4] =
    {field_content, 2},
    {field_name, 1},
  [6] =
    {field_content, 2},
    {field_id, 1},
    {field_name, 0},
  [9] =
    {field_child_type, 0, .inherited = true},
  [10] =
    {field_namespace, 1},
    {field_version, 2},
  [12] =
    {field_id, 1},
  [13] =
    {field_child_type, 1, .inherited = true},
  [14] =
    {field_child_type, 0, .inherited = true},
    {field_child_type, 1, .inherited = true},
  [16] =
    {field_content, 4},
    {field_name, 1},
    {field_subclass, 2},
    {field_subclass, 3},
  [20] =
    {field_value, 0},
  [21] =
    {field_item, 0},
  [22] =
    {field_id, 0},
  [23] =
    {field_name, 0},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_child_type, 1},
  [27] =
    {field_name, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [29] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [33] =
    {field_condition, 2},
  [34] =
    {field_object, 2, .inherited = true},
    {field_property, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [37] =
    {field_object, 0, .inherited = true},
    {field_object, 1, .inherited = true},
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [43] =
    {field_id, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [45] =
    {field_item, 2, .inherited = true},
  [46] =
    {field_id, 2, .inherited = true},
  [47] =
    {field_name, 2, .inherited = true},
  [48] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [50] =
    {field_name, 3},
  [51] =
    {field_id, 3},
  [52] =
    {field_id, 0},
    {field_value, 2},
  [54] =
    {field_id, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [56] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [60] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [64] =
    {field_item, 1, .inherited = true},
  [65] =
    {field_item, 2, .inherited = true},
    {field_item, 3, .inherited = true},
  [67] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [69] =
    {field_id, 1, .inherited = true},
  [70] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
  [72] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
  [74] =
    {field_flags, 3},
    {field_id, 0},
    {field_value, 2},
  [77] =
    {field_name, 1},
  [78] =
    {field_handler, 3},
    {field_name, 0},
  [80] =
    {field_context, 2},
    {field_string, 4},
  [82] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [85] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [88] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [91] =
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
  [86] = 79,
  [87] = 80,
  [88] = 77,
  [89] = 81,
  [90] = 84,
  [91] = 85,
  [92] = 83,
  [93] = 82,
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
  [118] = 117,
  [119] = 116,
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
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 19,
  [137] = 21,
  [138] = 18,
  [139] = 139,
  [140] = 20,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
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
  [190] = 173,
  [191] = 170,
  [192] = 165,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 168,
  [197] = 197,
  [198] = 198,
  [199] = 178,
  [200] = 200,
  [201] = 181,
  [202] = 202,
  [203] = 182,
  [204] = 180,
  [205] = 205,
  [206] = 160,
  [207] = 179,
  [208] = 177,
  [209] = 142,
  [210] = 210,
  [211] = 211,
  [212] = 175,
  [213] = 172,
  [214] = 174,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
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
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 231,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 95,
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
  [286] = 275,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 287,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 295,
  [301] = 298,
  [302] = 288,
  [303] = 296,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 299,
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
  [377] = 314,
  [378] = 378,
  [379] = 379,
  [380] = 375,
  [381] = 330,
  [382] = 382,
  [383] = 370,
  [384] = 384,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(218);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(373);
      if (lookahead == ')') ADVANCE(374);
      if (lookahead == '+') ADVANCE(384);
      if (lookahead == ',') ADVANCE(377);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead == ';') ADVANCE(365);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(441);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '\\') SKIP(211)
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '_') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '}') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(373);
      if (lookahead == ')') ADVANCE(374);
      if (lookahead == '+') ADVANCE(384);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 't') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '+') ADVANCE(384);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(221);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(391);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 't') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '+') ADVANCE(384);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(221);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(391);
      if (lookahead == 't') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(221);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '_') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == ')') ADVANCE(374);
      if (lookahead == ',') ADVANCE(377);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead == ';') ADVANCE(365);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(398);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '}') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(264);
      if (lookahead == '}') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(409);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '}') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '}') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(372);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(392);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 204:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(410);
      END_STATE();
    case 210:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 211:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(210)
      END_STATE();
    case 212:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(217)
      END_STATE();
    case 213:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(217)
      if (lookahead == '\r') SKIP(212)
      END_STATE();
    case 214:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(216)
      END_STATE();
    case 215:
      if (eof) ADVANCE(218);
      if (lookahead == '\n') SKIP(216)
      if (lookahead == '\r') SKIP(214)
      END_STATE();
    case 216:
      if (eof) ADVANCE(218);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(365);
      if (lookahead == '\\') SKIP(215)
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 't') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 217:
      if (eof) ADVANCE(218);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(440);
      if (lookahead == '\\') SKIP(213)
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(316);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 'y') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(409);
      if (lookahead == '\r') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(209);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(372);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 217},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 216},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 216},
  [108] = {.lex_state = 216},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 217},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 216},
  [137] = {.lex_state = 216},
  [138] = {.lex_state = 216},
  [139] = {.lex_state = 217},
  [140] = {.lex_state = 216},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 216},
  [145] = {.lex_state = 216},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 216},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 216},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 216},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 216},
  [170] = {.lex_state = 35},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 35},
  [176] = {.lex_state = 37},
  [177] = {.lex_state = 35},
  [178] = {.lex_state = 35},
  [179] = {.lex_state = 35},
  [180] = {.lex_state = 35},
  [181] = {.lex_state = 35},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 25},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 25},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 25},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 25},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 25},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 25},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 25},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 25},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 25},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 25},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 25},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 25},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 25},
  [254] = {.lex_state = 25},
  [255] = {.lex_state = 25},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 25},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 25},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 25},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 25},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 25},
  [292] = {.lex_state = 25},
  [293] = {.lex_state = 25},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 25},
  [298] = {.lex_state = 25},
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 25},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 25},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 25},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 217},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 25},
  [353] = {.lex_state = 26},
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
  [364] = {.lex_state = 25},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 25},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 25},
  [373] = {.lex_state = 25},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 25},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_quoted_token1] = ACTIONS(1),
    [aux_sym_quoted_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_accessibility] = ACTIONS(1),
    [anon_sym_responses] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_setters] = ACTIONS(1),
    [anon_sym_items] = ACTIONS(1),
    [anon_sym_mime_DASHtypes] = ACTIONS(1),
    [anon_sym_patterns] = ACTIONS(1),
    [anon_sym_suffixes] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_widgets] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(367),
    [sym_type_name] = STATE(231),
    [sym_using] = STATE(76),
    [sym_template] = STATE(107),
    [sym_object] = STATE(107),
    [sym_menu] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(76),
    [aux_sym_source_file_repeat2] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_accessibility,
    ACTIONS(27), 1,
      anon_sym_responses,
    ACTIONS(29), 1,
      anon_sym_condition,
    ACTIONS(31), 1,
      anon_sym_setters,
    ACTIONS(33), 1,
      anon_sym_items,
    ACTIONS(35), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(37), 1,
      anon_sym_patterns,
    ACTIONS(39), 1,
      anon_sym_suffixes,
    ACTIONS(41), 1,
      anon_sym_layout,
    ACTIONS(43), 1,
      anon_sym_widgets,
    ACTIONS(45), 1,
      anon_sym_strings,
    ACTIONS(47), 1,
      anon_sym_styles,
    STATE(237), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(4), 17,
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
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [81] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      anon_sym_template,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_accessibility,
    ACTIONS(66), 1,
      anon_sym_responses,
    ACTIONS(69), 1,
      anon_sym_condition,
    ACTIONS(72), 1,
      anon_sym_setters,
    ACTIONS(75), 1,
      anon_sym_items,
    ACTIONS(78), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(81), 1,
      anon_sym_patterns,
    ACTIONS(84), 1,
      anon_sym_suffixes,
    ACTIONS(87), 1,
      anon_sym_layout,
    ACTIONS(90), 1,
      anon_sym_widgets,
    ACTIONS(93), 1,
      anon_sym_strings,
    ACTIONS(96), 1,
      anon_sym_styles,
    STATE(237), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(3), 17,
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
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [162] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_accessibility,
    ACTIONS(27), 1,
      anon_sym_responses,
    ACTIONS(29), 1,
      anon_sym_condition,
    ACTIONS(31), 1,
      anon_sym_setters,
    ACTIONS(33), 1,
      anon_sym_items,
    ACTIONS(35), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(37), 1,
      anon_sym_patterns,
    ACTIONS(39), 1,
      anon_sym_suffixes,
    ACTIONS(41), 1,
      anon_sym_layout,
    ACTIONS(43), 1,
      anon_sym_widgets,
    ACTIONS(45), 1,
      anon_sym_strings,
    ACTIONS(47), 1,
      anon_sym_styles,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(3), 17,
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
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [243] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_accessibility,
    ACTIONS(27), 1,
      anon_sym_responses,
    ACTIONS(29), 1,
      anon_sym_condition,
    ACTIONS(31), 1,
      anon_sym_setters,
    ACTIONS(33), 1,
      anon_sym_items,
    ACTIONS(35), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(37), 1,
      anon_sym_patterns,
    ACTIONS(39), 1,
      anon_sym_suffixes,
    ACTIONS(41), 1,
      anon_sym_layout,
    ACTIONS(43), 1,
      anon_sym_widgets,
    ACTIONS(45), 1,
      anon_sym_strings,
    ACTIONS(47), 1,
      anon_sym_styles,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(3), 17,
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
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [324] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_accessibility,
    ACTIONS(27), 1,
      anon_sym_responses,
    ACTIONS(29), 1,
      anon_sym_condition,
    ACTIONS(31), 1,
      anon_sym_setters,
    ACTIONS(33), 1,
      anon_sym_items,
    ACTIONS(35), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(37), 1,
      anon_sym_patterns,
    ACTIONS(39), 1,
      anon_sym_suffixes,
    ACTIONS(41), 1,
      anon_sym_layout,
    ACTIONS(43), 1,
      anon_sym_widgets,
    ACTIONS(45), 1,
      anon_sym_strings,
    ACTIONS(47), 1,
      anon_sym_styles,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(5), 17,
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
      sym_ext_size_group_widgets,
      sym_ext_string_list_strings,
      sym_ext_styles,
      aux_sym_object_content_repeat1,
  [405] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      sym_ident,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(115), 1,
      anon_sym_bind,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    STATE(231), 1,
      sym_type_name,
    STATE(354), 1,
      sym__flags,
    STATE(355), 1,
      sym_translated,
    STATE(357), 1,
      sym_literal,
    STATE(358), 1,
      sym_object,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(356), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [465] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(121), 1,
      sym_ident,
    STATE(354), 1,
      sym__flags,
    STATE(355), 1,
      sym_translated,
    STATE(357), 1,
      sym_literal,
    STATE(366), 1,
      sym_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [511] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [555] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [599] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [643] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(121), 1,
      sym_ident,
    STATE(312), 1,
      sym_value,
    STATE(354), 1,
      sym__flags,
    STATE(355), 1,
      sym_translated,
    STATE(357), 1,
      sym_literal,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(135), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(139), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(143), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(147), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(151), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(155), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(159), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(163), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(167), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(171), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(175), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(179), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [989] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(276), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(183), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(187), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(191), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(195), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(199), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(203), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(207), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(211), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(215), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(219), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(223), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(227), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(231), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(235), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(239), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(243), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(247), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(251), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(255), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(259), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(263), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(267), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(271), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(275), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(279), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(283), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1680] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(287), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(291), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(295), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(299), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(303), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(307), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(311), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(315), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(319), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(323), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(327), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(331), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(335), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(339), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(343), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(347), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(351), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(355), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(359), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(363), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(367), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(371), 14,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [2312] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_using,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_type_name,
    STATE(129), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(104), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2347] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2377] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_ident,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_section,
    ACTIONS(395), 1,
      anon_sym_submenu,
    ACTIONS(398), 1,
      anon_sym_item,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2407] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2437] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2467] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2497] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2557] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(93), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2587] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(88), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2617] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2647] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2677] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2707] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2737] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2767] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(77), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2797] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(80), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_ident,
    ACTIONS(381), 1,
      anon_sym_section,
    ACTIONS(383), 1,
      anon_sym_submenu,
    ACTIONS(385), 1,
      anon_sym_item,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(170), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2857] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(431), 1,
      sym_ident,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym_string_value,
    STATE(290), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 11,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
      anon_sym_RBRACK,
  [2905] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(431), 1,
      sym_ident,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      sym__ext_combo_box_item,
    STATE(274), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [2936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_as,
    STATE(101), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(441), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [2959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_as,
    STATE(101), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(445), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [2982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_as,
    STATE(97), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(447), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3005] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(431), 1,
      sym_ident,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym_string_value,
    STATE(290), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DOT,
    ACTIONS(456), 1,
      anon_sym_as,
    STATE(101), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(454), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_as,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(459), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      anon_sym_section,
    ACTIONS(465), 1,
      anon_sym_submenu,
    ACTIONS(467), 1,
      anon_sym_item,
    STATE(113), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(191), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3108] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3136] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_section,
    ACTIONS(465), 1,
      anon_sym_submenu,
    ACTIONS(467), 1,
      anon_sym_item,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(103), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(191), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(230), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3188] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_template,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym_ident,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_template,
    ACTIONS(490), 1,
      anon_sym_menu,
    STATE(231), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(289), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(289), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_section,
    ACTIONS(465), 1,
      anon_sym_submenu,
    ACTIONS(467), 1,
      anon_sym_item,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(191), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_section,
    ACTIONS(465), 1,
      anon_sym_submenu,
    ACTIONS(467), 1,
      anon_sym_item,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(113), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(191), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      anon_sym_section,
    ACTIONS(506), 1,
      anon_sym_submenu,
    ACTIONS(509), 1,
      anon_sym_item,
    STATE(113), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(191), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(431), 1,
      sym_ident,
    STATE(274), 1,
      sym_string_value,
    STATE(290), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(289), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3425] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3500] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(210), 1,
      sym_string_value,
    ACTIONS(522), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(281), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(365), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(287), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_using,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(129), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(534), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3717] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(294), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(154), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      aux_sym__flags_repeat1,
    ACTIONS(547), 2,
      sym_ident,
      anon_sym_LBRACE,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(557), 4,
      sym_ident,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_COLON_COLON,
    ACTIONS(563), 1,
      anon_sym_EQ_GT,
    ACTIONS(547), 2,
      sym_ident,
      anon_sym_LBRACE,
  [3891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(573), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(577), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym__ext_file_filter_item,
    STATE(273), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [3958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      aux_sym_binding_repeat1,
    ACTIONS(583), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym__ext_file_filter_item,
    STATE(273), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [3990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_ext_styles_repeat1,
    STATE(229), 1,
      sym_quoted,
    ACTIONS(587), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      sym__ext_file_filter_item,
    STATE(273), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(596), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_ext_styles_repeat1,
    STATE(229), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(602), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(547), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(614), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(620), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(626), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_ext_styles_repeat1,
    STATE(229), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(644), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    ACTIONS(646), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      aux_sym_binding_repeat1,
    ACTIONS(652), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [4327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(654), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(662), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(666), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_ident,
    ACTIONS(672), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(674), 1,
      anon_sym_action,
    STATE(315), 1,
      sym_ext_response,
    STATE(318), 1,
      sym_child_extension,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(684), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      aux_sym_binding_repeat1,
    ACTIONS(702), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [4491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(707), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_ident,
    STATE(185), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_ident,
    STATE(185), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(70), 1,
      sym_object,
    STATE(237), 1,
      sym_type_name,
  [4549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(50), 1,
      sym_object,
    STATE(237), 1,
      sym_type_name,
  [4565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(273), 1,
      sym_quoted,
    STATE(277), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(707), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(707), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      aux_sym_signal_repeat1,
    ACTIONS(728), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      aux_sym_signal_repeat1,
    ACTIONS(732), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(71), 1,
      sym_object,
    STATE(237), 1,
      sym_type_name,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      aux_sym_signal_repeat1,
    ACTIONS(736), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_ident,
    STATE(186), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(742), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      aux_sym_signal_repeat1,
    ACTIONS(746), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(707), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(752), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(313), 1,
      sym_type_name,
  [4904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym__ext_size_group_widget,
  [4917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_PIPE,
    STATE(221), 1,
      aux_sym__flags_repeat1,
  [4930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_closure_expression_repeat1,
  [4943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    STATE(221), 1,
      aux_sym__flags_repeat1,
  [4956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      aux_sym_ext_accessibility_repeat1,
  [4969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(368), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ident,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      sym_ext_adw_dialog_response,
  [4993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(342), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_closure_expression_repeat1,
  [5030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(251), 1,
      sym_type_name,
  [5043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 3,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
      anon_sym_RBRACK,
  [5052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_ident,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_object_content,
  [5078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(282), 1,
      sym_type_name,
  [5104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      aux_sym__flags_repeat1,
  [5117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_ident,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_ext_accessibility_repeat1,
  [5130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ident,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym_ext_adw_dialog_response,
  [5143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_ident,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_object_content,
  [5156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_ext_accessibility_repeat1,
  [5169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ident,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym_ext_adw_dialog_response,
  [5182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_ext_accessibility_repeat1,
  [5208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      aux_sym_ext_accessibility_repeat1,
  [5256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(311), 1,
      sym_type_name,
  [5308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_object_content,
  [5334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(718), 1,
      sym_ident,
    STATE(278), 1,
      sym_type_name,
  [5360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      sym__ext_size_group_widget,
  [5373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_ident,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      sym__ext_size_group_widget,
  [5464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(371), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(308), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_closure_expression_repeat1,
  [5551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ident,
    STATE(283), 1,
      sym_ext_adw_dialog_response,
  [5574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
    ACTIONS(908), 1,
      anon_sym_default,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_object_content,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_object_content,
  [5644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    ACTIONS(920), 1,
      anon_sym_default,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_object_content,
  [5680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_object_content,
  [5714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
  [5724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_ident,
    STATE(383), 1,
      sym_menu_attribute,
  [5734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_ident,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [5760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_ident,
    ACTIONS(944), 1,
      anon_sym_LBRACE,
  [5770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(948), 1,
      sym_number,
  [5780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      anon_sym_COMMA,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [5800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LBRACE,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
  [5810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_ident,
    STATE(272), 1,
      sym__ext_size_group_widget,
  [5820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_ident,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
  [5830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_ident,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
  [5840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      anon_sym_COMMA,
  [5850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(976), 1,
      anon_sym_LBRACE,
  [5860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_ident,
    STATE(370), 1,
      sym_menu_attribute,
  [5870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
  [5880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_SEMI,
  [5890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_ident,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_ident,
    ACTIONS(992), 1,
      anon_sym_LBRACE,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
  [5925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_ident,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_ident,
  [5939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_GT,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_GT,
  [5960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
  [5974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_DOLLAR,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [6002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_response,
  [6009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_ident,
  [6016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
  [6023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
  [6030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_LPAREN,
  [6051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_DOLLAR,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
  [6065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_ident,
  [6072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
  [6079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
  [6086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LBRACE,
  [6093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LBRACK,
  [6100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
  [6107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
  [6114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_COLON,
  [6121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LBRACK,
  [6128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_COLON,
  [6135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LBRACK,
  [6149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_DOT,
  [6156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
  [6163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
  [6170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_LBRACK,
  [6177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
  [6184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_COLON,
  [6191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LBRACE,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
  [6205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_COLON,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_EQ,
  [6219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
  [6233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_EQ_GT,
  [6240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [6247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [6254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
  [6261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [6268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SEMI,
  [6275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_number,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_COLON,
  [6289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LBRACK,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_number,
  [6303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LT,
  [6310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_ident,
  [6317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
  [6331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      ts_builtin_sym_end,
  [6338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
  [6345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_ident,
  [6352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RBRACE,
  [6359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
  [6366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_ident,
  [6373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym_ident,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_LPAREN,
  [6387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_LBRACE,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
  [6401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [6408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_LT,
  [6415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_ident,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LBRACE,
  [6429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LBRACE,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [6443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
  [6450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 465,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 555,
  [SMALL_STATE(11)] = 599,
  [SMALL_STATE(12)] = 643,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 714,
  [SMALL_STATE(15)] = 739,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 789,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 839,
  [SMALL_STATE(20)] = 864,
  [SMALL_STATE(21)] = 889,
  [SMALL_STATE(22)] = 914,
  [SMALL_STATE(23)] = 939,
  [SMALL_STATE(24)] = 964,
  [SMALL_STATE(25)] = 989,
  [SMALL_STATE(26)] = 1030,
  [SMALL_STATE(27)] = 1055,
  [SMALL_STATE(28)] = 1080,
  [SMALL_STATE(29)] = 1105,
  [SMALL_STATE(30)] = 1130,
  [SMALL_STATE(31)] = 1155,
  [SMALL_STATE(32)] = 1180,
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1230,
  [SMALL_STATE(35)] = 1255,
  [SMALL_STATE(36)] = 1280,
  [SMALL_STATE(37)] = 1305,
  [SMALL_STATE(38)] = 1330,
  [SMALL_STATE(39)] = 1355,
  [SMALL_STATE(40)] = 1380,
  [SMALL_STATE(41)] = 1405,
  [SMALL_STATE(42)] = 1430,
  [SMALL_STATE(43)] = 1455,
  [SMALL_STATE(44)] = 1480,
  [SMALL_STATE(45)] = 1505,
  [SMALL_STATE(46)] = 1530,
  [SMALL_STATE(47)] = 1555,
  [SMALL_STATE(48)] = 1580,
  [SMALL_STATE(49)] = 1605,
  [SMALL_STATE(50)] = 1630,
  [SMALL_STATE(51)] = 1655,
  [SMALL_STATE(52)] = 1680,
  [SMALL_STATE(53)] = 1721,
  [SMALL_STATE(54)] = 1746,
  [SMALL_STATE(55)] = 1771,
  [SMALL_STATE(56)] = 1796,
  [SMALL_STATE(57)] = 1821,
  [SMALL_STATE(58)] = 1846,
  [SMALL_STATE(59)] = 1871,
  [SMALL_STATE(60)] = 1896,
  [SMALL_STATE(61)] = 1921,
  [SMALL_STATE(62)] = 1946,
  [SMALL_STATE(63)] = 1971,
  [SMALL_STATE(64)] = 1996,
  [SMALL_STATE(65)] = 2021,
  [SMALL_STATE(66)] = 2046,
  [SMALL_STATE(67)] = 2071,
  [SMALL_STATE(68)] = 2096,
  [SMALL_STATE(69)] = 2121,
  [SMALL_STATE(70)] = 2146,
  [SMALL_STATE(71)] = 2171,
  [SMALL_STATE(72)] = 2196,
  [SMALL_STATE(73)] = 2221,
  [SMALL_STATE(74)] = 2262,
  [SMALL_STATE(75)] = 2287,
  [SMALL_STATE(76)] = 2312,
  [SMALL_STATE(77)] = 2347,
  [SMALL_STATE(78)] = 2377,
  [SMALL_STATE(79)] = 2407,
  [SMALL_STATE(80)] = 2437,
  [SMALL_STATE(81)] = 2467,
  [SMALL_STATE(82)] = 2497,
  [SMALL_STATE(83)] = 2527,
  [SMALL_STATE(84)] = 2557,
  [SMALL_STATE(85)] = 2587,
  [SMALL_STATE(86)] = 2617,
  [SMALL_STATE(87)] = 2647,
  [SMALL_STATE(88)] = 2677,
  [SMALL_STATE(89)] = 2707,
  [SMALL_STATE(90)] = 2737,
  [SMALL_STATE(91)] = 2767,
  [SMALL_STATE(92)] = 2797,
  [SMALL_STATE(93)] = 2827,
  [SMALL_STATE(94)] = 2857,
  [SMALL_STATE(95)] = 2888,
  [SMALL_STATE(96)] = 2905,
  [SMALL_STATE(97)] = 2936,
  [SMALL_STATE(98)] = 2959,
  [SMALL_STATE(99)] = 2982,
  [SMALL_STATE(100)] = 3005,
  [SMALL_STATE(101)] = 3036,
  [SMALL_STATE(102)] = 3059,
  [SMALL_STATE(103)] = 3082,
  [SMALL_STATE(104)] = 3108,
  [SMALL_STATE(105)] = 3136,
  [SMALL_STATE(106)] = 3162,
  [SMALL_STATE(107)] = 3188,
  [SMALL_STATE(108)] = 3216,
  [SMALL_STATE(109)] = 3244,
  [SMALL_STATE(110)] = 3270,
  [SMALL_STATE(111)] = 3296,
  [SMALL_STATE(112)] = 3322,
  [SMALL_STATE(113)] = 3348,
  [SMALL_STATE(114)] = 3374,
  [SMALL_STATE(115)] = 3402,
  [SMALL_STATE(116)] = 3425,
  [SMALL_STATE(117)] = 3450,
  [SMALL_STATE(118)] = 3475,
  [SMALL_STATE(119)] = 3500,
  [SMALL_STATE(120)] = 3525,
  [SMALL_STATE(121)] = 3539,
  [SMALL_STATE(122)] = 3561,
  [SMALL_STATE(123)] = 3575,
  [SMALL_STATE(124)] = 3597,
  [SMALL_STATE(125)] = 3619,
  [SMALL_STATE(126)] = 3633,
  [SMALL_STATE(127)] = 3655,
  [SMALL_STATE(128)] = 3669,
  [SMALL_STATE(129)] = 3683,
  [SMALL_STATE(130)] = 3703,
  [SMALL_STATE(131)] = 3717,
  [SMALL_STATE(132)] = 3739,
  [SMALL_STATE(133)] = 3753,
  [SMALL_STATE(134)] = 3767,
  [SMALL_STATE(135)] = 3781,
  [SMALL_STATE(136)] = 3801,
  [SMALL_STATE(137)] = 3815,
  [SMALL_STATE(138)] = 3829,
  [SMALL_STATE(139)] = 3843,
  [SMALL_STATE(140)] = 3857,
  [SMALL_STATE(141)] = 3871,
  [SMALL_STATE(142)] = 3891,
  [SMALL_STATE(143)] = 3904,
  [SMALL_STATE(144)] = 3915,
  [SMALL_STATE(145)] = 3928,
  [SMALL_STATE(146)] = 3941,
  [SMALL_STATE(147)] = 3958,
  [SMALL_STATE(148)] = 3973,
  [SMALL_STATE(149)] = 3990,
  [SMALL_STATE(150)] = 4007,
  [SMALL_STATE(151)] = 4024,
  [SMALL_STATE(152)] = 4037,
  [SMALL_STATE(153)] = 4054,
  [SMALL_STATE(154)] = 4067,
  [SMALL_STATE(155)] = 4078,
  [SMALL_STATE(156)] = 4091,
  [SMALL_STATE(157)] = 4108,
  [SMALL_STATE(158)] = 4119,
  [SMALL_STATE(159)] = 4136,
  [SMALL_STATE(160)] = 4153,
  [SMALL_STATE(161)] = 4166,
  [SMALL_STATE(162)] = 4183,
  [SMALL_STATE(163)] = 4196,
  [SMALL_STATE(164)] = 4209,
  [SMALL_STATE(165)] = 4226,
  [SMALL_STATE(166)] = 4239,
  [SMALL_STATE(167)] = 4256,
  [SMALL_STATE(168)] = 4273,
  [SMALL_STATE(169)] = 4286,
  [SMALL_STATE(170)] = 4299,
  [SMALL_STATE(171)] = 4312,
  [SMALL_STATE(172)] = 4327,
  [SMALL_STATE(173)] = 4340,
  [SMALL_STATE(174)] = 4353,
  [SMALL_STATE(175)] = 4366,
  [SMALL_STATE(176)] = 4379,
  [SMALL_STATE(177)] = 4398,
  [SMALL_STATE(178)] = 4411,
  [SMALL_STATE(179)] = 4424,
  [SMALL_STATE(180)] = 4437,
  [SMALL_STATE(181)] = 4450,
  [SMALL_STATE(182)] = 4463,
  [SMALL_STATE(183)] = 4476,
  [SMALL_STATE(184)] = 4491,
  [SMALL_STATE(185)] = 4505,
  [SMALL_STATE(186)] = 4519,
  [SMALL_STATE(187)] = 4533,
  [SMALL_STATE(188)] = 4549,
  [SMALL_STATE(189)] = 4565,
  [SMALL_STATE(190)] = 4579,
  [SMALL_STATE(191)] = 4589,
  [SMALL_STATE(192)] = 4599,
  [SMALL_STATE(193)] = 4609,
  [SMALL_STATE(194)] = 4623,
  [SMALL_STATE(195)] = 4633,
  [SMALL_STATE(196)] = 4647,
  [SMALL_STATE(197)] = 4657,
  [SMALL_STATE(198)] = 4671,
  [SMALL_STATE(199)] = 4685,
  [SMALL_STATE(200)] = 4695,
  [SMALL_STATE(201)] = 4711,
  [SMALL_STATE(202)] = 4721,
  [SMALL_STATE(203)] = 4735,
  [SMALL_STATE(204)] = 4745,
  [SMALL_STATE(205)] = 4755,
  [SMALL_STATE(206)] = 4765,
  [SMALL_STATE(207)] = 4775,
  [SMALL_STATE(208)] = 4785,
  [SMALL_STATE(209)] = 4795,
  [SMALL_STATE(210)] = 4805,
  [SMALL_STATE(211)] = 4819,
  [SMALL_STATE(212)] = 4833,
  [SMALL_STATE(213)] = 4843,
  [SMALL_STATE(214)] = 4853,
  [SMALL_STATE(215)] = 4863,
  [SMALL_STATE(216)] = 4877,
  [SMALL_STATE(217)] = 4891,
  [SMALL_STATE(218)] = 4904,
  [SMALL_STATE(219)] = 4917,
  [SMALL_STATE(220)] = 4930,
  [SMALL_STATE(221)] = 4943,
  [SMALL_STATE(222)] = 4956,
  [SMALL_STATE(223)] = 4969,
  [SMALL_STATE(224)] = 4980,
  [SMALL_STATE(225)] = 4993,
  [SMALL_STATE(226)] = 5004,
  [SMALL_STATE(227)] = 5017,
  [SMALL_STATE(228)] = 5030,
  [SMALL_STATE(229)] = 5043,
  [SMALL_STATE(230)] = 5052,
  [SMALL_STATE(231)] = 5065,
  [SMALL_STATE(232)] = 5078,
  [SMALL_STATE(233)] = 5091,
  [SMALL_STATE(234)] = 5104,
  [SMALL_STATE(235)] = 5117,
  [SMALL_STATE(236)] = 5130,
  [SMALL_STATE(237)] = 5143,
  [SMALL_STATE(238)] = 5156,
  [SMALL_STATE(239)] = 5169,
  [SMALL_STATE(240)] = 5182,
  [SMALL_STATE(241)] = 5195,
  [SMALL_STATE(242)] = 5208,
  [SMALL_STATE(243)] = 5221,
  [SMALL_STATE(244)] = 5230,
  [SMALL_STATE(245)] = 5243,
  [SMALL_STATE(246)] = 5256,
  [SMALL_STATE(247)] = 5269,
  [SMALL_STATE(248)] = 5282,
  [SMALL_STATE(249)] = 5295,
  [SMALL_STATE(250)] = 5308,
  [SMALL_STATE(251)] = 5321,
  [SMALL_STATE(252)] = 5334,
  [SMALL_STATE(253)] = 5347,
  [SMALL_STATE(254)] = 5360,
  [SMALL_STATE(255)] = 5373,
  [SMALL_STATE(256)] = 5386,
  [SMALL_STATE(257)] = 5399,
  [SMALL_STATE(258)] = 5412,
  [SMALL_STATE(259)] = 5425,
  [SMALL_STATE(260)] = 5438,
  [SMALL_STATE(261)] = 5451,
  [SMALL_STATE(262)] = 5464,
  [SMALL_STATE(263)] = 5475,
  [SMALL_STATE(264)] = 5488,
  [SMALL_STATE(265)] = 5501,
  [SMALL_STATE(266)] = 5512,
  [SMALL_STATE(267)] = 5525,
  [SMALL_STATE(268)] = 5538,
  [SMALL_STATE(269)] = 5551,
  [SMALL_STATE(270)] = 5564,
  [SMALL_STATE(271)] = 5574,
  [SMALL_STATE(272)] = 5584,
  [SMALL_STATE(273)] = 5592,
  [SMALL_STATE(274)] = 5600,
  [SMALL_STATE(275)] = 5608,
  [SMALL_STATE(276)] = 5618,
  [SMALL_STATE(277)] = 5626,
  [SMALL_STATE(278)] = 5634,
  [SMALL_STATE(279)] = 5644,
  [SMALL_STATE(280)] = 5654,
  [SMALL_STATE(281)] = 5662,
  [SMALL_STATE(282)] = 5670,
  [SMALL_STATE(283)] = 5680,
  [SMALL_STATE(284)] = 5688,
  [SMALL_STATE(285)] = 5696,
  [SMALL_STATE(286)] = 5704,
  [SMALL_STATE(287)] = 5714,
  [SMALL_STATE(288)] = 5724,
  [SMALL_STATE(289)] = 5734,
  [SMALL_STATE(290)] = 5742,
  [SMALL_STATE(291)] = 5750,
  [SMALL_STATE(292)] = 5760,
  [SMALL_STATE(293)] = 5770,
  [SMALL_STATE(294)] = 5780,
  [SMALL_STATE(295)] = 5790,
  [SMALL_STATE(296)] = 5800,
  [SMALL_STATE(297)] = 5810,
  [SMALL_STATE(298)] = 5820,
  [SMALL_STATE(299)] = 5830,
  [SMALL_STATE(300)] = 5840,
  [SMALL_STATE(301)] = 5850,
  [SMALL_STATE(302)] = 5860,
  [SMALL_STATE(303)] = 5870,
  [SMALL_STATE(304)] = 5880,
  [SMALL_STATE(305)] = 5890,
  [SMALL_STATE(306)] = 5900,
  [SMALL_STATE(307)] = 5908,
  [SMALL_STATE(308)] = 5918,
  [SMALL_STATE(309)] = 5925,
  [SMALL_STATE(310)] = 5932,
  [SMALL_STATE(311)] = 5939,
  [SMALL_STATE(312)] = 5946,
  [SMALL_STATE(313)] = 5953,
  [SMALL_STATE(314)] = 5960,
  [SMALL_STATE(315)] = 5967,
  [SMALL_STATE(316)] = 5974,
  [SMALL_STATE(317)] = 5981,
  [SMALL_STATE(318)] = 5988,
  [SMALL_STATE(319)] = 5995,
  [SMALL_STATE(320)] = 6002,
  [SMALL_STATE(321)] = 6009,
  [SMALL_STATE(322)] = 6016,
  [SMALL_STATE(323)] = 6023,
  [SMALL_STATE(324)] = 6030,
  [SMALL_STATE(325)] = 6037,
  [SMALL_STATE(326)] = 6044,
  [SMALL_STATE(327)] = 6051,
  [SMALL_STATE(328)] = 6058,
  [SMALL_STATE(329)] = 6065,
  [SMALL_STATE(330)] = 6072,
  [SMALL_STATE(331)] = 6079,
  [SMALL_STATE(332)] = 6086,
  [SMALL_STATE(333)] = 6093,
  [SMALL_STATE(334)] = 6100,
  [SMALL_STATE(335)] = 6107,
  [SMALL_STATE(336)] = 6114,
  [SMALL_STATE(337)] = 6121,
  [SMALL_STATE(338)] = 6128,
  [SMALL_STATE(339)] = 6135,
  [SMALL_STATE(340)] = 6142,
  [SMALL_STATE(341)] = 6149,
  [SMALL_STATE(342)] = 6156,
  [SMALL_STATE(343)] = 6163,
  [SMALL_STATE(344)] = 6170,
  [SMALL_STATE(345)] = 6177,
  [SMALL_STATE(346)] = 6184,
  [SMALL_STATE(347)] = 6191,
  [SMALL_STATE(348)] = 6198,
  [SMALL_STATE(349)] = 6205,
  [SMALL_STATE(350)] = 6212,
  [SMALL_STATE(351)] = 6219,
  [SMALL_STATE(352)] = 6226,
  [SMALL_STATE(353)] = 6233,
  [SMALL_STATE(354)] = 6240,
  [SMALL_STATE(355)] = 6247,
  [SMALL_STATE(356)] = 6254,
  [SMALL_STATE(357)] = 6261,
  [SMALL_STATE(358)] = 6268,
  [SMALL_STATE(359)] = 6275,
  [SMALL_STATE(360)] = 6282,
  [SMALL_STATE(361)] = 6289,
  [SMALL_STATE(362)] = 6296,
  [SMALL_STATE(363)] = 6303,
  [SMALL_STATE(364)] = 6310,
  [SMALL_STATE(365)] = 6317,
  [SMALL_STATE(366)] = 6324,
  [SMALL_STATE(367)] = 6331,
  [SMALL_STATE(368)] = 6338,
  [SMALL_STATE(369)] = 6345,
  [SMALL_STATE(370)] = 6352,
  [SMALL_STATE(371)] = 6359,
  [SMALL_STATE(372)] = 6366,
  [SMALL_STATE(373)] = 6373,
  [SMALL_STATE(374)] = 6380,
  [SMALL_STATE(375)] = 6387,
  [SMALL_STATE(376)] = 6394,
  [SMALL_STATE(377)] = 6401,
  [SMALL_STATE(378)] = 6408,
  [SMALL_STATE(379)] = 6415,
  [SMALL_STATE(380)] = 6422,
  [SMALL_STATE(381)] = 6429,
  [SMALL_STATE(382)] = 6436,
  [SMALL_STATE(383)] = 6443,
  [SMALL_STATE(384)] = 6450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(141),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(373),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(233),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(176),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(332),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(333),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(334),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(335),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(339),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(340),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(344),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(345),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(347),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(337),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(348),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(361),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 46),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 46),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 45),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 45),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 46),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 46),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 43),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 43),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 45),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 45),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 41),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 41),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 43),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 43),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 41),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 41),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 37),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 37),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 34),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 34),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 34),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 34),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 34),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 34),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 31),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 31),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 37),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 37),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 34),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 34),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 34),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 34),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 34),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 34),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 31),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 31),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 16),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 16),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 15),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 15),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(336),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(299),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(301),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(303),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(379),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(378),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(155),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(373),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(228),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(292),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(307),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(298),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(296),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 40),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 40),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 40),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(372),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 40),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 6),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 6),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 7),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 7),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 26), SHIFT_REPEAT(95),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 26),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 7),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 7),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 42),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 14),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 14),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(183),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(185),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 39),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 29),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(216),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(310),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1, .production_id = 14),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18), SHIFT_REPEAT(349),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(270),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 32), SHIFT_REPEAT(114),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 32),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 35), SHIFT_REPEAT(189),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 35),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21), SHIFT_REPEAT(341),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 38), SHIFT_REPEAT(297),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 38),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(115),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(25),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 28),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 12),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 11),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 27),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 44),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 29),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 13),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 15),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 28),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 27),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

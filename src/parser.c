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
#define STATE_COUNT 374
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 45

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
  sym_source_file = 53,
  sym_quoted = 54,
  sym_type_name = 55,
  sym_using = 56,
  sym_template = 57,
  sym_object = 58,
  sym_object_content = 59,
  sym_signal = 60,
  sym_property = 61,
  sym_closure_expression = 62,
  sym_lookup_expression = 63,
  sym_cast_expression = 64,
  sym_literal = 65,
  sym__type_literal = 66,
  sym__quoted_literal = 67,
  sym__number_literal = 68,
  sym__ident_literal = 69,
  sym__expression = 70,
  sym_binding = 71,
  sym_object_value = 72,
  sym_value = 73,
  sym_translated = 74,
  sym__flags = 75,
  sym__child = 76,
  sym_menu = 77,
  sym_menu_child = 78,
  sym_menu_section = 79,
  sym_menu_submenu = 80,
  sym_menu_item = 81,
  sym_menu_attribute = 82,
  sym_string_value = 83,
  sym_menu_item_shorthand = 84,
  sym__extension = 85,
  sym_ext_accessibility = 86,
  sym_ext_adw_dialog = 87,
  sym_ext_adw_dialog_response = 88,
  sym_ext_adw_breakpoint_condition = 89,
  sym_ext_adw_breakpoint = 90,
  sym_ext_combo_box_items = 91,
  sym__ext_combo_box_item = 92,
  sym_ext_file_filter_mime_types = 93,
  sym_ext_file_filter_patterns = 94,
  sym_ext_file_filter_suffixes = 95,
  sym__ext_file_filter_item = 96,
  sym_ext_layout = 97,
  sym_ext_list_item_factory = 98,
  sym_ext_size_group_widgets = 99,
  sym__ext_size_group_widget = 100,
  sym_ext_string_list_strings = 101,
  sym__ext_strings_list_item = 102,
  sym_ext_styles = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_source_file_repeat2 = 105,
  aux_sym_object_content_repeat1 = 106,
  aux_sym_signal_repeat1 = 107,
  aux_sym_closure_expression_repeat1 = 108,
  aux_sym__expression_repeat1 = 109,
  aux_sym_binding_repeat1 = 110,
  aux_sym__flags_repeat1 = 111,
  aux_sym_menu_repeat1 = 112,
  aux_sym_menu_section_repeat1 = 113,
  aux_sym_ext_accessibility_repeat1 = 114,
  aux_sym_ext_adw_dialog_repeat1 = 115,
  aux_sym_ext_adw_dialog_response_repeat1 = 116,
  aux_sym_ext_adw_breakpoint_repeat1 = 117,
  aux_sym_ext_combo_box_items_repeat1 = 118,
  aux_sym_ext_file_filter_mime_types_repeat1 = 119,
  aux_sym_ext_size_group_widgets_repeat1 = 120,
  aux_sym_ext_string_list_strings_repeat1 = 121,
  aux_sym_ext_styles_repeat1 = 122,
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
  [27] = {.index = 50, .length = 2},
  [28] = {.index = 52, .length = 2},
  [29] = {.index = 54, .length = 4},
  [30] = {.index = 58, .length = 4},
  [31] = {.index = 62, .length = 1},
  [32] = {.index = 63, .length = 2},
  [33] = {.index = 65, .length = 2},
  [34] = {.index = 67, .length = 1},
  [35] = {.index = 68, .length = 2},
  [36] = {.index = 70, .length = 2},
  [37] = {.index = 72, .length = 3},
  [38] = {.index = 75, .length = 1},
  [39] = {.index = 76, .length = 2},
  [40] = {.index = 78, .length = 2},
  [41] = {.index = 80, .length = 3},
  [42] = {.index = 83, .length = 3},
  [43] = {.index = 86, .length = 3},
  [44] = {.index = 89, .length = 4},
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
    {field_id, 0},
    {field_value, 2},
  [52] =
    {field_id, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [54] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [58] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [62] =
    {field_item, 1, .inherited = true},
  [63] =
    {field_item, 2, .inherited = true},
    {field_item, 3, .inherited = true},
  [65] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [67] =
    {field_id, 1, .inherited = true},
  [68] =
    {field_id, 2, .inherited = true},
    {field_id, 3, .inherited = true},
  [70] =
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
  [72] =
    {field_flags, 3},
    {field_id, 0},
    {field_value, 2},
  [75] =
    {field_name, 1},
  [76] =
    {field_handler, 3},
    {field_name, 0},
  [78] =
    {field_context, 2},
    {field_string, 4},
  [80] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [83] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [86] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [89] =
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
  [78] = 76,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 80,
  [88] = 77,
  [89] = 83,
  [90] = 81,
  [91] = 82,
  [92] = 85,
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
  [116] = 115,
  [117] = 117,
  [118] = 114,
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
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 27,
  [136] = 25,
  [137] = 137,
  [138] = 24,
  [139] = 26,
  [140] = 140,
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
  [182] = 153,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 160,
  [188] = 188,
  [189] = 142,
  [190] = 190,
  [191] = 191,
  [192] = 156,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 147,
  [198] = 159,
  [199] = 199,
  [200] = 154,
  [201] = 152,
  [202] = 202,
  [203] = 146,
  [204] = 204,
  [205] = 148,
  [206] = 144,
  [207] = 149,
  [208] = 208,
  [209] = 209,
  [210] = 151,
  [211] = 143,
  [212] = 165,
  [213] = 213,
  [214] = 95,
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
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 234,
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
  [280] = 275,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 267,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 271,
  [292] = 292,
  [293] = 293,
  [294] = 281,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 286,
  [301] = 269,
  [302] = 274,
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
  [359] = 331,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 313,
  [367] = 367,
  [368] = 368,
  [369] = 324,
  [370] = 322,
  [371] = 371,
  [372] = 372,
  [373] = 373,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == ';') ADVANCE(345);
      if (lookahead == '<') ADVANCE(359);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == '[') ADVANCE(375);
      if (lookahead == '\\') SKIP(196)
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '{') ADVANCE(349);
      if (lookahead == '|') ADVANCE(374);
      if (lookahead == '}') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
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
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
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
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 't') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 't') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(371);
      if (lookahead == 't') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == ';') ADVANCE(345);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(360);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '{') ADVANCE(349);
      if (lookahead == '|') ADVANCE(374);
      if (lookahead == '}') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(375);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == 'w') ADVANCE(248);
      if (lookahead == '}') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(389);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '}') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '}') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'i') ADVANCE(282);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(352);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 189:
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 194:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(389);
      if (lookahead == '\r') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(390);
      END_STATE();
    case 195:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 196:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(195)
      END_STATE();
    case 197:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(202)
      END_STATE();
    case 198:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(202)
      if (lookahead == '\r') SKIP(197)
      END_STATE();
    case 199:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(201)
      END_STATE();
    case 200:
      if (eof) ADVANCE(203);
      if (lookahead == '\n') SKIP(201)
      if (lookahead == '\r') SKIP(199)
      END_STATE();
    case 201:
      if (eof) ADVANCE(203);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(345);
      if (lookahead == '\\') SKIP(200)
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 't') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(198)
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 'y') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'x') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(389);
      if (lookahead == '\r') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(194);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 202},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
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
  [52] = {.lex_state = 26},
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
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 202},
  [76] = {.lex_state = 35},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 201},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 201},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 201},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 0},
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
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 202},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 201},
  [136] = {.lex_state = 201},
  [137] = {.lex_state = 202},
  [138] = {.lex_state = 201},
  [139] = {.lex_state = 201},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 201},
  [163] = {.lex_state = 201},
  [164] = {.lex_state = 201},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 201},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 201},
  [172] = {.lex_state = 201},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 25},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 25},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 25},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 25},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 25},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 25},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 25},
  [247] = {.lex_state = 25},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 25},
  [250] = {.lex_state = 25},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 25},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 25},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 25},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 25},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 25},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 25},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 25},
  [291] = {.lex_state = 25},
  [292] = {.lex_state = 25},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 25},
  [296] = {.lex_state = 25},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 0},
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
  [337] = {.lex_state = 25},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 25},
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
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 25},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 25},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 25},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 25},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 25},
  [373] = {.lex_state = 25},
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
  },
  [1] = {
    [sym_source_file] = STATE(361),
    [sym_type_name] = STATE(247),
    [sym_using] = STATE(75),
    [sym_template] = STATE(105),
    [sym_object] = STATE(105),
    [sym_menu] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(75),
    [aux_sym_source_file_repeat2] = STATE(105),
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
    STATE(234), 1,
      sym_type_name,
    STATE(51), 2,
      sym_object,
      sym__child,
    STATE(6), 17,
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
    STATE(234), 1,
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
    STATE(234), 1,
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
    STATE(234), 1,
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
    STATE(234), 1,
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
    STATE(247), 1,
      sym_type_name,
    STATE(303), 1,
      sym_object,
    STATE(348), 1,
      sym_literal,
    STATE(350), 1,
      sym_translated,
    STATE(351), 1,
      sym__flags,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(349), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [465] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [509] = 13,
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
    ACTIONS(129), 1,
      sym_ident,
    STATE(326), 1,
      sym_value,
    STATE(348), 1,
      sym_literal,
    STATE(350), 1,
      sym_translated,
    STATE(351), 1,
      sym__flags,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(126), 5,
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
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [599] = 13,
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
    ACTIONS(129), 1,
      sym_ident,
    STATE(336), 1,
      sym_value,
    STATE(348), 1,
      sym_literal,
    STATE(350), 1,
      sym_translated,
    STATE(351), 1,
      sym__flags,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [645] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
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
  [739] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [780] = 3,
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
  [805] = 3,
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
  [830] = 3,
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
  [855] = 3,
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
  [880] = 3,
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
  [905] = 3,
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
  [930] = 3,
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
  [955] = 3,
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
  [980] = 3,
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
  [1005] = 3,
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
  [1180] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(293), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_typeof,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 2,
      sym_closure_expression,
      sym_literal,
    STATE(126), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1262] = 3,
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
  [1287] = 3,
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
  [1312] = 3,
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
  [1337] = 3,
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
  [1362] = 3,
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
  [1387] = 3,
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
  [1412] = 3,
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
  [1437] = 3,
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
  [1462] = 3,
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
  [1487] = 3,
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
  [1512] = 3,
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
  [1537] = 3,
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
  [1562] = 3,
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
  [1587] = 3,
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
  [1612] = 3,
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
  [1637] = 3,
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
  [1662] = 3,
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
  [1687] = 3,
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
  [1712] = 3,
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
  [1737] = 3,
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
  [1762] = 3,
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
  [1787] = 3,
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
  [1812] = 3,
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
  [1837] = 3,
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
  [1862] = 3,
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
  [1887] = 3,
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
  [1912] = 3,
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
  [1937] = 3,
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
  [1962] = 3,
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
  [1987] = 3,
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
  [2012] = 3,
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
  [2037] = 3,
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
  [2062] = 3,
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
  [2087] = 3,
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
  [2112] = 3,
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
  [2137] = 3,
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
  [2162] = 3,
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
  [2187] = 3,
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
  [2212] = 3,
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
  [2237] = 3,
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
  [2287] = 10,
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
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_type_name,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2412] = 8,
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
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2442] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2562] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(77), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2592] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2622] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(88), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2652] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2712] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(92), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2742] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(80), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2772] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(377), 1,
      anon_sym_section,
    ACTIONS(379), 1,
      anon_sym_submenu,
    ACTIONS(381), 1,
      anon_sym_item,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(79), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(165), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_as,
    STATE(99), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(429), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [2855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      sym_string_value,
    STATE(287), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 11,
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
  [2903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_as,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(439), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [2926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      sym_string_value,
    STATE(287), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [2957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_as,
    STATE(100), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(443), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [2980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_as,
    STATE(100), 3,
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
  [3003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(452), 1,
      anon_sym_as,
    STATE(100), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(450), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym__ext_combo_box_item,
    STATE(276), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(433), 1,
      sym_ident,
    STATE(276), 1,
      sym_string_value,
    STATE(287), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3085] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(268), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(260), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3137] = 8,
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
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_type_name,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_section,
    ACTIONS(469), 1,
      anon_sym_submenu,
    ACTIONS(471), 1,
      anon_sym_item,
    STATE(113), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(212), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3191] = 8,
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
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(247), 1,
      sym_type_name,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3219] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_section,
    ACTIONS(480), 1,
      anon_sym_submenu,
    ACTIONS(483), 1,
      anon_sym_item,
    STATE(108), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(212), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3245] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(247), 1,
      sym_type_name,
    STATE(109), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(268), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3299] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_section,
    ACTIONS(469), 1,
      anon_sym_submenu,
    ACTIONS(471), 1,
      anon_sym_item,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(212), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_section,
    ACTIONS(469), 1,
      anon_sym_submenu,
    ACTIONS(471), 1,
      anon_sym_item,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(108), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(212), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3351] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_section,
    ACTIONS(469), 1,
      anon_sym_submenu,
    ACTIONS(471), 1,
      anon_sym_item,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(108), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(212), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3402] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3427] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(268), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    STATE(281), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3550] = 2,
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
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3578] = 2,
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
  [3592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    STATE(195), 1,
      sym_string_value,
    ACTIONS(526), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3614] = 2,
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
  [3628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    STATE(345), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3650] = 2,
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
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 8,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [3692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    STATE(288), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym__,
    ACTIONS(459), 1,
      anon_sym_C_,
    STATE(294), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(155), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_using,
    ACTIONS(536), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(538), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_COLON,
    ACTIONS(549), 1,
      anon_sym_COLON_COLON,
    ACTIONS(551), 1,
      anon_sym_EQ_GT,
    ACTIONS(543), 2,
      sym_ident,
      anon_sym_LBRACE,
  [3776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(555), 4,
      sym_ident,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    STATE(237), 1,
      aux_sym__flags_repeat1,
    ACTIONS(543), 2,
      sym_ident,
      anon_sym_LBRACE,
  [3866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [3883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_ext_styles_repeat1,
    STATE(217), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(581), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(585), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    ACTIONS(589), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [3991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_ext_styles_repeat1,
    STATE(217), 1,
      sym_quoted,
    ACTIONS(593), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(598), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(602), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_binding_repeat1,
    ACTIONS(622), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(638), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(642), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(646), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_binding_repeat1,
    ACTIONS(654), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(658), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_binding_repeat1,
    ACTIONS(666), 3,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_sync_DASHcreate,
  [4282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(671), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(675), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(241), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_ext_styles_repeat1,
    STATE(217), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    ACTIONS(543), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(18), 1,
      sym_object,
    STATE(234), 1,
      sym_type_name,
  [4483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(36), 1,
      sym_object,
    STATE(234), 1,
      sym_type_name,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      aux_sym_signal_repeat1,
    ACTIONS(701), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(299), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym_signal_repeat1,
    ACTIONS(711), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(715), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_ident,
    STATE(190), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(724), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      aux_sym_signal_repeat1,
    ACTIONS(728), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(715), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(734), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(715), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(715), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_ident,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_ext_accessibility_repeat1,
  [4853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 3,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
      anon_sym_RBRACK,
  [4875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(272), 1,
      sym_type_name,
  [4888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_ext_accessibility_repeat1,
  [4901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym__flags_repeat1,
  [4914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_closure_expression_repeat1,
  [4927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [4940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(344), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [4964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    STATE(237), 1,
      aux_sym__flags_repeat1,
  [4977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [4990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym__ext_size_group_widget,
  [5003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(343), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      sym_ext_adw_dialog_response,
  [5040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(279), 1,
      sym_type_name,
  [5066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_closure_expression_repeat1,
  [5079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_ident,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_object_content,
  [5092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    ACTIONS(813), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym__flags_repeat1,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(342), 1,
      sym_type_name,
  [5170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_object_content,
  [5222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_ident,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_ext_accessibility_repeat1,
  [5248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym_ident,
    STATE(135), 1,
      sym_object_content,
  [5261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_closure_expression_repeat1,
  [5274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym__ext_size_group_widget,
  [5287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_ext_accessibility_repeat1,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym__ext_size_group_widget,
  [5326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      sym_ext_adw_dialog_response,
  [5391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(319), 1,
      sym_type_name,
  [5417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(309), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(697), 1,
      sym_ident,
    STATE(244), 1,
      sym_type_name,
  [5454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_ident,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      sym_ext_adw_dialog_response,
  [5491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      aux_sym_ext_accessibility_repeat1,
  [5504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_object_content,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    ACTIONS(898), 1,
      anon_sym_COMMA,
  [5532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
  [5550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_object_content,
  [5560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    STATE(289), 1,
      sym_ext_adw_dialog_response,
  [5570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
  [5580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_ident,
    STATE(331), 1,
      sym_menu_attribute,
  [5590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    STATE(277), 1,
      sym__ext_size_group_widget,
  [5616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_object_content,
  [5626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_ident,
    STATE(359), 1,
      sym_menu_attribute,
  [5636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COMMA,
  [5646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_object_content,
  [5674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_ident,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
  [5726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_ident,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(948), 1,
      anon_sym_COMMA,
  [5762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_ident,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
  [5772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_ident,
    ACTIONS(956), 1,
      anon_sym_SEMI,
  [5782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_ident,
    ACTIONS(960), 1,
      anon_sym_internal_DASHchild,
  [5792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
    ACTIONS(966), 1,
      anon_sym_LPAREN,
  [5818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      anon_sym_COMMA,
  [5828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_ident,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SEMI,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LBRACK,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACK,
  [5866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LBRACK,
  [5873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_ident,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
  [5915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LBRACK,
  [5922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LBRACK,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_GT,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LBRACE,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_LBRACE,
  [5992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_DOLLAR,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_ident,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_ident,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_COLON,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_SEMI,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_COLON,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
  [6076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_ident,
  [6083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_LT,
  [6090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_ident,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
  [6104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_GT,
  [6118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
  [6125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
  [6132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
  [6139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_LT,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_number,
  [6153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
  [6174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_EQ_GT,
  [6188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LBRACE,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_ident,
  [6202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_number,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_RBRACK,
  [6216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_ident,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COLON,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
  [6237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_ident,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
  [6251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
  [6265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_DOT,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_ident,
  [6279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COLON,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
  [6307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
  [6314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_DOLLAR,
  [6321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 465,
  [SMALL_STATE(9)] = 509,
  [SMALL_STATE(10)] = 555,
  [SMALL_STATE(11)] = 599,
  [SMALL_STATE(12)] = 645,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 714,
  [SMALL_STATE(15)] = 739,
  [SMALL_STATE(16)] = 780,
  [SMALL_STATE(17)] = 805,
  [SMALL_STATE(18)] = 830,
  [SMALL_STATE(19)] = 855,
  [SMALL_STATE(20)] = 880,
  [SMALL_STATE(21)] = 905,
  [SMALL_STATE(22)] = 930,
  [SMALL_STATE(23)] = 955,
  [SMALL_STATE(24)] = 980,
  [SMALL_STATE(25)] = 1005,
  [SMALL_STATE(26)] = 1030,
  [SMALL_STATE(27)] = 1055,
  [SMALL_STATE(28)] = 1080,
  [SMALL_STATE(29)] = 1105,
  [SMALL_STATE(30)] = 1130,
  [SMALL_STATE(31)] = 1155,
  [SMALL_STATE(32)] = 1180,
  [SMALL_STATE(33)] = 1221,
  [SMALL_STATE(34)] = 1262,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1312,
  [SMALL_STATE(37)] = 1337,
  [SMALL_STATE(38)] = 1362,
  [SMALL_STATE(39)] = 1387,
  [SMALL_STATE(40)] = 1412,
  [SMALL_STATE(41)] = 1437,
  [SMALL_STATE(42)] = 1462,
  [SMALL_STATE(43)] = 1487,
  [SMALL_STATE(44)] = 1512,
  [SMALL_STATE(45)] = 1537,
  [SMALL_STATE(46)] = 1562,
  [SMALL_STATE(47)] = 1587,
  [SMALL_STATE(48)] = 1612,
  [SMALL_STATE(49)] = 1637,
  [SMALL_STATE(50)] = 1662,
  [SMALL_STATE(51)] = 1687,
  [SMALL_STATE(52)] = 1712,
  [SMALL_STATE(53)] = 1737,
  [SMALL_STATE(54)] = 1762,
  [SMALL_STATE(55)] = 1787,
  [SMALL_STATE(56)] = 1812,
  [SMALL_STATE(57)] = 1837,
  [SMALL_STATE(58)] = 1862,
  [SMALL_STATE(59)] = 1887,
  [SMALL_STATE(60)] = 1912,
  [SMALL_STATE(61)] = 1937,
  [SMALL_STATE(62)] = 1962,
  [SMALL_STATE(63)] = 1987,
  [SMALL_STATE(64)] = 2012,
  [SMALL_STATE(65)] = 2037,
  [SMALL_STATE(66)] = 2062,
  [SMALL_STATE(67)] = 2087,
  [SMALL_STATE(68)] = 2112,
  [SMALL_STATE(69)] = 2137,
  [SMALL_STATE(70)] = 2162,
  [SMALL_STATE(71)] = 2187,
  [SMALL_STATE(72)] = 2212,
  [SMALL_STATE(73)] = 2237,
  [SMALL_STATE(74)] = 2262,
  [SMALL_STATE(75)] = 2287,
  [SMALL_STATE(76)] = 2322,
  [SMALL_STATE(77)] = 2352,
  [SMALL_STATE(78)] = 2382,
  [SMALL_STATE(79)] = 2412,
  [SMALL_STATE(80)] = 2442,
  [SMALL_STATE(81)] = 2472,
  [SMALL_STATE(82)] = 2502,
  [SMALL_STATE(83)] = 2532,
  [SMALL_STATE(84)] = 2562,
  [SMALL_STATE(85)] = 2592,
  [SMALL_STATE(86)] = 2622,
  [SMALL_STATE(87)] = 2652,
  [SMALL_STATE(88)] = 2682,
  [SMALL_STATE(89)] = 2712,
  [SMALL_STATE(90)] = 2742,
  [SMALL_STATE(91)] = 2772,
  [SMALL_STATE(92)] = 2802,
  [SMALL_STATE(93)] = 2832,
  [SMALL_STATE(94)] = 2855,
  [SMALL_STATE(95)] = 2886,
  [SMALL_STATE(96)] = 2903,
  [SMALL_STATE(97)] = 2926,
  [SMALL_STATE(98)] = 2957,
  [SMALL_STATE(99)] = 2980,
  [SMALL_STATE(100)] = 3003,
  [SMALL_STATE(101)] = 3026,
  [SMALL_STATE(102)] = 3057,
  [SMALL_STATE(103)] = 3085,
  [SMALL_STATE(104)] = 3111,
  [SMALL_STATE(105)] = 3137,
  [SMALL_STATE(106)] = 3165,
  [SMALL_STATE(107)] = 3191,
  [SMALL_STATE(108)] = 3219,
  [SMALL_STATE(109)] = 3245,
  [SMALL_STATE(110)] = 3273,
  [SMALL_STATE(111)] = 3299,
  [SMALL_STATE(112)] = 3325,
  [SMALL_STATE(113)] = 3351,
  [SMALL_STATE(114)] = 3377,
  [SMALL_STATE(115)] = 3402,
  [SMALL_STATE(116)] = 3427,
  [SMALL_STATE(117)] = 3452,
  [SMALL_STATE(118)] = 3475,
  [SMALL_STATE(119)] = 3500,
  [SMALL_STATE(120)] = 3522,
  [SMALL_STATE(121)] = 3536,
  [SMALL_STATE(122)] = 3550,
  [SMALL_STATE(123)] = 3564,
  [SMALL_STATE(124)] = 3578,
  [SMALL_STATE(125)] = 3592,
  [SMALL_STATE(126)] = 3614,
  [SMALL_STATE(127)] = 3628,
  [SMALL_STATE(128)] = 3650,
  [SMALL_STATE(129)] = 3664,
  [SMALL_STATE(130)] = 3678,
  [SMALL_STATE(131)] = 3692,
  [SMALL_STATE(132)] = 3714,
  [SMALL_STATE(133)] = 3736,
  [SMALL_STATE(134)] = 3756,
  [SMALL_STATE(135)] = 3776,
  [SMALL_STATE(136)] = 3790,
  [SMALL_STATE(137)] = 3804,
  [SMALL_STATE(138)] = 3818,
  [SMALL_STATE(139)] = 3832,
  [SMALL_STATE(140)] = 3846,
  [SMALL_STATE(141)] = 3866,
  [SMALL_STATE(142)] = 3883,
  [SMALL_STATE(143)] = 3896,
  [SMALL_STATE(144)] = 3909,
  [SMALL_STATE(145)] = 3922,
  [SMALL_STATE(146)] = 3939,
  [SMALL_STATE(147)] = 3952,
  [SMALL_STATE(148)] = 3965,
  [SMALL_STATE(149)] = 3978,
  [SMALL_STATE(150)] = 3991,
  [SMALL_STATE(151)] = 4008,
  [SMALL_STATE(152)] = 4021,
  [SMALL_STATE(153)] = 4034,
  [SMALL_STATE(154)] = 4047,
  [SMALL_STATE(155)] = 4060,
  [SMALL_STATE(156)] = 4071,
  [SMALL_STATE(157)] = 4084,
  [SMALL_STATE(158)] = 4099,
  [SMALL_STATE(159)] = 4110,
  [SMALL_STATE(160)] = 4123,
  [SMALL_STATE(161)] = 4136,
  [SMALL_STATE(162)] = 4153,
  [SMALL_STATE(163)] = 4166,
  [SMALL_STATE(164)] = 4179,
  [SMALL_STATE(165)] = 4192,
  [SMALL_STATE(166)] = 4205,
  [SMALL_STATE(167)] = 4220,
  [SMALL_STATE(168)] = 4233,
  [SMALL_STATE(169)] = 4250,
  [SMALL_STATE(170)] = 4267,
  [SMALL_STATE(171)] = 4282,
  [SMALL_STATE(172)] = 4295,
  [SMALL_STATE(173)] = 4308,
  [SMALL_STATE(174)] = 4319,
  [SMALL_STATE(175)] = 4332,
  [SMALL_STATE(176)] = 4349,
  [SMALL_STATE(177)] = 4366,
  [SMALL_STATE(178)] = 4383,
  [SMALL_STATE(179)] = 4400,
  [SMALL_STATE(180)] = 4417,
  [SMALL_STATE(181)] = 4430,
  [SMALL_STATE(182)] = 4447,
  [SMALL_STATE(183)] = 4457,
  [SMALL_STATE(184)] = 4467,
  [SMALL_STATE(185)] = 4483,
  [SMALL_STATE(186)] = 4499,
  [SMALL_STATE(187)] = 4513,
  [SMALL_STATE(188)] = 4523,
  [SMALL_STATE(189)] = 4533,
  [SMALL_STATE(190)] = 4543,
  [SMALL_STATE(191)] = 4557,
  [SMALL_STATE(192)] = 4571,
  [SMALL_STATE(193)] = 4581,
  [SMALL_STATE(194)] = 4595,
  [SMALL_STATE(195)] = 4609,
  [SMALL_STATE(196)] = 4623,
  [SMALL_STATE(197)] = 4637,
  [SMALL_STATE(198)] = 4647,
  [SMALL_STATE(199)] = 4657,
  [SMALL_STATE(200)] = 4671,
  [SMALL_STATE(201)] = 4681,
  [SMALL_STATE(202)] = 4691,
  [SMALL_STATE(203)] = 4705,
  [SMALL_STATE(204)] = 4715,
  [SMALL_STATE(205)] = 4729,
  [SMALL_STATE(206)] = 4739,
  [SMALL_STATE(207)] = 4749,
  [SMALL_STATE(208)] = 4759,
  [SMALL_STATE(209)] = 4773,
  [SMALL_STATE(210)] = 4787,
  [SMALL_STATE(211)] = 4797,
  [SMALL_STATE(212)] = 4807,
  [SMALL_STATE(213)] = 4817,
  [SMALL_STATE(214)] = 4831,
  [SMALL_STATE(215)] = 4840,
  [SMALL_STATE(216)] = 4853,
  [SMALL_STATE(217)] = 4866,
  [SMALL_STATE(218)] = 4875,
  [SMALL_STATE(219)] = 4888,
  [SMALL_STATE(220)] = 4901,
  [SMALL_STATE(221)] = 4914,
  [SMALL_STATE(222)] = 4927,
  [SMALL_STATE(223)] = 4940,
  [SMALL_STATE(224)] = 4951,
  [SMALL_STATE(225)] = 4964,
  [SMALL_STATE(226)] = 4977,
  [SMALL_STATE(227)] = 4990,
  [SMALL_STATE(228)] = 5003,
  [SMALL_STATE(229)] = 5016,
  [SMALL_STATE(230)] = 5027,
  [SMALL_STATE(231)] = 5040,
  [SMALL_STATE(232)] = 5053,
  [SMALL_STATE(233)] = 5066,
  [SMALL_STATE(234)] = 5079,
  [SMALL_STATE(235)] = 5092,
  [SMALL_STATE(236)] = 5105,
  [SMALL_STATE(237)] = 5118,
  [SMALL_STATE(238)] = 5131,
  [SMALL_STATE(239)] = 5144,
  [SMALL_STATE(240)] = 5157,
  [SMALL_STATE(241)] = 5170,
  [SMALL_STATE(242)] = 5183,
  [SMALL_STATE(243)] = 5196,
  [SMALL_STATE(244)] = 5209,
  [SMALL_STATE(245)] = 5222,
  [SMALL_STATE(246)] = 5235,
  [SMALL_STATE(247)] = 5248,
  [SMALL_STATE(248)] = 5261,
  [SMALL_STATE(249)] = 5274,
  [SMALL_STATE(250)] = 5287,
  [SMALL_STATE(251)] = 5300,
  [SMALL_STATE(252)] = 5313,
  [SMALL_STATE(253)] = 5326,
  [SMALL_STATE(254)] = 5339,
  [SMALL_STATE(255)] = 5352,
  [SMALL_STATE(256)] = 5365,
  [SMALL_STATE(257)] = 5378,
  [SMALL_STATE(258)] = 5391,
  [SMALL_STATE(259)] = 5404,
  [SMALL_STATE(260)] = 5417,
  [SMALL_STATE(261)] = 5430,
  [SMALL_STATE(262)] = 5441,
  [SMALL_STATE(263)] = 5454,
  [SMALL_STATE(264)] = 5467,
  [SMALL_STATE(265)] = 5478,
  [SMALL_STATE(266)] = 5491,
  [SMALL_STATE(267)] = 5504,
  [SMALL_STATE(268)] = 5514,
  [SMALL_STATE(269)] = 5522,
  [SMALL_STATE(270)] = 5532,
  [SMALL_STATE(271)] = 5540,
  [SMALL_STATE(272)] = 5550,
  [SMALL_STATE(273)] = 5560,
  [SMALL_STATE(274)] = 5570,
  [SMALL_STATE(275)] = 5580,
  [SMALL_STATE(276)] = 5590,
  [SMALL_STATE(277)] = 5598,
  [SMALL_STATE(278)] = 5606,
  [SMALL_STATE(279)] = 5616,
  [SMALL_STATE(280)] = 5626,
  [SMALL_STATE(281)] = 5636,
  [SMALL_STATE(282)] = 5646,
  [SMALL_STATE(283)] = 5656,
  [SMALL_STATE(284)] = 5664,
  [SMALL_STATE(285)] = 5674,
  [SMALL_STATE(286)] = 5682,
  [SMALL_STATE(287)] = 5692,
  [SMALL_STATE(288)] = 5700,
  [SMALL_STATE(289)] = 5708,
  [SMALL_STATE(290)] = 5716,
  [SMALL_STATE(291)] = 5726,
  [SMALL_STATE(292)] = 5736,
  [SMALL_STATE(293)] = 5744,
  [SMALL_STATE(294)] = 5752,
  [SMALL_STATE(295)] = 5762,
  [SMALL_STATE(296)] = 5772,
  [SMALL_STATE(297)] = 5782,
  [SMALL_STATE(298)] = 5792,
  [SMALL_STATE(299)] = 5800,
  [SMALL_STATE(300)] = 5808,
  [SMALL_STATE(301)] = 5818,
  [SMALL_STATE(302)] = 5828,
  [SMALL_STATE(303)] = 5838,
  [SMALL_STATE(304)] = 5845,
  [SMALL_STATE(305)] = 5852,
  [SMALL_STATE(306)] = 5859,
  [SMALL_STATE(307)] = 5866,
  [SMALL_STATE(308)] = 5873,
  [SMALL_STATE(309)] = 5880,
  [SMALL_STATE(310)] = 5887,
  [SMALL_STATE(311)] = 5894,
  [SMALL_STATE(312)] = 5901,
  [SMALL_STATE(313)] = 5908,
  [SMALL_STATE(314)] = 5915,
  [SMALL_STATE(315)] = 5922,
  [SMALL_STATE(316)] = 5929,
  [SMALL_STATE(317)] = 5936,
  [SMALL_STATE(318)] = 5943,
  [SMALL_STATE(319)] = 5950,
  [SMALL_STATE(320)] = 5957,
  [SMALL_STATE(321)] = 5964,
  [SMALL_STATE(322)] = 5971,
  [SMALL_STATE(323)] = 5978,
  [SMALL_STATE(324)] = 5985,
  [SMALL_STATE(325)] = 5992,
  [SMALL_STATE(326)] = 5999,
  [SMALL_STATE(327)] = 6006,
  [SMALL_STATE(328)] = 6013,
  [SMALL_STATE(329)] = 6020,
  [SMALL_STATE(330)] = 6027,
  [SMALL_STATE(331)] = 6034,
  [SMALL_STATE(332)] = 6041,
  [SMALL_STATE(333)] = 6048,
  [SMALL_STATE(334)] = 6055,
  [SMALL_STATE(335)] = 6062,
  [SMALL_STATE(336)] = 6069,
  [SMALL_STATE(337)] = 6076,
  [SMALL_STATE(338)] = 6083,
  [SMALL_STATE(339)] = 6090,
  [SMALL_STATE(340)] = 6097,
  [SMALL_STATE(341)] = 6104,
  [SMALL_STATE(342)] = 6111,
  [SMALL_STATE(343)] = 6118,
  [SMALL_STATE(344)] = 6125,
  [SMALL_STATE(345)] = 6132,
  [SMALL_STATE(346)] = 6139,
  [SMALL_STATE(347)] = 6146,
  [SMALL_STATE(348)] = 6153,
  [SMALL_STATE(349)] = 6160,
  [SMALL_STATE(350)] = 6167,
  [SMALL_STATE(351)] = 6174,
  [SMALL_STATE(352)] = 6181,
  [SMALL_STATE(353)] = 6188,
  [SMALL_STATE(354)] = 6195,
  [SMALL_STATE(355)] = 6202,
  [SMALL_STATE(356)] = 6209,
  [SMALL_STATE(357)] = 6216,
  [SMALL_STATE(358)] = 6223,
  [SMALL_STATE(359)] = 6230,
  [SMALL_STATE(360)] = 6237,
  [SMALL_STATE(361)] = 6244,
  [SMALL_STATE(362)] = 6251,
  [SMALL_STATE(363)] = 6258,
  [SMALL_STATE(364)] = 6265,
  [SMALL_STATE(365)] = 6272,
  [SMALL_STATE(366)] = 6279,
  [SMALL_STATE(367)] = 6286,
  [SMALL_STATE(368)] = 6293,
  [SMALL_STATE(369)] = 6300,
  [SMALL_STATE(370)] = 6307,
  [SMALL_STATE(371)] = 6314,
  [SMALL_STATE(372)] = 6321,
  [SMALL_STATE(373)] = 6328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(134),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(372),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(218),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(297),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(320),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(317),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(315),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(312),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(310),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(307),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(305),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(304),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(323),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(318),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(314),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(306),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 39),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 39),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 44),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 44),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 43),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 43),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 44),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 44),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 16),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 16),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 41),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 41),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 43),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 43),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 39),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 39),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 41),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 41),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(330),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(271),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(274),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(286),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(339),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(338),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(291),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(302),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(300),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(180),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(372),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(262),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(295),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 38),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 38),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 38),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 38),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 6),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 26), SHIFT_REPEAT(95),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 26),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 40),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 7),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(170),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 7),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 14),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 14),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 37),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 27),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(196),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(204),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18), SHIFT_REPEAT(358),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 1, .production_id = 14),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(329),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(32),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(273),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30), SHIFT_REPEAT(102),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33), SHIFT_REPEAT(191),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21), SHIFT_REPEAT(364),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36), SHIFT_REPEAT(278),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(117),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 15),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 11),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 34),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 31),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 13),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 28),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 27),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 42),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 12),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1086] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
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

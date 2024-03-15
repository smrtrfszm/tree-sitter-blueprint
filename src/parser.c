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
#define STATE_COUNT 392
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 48

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
  anon_sym_no_DASHsync_DASHcreate = 29,
  anon_sym_sync_DASHcreate = 30,
  anon_sym__ = 31,
  anon_sym_C_ = 32,
  anon_sym_PIPE = 33,
  anon_sym_LBRACK = 34,
  anon_sym_internal_DASHchild = 35,
  anon_sym_RBRACK = 36,
  anon_sym_menu = 37,
  anon_sym_section = 38,
  anon_sym_submenu = 39,
  anon_sym_item = 40,
  sym_comment = 41,
  anon_sym_accessibility = 42,
  anon_sym_responses = 43,
  anon_sym_condition = 44,
  anon_sym_setters = 45,
  anon_sym_items = 46,
  anon_sym_mime_DASHtypes = 47,
  anon_sym_patterns = 48,
  anon_sym_suffixes = 49,
  anon_sym_layout = 50,
  anon_sym_widgets = 51,
  anon_sym_strings = 52,
  anon_sym_styles = 53,
  anon_sym_action = 54,
  anon_sym_response = 55,
  anon_sym_EQ = 56,
  anon_sym_default = 57,
  sym_source_file = 58,
  sym_quoted = 59,
  sym_type_name = 60,
  sym_using = 61,
  sym_template = 62,
  sym_object = 63,
  sym_object_content = 64,
  sym_signal = 65,
  sym_property = 66,
  sym_closure_expression = 67,
  sym_lookup_expression = 68,
  sym_cast_expression = 69,
  sym_literal = 70,
  sym__type_literal = 71,
  sym__quoted_literal = 72,
  sym__number_literal = 73,
  sym__ident_literal = 74,
  sym__expression = 75,
  sym_binding = 76,
  sym_object_value = 77,
  sym_value = 78,
  sym_translated = 79,
  sym__flags = 80,
  sym__child = 81,
  sym_menu = 82,
  sym_menu_child = 83,
  sym_menu_section = 84,
  sym_menu_submenu = 85,
  sym_menu_item = 86,
  sym_menu_attribute = 87,
  sym_string_value = 88,
  sym_menu_item_shorthand = 89,
  sym__extension = 90,
  sym_ext_accessibility = 91,
  sym_ext_adw_dialog = 92,
  sym_ext_adw_dialog_response = 93,
  sym_ext_adw_breakpoint_condition = 94,
  sym_ext_adw_breakpoint = 95,
  sym_ext_combo_box_items = 96,
  sym__ext_combo_box_item = 97,
  sym_ext_file_filter_mime_types = 98,
  sym_ext_file_filter_patterns = 99,
  sym_ext_file_filter_suffixes = 100,
  sym__ext_file_filter_item = 101,
  sym_ext_layout = 102,
  sym_ext_list_item_factory = 103,
  sym_ext_size_group_widgets = 104,
  sym__ext_size_group_widget = 105,
  sym_ext_string_list_strings = 106,
  sym__ext_strings_list_item = 107,
  sym_ext_styles = 108,
  sym_child_extension = 109,
  sym_ext_response = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_source_file_repeat2 = 112,
  aux_sym_object_content_repeat1 = 113,
  aux_sym_signal_repeat1 = 114,
  aux_sym_closure_expression_repeat1 = 115,
  aux_sym__expression_repeat1 = 116,
  aux_sym_binding_repeat1 = 117,
  aux_sym__flags_repeat1 = 118,
  aux_sym_menu_repeat1 = 119,
  aux_sym_menu_section_repeat1 = 120,
  aux_sym_ext_accessibility_repeat1 = 121,
  aux_sym_ext_adw_dialog_repeat1 = 122,
  aux_sym_ext_adw_dialog_response_repeat1 = 123,
  aux_sym_ext_adw_breakpoint_repeat1 = 124,
  aux_sym_ext_combo_box_items_repeat1 = 125,
  aux_sym_ext_file_filter_mime_types_repeat1 = 126,
  aux_sym_ext_size_group_widgets_repeat1 = 127,
  aux_sym_ext_string_list_strings_repeat1 = 128,
  aux_sym_ext_styles_repeat1 = 129,
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
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 4},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 3},
  [20] = {.index = 36, .length = 6},
  [21] = {.index = 42, .length = 2},
  [22] = {.index = 44, .length = 1},
  [23] = {.index = 45, .length = 1},
  [24] = {.index = 46, .length = 1},
  [25] = {.index = 47, .length = 1},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 2},
  [28] = {.index = 51, .length = 2},
  [29] = {.index = 53, .length = 4},
  [30] = {.index = 57, .length = 4},
  [31] = {.index = 61, .length = 1},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 2},
  [34] = {.index = 66, .length = 1},
  [35] = {.index = 67, .length = 2},
  [36] = {.index = 69, .length = 2},
  [37] = {.index = 71, .length = 1},
  [38] = {.index = 72, .length = 2},
  [39] = {.index = 74, .length = 2},
  [40] = {.index = 76, .length = 1},
  [41] = {.index = 77, .length = 3},
  [42] = {.index = 80, .length = 2},
  [43] = {.index = 82, .length = 2},
  [44] = {.index = 84, .length = 3},
  [45] = {.index = 87, .length = 3},
  [46] = {.index = 90, .length = 3},
  [47] = {.index = 93, .length = 4},
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
    {field_value, 2},
  [25] =
    {field_child_type, 1},
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
    {field_name, 1},
  [72] =
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [74] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [76] =
    {field_name, 0},
  [77] =
    {field_flags, 3},
    {field_id, 0},
    {field_value, 2},
  [80] =
    {field_handler, 3},
    {field_name, 0},
  [82] =
    {field_context, 2},
    {field_string, 4},
  [84] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [87] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [90] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [93] =
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
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 84,
  [88] = 88,
  [89] = 89,
  [90] = 88,
  [91] = 91,
  [92] = 86,
  [93] = 82,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 96,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 27,
  [140] = 140,
  [141] = 29,
  [142] = 28,
  [143] = 143,
  [144] = 144,
  [145] = 26,
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
  [185] = 154,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 156,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 173,
  [200] = 159,
  [201] = 170,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 164,
  [206] = 165,
  [207] = 166,
  [208] = 167,
  [209] = 209,
  [210] = 171,
  [211] = 168,
  [212] = 163,
  [213] = 213,
  [214] = 162,
  [215] = 215,
  [216] = 216,
  [217] = 160,
  [218] = 218,
  [219] = 169,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 225,
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
  [239] = 105,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
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
  [286] = 286,
  [287] = 284,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 286,
  [298] = 298,
  [299] = 281,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 283,
  [304] = 282,
  [305] = 305,
  [306] = 306,
  [307] = 279,
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
  [377] = 323,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 343,
  [385] = 385,
  [386] = 386,
  [387] = 348,
  [388] = 350,
  [389] = 389,
  [390] = 390,
  [391] = 391,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(235);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == ')') ADVANCE(392);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == ';') ADVANCE(383);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') SKIP(228)
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == '_') ADVANCE(409);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '|') ADVANCE(413);
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == ')') ADVANCE(392);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 't') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == 't') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(402);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(410);
      if (lookahead == 't') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == '_') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == ')') ADVANCE(392);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == ';') ADVANCE(383);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(417);
      if (lookahead == '{') ADVANCE(387);
      if (lookahead == '|') ADVANCE(413);
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'w') ADVANCE(281);
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(428);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(427);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(317);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(390);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(381);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 219:
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 221:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(373);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(429);
      END_STATE();
    case 227:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 228:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(227)
      END_STATE();
    case 229:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(233)
      END_STATE();
    case 230:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(233)
      if (lookahead == '\r') SKIP(229)
      END_STATE();
    case 231:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(234)
      END_STATE();
    case 232:
      if (eof) ADVANCE(235);
      if (lookahead == '\n') SKIP(234)
      if (lookahead == '\r') SKIP(231)
      END_STATE();
    case 233:
      if (eof) ADVANCE(235);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '\\') SKIP(230)
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(233)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 234:
      if (eof) ADVANCE(235);
      if (lookahead == '$') ADVANCE(380);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(383);
      if (lookahead == '\\') SKIP(232)
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 't') ADVANCE(255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(234)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(226);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(390);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 233},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 233},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 234},
  [108] = {.lex_state = 234},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 41},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 234},
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
  [133] = {.lex_state = 233},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 234},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 234},
  [142] = {.lex_state = 234},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 233},
  [145] = {.lex_state = 234},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 27},
  [150] = {.lex_state = 234},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 27},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 40},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 234},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 40},
  [164] = {.lex_state = 40},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 40},
  [168] = {.lex_state = 40},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 234},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 234},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 40},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 42},
  [180] = {.lex_state = 234},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 234},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 27},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 27},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 27},
  [226] = {.lex_state = 27},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 27},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 27},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 27},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 27},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 27},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 27},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 27},
  [303] = {.lex_state = 27},
  [304] = {.lex_state = 27},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 233},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 27},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
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
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 27},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 27},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 233},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 27},
  [362] = {.lex_state = 27},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 28},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 233},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 27},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 27},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 41},
  [383] = {.lex_state = 27},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 27},
  [391] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(379),
    [sym_type_name] = STATE(225),
    [sym_using] = STATE(79),
    [sym_template] = STATE(116),
    [sym_object] = STATE(116),
    [sym_menu] = STATE(116),
    [aux_sym_source_file_repeat1] = STATE(79),
    [aux_sym_source_file_repeat2] = STATE(116),
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
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(20), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_accessibility,
    ACTIONS(34), 1,
      anon_sym_responses,
    ACTIONS(37), 1,
      anon_sym_condition,
    ACTIONS(40), 1,
      anon_sym_setters,
    ACTIONS(43), 1,
      anon_sym_items,
    ACTIONS(46), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(49), 1,
      anon_sym_patterns,
    ACTIONS(52), 1,
      anon_sym_suffixes,
    ACTIONS(55), 1,
      anon_sym_layout,
    ACTIONS(58), 1,
      anon_sym_widgets,
    ACTIONS(61), 1,
      anon_sym_strings,
    ACTIONS(64), 1,
      anon_sym_styles,
    STATE(228), 1,
      sym_type_name,
    STATE(52), 2,
      sym_object,
      sym__child,
    STATE(2), 17,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_template,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_accessibility,
    ACTIONS(77), 1,
      anon_sym_responses,
    ACTIONS(79), 1,
      anon_sym_condition,
    ACTIONS(81), 1,
      anon_sym_setters,
    ACTIONS(83), 1,
      anon_sym_items,
    ACTIONS(85), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(87), 1,
      anon_sym_patterns,
    ACTIONS(89), 1,
      anon_sym_suffixes,
    ACTIONS(91), 1,
      anon_sym_layout,
    ACTIONS(93), 1,
      anon_sym_widgets,
    ACTIONS(95), 1,
      anon_sym_strings,
    ACTIONS(97), 1,
      anon_sym_styles,
    STATE(228), 1,
      sym_type_name,
    STATE(52), 2,
      sym_object,
      sym__child,
    STATE(2), 17,
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
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_template,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_accessibility,
    ACTIONS(77), 1,
      anon_sym_responses,
    ACTIONS(79), 1,
      anon_sym_condition,
    ACTIONS(81), 1,
      anon_sym_setters,
    ACTIONS(83), 1,
      anon_sym_items,
    ACTIONS(85), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(87), 1,
      anon_sym_patterns,
    ACTIONS(89), 1,
      anon_sym_suffixes,
    ACTIONS(91), 1,
      anon_sym_layout,
    ACTIONS(93), 1,
      anon_sym_widgets,
    ACTIONS(95), 1,
      anon_sym_strings,
    ACTIONS(97), 1,
      anon_sym_styles,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_type_name,
    STATE(52), 2,
      sym_object,
      sym__child,
    STATE(2), 17,
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
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_template,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_accessibility,
    ACTIONS(77), 1,
      anon_sym_responses,
    ACTIONS(79), 1,
      anon_sym_condition,
    ACTIONS(81), 1,
      anon_sym_setters,
    ACTIONS(83), 1,
      anon_sym_items,
    ACTIONS(85), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(87), 1,
      anon_sym_patterns,
    ACTIONS(89), 1,
      anon_sym_suffixes,
    ACTIONS(91), 1,
      anon_sym_layout,
    ACTIONS(93), 1,
      anon_sym_widgets,
    ACTIONS(95), 1,
      anon_sym_strings,
    ACTIONS(97), 1,
      anon_sym_styles,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_type_name,
    STATE(52), 2,
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
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(69), 1,
      anon_sym_template,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_accessibility,
    ACTIONS(77), 1,
      anon_sym_responses,
    ACTIONS(79), 1,
      anon_sym_condition,
    ACTIONS(81), 1,
      anon_sym_setters,
    ACTIONS(83), 1,
      anon_sym_items,
    ACTIONS(85), 1,
      anon_sym_mime_DASHtypes,
    ACTIONS(87), 1,
      anon_sym_patterns,
    ACTIONS(89), 1,
      anon_sym_suffixes,
    ACTIONS(91), 1,
      anon_sym_layout,
    ACTIONS(93), 1,
      anon_sym_widgets,
    ACTIONS(95), 1,
      anon_sym_strings,
    ACTIONS(97), 1,
      anon_sym_styles,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_type_name,
    STATE(52), 2,
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
    STATE(225), 1,
      sym_type_name,
    STATE(345), 1,
      sym_object,
    STATE(346), 1,
      sym_literal,
    STATE(389), 1,
      sym__flags,
    STATE(391), 1,
      sym_translated,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(336), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(130), 5,
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
    STATE(277), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
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
    STATE(341), 1,
      sym_value,
    STATE(346), 1,
      sym_literal,
    STATE(389), 1,
      sym__flags,
    STATE(391), 1,
      sym_translated,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(130), 5,
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
    STATE(256), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
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
    STATE(322), 1,
      sym_value,
    STATE(346), 1,
      sym_literal,
    STATE(389), 1,
      sym__flags,
    STATE(391), 1,
      sym_translated,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(130), 5,
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
    STATE(277), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
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
    STATE(363), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
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
  [1230] = 11,
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
    STATE(277), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1271] = 3,
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
  [1296] = 3,
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
  [1321] = 3,
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
  [1346] = 3,
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
  [1371] = 3,
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
  [1396] = 3,
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
  [1421] = 3,
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
  [1446] = 3,
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
  [1471] = 3,
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
  [1496] = 3,
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
  [1521] = 3,
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
  [1546] = 3,
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
  [1571] = 3,
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
  [1596] = 3,
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
  [1621] = 3,
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
  [1646] = 3,
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
  [1671] = 3,
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
  [1696] = 3,
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
  [1971] = 11,
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
    STATE(138), 1,
      sym__expression,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 2,
      sym_closure_expression,
      sym_literal,
    STATE(130), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
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
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(375), 14,
      sym_ident,
      anon_sym_template,
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
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(379), 14,
      sym_ident,
      anon_sym_template,
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
  [2362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(383), 14,
      sym_ident,
      anon_sym_template,
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
  [2387] = 10,
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
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_type_name,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_as,
    STATE(99), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(391), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2446] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    STATE(96), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2476] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2506] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2536] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2566] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(419), 1,
      anon_sym_submenu,
    ACTIONS(422), 1,
      anon_sym_item,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2596] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2656] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(92), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2686] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2716] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2746] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2806] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2836] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(84), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_as,
    STATE(80), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(443), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2890] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2920] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(93), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_as,
    STATE(99), 3,
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
  [2974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DOT,
    ACTIONS(456), 1,
      anon_sym_as,
    STATE(99), 3,
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
  [2998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_as,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(459), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3022] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(399), 1,
      anon_sym_section,
    ACTIONS(401), 1,
      anon_sym_submenu,
    ACTIONS(403), 1,
      anon_sym_item,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(173), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3052] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      sym_ident,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_string_value,
    STATE(311), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3083] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      sym_ident,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_string_value,
    STATE(311), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      sym_ident,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      sym__ext_combo_box_item,
    STATE(300), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 10,
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
  [3161] = 7,
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
    STATE(237), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3187] = 8,
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
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      sym_ident,
    ACTIONS(486), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      anon_sym_template,
    ACTIONS(492), 1,
      anon_sym_menu,
    STATE(225), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3243] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_section,
    ACTIONS(499), 1,
      anon_sym_submenu,
    ACTIONS(501), 1,
      anon_sym_item,
    STATE(114), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(199), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3269] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_section,
    ACTIONS(508), 1,
      anon_sym_submenu,
    ACTIONS(511), 1,
      anon_sym_item,
    STATE(110), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(199), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3295] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_C_,
    ACTIONS(463), 1,
      sym_ident,
    STATE(300), 1,
      sym_string_value,
    STATE(311), 1,
      sym__ext_combo_box_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3323] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(278), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3349] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_section,
    ACTIONS(499), 1,
      anon_sym_submenu,
    ACTIONS(501), 1,
      anon_sym_item,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(115), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(199), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3375] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_section,
    ACTIONS(499), 1,
      anon_sym_submenu,
    ACTIONS(501), 1,
      anon_sym_item,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(110), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(199), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_section,
    ACTIONS(499), 1,
      anon_sym_submenu,
    ACTIONS(501), 1,
      anon_sym_item,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(110), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(199), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3427] = 8,
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
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_type_name,
    STATE(108), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(278), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(278), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(215), 1,
      sym_string_value,
    ACTIONS(550), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_using,
    ACTIONS(552), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(554), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [3781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(310), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(381), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(297), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym__,
    ACTIONS(475), 1,
      anon_sym_C_,
    STATE(286), 1,
      sym_string_value,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(152), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      aux_sym_binding_repeat1,
    ACTIONS(561), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3885] = 3,
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
  [3899] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DOT,
    ACTIONS(567), 1,
      anon_sym_COLON,
    ACTIONS(569), 1,
      anon_sym_COLON_COLON,
    ACTIONS(571), 1,
      anon_sym_EQ_GT,
    ACTIONS(563), 2,
      sym_ident,
      anon_sym_LBRACE,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [3947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      aux_sym_binding_repeat1,
    ACTIONS(575), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(580), 4,
      sym_ident,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
  [3977] = 3,
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
  [3991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DOT,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym__flags_repeat1,
    ACTIONS(563), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      aux_sym_binding_repeat1,
    ACTIONS(588), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(596), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(616), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DOT,
    ACTIONS(563), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym__ext_file_filter_item,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(632), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(636), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(664), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(670), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(678), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym__ext_file_filter_item,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(682), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      sym__ext_file_filter_item,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_ident,
    ACTIONS(692), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(694), 1,
      anon_sym_action,
    STATE(385), 1,
      sym_child_extension,
    STATE(386), 1,
      sym_ext_response,
  [4477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(698), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(704), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      aux_sym_signal_repeat1,
    ACTIONS(710), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym_signal_repeat1,
    ACTIONS(714), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_ident,
    STATE(187), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym_signal_repeat1,
    ACTIONS(714), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      aux_sym_signal_repeat1,
    ACTIONS(725), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(36), 1,
      sym_object,
    STATE(228), 1,
      sym_type_name,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym_signal_repeat1,
    ACTIONS(731), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym_signal_repeat1,
    ACTIONS(736), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(305), 1,
      sym_quoted,
    STATE(313), 1,
      sym__ext_file_filter_item,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym_signal_repeat1,
    ACTIONS(714), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(35), 1,
      sym_object,
    STATE(228), 1,
      sym_type_name,
  [4709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_ident,
    STATE(187), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(742), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      aux_sym_signal_repeat1,
    ACTIONS(746), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym_signal_repeat1,
    ACTIONS(714), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(65), 1,
      sym_object,
    STATE(228), 1,
      sym_type_name,
  [4811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_ident,
    STATE(197), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(758), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [4986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [4999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      aux_sym_ext_styles_repeat1,
  [5012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(227), 1,
      sym_type_name,
  [5025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_styles_repeat1,
  [5038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_ident,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_object_content,
  [5051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_ident,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_ext_accessibility_repeat1,
  [5064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_object_content,
  [5077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_ident,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_object_content,
  [5090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      aux_sym__flags_repeat1,
  [5127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(374), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    ACTIONS(807), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      aux_sym__flags_repeat1,
  [5164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(365), 1,
      sym_type_name,
  [5177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(276), 1,
      sym_type_name,
  [5251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(295), 1,
      sym_type_name,
  [5277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym__flags_repeat1,
  [5290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_ext_accessibility_repeat1,
  [5303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym_ext_adw_dialog_response,
  [5316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym_ext_adw_dialog_response,
  [5329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_closure_expression_repeat1,
  [5355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_closure_expression_repeat1,
  [5394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_ident,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_ext_accessibility_repeat1,
  [5407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_closure_expression_repeat1,
  [5446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym__ext_size_group_widget,
  [5485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(280), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_size_group_widget,
  [5509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_ident,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym_ext_accessibility_repeat1,
  [5522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(339), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_ident,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      sym_ext_adw_dialog_response,
  [5559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_ident,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      aux_sym_ext_accessibility_repeat1,
  [5572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_ext_styles_repeat1,
  [5650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_size_group_widget,
  [5663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(727), 1,
      sym_ident,
    STATE(318), 1,
      sym_type_name,
  [5676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(344), 1,
      sym_quoted,
    ACTIONS(109), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_object_content,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 1,
      anon_sym_LPAREN,
  [5723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_ident,
    STATE(377), 1,
      sym_menu_attribute,
  [5741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_ident,
    ACTIONS(936), 1,
      anon_sym_LBRACE,
  [5751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_ident,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
  [5761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      anon_sym_COMMA,
  [5771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
  [5781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      anon_sym_COMMA,
  [5791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      anon_sym_COMMA,
  [5801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_object_content,
  [5811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_object_content,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 2,
      sym_ident,
      anon_sym_RBRACE,
  [5845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_ident,
    ACTIONS(964), 1,
      anon_sym_SEMI,
  [5855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_ident,
    STATE(309), 1,
      sym_ext_adw_dialog_response,
  [5865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_object_content,
  [5875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_ident,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
  [5885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      anon_sym_COMMA,
  [5895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    ACTIONS(976), 1,
      anon_sym_default,
  [5905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_ident,
    STATE(323), 1,
      sym_menu_attribute,
  [5915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_ident,
    ACTIONS(982), 1,
      sym_number,
  [5933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_ident,
    STATE(308), 1,
      sym__ext_size_group_widget,
  [5943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_ident,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
  [5953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
  [5963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
    ACTIONS(996), 1,
      anon_sym_default,
  [5981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
  [5991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_ident,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [6049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACK,
  [6056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_ident,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_LBRACK,
  [6070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_GT,
  [6077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_EQ,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
  [6091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_COLON,
  [6098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_ident,
  [6119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LBRACK,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACK,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LBRACK,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_COLON,
  [6161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LBRACK,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_LBRACE,
  [6175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_LPAREN,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LBRACK,
  [6196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
  [6203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_COLON,
  [6210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACE,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [6224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
  [6231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_DOT,
  [6245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_LBRACE,
  [6287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SEMI,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_DOLLAR,
  [6315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_ident,
  [6322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_COLON,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_COLON,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_ident,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LT,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_ident,
  [6357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_number,
  [6364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_LT,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_ident,
  [6385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
  [6392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
  [6399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_GT,
  [6406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_DOLLAR,
  [6413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
  [6420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
  [6427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_RBRACK,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_EQ_GT,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
  [6455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_number,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_ident,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_LPAREN,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      ts_builtin_sym_end,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym_ident,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_response,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_ident,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RBRACK,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LBRACE,
  [6560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
  [6567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
  [6574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_ident,
  [6581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1230,
  [SMALL_STATE(35)] = 1271,
  [SMALL_STATE(36)] = 1296,
  [SMALL_STATE(37)] = 1321,
  [SMALL_STATE(38)] = 1346,
  [SMALL_STATE(39)] = 1371,
  [SMALL_STATE(40)] = 1396,
  [SMALL_STATE(41)] = 1421,
  [SMALL_STATE(42)] = 1446,
  [SMALL_STATE(43)] = 1471,
  [SMALL_STATE(44)] = 1496,
  [SMALL_STATE(45)] = 1521,
  [SMALL_STATE(46)] = 1546,
  [SMALL_STATE(47)] = 1571,
  [SMALL_STATE(48)] = 1596,
  [SMALL_STATE(49)] = 1621,
  [SMALL_STATE(50)] = 1646,
  [SMALL_STATE(51)] = 1671,
  [SMALL_STATE(52)] = 1696,
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
  [SMALL_STATE(76)] = 2312,
  [SMALL_STATE(77)] = 2337,
  [SMALL_STATE(78)] = 2362,
  [SMALL_STATE(79)] = 2387,
  [SMALL_STATE(80)] = 2422,
  [SMALL_STATE(81)] = 2446,
  [SMALL_STATE(82)] = 2476,
  [SMALL_STATE(83)] = 2506,
  [SMALL_STATE(84)] = 2536,
  [SMALL_STATE(85)] = 2566,
  [SMALL_STATE(86)] = 2596,
  [SMALL_STATE(87)] = 2626,
  [SMALL_STATE(88)] = 2656,
  [SMALL_STATE(89)] = 2686,
  [SMALL_STATE(90)] = 2716,
  [SMALL_STATE(91)] = 2746,
  [SMALL_STATE(92)] = 2776,
  [SMALL_STATE(93)] = 2806,
  [SMALL_STATE(94)] = 2836,
  [SMALL_STATE(95)] = 2866,
  [SMALL_STATE(96)] = 2890,
  [SMALL_STATE(97)] = 2920,
  [SMALL_STATE(98)] = 2950,
  [SMALL_STATE(99)] = 2974,
  [SMALL_STATE(100)] = 2998,
  [SMALL_STATE(101)] = 3022,
  [SMALL_STATE(102)] = 3052,
  [SMALL_STATE(103)] = 3083,
  [SMALL_STATE(104)] = 3114,
  [SMALL_STATE(105)] = 3145,
  [SMALL_STATE(106)] = 3161,
  [SMALL_STATE(107)] = 3187,
  [SMALL_STATE(108)] = 3215,
  [SMALL_STATE(109)] = 3243,
  [SMALL_STATE(110)] = 3269,
  [SMALL_STATE(111)] = 3295,
  [SMALL_STATE(112)] = 3323,
  [SMALL_STATE(113)] = 3349,
  [SMALL_STATE(114)] = 3375,
  [SMALL_STATE(115)] = 3401,
  [SMALL_STATE(116)] = 3427,
  [SMALL_STATE(117)] = 3455,
  [SMALL_STATE(118)] = 3481,
  [SMALL_STATE(119)] = 3504,
  [SMALL_STATE(120)] = 3519,
  [SMALL_STATE(121)] = 3534,
  [SMALL_STATE(122)] = 3549,
  [SMALL_STATE(123)] = 3564,
  [SMALL_STATE(124)] = 3579,
  [SMALL_STATE(125)] = 3594,
  [SMALL_STATE(126)] = 3609,
  [SMALL_STATE(127)] = 3634,
  [SMALL_STATE(128)] = 3659,
  [SMALL_STATE(129)] = 3674,
  [SMALL_STATE(130)] = 3699,
  [SMALL_STATE(131)] = 3714,
  [SMALL_STATE(132)] = 3739,
  [SMALL_STATE(133)] = 3761,
  [SMALL_STATE(134)] = 3781,
  [SMALL_STATE(135)] = 3803,
  [SMALL_STATE(136)] = 3825,
  [SMALL_STATE(137)] = 3847,
  [SMALL_STATE(138)] = 3869,
  [SMALL_STATE(139)] = 3885,
  [SMALL_STATE(140)] = 3899,
  [SMALL_STATE(141)] = 3919,
  [SMALL_STATE(142)] = 3933,
  [SMALL_STATE(143)] = 3947,
  [SMALL_STATE(144)] = 3963,
  [SMALL_STATE(145)] = 3977,
  [SMALL_STATE(146)] = 3991,
  [SMALL_STATE(147)] = 4011,
  [SMALL_STATE(148)] = 4027,
  [SMALL_STATE(149)] = 4044,
  [SMALL_STATE(150)] = 4055,
  [SMALL_STATE(151)] = 4068,
  [SMALL_STATE(152)] = 4085,
  [SMALL_STATE(153)] = 4096,
  [SMALL_STATE(154)] = 4113,
  [SMALL_STATE(155)] = 4126,
  [SMALL_STATE(156)] = 4143,
  [SMALL_STATE(157)] = 4156,
  [SMALL_STATE(158)] = 4169,
  [SMALL_STATE(159)] = 4182,
  [SMALL_STATE(160)] = 4195,
  [SMALL_STATE(161)] = 4208,
  [SMALL_STATE(162)] = 4225,
  [SMALL_STATE(163)] = 4238,
  [SMALL_STATE(164)] = 4251,
  [SMALL_STATE(165)] = 4264,
  [SMALL_STATE(166)] = 4277,
  [SMALL_STATE(167)] = 4290,
  [SMALL_STATE(168)] = 4303,
  [SMALL_STATE(169)] = 4316,
  [SMALL_STATE(170)] = 4329,
  [SMALL_STATE(171)] = 4342,
  [SMALL_STATE(172)] = 4355,
  [SMALL_STATE(173)] = 4368,
  [SMALL_STATE(174)] = 4381,
  [SMALL_STATE(175)] = 4394,
  [SMALL_STATE(176)] = 4411,
  [SMALL_STATE(177)] = 4424,
  [SMALL_STATE(178)] = 4441,
  [SMALL_STATE(179)] = 4458,
  [SMALL_STATE(180)] = 4477,
  [SMALL_STATE(181)] = 4490,
  [SMALL_STATE(182)] = 4507,
  [SMALL_STATE(183)] = 4520,
  [SMALL_STATE(184)] = 4531,
  [SMALL_STATE(185)] = 4545,
  [SMALL_STATE(186)] = 4555,
  [SMALL_STATE(187)] = 4569,
  [SMALL_STATE(188)] = 4583,
  [SMALL_STATE(189)] = 4597,
  [SMALL_STATE(190)] = 4611,
  [SMALL_STATE(191)] = 4627,
  [SMALL_STATE(192)] = 4637,
  [SMALL_STATE(193)] = 4651,
  [SMALL_STATE(194)] = 4665,
  [SMALL_STATE(195)] = 4679,
  [SMALL_STATE(196)] = 4693,
  [SMALL_STATE(197)] = 4709,
  [SMALL_STATE(198)] = 4723,
  [SMALL_STATE(199)] = 4737,
  [SMALL_STATE(200)] = 4747,
  [SMALL_STATE(201)] = 4757,
  [SMALL_STATE(202)] = 4767,
  [SMALL_STATE(203)] = 4781,
  [SMALL_STATE(204)] = 4795,
  [SMALL_STATE(205)] = 4811,
  [SMALL_STATE(206)] = 4821,
  [SMALL_STATE(207)] = 4831,
  [SMALL_STATE(208)] = 4841,
  [SMALL_STATE(209)] = 4851,
  [SMALL_STATE(210)] = 4865,
  [SMALL_STATE(211)] = 4875,
  [SMALL_STATE(212)] = 4885,
  [SMALL_STATE(213)] = 4895,
  [SMALL_STATE(214)] = 4909,
  [SMALL_STATE(215)] = 4919,
  [SMALL_STATE(216)] = 4933,
  [SMALL_STATE(217)] = 4943,
  [SMALL_STATE(218)] = 4953,
  [SMALL_STATE(219)] = 4963,
  [SMALL_STATE(220)] = 4973,
  [SMALL_STATE(221)] = 4986,
  [SMALL_STATE(222)] = 4999,
  [SMALL_STATE(223)] = 5012,
  [SMALL_STATE(224)] = 5025,
  [SMALL_STATE(225)] = 5038,
  [SMALL_STATE(226)] = 5051,
  [SMALL_STATE(227)] = 5064,
  [SMALL_STATE(228)] = 5077,
  [SMALL_STATE(229)] = 5090,
  [SMALL_STATE(230)] = 5103,
  [SMALL_STATE(231)] = 5114,
  [SMALL_STATE(232)] = 5127,
  [SMALL_STATE(233)] = 5138,
  [SMALL_STATE(234)] = 5151,
  [SMALL_STATE(235)] = 5164,
  [SMALL_STATE(236)] = 5177,
  [SMALL_STATE(237)] = 5190,
  [SMALL_STATE(238)] = 5203,
  [SMALL_STATE(239)] = 5216,
  [SMALL_STATE(240)] = 5225,
  [SMALL_STATE(241)] = 5238,
  [SMALL_STATE(242)] = 5251,
  [SMALL_STATE(243)] = 5264,
  [SMALL_STATE(244)] = 5277,
  [SMALL_STATE(245)] = 5290,
  [SMALL_STATE(246)] = 5303,
  [SMALL_STATE(247)] = 5316,
  [SMALL_STATE(248)] = 5329,
  [SMALL_STATE(249)] = 5342,
  [SMALL_STATE(250)] = 5355,
  [SMALL_STATE(251)] = 5368,
  [SMALL_STATE(252)] = 5381,
  [SMALL_STATE(253)] = 5394,
  [SMALL_STATE(254)] = 5407,
  [SMALL_STATE(255)] = 5420,
  [SMALL_STATE(256)] = 5433,
  [SMALL_STATE(257)] = 5446,
  [SMALL_STATE(258)] = 5459,
  [SMALL_STATE(259)] = 5472,
  [SMALL_STATE(260)] = 5485,
  [SMALL_STATE(261)] = 5496,
  [SMALL_STATE(262)] = 5509,
  [SMALL_STATE(263)] = 5522,
  [SMALL_STATE(264)] = 5535,
  [SMALL_STATE(265)] = 5546,
  [SMALL_STATE(266)] = 5559,
  [SMALL_STATE(267)] = 5572,
  [SMALL_STATE(268)] = 5585,
  [SMALL_STATE(269)] = 5598,
  [SMALL_STATE(270)] = 5611,
  [SMALL_STATE(271)] = 5624,
  [SMALL_STATE(272)] = 5637,
  [SMALL_STATE(273)] = 5650,
  [SMALL_STATE(274)] = 5663,
  [SMALL_STATE(275)] = 5676,
  [SMALL_STATE(276)] = 5687,
  [SMALL_STATE(277)] = 5697,
  [SMALL_STATE(278)] = 5705,
  [SMALL_STATE(279)] = 5713,
  [SMALL_STATE(280)] = 5723,
  [SMALL_STATE(281)] = 5731,
  [SMALL_STATE(282)] = 5741,
  [SMALL_STATE(283)] = 5751,
  [SMALL_STATE(284)] = 5761,
  [SMALL_STATE(285)] = 5771,
  [SMALL_STATE(286)] = 5781,
  [SMALL_STATE(287)] = 5791,
  [SMALL_STATE(288)] = 5801,
  [SMALL_STATE(289)] = 5811,
  [SMALL_STATE(290)] = 5819,
  [SMALL_STATE(291)] = 5829,
  [SMALL_STATE(292)] = 5837,
  [SMALL_STATE(293)] = 5845,
  [SMALL_STATE(294)] = 5855,
  [SMALL_STATE(295)] = 5865,
  [SMALL_STATE(296)] = 5875,
  [SMALL_STATE(297)] = 5885,
  [SMALL_STATE(298)] = 5895,
  [SMALL_STATE(299)] = 5905,
  [SMALL_STATE(300)] = 5915,
  [SMALL_STATE(301)] = 5923,
  [SMALL_STATE(302)] = 5933,
  [SMALL_STATE(303)] = 5943,
  [SMALL_STATE(304)] = 5953,
  [SMALL_STATE(305)] = 5963,
  [SMALL_STATE(306)] = 5971,
  [SMALL_STATE(307)] = 5981,
  [SMALL_STATE(308)] = 5991,
  [SMALL_STATE(309)] = 5999,
  [SMALL_STATE(310)] = 6007,
  [SMALL_STATE(311)] = 6015,
  [SMALL_STATE(312)] = 6023,
  [SMALL_STATE(313)] = 6031,
  [SMALL_STATE(314)] = 6039,
  [SMALL_STATE(315)] = 6049,
  [SMALL_STATE(316)] = 6056,
  [SMALL_STATE(317)] = 6063,
  [SMALL_STATE(318)] = 6070,
  [SMALL_STATE(319)] = 6077,
  [SMALL_STATE(320)] = 6084,
  [SMALL_STATE(321)] = 6091,
  [SMALL_STATE(322)] = 6098,
  [SMALL_STATE(323)] = 6105,
  [SMALL_STATE(324)] = 6112,
  [SMALL_STATE(325)] = 6119,
  [SMALL_STATE(326)] = 6126,
  [SMALL_STATE(327)] = 6133,
  [SMALL_STATE(328)] = 6140,
  [SMALL_STATE(329)] = 6147,
  [SMALL_STATE(330)] = 6154,
  [SMALL_STATE(331)] = 6161,
  [SMALL_STATE(332)] = 6168,
  [SMALL_STATE(333)] = 6175,
  [SMALL_STATE(334)] = 6182,
  [SMALL_STATE(335)] = 6189,
  [SMALL_STATE(336)] = 6196,
  [SMALL_STATE(337)] = 6203,
  [SMALL_STATE(338)] = 6210,
  [SMALL_STATE(339)] = 6217,
  [SMALL_STATE(340)] = 6224,
  [SMALL_STATE(341)] = 6231,
  [SMALL_STATE(342)] = 6238,
  [SMALL_STATE(343)] = 6245,
  [SMALL_STATE(344)] = 6252,
  [SMALL_STATE(345)] = 6259,
  [SMALL_STATE(346)] = 6266,
  [SMALL_STATE(347)] = 6273,
  [SMALL_STATE(348)] = 6280,
  [SMALL_STATE(349)] = 6287,
  [SMALL_STATE(350)] = 6294,
  [SMALL_STATE(351)] = 6301,
  [SMALL_STATE(352)] = 6308,
  [SMALL_STATE(353)] = 6315,
  [SMALL_STATE(354)] = 6322,
  [SMALL_STATE(355)] = 6329,
  [SMALL_STATE(356)] = 6336,
  [SMALL_STATE(357)] = 6343,
  [SMALL_STATE(358)] = 6350,
  [SMALL_STATE(359)] = 6357,
  [SMALL_STATE(360)] = 6364,
  [SMALL_STATE(361)] = 6371,
  [SMALL_STATE(362)] = 6378,
  [SMALL_STATE(363)] = 6385,
  [SMALL_STATE(364)] = 6392,
  [SMALL_STATE(365)] = 6399,
  [SMALL_STATE(366)] = 6406,
  [SMALL_STATE(367)] = 6413,
  [SMALL_STATE(368)] = 6420,
  [SMALL_STATE(369)] = 6427,
  [SMALL_STATE(370)] = 6434,
  [SMALL_STATE(371)] = 6441,
  [SMALL_STATE(372)] = 6448,
  [SMALL_STATE(373)] = 6455,
  [SMALL_STATE(374)] = 6462,
  [SMALL_STATE(375)] = 6469,
  [SMALL_STATE(376)] = 6476,
  [SMALL_STATE(377)] = 6483,
  [SMALL_STATE(378)] = 6490,
  [SMALL_STATE(379)] = 6497,
  [SMALL_STATE(380)] = 6504,
  [SMALL_STATE(381)] = 6511,
  [SMALL_STATE(382)] = 6518,
  [SMALL_STATE(383)] = 6525,
  [SMALL_STATE(384)] = 6532,
  [SMALL_STATE(385)] = 6539,
  [SMALL_STATE(386)] = 6546,
  [SMALL_STATE(387)] = 6553,
  [SMALL_STATE(388)] = 6560,
  [SMALL_STATE(389)] = 6567,
  [SMALL_STATE(390)] = 6574,
  [SMALL_STATE(391)] = 6581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(140),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(390),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(243),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(179),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(338),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(335),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(334),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(332),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(331),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(328),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(326),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(325),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(320),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(317),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(340),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(315),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 47),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 47),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 46),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 46),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 47),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 47),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 15),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 16),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 16),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 44),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 44),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 46),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 46),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 42),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 42),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 44),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 44),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 18),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 18),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 23),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 23),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 42),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 42),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 19),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 19),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 21),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 21),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 22),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 22),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 22),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 22),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 22),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 22),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 23),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 23),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 24),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 24),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 21),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 21),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 22),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 22),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 22),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 22),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 24),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 24),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 22),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 22),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(354),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(283),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(282),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(279),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(361),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(360),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(158),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(390),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(223),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(285),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(303),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(304),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(307),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 37),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 37),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 37),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 37),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(383),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(143),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 6),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 7),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 7),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 40),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 40),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 7),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 7),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 43),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(187),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(192),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 41),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 27),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(362),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 17), SHIFT_REPEAT(321),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 17),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(294),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(34),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 20), SHIFT_REPEAT(342),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 20),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30), SHIFT_REPEAT(111),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33), SHIFT_REPEAT(194),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36), SHIFT_REPEAT(302),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(118),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39), SHIFT_REPEAT(260),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 37),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 13),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 14),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 25),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 11),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 12),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 26),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 34),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 27),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 28),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 45),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 31),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 26),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 25),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
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

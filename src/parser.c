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
#define STATE_COUNT 424
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 52

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
  anon_sym_marks = 51,
  anon_sym_mark = 52,
  anon_sym_widgets = 53,
  anon_sym_strings = 54,
  anon_sym_styles = 55,
  anon_sym_action = 56,
  anon_sym_response = 57,
  anon_sym_EQ = 58,
  anon_sym_default = 59,
  sym_source_file = 60,
  sym_quoted = 61,
  sym_type_name = 62,
  sym_using = 63,
  sym_template = 64,
  sym_object = 65,
  sym_object_content = 66,
  sym_signal = 67,
  sym_property = 68,
  sym_closure_expression = 69,
  sym_lookup_expression = 70,
  sym_cast_expression = 71,
  sym_literal = 72,
  sym__type_literal = 73,
  sym__quoted_literal = 74,
  sym__number_literal = 75,
  sym__ident_literal = 76,
  sym__expression = 77,
  sym_binding = 78,
  sym_object_value = 79,
  sym_value = 80,
  sym_translated = 81,
  sym__flags = 82,
  sym__child = 83,
  sym_menu = 84,
  sym_menu_child = 85,
  sym_menu_section = 86,
  sym_menu_submenu = 87,
  sym_menu_item = 88,
  sym_menu_attribute = 89,
  sym_string_value = 90,
  sym_menu_item_shorthand = 91,
  sym__extension = 92,
  sym_ext_accessibility = 93,
  sym_ext_adw_dialog = 94,
  sym_ext_adw_dialog_response = 95,
  sym_ext_adw_breakpoint_condition = 96,
  sym_ext_adw_breakpoint = 97,
  sym_ext_combo_box_items = 98,
  sym__ext_combo_box_item = 99,
  sym_ext_file_filter_mime_types = 100,
  sym_ext_file_filter_patterns = 101,
  sym_ext_file_filter_suffixes = 102,
  sym__ext_file_filter_item = 103,
  sym_ext_layout = 104,
  sym_ext_list_item_factory = 105,
  sym_ext_scale_marks = 106,
  sym_ext_scale_mark = 107,
  sym_ext_size_group_widgets = 108,
  sym__ext_size_group_widget = 109,
  sym_ext_string_list_strings = 110,
  sym__ext_strings_list_item = 111,
  sym_ext_styles = 112,
  sym_child_extension = 113,
  sym_ext_response = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_source_file_repeat2 = 116,
  aux_sym_object_content_repeat1 = 117,
  aux_sym_signal_repeat1 = 118,
  aux_sym_closure_expression_repeat1 = 119,
  aux_sym__expression_repeat1 = 120,
  aux_sym_binding_repeat1 = 121,
  aux_sym__flags_repeat1 = 122,
  aux_sym_menu_repeat1 = 123,
  aux_sym_menu_section_repeat1 = 124,
  aux_sym_ext_accessibility_repeat1 = 125,
  aux_sym_ext_adw_dialog_repeat1 = 126,
  aux_sym_ext_adw_dialog_response_repeat1 = 127,
  aux_sym_ext_adw_breakpoint_repeat1 = 128,
  aux_sym_ext_combo_box_items_repeat1 = 129,
  aux_sym_ext_file_filter_mime_types_repeat1 = 130,
  aux_sym_ext_scale_marks_repeat1 = 131,
  aux_sym_ext_size_group_widgets_repeat1 = 132,
  aux_sym_ext_string_list_strings_repeat1 = 133,
  aux_sym_ext_styles_repeat1 = 134,
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
  [aux_sym_ext_scale_marks_repeat1] = "ext_scale_marks_repeat1",
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
  field_position = 13,
  field_property = 14,
  field_string = 15,
  field_subclass = 16,
  field_value = 17,
  field_version = 18,
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
  [field_position] = "position",
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
  [42] = {.index = 80, .length = 1},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 1},
  [45] = {.index = 84, .length = 2},
  [46] = {.index = 86, .length = 3},
  [47] = {.index = 89, .length = 3},
  [48] = {.index = 92, .length = 2},
  [49] = {.index = 94, .length = 3},
  [50] = {.index = 97, .length = 2},
  [51] = {.index = 99, .length = 4},
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
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [89] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [92] =
    {field_position, 4},
    {field_value, 2},
  [94] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [97] =
    {field_position, 5},
    {field_value, 3},
  [99] =
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
  [91] = 88,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 85,
  [97] = 97,
  [98] = 98,
  [99] = 86,
  [100] = 89,
  [101] = 101,
  [102] = 97,
  [103] = 103,
  [104] = 103,
  [105] = 101,
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
  [128] = 125,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 70,
  [145] = 145,
  [146] = 146,
  [147] = 69,
  [148] = 72,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 68,
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
  [191] = 172,
  [192] = 169,
  [193] = 155,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 161,
  [202] = 159,
  [203] = 203,
  [204] = 204,
  [205] = 157,
  [206] = 206,
  [207] = 207,
  [208] = 177,
  [209] = 209,
  [210] = 187,
  [211] = 211,
  [212] = 212,
  [213] = 175,
  [214] = 165,
  [215] = 170,
  [216] = 216,
  [217] = 166,
  [218] = 180,
  [219] = 178,
  [220] = 179,
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
  [283] = 120,
  [284] = 262,
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
  [312] = 301,
  [313] = 300,
  [314] = 295,
  [315] = 307,
  [316] = 316,
  [317] = 317,
  [318] = 296,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 303,
  [325] = 325,
  [326] = 326,
  [327] = 304,
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
  [409] = 372,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 360,
  [417] = 417,
  [418] = 418,
  [419] = 387,
  [420] = 386,
  [421] = 421,
  [422] = 422,
  [423] = 423,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(400);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '=') ADVANCE(472);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(233)
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '}') ADVANCE(396);
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
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23)
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
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(400);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 't') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 't') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 't') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '_') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == ')') ADVANCE(400);
      if (lookahead == ',') ADVANCE(403);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '}') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '}') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(436);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '}') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '}') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(398);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(411);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 129:
      if (lookahead == 'k') ADVANCE(460);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(459);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 224:
      if (lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(437);
      END_STATE();
    case 232:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 233:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(232)
      END_STATE();
    case 234:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(238)
      END_STATE();
    case 235:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(238)
      if (lookahead == '\r') SKIP(234)
      END_STATE();
    case 236:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(239)
      END_STATE();
    case 237:
      if (eof) ADVANCE(240);
      if (lookahead == '\n') SKIP(239)
      if (lookahead == '\r') SKIP(236)
      END_STATE();
    case 238:
      if (eof) ADVANCE(240);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(379);
      if (lookahead == '=') ADVANCE(471);
      if (lookahead == '\\') SKIP(235)
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(238)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 239:
      if (eof) ADVANCE(240);
      if (lookahead == '$') ADVANCE(388);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '\\') SKIP(237)
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 't') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(239)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == 'y') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(231);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(398);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
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
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 21},
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
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 28},
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
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 238},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 40},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 239},
  [111] = {.lex_state = 239},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 239},
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
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 238},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 239},
  [145] = {.lex_state = 238},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 239},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 239},
  [155] = {.lex_state = 40},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 239},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 27},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 27},
  [174] = {.lex_state = 42},
  [175] = {.lex_state = 40},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 40},
  [178] = {.lex_state = 40},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 40},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 239},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 239},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 27},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 27},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 41},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 27},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 238},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 41},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 27},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 41},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 41},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 27},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 27},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 27},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 27},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 27},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 41},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 27},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 39},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 27},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 27},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 27},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 238},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 27},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 28},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 238},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 41},
  [380] = {.lex_state = 27},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 27},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 27},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
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
  [403] = {.lex_state = 27},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 27},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 238},
  [412] = {.lex_state = 27},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 27},
  [423] = {.lex_state = 238},
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
    [sym_source_file] = STATE(413),
    [sym_type_name] = STATE(262),
    [sym_using] = STATE(83),
    [sym_template] = STATE(111),
    [sym_object] = STATE(111),
    [sym_menu] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(83),
    [aux_sym_source_file_repeat2] = STATE(111),
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
  [0] = 22,
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
      anon_sym_marks,
    ACTIONS(45), 1,
      anon_sym_widgets,
    ACTIONS(47), 1,
      anon_sym_strings,
    ACTIONS(49), 1,
      anon_sym_styles,
    STATE(284), 1,
      sym_type_name,
    STATE(55), 2,
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
  [85] = 22,
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
      anon_sym_marks,
    ACTIONS(45), 1,
      anon_sym_widgets,
    ACTIONS(47), 1,
      anon_sym_strings,
    ACTIONS(49), 1,
      anon_sym_styles,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_name,
    STATE(55), 2,
      sym_object,
      sym__child,
    STATE(4), 18,
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
  [170] = 22,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(284), 1,
      sym_type_name,
    STATE(55), 2,
      sym_object,
      sym__child,
    STATE(4), 18,
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
  [255] = 22,
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
      anon_sym_marks,
    ACTIONS(45), 1,
      anon_sym_widgets,
    ACTIONS(47), 1,
      anon_sym_strings,
    ACTIONS(49), 1,
      anon_sym_styles,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_name,
    STATE(55), 2,
      sym_object,
      sym__child,
    STATE(4), 18,
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
  [340] = 22,
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
      anon_sym_marks,
    ACTIONS(45), 1,
      anon_sym_widgets,
    ACTIONS(47), 1,
      anon_sym_strings,
    ACTIONS(49), 1,
      anon_sym_styles,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_name,
    STATE(55), 2,
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
  [425] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_bind,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    STATE(262), 1,
      sym_type_name,
    STATE(359), 1,
      sym__flags,
    STATE(361), 1,
      sym_translated,
    STATE(363), 1,
      sym_literal,
    STATE(364), 1,
      sym_object,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(362), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(126), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(130), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(134), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(138), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [589] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(142), 1,
      sym_ident,
    STATE(340), 1,
      sym_value,
    STATE(359), 1,
      sym__flags,
    STATE(361), 1,
      sym_translated,
    STATE(363), 1,
      sym_literal,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [713] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [739] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [791] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [843] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [921] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [947] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1077] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1181] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(142), 1,
      sym_ident,
    STATE(359), 1,
      sym__flags,
    STATE(361), 1,
      sym_translated,
    STATE(363), 1,
      sym_literal,
    STATE(407), 1,
      sym_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1357] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1635] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1739] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1817] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1895] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1947] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
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
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
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
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
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
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
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
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
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
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
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
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
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
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
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
  [2199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
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
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
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
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 3,
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
  [2277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 3,
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
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 3,
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
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 3,
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
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 3,
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
  [2381] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2451] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2492] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2533] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_typeof,
    ACTIONS(248), 1,
      sym_ident,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym__expression,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(134), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2574] = 10,
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
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_type_name,
    STATE(139), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(119), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_as,
    STATE(98), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(412), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2633] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    STATE(101), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2663] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2693] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(99), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_as,
    STATE(90), 3,
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
  [2807] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_as,
    STATE(90), 3,
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
  [2861] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2891] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(102), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_as,
    STATE(92), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(462), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2945] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(105), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2975] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_as,
    STATE(90), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(468), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3029] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3059] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3089] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3119] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3149] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(88), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3179] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(91), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3209] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_ident,
    ACTIONS(420), 1,
      anon_sym_section,
    ACTIONS(422), 1,
      anon_sym_submenu,
    ACTIONS(424), 1,
      anon_sym_item,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(155), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(484), 1,
      sym_ident,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      sym__ext_combo_box_item,
    STATE(335), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(484), 1,
      sym_ident,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym__ext_combo_box_item,
    STATE(335), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3301] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(484), 1,
      sym_ident,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      sym__ext_combo_box_item,
    STATE(335), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      anon_sym_section,
    ACTIONS(497), 1,
      anon_sym_submenu,
    ACTIONS(500), 1,
      anon_sym_item,
    STATE(109), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(193), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      sym_ident,
    ACTIONS(508), 1,
      anon_sym_DOLLAR,
    ACTIONS(511), 1,
      anon_sym_template,
    ACTIONS(514), 1,
      anon_sym_menu,
    STATE(262), 1,
      sym_type_name,
    STATE(110), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3386] = 8,
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
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_type_name,
    STATE(110), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3414] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_section,
    ACTIONS(521), 1,
      anon_sym_submenu,
    ACTIONS(523), 1,
      anon_sym_item,
    STATE(109), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(193), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_C_,
    ACTIONS(484), 1,
      sym_ident,
    STATE(298), 1,
      sym__ext_combo_box_item,
    STATE(335), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_section,
    ACTIONS(521), 1,
      anon_sym_submenu,
    ACTIONS(523), 1,
      anon_sym_item,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(109), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(193), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(292), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_section,
    ACTIONS(521), 1,
      anon_sym_submenu,
    ACTIONS(523), 1,
      anon_sym_item,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(193), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(255), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3572] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_section,
    ACTIONS(521), 1,
      anon_sym_submenu,
    ACTIONS(523), 1,
      anon_sym_item,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(193), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3598] = 8,
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
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_type_name,
    STATE(110), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 10,
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
  [3642] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(292), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3668] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3803] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3833] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(292), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(367), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(299), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(222), 1,
      sym_string_value,
    ACTIONS(571), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_using,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(139), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(575), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(327), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4034] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(376), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(304), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym__,
    ACTIONS(529), 1,
      anon_sym_C_,
    STATE(368), 1,
      sym_string_value,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(168), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(582), 4,
      sym_ident,
      anon_sym_using,
      anon_sym_template,
      anon_sym_menu,
  [4128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOT,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_COLON_COLON,
    ACTIONS(592), 1,
      anon_sym_EQ_GT,
    ACTIONS(584), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      aux_sym_binding_repeat1,
    ACTIONS(596), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOT,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__flags_repeat1,
    ACTIONS(584), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_binding_repeat1,
    ACTIONS(604), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_binding_repeat1,
    ACTIONS(608), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(613), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4344] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(643), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(647), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOT,
    ACTIONS(584), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(669), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_ident,
    ACTIONS(679), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(681), 1,
      anon_sym_action,
    STATE(374), 1,
      sym_ext_response,
    STATE(377), 1,
      sym_child_extension,
  [4545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4558] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(709), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(717), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      aux_sym_signal_repeat1,
    ACTIONS(731), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(13), 1,
      sym_object,
    STATE(284), 1,
      sym_type_name,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym_signal_repeat1,
    ACTIONS(744), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(39), 1,
      sym_object,
    STATE(284), 1,
      sym_type_name,
  [4876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(750), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(41), 1,
      sym_object,
    STATE(284), 1,
      sym_type_name,
  [4940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(754), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(750), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      aux_sym_signal_repeat1,
    ACTIONS(761), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(297), 1,
      sym__ext_file_filter_item,
    STATE(336), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_ident,
    STATE(221), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(750), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_signal_repeat1,
    ACTIONS(781), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_signal_repeat1,
    ACTIONS(750), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(348), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_ident,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_ext_accessibility_repeat1,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_number,
    ACTIONS(796), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      aux_sym__flags_repeat1,
  [5265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    ACTIONS(805), 1,
      anon_sym_mark,
    STATE(332), 1,
      sym_ext_scale_mark,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(378), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      sym__ext_size_group_widget,
  [5315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(375), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_styles_repeat1,
  [5417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(244), 1,
      aux_sym__flags_repeat1,
  [5430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    ACTIONS(841), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      aux_sym__flags_repeat1,
  [5443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(293), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_closure_expression_repeat1,
  [5467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_ident,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(306), 1,
      sym_ext_adw_dialog_response,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(382), 1,
      sym_type_name,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(355), 1,
      sym_type_name,
  [5558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_ext_styles_repeat1,
  [5571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
    ACTIONS(851), 1,
      sym_ident,
    STATE(306), 1,
      sym_ext_adw_dialog_response,
  [5610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(288), 1,
      sym_type_name,
  [5623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_ext_accessibility_repeat1,
  [5649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_ident,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_object_content,
  [5675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
    STATE(241), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_ident,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
  [5740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(369), 1,
      sym_quoted,
    ACTIONS(114), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_ext_accessibility_repeat1,
  [5777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
  [5790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_mark,
    ACTIONS(928), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      sym_ext_scale_mark,
  [5803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym__ext_size_group_widget,
  [5829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_mark,
    ACTIONS(937), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      sym_ext_scale_mark,
  [5842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_ident,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      sym__ext_size_group_widget,
  [5855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_ext_accessibility_repeat1,
  [5868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_ident,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym_ext_adw_dialog_response,
  [5907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_ident,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      aux_sym_ext_accessibility_repeat1,
  [5920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_ident,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_object_content,
  [5955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(319), 1,
      sym_type_name,
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_ident,
    STATE(317), 1,
      sym_type_name,
  [5981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_styles_repeat1,
  [5994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    ACTIONS(968), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_object_content,
  [6007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      anon_sym_COMMA,
  [6017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      anon_sym_COMMA,
  [6059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    ACTIONS(986), 1,
      anon_sym_LPAREN,
  [6069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    STATE(409), 1,
      sym_menu_attribute,
  [6079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_ident,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
  [6113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym_ident,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
  [6123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
  [6133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
  [6143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
  [6153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_object_content,
  [6179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_ident,
    STATE(306), 1,
      sym_ext_adw_dialog_response,
  [6189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
    ACTIONS(1020), 1,
      anon_sym_default,
  [6199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
    ACTIONS(1024), 1,
      anon_sym_default,
  [6209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_ident,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
  [6219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_ident,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
  [6229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_ident,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
  [6239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACE,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
  [6249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_object_content,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_object_content,
  [6277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    STATE(372), 1,
      sym_menu_attribute,
  [6287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_object_content,
  [6297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_mark,
    STATE(332), 1,
      sym_ext_scale_mark,
  [6307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_ident,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [6317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_ident,
    STATE(291), 1,
      sym__ext_size_group_widget,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
  [6345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
  [6397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_ident,
    ACTIONS(1068), 1,
      sym_number,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_ident,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
  [6475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SEMI,
  [6482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_ident,
  [6489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_ident,
  [6496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LPAREN,
  [6503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_ident,
  [6510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_DOLLAR,
  [6517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_ident,
  [6524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_DOT,
  [6531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
  [6538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
  [6545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_COLON,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COLON,
  [6559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [6566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
  [6573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_ident,
  [6580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_GT,
  [6587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_LPAREN,
  [6594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_EQ_GT,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_ident,
  [6608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [6615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [6622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
  [6650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_number,
  [6657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LT,
  [6664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
  [6685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LPAREN,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_LPAREN,
  [6699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_RBRACE,
  [6706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_COLON,
  [6713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
  [6720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [6727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [6734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RBRACK,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
  [6748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_response,
  [6755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_ident,
  [6762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RBRACK,
  [6769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_GT,
  [6776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_DOLLAR,
  [6783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_ident,
  [6790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_LPAREN,
  [6797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_LBRACE,
  [6804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_LBRACE,
  [6811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_ident,
  [6818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_LBRACK,
  [6832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_LBRACK,
  [6839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_LBRACK,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_LBRACE,
  [6853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LBRACK,
  [6860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_LBRACK,
  [6867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_LBRACK,
  [6874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LBRACK,
  [6881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LBRACE,
  [6888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
  [6895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
  [6902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_LBRACK,
  [6909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
  [6916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym_ident,
  [6923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LT,
  [6930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_ident,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_SEMI,
  [6944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
  [6951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_LBRACE,
  [6958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
  [6965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
  [6972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_number,
  [6979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_ident,
  [6986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      ts_builtin_sym_end,
  [6993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
  [7000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_COLON,
  [7007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
  [7014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
  [7021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_LPAREN,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_LBRACE,
  [7035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_LBRACE,
  [7042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_COLON,
  [7049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [7056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 485,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 537,
  [SMALL_STATE(11)] = 563,
  [SMALL_STATE(12)] = 589,
  [SMALL_STATE(13)] = 635,
  [SMALL_STATE(14)] = 661,
  [SMALL_STATE(15)] = 687,
  [SMALL_STATE(16)] = 713,
  [SMALL_STATE(17)] = 739,
  [SMALL_STATE(18)] = 765,
  [SMALL_STATE(19)] = 791,
  [SMALL_STATE(20)] = 817,
  [SMALL_STATE(21)] = 843,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 895,
  [SMALL_STATE(24)] = 921,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 973,
  [SMALL_STATE(27)] = 999,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1051,
  [SMALL_STATE(30)] = 1077,
  [SMALL_STATE(31)] = 1103,
  [SMALL_STATE(32)] = 1129,
  [SMALL_STATE(33)] = 1155,
  [SMALL_STATE(34)] = 1181,
  [SMALL_STATE(35)] = 1207,
  [SMALL_STATE(36)] = 1233,
  [SMALL_STATE(37)] = 1259,
  [SMALL_STATE(38)] = 1285,
  [SMALL_STATE(39)] = 1331,
  [SMALL_STATE(40)] = 1357,
  [SMALL_STATE(41)] = 1401,
  [SMALL_STATE(42)] = 1427,
  [SMALL_STATE(43)] = 1453,
  [SMALL_STATE(44)] = 1479,
  [SMALL_STATE(45)] = 1505,
  [SMALL_STATE(46)] = 1531,
  [SMALL_STATE(47)] = 1557,
  [SMALL_STATE(48)] = 1583,
  [SMALL_STATE(49)] = 1609,
  [SMALL_STATE(50)] = 1635,
  [SMALL_STATE(51)] = 1661,
  [SMALL_STATE(52)] = 1687,
  [SMALL_STATE(53)] = 1713,
  [SMALL_STATE(54)] = 1739,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1791,
  [SMALL_STATE(57)] = 1817,
  [SMALL_STATE(58)] = 1843,
  [SMALL_STATE(59)] = 1869,
  [SMALL_STATE(60)] = 1895,
  [SMALL_STATE(61)] = 1921,
  [SMALL_STATE(62)] = 1947,
  [SMALL_STATE(63)] = 1991,
  [SMALL_STATE(64)] = 2017,
  [SMALL_STATE(65)] = 2043,
  [SMALL_STATE(66)] = 2069,
  [SMALL_STATE(67)] = 2095,
  [SMALL_STATE(68)] = 2121,
  [SMALL_STATE(69)] = 2147,
  [SMALL_STATE(70)] = 2173,
  [SMALL_STATE(71)] = 2199,
  [SMALL_STATE(72)] = 2225,
  [SMALL_STATE(73)] = 2251,
  [SMALL_STATE(74)] = 2277,
  [SMALL_STATE(75)] = 2303,
  [SMALL_STATE(76)] = 2329,
  [SMALL_STATE(77)] = 2355,
  [SMALL_STATE(78)] = 2381,
  [SMALL_STATE(79)] = 2425,
  [SMALL_STATE(80)] = 2451,
  [SMALL_STATE(81)] = 2492,
  [SMALL_STATE(82)] = 2533,
  [SMALL_STATE(83)] = 2574,
  [SMALL_STATE(84)] = 2609,
  [SMALL_STATE(85)] = 2633,
  [SMALL_STATE(86)] = 2663,
  [SMALL_STATE(87)] = 2693,
  [SMALL_STATE(88)] = 2723,
  [SMALL_STATE(89)] = 2753,
  [SMALL_STATE(90)] = 2783,
  [SMALL_STATE(91)] = 2807,
  [SMALL_STATE(92)] = 2837,
  [SMALL_STATE(93)] = 2861,
  [SMALL_STATE(94)] = 2891,
  [SMALL_STATE(95)] = 2921,
  [SMALL_STATE(96)] = 2945,
  [SMALL_STATE(97)] = 2975,
  [SMALL_STATE(98)] = 3005,
  [SMALL_STATE(99)] = 3029,
  [SMALL_STATE(100)] = 3059,
  [SMALL_STATE(101)] = 3089,
  [SMALL_STATE(102)] = 3119,
  [SMALL_STATE(103)] = 3149,
  [SMALL_STATE(104)] = 3179,
  [SMALL_STATE(105)] = 3209,
  [SMALL_STATE(106)] = 3239,
  [SMALL_STATE(107)] = 3270,
  [SMALL_STATE(108)] = 3301,
  [SMALL_STATE(109)] = 3332,
  [SMALL_STATE(110)] = 3358,
  [SMALL_STATE(111)] = 3386,
  [SMALL_STATE(112)] = 3414,
  [SMALL_STATE(113)] = 3440,
  [SMALL_STATE(114)] = 3468,
  [SMALL_STATE(115)] = 3494,
  [SMALL_STATE(116)] = 3520,
  [SMALL_STATE(117)] = 3546,
  [SMALL_STATE(118)] = 3572,
  [SMALL_STATE(119)] = 3598,
  [SMALL_STATE(120)] = 3626,
  [SMALL_STATE(121)] = 3642,
  [SMALL_STATE(122)] = 3668,
  [SMALL_STATE(123)] = 3683,
  [SMALL_STATE(124)] = 3708,
  [SMALL_STATE(125)] = 3723,
  [SMALL_STATE(126)] = 3748,
  [SMALL_STATE(127)] = 3763,
  [SMALL_STATE(128)] = 3778,
  [SMALL_STATE(129)] = 3803,
  [SMALL_STATE(130)] = 3818,
  [SMALL_STATE(131)] = 3833,
  [SMALL_STATE(132)] = 3856,
  [SMALL_STATE(133)] = 3881,
  [SMALL_STATE(134)] = 3896,
  [SMALL_STATE(135)] = 3911,
  [SMALL_STATE(136)] = 3926,
  [SMALL_STATE(137)] = 3948,
  [SMALL_STATE(138)] = 3970,
  [SMALL_STATE(139)] = 3992,
  [SMALL_STATE(140)] = 4012,
  [SMALL_STATE(141)] = 4034,
  [SMALL_STATE(142)] = 4056,
  [SMALL_STATE(143)] = 4078,
  [SMALL_STATE(144)] = 4100,
  [SMALL_STATE(145)] = 4114,
  [SMALL_STATE(146)] = 4128,
  [SMALL_STATE(147)] = 4148,
  [SMALL_STATE(148)] = 4162,
  [SMALL_STATE(149)] = 4176,
  [SMALL_STATE(150)] = 4192,
  [SMALL_STATE(151)] = 4212,
  [SMALL_STATE(152)] = 4228,
  [SMALL_STATE(153)] = 4242,
  [SMALL_STATE(154)] = 4258,
  [SMALL_STATE(155)] = 4271,
  [SMALL_STATE(156)] = 4284,
  [SMALL_STATE(157)] = 4301,
  [SMALL_STATE(158)] = 4314,
  [SMALL_STATE(159)] = 4331,
  [SMALL_STATE(160)] = 4344,
  [SMALL_STATE(161)] = 4361,
  [SMALL_STATE(162)] = 4374,
  [SMALL_STATE(163)] = 4387,
  [SMALL_STATE(164)] = 4400,
  [SMALL_STATE(165)] = 4413,
  [SMALL_STATE(166)] = 4426,
  [SMALL_STATE(167)] = 4439,
  [SMALL_STATE(168)] = 4452,
  [SMALL_STATE(169)] = 4463,
  [SMALL_STATE(170)] = 4476,
  [SMALL_STATE(171)] = 4489,
  [SMALL_STATE(172)] = 4502,
  [SMALL_STATE(173)] = 4515,
  [SMALL_STATE(174)] = 4526,
  [SMALL_STATE(175)] = 4545,
  [SMALL_STATE(176)] = 4558,
  [SMALL_STATE(177)] = 4575,
  [SMALL_STATE(178)] = 4588,
  [SMALL_STATE(179)] = 4601,
  [SMALL_STATE(180)] = 4614,
  [SMALL_STATE(181)] = 4627,
  [SMALL_STATE(182)] = 4644,
  [SMALL_STATE(183)] = 4657,
  [SMALL_STATE(184)] = 4674,
  [SMALL_STATE(185)] = 4685,
  [SMALL_STATE(186)] = 4698,
  [SMALL_STATE(187)] = 4715,
  [SMALL_STATE(188)] = 4728,
  [SMALL_STATE(189)] = 4745,
  [SMALL_STATE(190)] = 4762,
  [SMALL_STATE(191)] = 4776,
  [SMALL_STATE(192)] = 4786,
  [SMALL_STATE(193)] = 4796,
  [SMALL_STATE(194)] = 4806,
  [SMALL_STATE(195)] = 4822,
  [SMALL_STATE(196)] = 4832,
  [SMALL_STATE(197)] = 4846,
  [SMALL_STATE(198)] = 4860,
  [SMALL_STATE(199)] = 4876,
  [SMALL_STATE(200)] = 4890,
  [SMALL_STATE(201)] = 4904,
  [SMALL_STATE(202)] = 4914,
  [SMALL_STATE(203)] = 4924,
  [SMALL_STATE(204)] = 4940,
  [SMALL_STATE(205)] = 4954,
  [SMALL_STATE(206)] = 4964,
  [SMALL_STATE(207)] = 4978,
  [SMALL_STATE(208)] = 4992,
  [SMALL_STATE(209)] = 5002,
  [SMALL_STATE(210)] = 5016,
  [SMALL_STATE(211)] = 5026,
  [SMALL_STATE(212)] = 5036,
  [SMALL_STATE(213)] = 5050,
  [SMALL_STATE(214)] = 5060,
  [SMALL_STATE(215)] = 5070,
  [SMALL_STATE(216)] = 5080,
  [SMALL_STATE(217)] = 5094,
  [SMALL_STATE(218)] = 5104,
  [SMALL_STATE(219)] = 5114,
  [SMALL_STATE(220)] = 5124,
  [SMALL_STATE(221)] = 5134,
  [SMALL_STATE(222)] = 5148,
  [SMALL_STATE(223)] = 5162,
  [SMALL_STATE(224)] = 5176,
  [SMALL_STATE(225)] = 5190,
  [SMALL_STATE(226)] = 5204,
  [SMALL_STATE(227)] = 5215,
  [SMALL_STATE(228)] = 5228,
  [SMALL_STATE(229)] = 5241,
  [SMALL_STATE(230)] = 5252,
  [SMALL_STATE(231)] = 5265,
  [SMALL_STATE(232)] = 5278,
  [SMALL_STATE(233)] = 5289,
  [SMALL_STATE(234)] = 5302,
  [SMALL_STATE(235)] = 5315,
  [SMALL_STATE(236)] = 5328,
  [SMALL_STATE(237)] = 5341,
  [SMALL_STATE(238)] = 5354,
  [SMALL_STATE(239)] = 5365,
  [SMALL_STATE(240)] = 5378,
  [SMALL_STATE(241)] = 5391,
  [SMALL_STATE(242)] = 5404,
  [SMALL_STATE(243)] = 5417,
  [SMALL_STATE(244)] = 5430,
  [SMALL_STATE(245)] = 5443,
  [SMALL_STATE(246)] = 5454,
  [SMALL_STATE(247)] = 5467,
  [SMALL_STATE(248)] = 5480,
  [SMALL_STATE(249)] = 5493,
  [SMALL_STATE(250)] = 5506,
  [SMALL_STATE(251)] = 5519,
  [SMALL_STATE(252)] = 5532,
  [SMALL_STATE(253)] = 5545,
  [SMALL_STATE(254)] = 5558,
  [SMALL_STATE(255)] = 5571,
  [SMALL_STATE(256)] = 5584,
  [SMALL_STATE(257)] = 5597,
  [SMALL_STATE(258)] = 5610,
  [SMALL_STATE(259)] = 5623,
  [SMALL_STATE(260)] = 5636,
  [SMALL_STATE(261)] = 5649,
  [SMALL_STATE(262)] = 5662,
  [SMALL_STATE(263)] = 5675,
  [SMALL_STATE(264)] = 5688,
  [SMALL_STATE(265)] = 5701,
  [SMALL_STATE(266)] = 5714,
  [SMALL_STATE(267)] = 5727,
  [SMALL_STATE(268)] = 5740,
  [SMALL_STATE(269)] = 5753,
  [SMALL_STATE(270)] = 5764,
  [SMALL_STATE(271)] = 5777,
  [SMALL_STATE(272)] = 5790,
  [SMALL_STATE(273)] = 5803,
  [SMALL_STATE(274)] = 5816,
  [SMALL_STATE(275)] = 5829,
  [SMALL_STATE(276)] = 5842,
  [SMALL_STATE(277)] = 5855,
  [SMALL_STATE(278)] = 5868,
  [SMALL_STATE(279)] = 5881,
  [SMALL_STATE(280)] = 5894,
  [SMALL_STATE(281)] = 5907,
  [SMALL_STATE(282)] = 5920,
  [SMALL_STATE(283)] = 5933,
  [SMALL_STATE(284)] = 5942,
  [SMALL_STATE(285)] = 5955,
  [SMALL_STATE(286)] = 5968,
  [SMALL_STATE(287)] = 5981,
  [SMALL_STATE(288)] = 5994,
  [SMALL_STATE(289)] = 6007,
  [SMALL_STATE(290)] = 6017,
  [SMALL_STATE(291)] = 6025,
  [SMALL_STATE(292)] = 6033,
  [SMALL_STATE(293)] = 6041,
  [SMALL_STATE(294)] = 6049,
  [SMALL_STATE(295)] = 6059,
  [SMALL_STATE(296)] = 6069,
  [SMALL_STATE(297)] = 6079,
  [SMALL_STATE(298)] = 6087,
  [SMALL_STATE(299)] = 6095,
  [SMALL_STATE(300)] = 6103,
  [SMALL_STATE(301)] = 6113,
  [SMALL_STATE(302)] = 6123,
  [SMALL_STATE(303)] = 6133,
  [SMALL_STATE(304)] = 6143,
  [SMALL_STATE(305)] = 6153,
  [SMALL_STATE(306)] = 6161,
  [SMALL_STATE(307)] = 6169,
  [SMALL_STATE(308)] = 6179,
  [SMALL_STATE(309)] = 6189,
  [SMALL_STATE(310)] = 6199,
  [SMALL_STATE(311)] = 6209,
  [SMALL_STATE(312)] = 6219,
  [SMALL_STATE(313)] = 6229,
  [SMALL_STATE(314)] = 6239,
  [SMALL_STATE(315)] = 6249,
  [SMALL_STATE(316)] = 6259,
  [SMALL_STATE(317)] = 6267,
  [SMALL_STATE(318)] = 6277,
  [SMALL_STATE(319)] = 6287,
  [SMALL_STATE(320)] = 6297,
  [SMALL_STATE(321)] = 6307,
  [SMALL_STATE(322)] = 6317,
  [SMALL_STATE(323)] = 6327,
  [SMALL_STATE(324)] = 6335,
  [SMALL_STATE(325)] = 6345,
  [SMALL_STATE(326)] = 6353,
  [SMALL_STATE(327)] = 6361,
  [SMALL_STATE(328)] = 6371,
  [SMALL_STATE(329)] = 6379,
  [SMALL_STATE(330)] = 6387,
  [SMALL_STATE(331)] = 6397,
  [SMALL_STATE(332)] = 6407,
  [SMALL_STATE(333)] = 6415,
  [SMALL_STATE(334)] = 6423,
  [SMALL_STATE(335)] = 6433,
  [SMALL_STATE(336)] = 6441,
  [SMALL_STATE(337)] = 6449,
  [SMALL_STATE(338)] = 6457,
  [SMALL_STATE(339)] = 6465,
  [SMALL_STATE(340)] = 6475,
  [SMALL_STATE(341)] = 6482,
  [SMALL_STATE(342)] = 6489,
  [SMALL_STATE(343)] = 6496,
  [SMALL_STATE(344)] = 6503,
  [SMALL_STATE(345)] = 6510,
  [SMALL_STATE(346)] = 6517,
  [SMALL_STATE(347)] = 6524,
  [SMALL_STATE(348)] = 6531,
  [SMALL_STATE(349)] = 6538,
  [SMALL_STATE(350)] = 6545,
  [SMALL_STATE(351)] = 6552,
  [SMALL_STATE(352)] = 6559,
  [SMALL_STATE(353)] = 6566,
  [SMALL_STATE(354)] = 6573,
  [SMALL_STATE(355)] = 6580,
  [SMALL_STATE(356)] = 6587,
  [SMALL_STATE(357)] = 6594,
  [SMALL_STATE(358)] = 6601,
  [SMALL_STATE(359)] = 6608,
  [SMALL_STATE(360)] = 6615,
  [SMALL_STATE(361)] = 6622,
  [SMALL_STATE(362)] = 6629,
  [SMALL_STATE(363)] = 6636,
  [SMALL_STATE(364)] = 6643,
  [SMALL_STATE(365)] = 6650,
  [SMALL_STATE(366)] = 6657,
  [SMALL_STATE(367)] = 6664,
  [SMALL_STATE(368)] = 6671,
  [SMALL_STATE(369)] = 6678,
  [SMALL_STATE(370)] = 6685,
  [SMALL_STATE(371)] = 6692,
  [SMALL_STATE(372)] = 6699,
  [SMALL_STATE(373)] = 6706,
  [SMALL_STATE(374)] = 6713,
  [SMALL_STATE(375)] = 6720,
  [SMALL_STATE(376)] = 6727,
  [SMALL_STATE(377)] = 6734,
  [SMALL_STATE(378)] = 6741,
  [SMALL_STATE(379)] = 6748,
  [SMALL_STATE(380)] = 6755,
  [SMALL_STATE(381)] = 6762,
  [SMALL_STATE(382)] = 6769,
  [SMALL_STATE(383)] = 6776,
  [SMALL_STATE(384)] = 6783,
  [SMALL_STATE(385)] = 6790,
  [SMALL_STATE(386)] = 6797,
  [SMALL_STATE(387)] = 6804,
  [SMALL_STATE(388)] = 6811,
  [SMALL_STATE(389)] = 6818,
  [SMALL_STATE(390)] = 6825,
  [SMALL_STATE(391)] = 6832,
  [SMALL_STATE(392)] = 6839,
  [SMALL_STATE(393)] = 6846,
  [SMALL_STATE(394)] = 6853,
  [SMALL_STATE(395)] = 6860,
  [SMALL_STATE(396)] = 6867,
  [SMALL_STATE(397)] = 6874,
  [SMALL_STATE(398)] = 6881,
  [SMALL_STATE(399)] = 6888,
  [SMALL_STATE(400)] = 6895,
  [SMALL_STATE(401)] = 6902,
  [SMALL_STATE(402)] = 6909,
  [SMALL_STATE(403)] = 6916,
  [SMALL_STATE(404)] = 6923,
  [SMALL_STATE(405)] = 6930,
  [SMALL_STATE(406)] = 6937,
  [SMALL_STATE(407)] = 6944,
  [SMALL_STATE(408)] = 6951,
  [SMALL_STATE(409)] = 6958,
  [SMALL_STATE(410)] = 6965,
  [SMALL_STATE(411)] = 6972,
  [SMALL_STATE(412)] = 6979,
  [SMALL_STATE(413)] = 6986,
  [SMALL_STATE(414)] = 6993,
  [SMALL_STATE(415)] = 7000,
  [SMALL_STATE(416)] = 7007,
  [SMALL_STATE(417)] = 7014,
  [SMALL_STATE(418)] = 7021,
  [SMALL_STATE(419)] = 7028,
  [SMALL_STATE(420)] = 7035,
  [SMALL_STATE(421)] = 7042,
  [SMALL_STATE(422)] = 7049,
  [SMALL_STATE(423)] = 7056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(146),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(346),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(285),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(174),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(402),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(401),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(399),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(398),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(397),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(396),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(395),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(394),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(393),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(392),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(391),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(390),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 9), SHIFT_REPEAT(389),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 21),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 21),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 29),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 43),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 43),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 32),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 32),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 32),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 38),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 35),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 38),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 24),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 24),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 23),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 23),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 16),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 22),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 22),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 22),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 22),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 22),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 21),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 21),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 19),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 19),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 18),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 18),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 16),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 16),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 15),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 15),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 24),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 24),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 43),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 43),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 51),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 51),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 29),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 22),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 22),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 32),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 22),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 22),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 32),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 22),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 22),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 32),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 46),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 46),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 23),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 23),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 51),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 51),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 49),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 49),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 49),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 49),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 46),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 46),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 35),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(373),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(301),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(300),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(295),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(403),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(404),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(312),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(313),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(314),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(346),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(258),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(302),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 37),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 37),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 37),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 37),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 6),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(153),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 7),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 7),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 40),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 40),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 7),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 7),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 7),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 7),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 45),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 7),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(196),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(204),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 41),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 27),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 17), SHIFT_REPEAT(351),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 17),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(341),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(308),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 20), SHIFT_REPEAT(347),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 20),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30), SHIFT_REPEAT(113),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 30),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33), SHIFT_REPEAT(212),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 33),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(82),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(320),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36), SHIFT_REPEAT(322),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 36),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(131),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39), SHIFT_REPEAT(245),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 39),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 48),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 34),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 37),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 31),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 28),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 27),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 14),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 26),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 25),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 42),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 50),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 48),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 50),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 47),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 11),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 12),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 44),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 13),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 26),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 25),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
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

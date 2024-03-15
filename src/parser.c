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
#define STATE_COUNT 430
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 53

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_number = 2,
  aux_sym_quoted_token1 = 3,
  aux_sym_quoted_token2 = 4,
  anon_sym_DOT = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_using = 7,
  anon_sym_SEMI = 8,
  anon_sym_translation_DASHdomain = 9,
  anon_sym_template = 10,
  anon_sym_COLON = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON_COLON = 14,
  anon_sym_EQ_GT = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_after = 18,
  anon_sym_swapped = 19,
  anon_sym_COMMA = 20,
  anon_sym_as = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_typeof = 24,
  anon_sym_DASH = 25,
  anon_sym_PLUS = 26,
  anon_sym_bind = 27,
  anon_sym_inverted = 28,
  anon_sym_bidirectional = 29,
  anon_sym_no_DASHsync_DASHcreate = 30,
  anon_sym_sync_DASHcreate = 31,
  anon_sym__ = 32,
  anon_sym_C_ = 33,
  anon_sym_PIPE = 34,
  anon_sym_LBRACK = 35,
  anon_sym_internal_DASHchild = 36,
  anon_sym_RBRACK = 37,
  anon_sym_menu = 38,
  anon_sym_section = 39,
  anon_sym_submenu = 40,
  anon_sym_item = 41,
  sym_comment = 42,
  anon_sym_accessibility = 43,
  anon_sym_responses = 44,
  anon_sym_condition = 45,
  anon_sym_setters = 46,
  anon_sym_items = 47,
  anon_sym_mime_DASHtypes = 48,
  anon_sym_patterns = 49,
  anon_sym_suffixes = 50,
  anon_sym_layout = 51,
  anon_sym_marks = 52,
  anon_sym_mark = 53,
  anon_sym_widgets = 54,
  anon_sym_strings = 55,
  anon_sym_styles = 56,
  anon_sym_action = 57,
  anon_sym_response = 58,
  anon_sym_EQ = 59,
  anon_sym_default = 60,
  sym_source_file = 61,
  sym_quoted = 62,
  sym_type_name = 63,
  sym_using = 64,
  sym_translation_domain = 65,
  sym_template = 66,
  sym_object = 67,
  sym_object_content = 68,
  sym_signal = 69,
  sym_property = 70,
  sym_closure_expression = 71,
  sym_lookup_expression = 72,
  sym_cast_expression = 73,
  sym_literal = 74,
  sym__type_literal = 75,
  sym__quoted_literal = 76,
  sym__number_literal = 77,
  sym__ident_literal = 78,
  sym__expression = 79,
  sym_binding = 80,
  sym_object_value = 81,
  sym_value = 82,
  sym_translated = 83,
  sym__flags = 84,
  sym__child = 85,
  sym_menu = 86,
  sym_menu_child = 87,
  sym_menu_section = 88,
  sym_menu_submenu = 89,
  sym_menu_item = 90,
  sym_menu_attribute = 91,
  sym_string_value = 92,
  sym_menu_item_shorthand = 93,
  sym__extension = 94,
  sym_ext_accessibility = 95,
  sym_ext_adw_dialog = 96,
  sym_ext_adw_dialog_response = 97,
  sym_ext_adw_breakpoint_condition = 98,
  sym_ext_adw_breakpoint = 99,
  sym_ext_combo_box_items = 100,
  sym__ext_combo_box_item = 101,
  sym_ext_file_filter_mime_types = 102,
  sym_ext_file_filter_patterns = 103,
  sym_ext_file_filter_suffixes = 104,
  sym__ext_file_filter_item = 105,
  sym_ext_layout = 106,
  sym_ext_list_item_factory = 107,
  sym_ext_scale_marks = 108,
  sym_ext_scale_mark = 109,
  sym_ext_size_group_widgets = 110,
  sym__ext_size_group_widget = 111,
  sym_ext_string_list_strings = 112,
  sym__ext_strings_list_item = 113,
  sym_ext_styles = 114,
  sym_child_extension = 115,
  sym_ext_response = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_source_file_repeat2 = 118,
  aux_sym_object_content_repeat1 = 119,
  aux_sym_signal_repeat1 = 120,
  aux_sym_closure_expression_repeat1 = 121,
  aux_sym__expression_repeat1 = 122,
  aux_sym_binding_repeat1 = 123,
  aux_sym__flags_repeat1 = 124,
  aux_sym_menu_repeat1 = 125,
  aux_sym_menu_section_repeat1 = 126,
  aux_sym_ext_accessibility_repeat1 = 127,
  aux_sym_ext_adw_dialog_repeat1 = 128,
  aux_sym_ext_adw_dialog_response_repeat1 = 129,
  aux_sym_ext_adw_breakpoint_repeat1 = 130,
  aux_sym_ext_combo_box_items_repeat1 = 131,
  aux_sym_ext_file_filter_mime_types_repeat1 = 132,
  aux_sym_ext_scale_marks_repeat1 = 133,
  aux_sym_ext_size_group_widgets_repeat1 = 134,
  aux_sym_ext_string_list_strings_repeat1 = 135,
  aux_sym_ext_styles_repeat1 = 136,
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
  field_domain = 6,
  field_flags = 7,
  field_handler = 8,
  field_id = 9,
  field_item = 10,
  field_name = 11,
  field_namespace = 12,
  field_object = 13,
  field_position = 14,
  field_property = 15,
  field_string = 16,
  field_subclass = 17,
  field_value = 18,
  field_version = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child_type] = "child_type",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_context] = "context",
  [field_detail] = "detail",
  [field_domain] = "domain",
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
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 4},
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
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 1},
  [28] = {.index = 50, .length = 2},
  [29] = {.index = 52, .length = 2},
  [30] = {.index = 54, .length = 4},
  [31] = {.index = 58, .length = 4},
  [32] = {.index = 62, .length = 1},
  [33] = {.index = 63, .length = 2},
  [34] = {.index = 65, .length = 2},
  [35] = {.index = 67, .length = 1},
  [36] = {.index = 68, .length = 2},
  [37] = {.index = 70, .length = 2},
  [38] = {.index = 72, .length = 1},
  [39] = {.index = 73, .length = 2},
  [40] = {.index = 75, .length = 2},
  [41] = {.index = 77, .length = 1},
  [42] = {.index = 78, .length = 3},
  [43] = {.index = 81, .length = 1},
  [44] = {.index = 82, .length = 2},
  [45] = {.index = 84, .length = 1},
  [46] = {.index = 85, .length = 2},
  [47] = {.index = 87, .length = 3},
  [48] = {.index = 90, .length = 3},
  [49] = {.index = 93, .length = 2},
  [50] = {.index = 95, .length = 3},
  [51] = {.index = 98, .length = 2},
  [52] = {.index = 100, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_name, 0},
  [2] =
    {field_name, 2},
    {field_namespace, 0},
  [4] =
    {field_domain, 1},
  [5] =
    {field_content, 2},
    {field_name, 1},
  [7] =
    {field_content, 2},
    {field_id, 1},
    {field_name, 0},
  [10] =
    {field_child_type, 0, .inherited = true},
  [11] =
    {field_namespace, 1},
    {field_version, 2},
  [13] =
    {field_id, 1},
  [14] =
    {field_child_type, 1, .inherited = true},
  [15] =
    {field_child_type, 0, .inherited = true},
    {field_child_type, 1, .inherited = true},
  [17] =
    {field_content, 4},
    {field_name, 1},
    {field_subclass, 2},
    {field_subclass, 3},
  [21] =
    {field_value, 0},
  [22] =
    {field_item, 0},
  [23] =
    {field_id, 0},
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
    {field_name, 2},
  [48] =
    {field_name, 3},
  [49] =
    {field_id, 3},
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
    {field_name, 1},
  [73] =
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [75] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [77] =
    {field_name, 0},
  [78] =
    {field_flags, 3},
    {field_id, 0},
    {field_value, 2},
  [81] =
    {field_value, 2},
  [82] =
    {field_handler, 3},
    {field_name, 0},
  [84] =
    {field_value, 3},
  [85] =
    {field_context, 2},
    {field_string, 4},
  [87] =
    {field_handler, 3},
    {field_name, 0},
    {field_object, 5},
  [90] =
    {field_object, 0},
    {field_property, 2},
    {field_value, 4},
  [93] =
    {field_position, 4},
    {field_value, 2},
  [95] =
    {field_detail, 2},
    {field_handler, 5},
    {field_name, 0},
  [98] =
    {field_position, 5},
    {field_value, 3},
  [100] =
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
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 88,
  [90] = 85,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 91,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 98,
  [104] = 92,
  [105] = 84,
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
  [133] = 127,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 141,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 53,
  [150] = 150,
  [151] = 57,
  [152] = 152,
  [153] = 153,
  [154] = 55,
  [155] = 155,
  [156] = 54,
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
  [194] = 159,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 187,
  [202] = 202,
  [203] = 189,
  [204] = 204,
  [205] = 163,
  [206] = 175,
  [207] = 207,
  [208] = 192,
  [209] = 209,
  [210] = 210,
  [211] = 160,
  [212] = 212,
  [213] = 171,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 179,
  [219] = 186,
  [220] = 220,
  [221] = 170,
  [222] = 222,
  [223] = 166,
  [224] = 224,
  [225] = 225,
  [226] = 182,
  [227] = 162,
  [228] = 228,
  [229] = 178,
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
  [264] = 120,
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
  [275] = 253,
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
  [297] = 295,
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
  [313] = 307,
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
  [333] = 301,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 329,
  [338] = 338,
  [339] = 339,
  [340] = 332,
  [341] = 300,
  [342] = 316,
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
  [415] = 354,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 346,
  [423] = 423,
  [424] = 424,
  [425] = 383,
  [426] = 380,
  [427] = 427,
  [428] = 428,
  [429] = 429,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(256);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(445);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '<') ADVANCE(440);
      if (lookahead == '=') ADVANCE(507);
      if (lookahead == '>') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '\\') SKIP(249)
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '_') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '|') ADVANCE(456);
      if (lookahead == '}') ADVANCE(431);
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
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(41)
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
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(42)
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
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(445);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 't') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(445);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(453);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 't') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(445);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(453);
      if (lookahead == 't') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(260);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '_') ADVANCE(453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(441);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '|') ADVANCE(456);
      if (lookahead == '}') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '}') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(471);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(470);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == '}') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == '}') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(454);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(442);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(495);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(494);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(467);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 240:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 243:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(471);
      if (lookahead == '\r') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(472);
      END_STATE();
    case 248:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 249:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(248)
      END_STATE();
    case 250:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(254)
      END_STATE();
    case 251:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(254)
      if (lookahead == '\r') SKIP(250)
      END_STATE();
    case 252:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(255)
      END_STATE();
    case 253:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '\r') SKIP(252)
      END_STATE();
    case 254:
      if (eof) ADVANCE(256);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '+') ADVANCE(445);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '=') ADVANCE(506);
      if (lookahead == '\\') SKIP(251)
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(254)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 255:
      if (eof) ADVANCE(256);
      if (lookahead == '$') ADVANCE(421);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(424);
      if (lookahead == '\\') SKIP(253)
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 't') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(255)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 'y') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(471);
      if (lookahead == '\r') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(471);
      if (lookahead == '\\') ADVANCE(247);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 254},
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
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 21},
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
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
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
  [50] = {.lex_state = 23},
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
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 254},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 41},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 41},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 41},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 41},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 255},
  [110] = {.lex_state = 255},
  [111] = {.lex_state = 255},
  [112] = {.lex_state = 255},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 255},
  [115] = {.lex_state = 255},
  [116] = {.lex_state = 42},
  [117] = {.lex_state = 42},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 42},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 42},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 254},
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
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 254},
  [148] = {.lex_state = 27},
  [149] = {.lex_state = 255},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 255},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 255},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 255},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 255},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 27},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 255},
  [173] = {.lex_state = 255},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 41},
  [179] = {.lex_state = 41},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 255},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 255},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 255},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 255},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 27},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 27},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 27},
  [201] = {.lex_state = 42},
  [202] = {.lex_state = 27},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 42},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 42},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 42},
  [219] = {.lex_state = 42},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 42},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 42},
  [227] = {.lex_state = 42},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 42},
  [230] = {.lex_state = 254},
  [231] = {.lex_state = 42},
  [232] = {.lex_state = 27},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 27},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 42},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 27},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 27},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 42},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 27},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 27},
  [326] = {.lex_state = 42},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 27},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 27},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 27},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 27},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 254},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 27},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 28},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 254},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 27},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 27},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 42},
  [372] = {.lex_state = 27},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 27},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 27},
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
  [402] = {.lex_state = 27},
  [403] = {.lex_state = 27},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 254},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 27},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 254},
  [413] = {.lex_state = 27},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 27},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 27},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 27},
  [429] = {.lex_state = 0},
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
    [sym_source_file] = STATE(417),
    [sym_type_name] = STATE(253),
    [sym_using] = STATE(83),
    [sym_translation_domain] = STATE(109),
    [sym_template] = STATE(110),
    [sym_object] = STATE(110),
    [sym_menu] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(83),
    [aux_sym_source_file_repeat2] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_translation_DASHdomain] = ACTIONS(13),
    [anon_sym_template] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(275), 1,
      sym_type_name,
    STATE(58), 2,
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
  [85] = 22,
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
    STATE(275), 1,
      sym_type_name,
    STATE(58), 2,
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
  [170] = 22,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(275), 1,
      sym_type_name,
    STATE(58), 2,
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
  [255] = 22,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(275), 1,
      sym_type_name,
    STATE(58), 2,
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
  [340] = 22,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(275), 1,
      sym_type_name,
    STATE(58), 2,
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
  [425] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(122), 1,
      anon_sym_bind,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    STATE(253), 1,
      sym_type_name,
    STATE(347), 1,
      sym__flags,
    STATE(353), 1,
      sym_translated,
    STATE(360), 1,
      sym_literal,
    STATE(361), 1,
      sym_object,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(359), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(128), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
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
    ACTIONS(134), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(132), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
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
    ACTIONS(138), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(136), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
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
    ACTIONS(142), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(140), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [589] = 3,
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
  [615] = 3,
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
  [641] = 3,
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
  [667] = 3,
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
  [693] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [737] = 3,
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
  [763] = 3,
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
  [789] = 3,
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
  [815] = 3,
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
  [841] = 3,
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
  [867] = 3,
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
  [893] = 3,
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
  [919] = 3,
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
  [945] = 3,
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
  [971] = 3,
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
  [997] = 3,
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
  [1023] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(212), 1,
      sym_ident,
    STATE(347), 1,
      sym__flags,
    STATE(353), 1,
      sym_translated,
    STATE(360), 1,
      sym_literal,
    STATE(416), 1,
      sym_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
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
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
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
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
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
  [1147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
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
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
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
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
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
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
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
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
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
  [1277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
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
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
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
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
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
  [1355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
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
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
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
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
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
  [1433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
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
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
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
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
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
  [1511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
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
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
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
  [1563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
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
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
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
  [1615] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(212), 1,
      sym_ident,
    STATE(347), 1,
      sym__flags,
    STATE(353), 1,
      sym_translated,
    STATE(360), 1,
      sym_literal,
    STATE(363), 1,
      sym_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
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
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 3,
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
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
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
  [1739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
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
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
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
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
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
  [1817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
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
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
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
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
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
  [1895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
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
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
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
  [1947] = 3,
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
  [1973] = 3,
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
  [1999] = 3,
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
  [2025] = 3,
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
  [2051] = 3,
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
  [2077] = 3,
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
  [2103] = 3,
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
  [2129] = 3,
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
  [2155] = 3,
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
  [2181] = 3,
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
  [2207] = 3,
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
  [2233] = 3,
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
  [2259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2329] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2373] = 3,
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
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
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
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
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
  [2451] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2492] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2533] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(160), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 2,
      sym_closure_expression,
      sym_literal,
    STATE(125), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2574] = 12,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_translation_domain,
    STATE(253), 1,
      sym_type_name,
    STATE(128), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    STATE(95), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2645] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2675] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2705] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2735] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(103), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2765] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(98), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2825] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2855] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_as,
    STATE(96), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(440), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_as,
    STATE(102), 3,
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
  [2933] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [2963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DOT,
    ACTIONS(453), 1,
      anon_sym_as,
    STATE(96), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(451), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2987] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_ident,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_section,
    ACTIONS(464), 1,
      anon_sym_submenu,
    ACTIONS(467), 1,
      anon_sym_item,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3017] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3047] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(90), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3077] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_as,
    STATE(93), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(476), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_as,
    STATE(96), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(478), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3155] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(97), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_ident,
    ACTIONS(416), 1,
      anon_sym_section,
    ACTIONS(418), 1,
      anon_sym_submenu,
    ACTIONS(420), 1,
      anon_sym_item,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(91), 3,
      sym_menu_child,
      sym_menu_attribute,
      aux_sym_menu_section_repeat1,
    STATE(175), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3245] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym__ext_combo_box_item,
    STATE(315), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3276] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym__ext_combo_box_item,
    STATE(315), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      sym__ext_combo_box_item,
    STATE(315), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_type_name,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3366] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_type_name,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3394] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_type_name,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3422] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_type_name,
    STATE(115), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(486), 1,
      sym_ident,
    STATE(294), 1,
      sym__ext_combo_box_item,
    STATE(315), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3478] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_template,
    ACTIONS(507), 1,
      anon_sym_menu,
    STATE(253), 1,
      sym_type_name,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3506] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_template,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_type_name,
    STATE(114), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    STATE(119), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(123), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(298), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3612] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(121), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 10,
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
  [3654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(540), 1,
      anon_sym_item,
    STATE(121), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(286), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3706] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(516), 1,
      anon_sym_submenu,
    ACTIONS(518), 1,
      anon_sym_item,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    STATE(121), 2,
      sym_menu_child,
      aux_sym_menu_repeat1,
    STATE(206), 4,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
  [3732] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(298), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3758] = 2,
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
  [3773] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3788] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_using,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(128), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(557), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(298), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3942] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3957] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(217), 1,
      sym_string_value,
    ACTIONS(582), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(329), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(373), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(317), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(337), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(382), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_C_,
    STATE(364), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(180), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(586), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_COLON,
    ACTIONS(594), 1,
      anon_sym_COLON_COLON,
    ACTIONS(596), 1,
      anon_sym_EQ_GT,
    ACTIONS(588), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(308), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(289), 1,
      aux_sym__flags_repeat1,
    ACTIONS(588), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(324), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4274] = 4,
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
  [4290] = 4,
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
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_binding_repeat1,
    ACTIONS(613), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(312), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(619), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_ident,
    ACTIONS(631), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(633), 1,
      anon_sym_action,
    STATE(369), 1,
      sym_ext_response,
    STATE(370), 1,
      sym_child_extension,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(669), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(673), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(685), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(697), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(705), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(711), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(723), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(588), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(744), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      aux_sym_signal_repeat1,
    ACTIONS(750), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(73), 1,
      sym_object,
    STATE(275), 1,
      sym_type_name,
  [4945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_ident,
    STATE(196), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(31), 1,
      sym_object,
    STATE(275), 1,
      sym_type_name,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(29), 1,
      sym_object,
    STATE(275), 1,
      sym_type_name,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_signal_repeat1,
    ACTIONS(766), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_signal_repeat1,
    ACTIONS(773), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_ident,
    STATE(200), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(779), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(308), 1,
      sym__ext_file_filter_item,
    STATE(312), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_signal_repeat1,
    ACTIONS(783), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      aux_sym_signal_repeat1,
    ACTIONS(789), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_number,
    ACTIONS(795), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    ACTIONS(799), 1,
      anon_sym_mark,
    STATE(303), 1,
      sym_ext_scale_mark,
  [5333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_ident,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      sym__ext_size_group_widget,
  [5346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      aux_sym_ext_styles_repeat1,
  [5385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_ident,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_ident,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_ext_accessibility_repeat1,
  [5411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_mark,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym_ext_scale_mark,
  [5424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym__ext_size_group_widget,
  [5437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_closure_expression_repeat1,
  [5450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_closure_expression_repeat1,
  [5463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    ACTIONS(835), 1,
      anon_sym_PIPE,
    STATE(242), 1,
      aux_sym__flags_repeat1,
  [5476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(296), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(411), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_ident,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_ext_adw_dialog_response,
  [5511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(257), 1,
      sym_type_name,
  [5524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_ident,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_ext_accessibility_repeat1,
  [5550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_ident,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      aux_sym_ext_accessibility_repeat1,
  [5563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_closure_expression_repeat1,
  [5576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(289), 1,
      aux_sym__flags_repeat1,
  [5602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_ident,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_object_content,
  [5615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_ident,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_ident,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_ext_adw_dialog_response,
  [5641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_object_content,
  [5667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(350), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(267), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_ident,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      sym_ext_adw_dialog_response,
  [5854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_ident,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_ext_accessibility_repeat1,
  [5867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_ident,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_object_content,
  [5893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(357), 1,
      sym_type_name,
  [5906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_ident,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_ext_accessibility_repeat1,
  [5919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_mark,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym_ext_scale_mark,
  [5932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(306), 1,
      sym_type_name,
  [5958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(318), 1,
      sym_type_name,
  [5971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_ident,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      sym__ext_size_group_widget,
  [5984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [6036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(752), 1,
      sym_ident,
    STATE(424), 1,
      sym_type_name,
  [6049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [6062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(967), 1,
      anon_sym_PIPE,
    STATE(242), 1,
      aux_sym__flags_repeat1,
  [6075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(427), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [6086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      aux_sym_ext_styles_repeat1,
  [6099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(429), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [6110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      aux_sym_ext_styles_repeat1,
  [6123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      anon_sym_LPAREN,
  [6141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LBRACE,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
  [6159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_ident,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
  [6185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_ident,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_ident,
    ACTIONS(1004), 1,
      sym_number,
  [6221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
  [6231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_object_content,
  [6241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_object_content,
  [6251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_object_content,
  [6301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_ident,
    STATE(320), 1,
      sym_ext_adw_dialog_response,
  [6311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym_ident,
    STATE(354), 1,
      sym_menu_attribute,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_object_content,
  [6347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
    ACTIONS(1030), 1,
      anon_sym_default,
  [6373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
    ACTIONS(1036), 1,
      anon_sym_default,
  [6391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
  [6401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_ident,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
  [6411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_mark,
    STATE(303), 1,
      sym_ext_scale_mark,
  [6421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_ident,
    STATE(302), 1,
      sym__ext_size_group_widget,
  [6439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
  [6449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_ident,
    ACTIONS(1052), 1,
      anon_sym_LBRACE,
  [6459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
  [6469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 1,
      anon_sym_COMMA,
  [6479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_ident,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
  [6489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_ident,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
  [6499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
  [6509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
  [6527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
  [6555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_ident,
    ACTIONS(1090), 1,
      anon_sym_LBRACE,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym_ident,
    STATE(415), 1,
      sym_menu_attribute,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_EQ,
  [6598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
  [6612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_ident,
  [6619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LT,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_LPAREN,
  [6640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
  [6647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RBRACE,
  [6661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [6668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_COLON,
  [6675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_GT,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_EQ_GT,
  [6689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
  [6696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
  [6703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [6710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_number,
  [6717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_ident,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RBRACK,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_COLON,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_ident,
  [6759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_RBRACK,
  [6766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RBRACK,
  [6773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_response,
  [6780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_ident,
  [6787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_ident,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RBRACK,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [6815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_DOLLAR,
  [6822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_ident,
  [6829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_DOT,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_LBRACE,
  [6843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_COLON,
  [6850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_LBRACE,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RBRACK,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
  [6878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_LBRACK,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_LBRACK,
  [6899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_LBRACK,
  [6906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_LBRACK,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_LBRACE,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_LBRACK,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_LBRACK,
  [6934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LBRACK,
  [6941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_LBRACK,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_LBRACE,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LBRACK,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LBRACE,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
  [6983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_COLON,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym_ident,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_DOLLAR,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_number,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_SEMI,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_LBRACE,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_LPAREN,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_SEMI,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_number,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_ident,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_COLON,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
  [7088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_SEMI,
  [7095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym_ident,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_LT,
  [7116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [7123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [7130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_LPAREN,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_GT,
  [7151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_LBRACE,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
  [7172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_ident,
  [7179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(13)] = 615,
  [SMALL_STATE(14)] = 641,
  [SMALL_STATE(15)] = 667,
  [SMALL_STATE(16)] = 693,
  [SMALL_STATE(17)] = 737,
  [SMALL_STATE(18)] = 763,
  [SMALL_STATE(19)] = 789,
  [SMALL_STATE(20)] = 815,
  [SMALL_STATE(21)] = 841,
  [SMALL_STATE(22)] = 867,
  [SMALL_STATE(23)] = 893,
  [SMALL_STATE(24)] = 919,
  [SMALL_STATE(25)] = 945,
  [SMALL_STATE(26)] = 971,
  [SMALL_STATE(27)] = 997,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1069,
  [SMALL_STATE(30)] = 1095,
  [SMALL_STATE(31)] = 1121,
  [SMALL_STATE(32)] = 1147,
  [SMALL_STATE(33)] = 1173,
  [SMALL_STATE(34)] = 1199,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1251,
  [SMALL_STATE(37)] = 1277,
  [SMALL_STATE(38)] = 1303,
  [SMALL_STATE(39)] = 1329,
  [SMALL_STATE(40)] = 1355,
  [SMALL_STATE(41)] = 1381,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1433,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1485,
  [SMALL_STATE(46)] = 1511,
  [SMALL_STATE(47)] = 1537,
  [SMALL_STATE(48)] = 1563,
  [SMALL_STATE(49)] = 1589,
  [SMALL_STATE(50)] = 1615,
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
  [SMALL_STATE(63)] = 1973,
  [SMALL_STATE(64)] = 1999,
  [SMALL_STATE(65)] = 2025,
  [SMALL_STATE(66)] = 2051,
  [SMALL_STATE(67)] = 2077,
  [SMALL_STATE(68)] = 2103,
  [SMALL_STATE(69)] = 2129,
  [SMALL_STATE(70)] = 2155,
  [SMALL_STATE(71)] = 2181,
  [SMALL_STATE(72)] = 2207,
  [SMALL_STATE(73)] = 2233,
  [SMALL_STATE(74)] = 2259,
  [SMALL_STATE(75)] = 2303,
  [SMALL_STATE(76)] = 2329,
  [SMALL_STATE(77)] = 2373,
  [SMALL_STATE(78)] = 2399,
  [SMALL_STATE(79)] = 2425,
  [SMALL_STATE(80)] = 2451,
  [SMALL_STATE(81)] = 2492,
  [SMALL_STATE(82)] = 2533,
  [SMALL_STATE(83)] = 2574,
  [SMALL_STATE(84)] = 2615,
  [SMALL_STATE(85)] = 2645,
  [SMALL_STATE(86)] = 2675,
  [SMALL_STATE(87)] = 2705,
  [SMALL_STATE(88)] = 2735,
  [SMALL_STATE(89)] = 2765,
  [SMALL_STATE(90)] = 2795,
  [SMALL_STATE(91)] = 2825,
  [SMALL_STATE(92)] = 2855,
  [SMALL_STATE(93)] = 2885,
  [SMALL_STATE(94)] = 2909,
  [SMALL_STATE(95)] = 2933,
  [SMALL_STATE(96)] = 2963,
  [SMALL_STATE(97)] = 2987,
  [SMALL_STATE(98)] = 3017,
  [SMALL_STATE(99)] = 3047,
  [SMALL_STATE(100)] = 3077,
  [SMALL_STATE(101)] = 3107,
  [SMALL_STATE(102)] = 3131,
  [SMALL_STATE(103)] = 3155,
  [SMALL_STATE(104)] = 3185,
  [SMALL_STATE(105)] = 3215,
  [SMALL_STATE(106)] = 3245,
  [SMALL_STATE(107)] = 3276,
  [SMALL_STATE(108)] = 3307,
  [SMALL_STATE(109)] = 3338,
  [SMALL_STATE(110)] = 3366,
  [SMALL_STATE(111)] = 3394,
  [SMALL_STATE(112)] = 3422,
  [SMALL_STATE(113)] = 3450,
  [SMALL_STATE(114)] = 3478,
  [SMALL_STATE(115)] = 3506,
  [SMALL_STATE(116)] = 3534,
  [SMALL_STATE(117)] = 3560,
  [SMALL_STATE(118)] = 3586,
  [SMALL_STATE(119)] = 3612,
  [SMALL_STATE(120)] = 3638,
  [SMALL_STATE(121)] = 3654,
  [SMALL_STATE(122)] = 3680,
  [SMALL_STATE(123)] = 3706,
  [SMALL_STATE(124)] = 3732,
  [SMALL_STATE(125)] = 3758,
  [SMALL_STATE(126)] = 3773,
  [SMALL_STATE(127)] = 3788,
  [SMALL_STATE(128)] = 3813,
  [SMALL_STATE(129)] = 3834,
  [SMALL_STATE(130)] = 3849,
  [SMALL_STATE(131)] = 3872,
  [SMALL_STATE(132)] = 3887,
  [SMALL_STATE(133)] = 3902,
  [SMALL_STATE(134)] = 3927,
  [SMALL_STATE(135)] = 3942,
  [SMALL_STATE(136)] = 3957,
  [SMALL_STATE(137)] = 3982,
  [SMALL_STATE(138)] = 3997,
  [SMALL_STATE(139)] = 4012,
  [SMALL_STATE(140)] = 4037,
  [SMALL_STATE(141)] = 4059,
  [SMALL_STATE(142)] = 4081,
  [SMALL_STATE(143)] = 4103,
  [SMALL_STATE(144)] = 4125,
  [SMALL_STATE(145)] = 4147,
  [SMALL_STATE(146)] = 4169,
  [SMALL_STATE(147)] = 4191,
  [SMALL_STATE(148)] = 4206,
  [SMALL_STATE(149)] = 4226,
  [SMALL_STATE(150)] = 4240,
  [SMALL_STATE(151)] = 4260,
  [SMALL_STATE(152)] = 4274,
  [SMALL_STATE(153)] = 4290,
  [SMALL_STATE(154)] = 4306,
  [SMALL_STATE(155)] = 4320,
  [SMALL_STATE(156)] = 4336,
  [SMALL_STATE(157)] = 4350,
  [SMALL_STATE(158)] = 4367,
  [SMALL_STATE(159)] = 4380,
  [SMALL_STATE(160)] = 4393,
  [SMALL_STATE(161)] = 4406,
  [SMALL_STATE(162)] = 4425,
  [SMALL_STATE(163)] = 4438,
  [SMALL_STATE(164)] = 4451,
  [SMALL_STATE(165)] = 4462,
  [SMALL_STATE(166)] = 4475,
  [SMALL_STATE(167)] = 4488,
  [SMALL_STATE(168)] = 4505,
  [SMALL_STATE(169)] = 4522,
  [SMALL_STATE(170)] = 4539,
  [SMALL_STATE(171)] = 4552,
  [SMALL_STATE(172)] = 4565,
  [SMALL_STATE(173)] = 4578,
  [SMALL_STATE(174)] = 4591,
  [SMALL_STATE(175)] = 4608,
  [SMALL_STATE(176)] = 4621,
  [SMALL_STATE(177)] = 4638,
  [SMALL_STATE(178)] = 4655,
  [SMALL_STATE(179)] = 4668,
  [SMALL_STATE(180)] = 4681,
  [SMALL_STATE(181)] = 4692,
  [SMALL_STATE(182)] = 4705,
  [SMALL_STATE(183)] = 4718,
  [SMALL_STATE(184)] = 4731,
  [SMALL_STATE(185)] = 4742,
  [SMALL_STATE(186)] = 4755,
  [SMALL_STATE(187)] = 4768,
  [SMALL_STATE(188)] = 4781,
  [SMALL_STATE(189)] = 4794,
  [SMALL_STATE(190)] = 4807,
  [SMALL_STATE(191)] = 4824,
  [SMALL_STATE(192)] = 4841,
  [SMALL_STATE(193)] = 4854,
  [SMALL_STATE(194)] = 4867,
  [SMALL_STATE(195)] = 4877,
  [SMALL_STATE(196)] = 4891,
  [SMALL_STATE(197)] = 4905,
  [SMALL_STATE(198)] = 4915,
  [SMALL_STATE(199)] = 4929,
  [SMALL_STATE(200)] = 4945,
  [SMALL_STATE(201)] = 4959,
  [SMALL_STATE(202)] = 4969,
  [SMALL_STATE(203)] = 4985,
  [SMALL_STATE(204)] = 4995,
  [SMALL_STATE(205)] = 5011,
  [SMALL_STATE(206)] = 5021,
  [SMALL_STATE(207)] = 5031,
  [SMALL_STATE(208)] = 5045,
  [SMALL_STATE(209)] = 5055,
  [SMALL_STATE(210)] = 5065,
  [SMALL_STATE(211)] = 5079,
  [SMALL_STATE(212)] = 5089,
  [SMALL_STATE(213)] = 5103,
  [SMALL_STATE(214)] = 5113,
  [SMALL_STATE(215)] = 5127,
  [SMALL_STATE(216)] = 5141,
  [SMALL_STATE(217)] = 5155,
  [SMALL_STATE(218)] = 5169,
  [SMALL_STATE(219)] = 5179,
  [SMALL_STATE(220)] = 5189,
  [SMALL_STATE(221)] = 5203,
  [SMALL_STATE(222)] = 5213,
  [SMALL_STATE(223)] = 5227,
  [SMALL_STATE(224)] = 5237,
  [SMALL_STATE(225)] = 5251,
  [SMALL_STATE(226)] = 5265,
  [SMALL_STATE(227)] = 5275,
  [SMALL_STATE(228)] = 5285,
  [SMALL_STATE(229)] = 5299,
  [SMALL_STATE(230)] = 5309,
  [SMALL_STATE(231)] = 5320,
  [SMALL_STATE(232)] = 5333,
  [SMALL_STATE(233)] = 5346,
  [SMALL_STATE(234)] = 5359,
  [SMALL_STATE(235)] = 5372,
  [SMALL_STATE(236)] = 5385,
  [SMALL_STATE(237)] = 5398,
  [SMALL_STATE(238)] = 5411,
  [SMALL_STATE(239)] = 5424,
  [SMALL_STATE(240)] = 5437,
  [SMALL_STATE(241)] = 5450,
  [SMALL_STATE(242)] = 5463,
  [SMALL_STATE(243)] = 5476,
  [SMALL_STATE(244)] = 5487,
  [SMALL_STATE(245)] = 5498,
  [SMALL_STATE(246)] = 5511,
  [SMALL_STATE(247)] = 5524,
  [SMALL_STATE(248)] = 5537,
  [SMALL_STATE(249)] = 5550,
  [SMALL_STATE(250)] = 5563,
  [SMALL_STATE(251)] = 5576,
  [SMALL_STATE(252)] = 5589,
  [SMALL_STATE(253)] = 5602,
  [SMALL_STATE(254)] = 5615,
  [SMALL_STATE(255)] = 5628,
  [SMALL_STATE(256)] = 5641,
  [SMALL_STATE(257)] = 5654,
  [SMALL_STATE(258)] = 5667,
  [SMALL_STATE(259)] = 5680,
  [SMALL_STATE(260)] = 5691,
  [SMALL_STATE(261)] = 5704,
  [SMALL_STATE(262)] = 5715,
  [SMALL_STATE(263)] = 5728,
  [SMALL_STATE(264)] = 5741,
  [SMALL_STATE(265)] = 5750,
  [SMALL_STATE(266)] = 5763,
  [SMALL_STATE(267)] = 5776,
  [SMALL_STATE(268)] = 5789,
  [SMALL_STATE(269)] = 5802,
  [SMALL_STATE(270)] = 5815,
  [SMALL_STATE(271)] = 5828,
  [SMALL_STATE(272)] = 5841,
  [SMALL_STATE(273)] = 5854,
  [SMALL_STATE(274)] = 5867,
  [SMALL_STATE(275)] = 5880,
  [SMALL_STATE(276)] = 5893,
  [SMALL_STATE(277)] = 5906,
  [SMALL_STATE(278)] = 5919,
  [SMALL_STATE(279)] = 5932,
  [SMALL_STATE(280)] = 5945,
  [SMALL_STATE(281)] = 5958,
  [SMALL_STATE(282)] = 5971,
  [SMALL_STATE(283)] = 5984,
  [SMALL_STATE(284)] = 5997,
  [SMALL_STATE(285)] = 6010,
  [SMALL_STATE(286)] = 6023,
  [SMALL_STATE(287)] = 6036,
  [SMALL_STATE(288)] = 6049,
  [SMALL_STATE(289)] = 6062,
  [SMALL_STATE(290)] = 6075,
  [SMALL_STATE(291)] = 6086,
  [SMALL_STATE(292)] = 6099,
  [SMALL_STATE(293)] = 6110,
  [SMALL_STATE(294)] = 6123,
  [SMALL_STATE(295)] = 6131,
  [SMALL_STATE(296)] = 6141,
  [SMALL_STATE(297)] = 6149,
  [SMALL_STATE(298)] = 6159,
  [SMALL_STATE(299)] = 6167,
  [SMALL_STATE(300)] = 6175,
  [SMALL_STATE(301)] = 6185,
  [SMALL_STATE(302)] = 6195,
  [SMALL_STATE(303)] = 6203,
  [SMALL_STATE(304)] = 6211,
  [SMALL_STATE(305)] = 6221,
  [SMALL_STATE(306)] = 6231,
  [SMALL_STATE(307)] = 6241,
  [SMALL_STATE(308)] = 6251,
  [SMALL_STATE(309)] = 6259,
  [SMALL_STATE(310)] = 6267,
  [SMALL_STATE(311)] = 6275,
  [SMALL_STATE(312)] = 6283,
  [SMALL_STATE(313)] = 6291,
  [SMALL_STATE(314)] = 6301,
  [SMALL_STATE(315)] = 6311,
  [SMALL_STATE(316)] = 6319,
  [SMALL_STATE(317)] = 6329,
  [SMALL_STATE(318)] = 6337,
  [SMALL_STATE(319)] = 6347,
  [SMALL_STATE(320)] = 6355,
  [SMALL_STATE(321)] = 6363,
  [SMALL_STATE(322)] = 6373,
  [SMALL_STATE(323)] = 6381,
  [SMALL_STATE(324)] = 6391,
  [SMALL_STATE(325)] = 6401,
  [SMALL_STATE(326)] = 6411,
  [SMALL_STATE(327)] = 6421,
  [SMALL_STATE(328)] = 6429,
  [SMALL_STATE(329)] = 6439,
  [SMALL_STATE(330)] = 6449,
  [SMALL_STATE(331)] = 6459,
  [SMALL_STATE(332)] = 6469,
  [SMALL_STATE(333)] = 6479,
  [SMALL_STATE(334)] = 6489,
  [SMALL_STATE(335)] = 6499,
  [SMALL_STATE(336)] = 6509,
  [SMALL_STATE(337)] = 6517,
  [SMALL_STATE(338)] = 6527,
  [SMALL_STATE(339)] = 6537,
  [SMALL_STATE(340)] = 6545,
  [SMALL_STATE(341)] = 6555,
  [SMALL_STATE(342)] = 6565,
  [SMALL_STATE(343)] = 6575,
  [SMALL_STATE(344)] = 6583,
  [SMALL_STATE(345)] = 6591,
  [SMALL_STATE(346)] = 6598,
  [SMALL_STATE(347)] = 6605,
  [SMALL_STATE(348)] = 6612,
  [SMALL_STATE(349)] = 6619,
  [SMALL_STATE(350)] = 6626,
  [SMALL_STATE(351)] = 6633,
  [SMALL_STATE(352)] = 6640,
  [SMALL_STATE(353)] = 6647,
  [SMALL_STATE(354)] = 6654,
  [SMALL_STATE(355)] = 6661,
  [SMALL_STATE(356)] = 6668,
  [SMALL_STATE(357)] = 6675,
  [SMALL_STATE(358)] = 6682,
  [SMALL_STATE(359)] = 6689,
  [SMALL_STATE(360)] = 6696,
  [SMALL_STATE(361)] = 6703,
  [SMALL_STATE(362)] = 6710,
  [SMALL_STATE(363)] = 6717,
  [SMALL_STATE(364)] = 6724,
  [SMALL_STATE(365)] = 6731,
  [SMALL_STATE(366)] = 6738,
  [SMALL_STATE(367)] = 6745,
  [SMALL_STATE(368)] = 6752,
  [SMALL_STATE(369)] = 6759,
  [SMALL_STATE(370)] = 6766,
  [SMALL_STATE(371)] = 6773,
  [SMALL_STATE(372)] = 6780,
  [SMALL_STATE(373)] = 6787,
  [SMALL_STATE(374)] = 6794,
  [SMALL_STATE(375)] = 6801,
  [SMALL_STATE(376)] = 6808,
  [SMALL_STATE(377)] = 6815,
  [SMALL_STATE(378)] = 6822,
  [SMALL_STATE(379)] = 6829,
  [SMALL_STATE(380)] = 6836,
  [SMALL_STATE(381)] = 6843,
  [SMALL_STATE(382)] = 6850,
  [SMALL_STATE(383)] = 6857,
  [SMALL_STATE(384)] = 6864,
  [SMALL_STATE(385)] = 6871,
  [SMALL_STATE(386)] = 6878,
  [SMALL_STATE(387)] = 6885,
  [SMALL_STATE(388)] = 6892,
  [SMALL_STATE(389)] = 6899,
  [SMALL_STATE(390)] = 6906,
  [SMALL_STATE(391)] = 6913,
  [SMALL_STATE(392)] = 6920,
  [SMALL_STATE(393)] = 6927,
  [SMALL_STATE(394)] = 6934,
  [SMALL_STATE(395)] = 6941,
  [SMALL_STATE(396)] = 6948,
  [SMALL_STATE(397)] = 6955,
  [SMALL_STATE(398)] = 6962,
  [SMALL_STATE(399)] = 6969,
  [SMALL_STATE(400)] = 6976,
  [SMALL_STATE(401)] = 6983,
  [SMALL_STATE(402)] = 6990,
  [SMALL_STATE(403)] = 6997,
  [SMALL_STATE(404)] = 7004,
  [SMALL_STATE(405)] = 7011,
  [SMALL_STATE(406)] = 7018,
  [SMALL_STATE(407)] = 7025,
  [SMALL_STATE(408)] = 7032,
  [SMALL_STATE(409)] = 7039,
  [SMALL_STATE(410)] = 7046,
  [SMALL_STATE(411)] = 7053,
  [SMALL_STATE(412)] = 7060,
  [SMALL_STATE(413)] = 7067,
  [SMALL_STATE(414)] = 7074,
  [SMALL_STATE(415)] = 7081,
  [SMALL_STATE(416)] = 7088,
  [SMALL_STATE(417)] = 7095,
  [SMALL_STATE(418)] = 7102,
  [SMALL_STATE(419)] = 7109,
  [SMALL_STATE(420)] = 7116,
  [SMALL_STATE(421)] = 7123,
  [SMALL_STATE(422)] = 7130,
  [SMALL_STATE(423)] = 7137,
  [SMALL_STATE(424)] = 7144,
  [SMALL_STATE(425)] = 7151,
  [SMALL_STATE(426)] = 7158,
  [SMALL_STATE(427)] = 7165,
  [SMALL_STATE(428)] = 7172,
  [SMALL_STATE(429)] = 7179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(148),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(374),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(281),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(161),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(399),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(398),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(397),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(396),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(395),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(394),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(393),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(392),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(391),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(390),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(389),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(388),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 10), SHIFT_REPEAT(387),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 24),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 17),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 30),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 30),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 23),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 23),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 23),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 33),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 33),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 22),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 23),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 19),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 33),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 33),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 23),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 17),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 33),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 33),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 16),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 36),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 36),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 25),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 39),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 39),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 44),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 44),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 23),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 24),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 30),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 30),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 9),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 9),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 33),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 33),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 22),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 33),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 33),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 52),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 52),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 33),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 33),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 50),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 50),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 36),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 36),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 52),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 52),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 39),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 39),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 44),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 44),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 25),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 47),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 47),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 47),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 47),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(420),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(419),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(356),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(333),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(341),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(297),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(193),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(374),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(246),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(330),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(301),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(300),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(295),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(428),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 38),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 38),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 38),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 7),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 7),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(153),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 11),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 11),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 8),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 8),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 41),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 41),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 8),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 8),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 8),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 8),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_child, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_child, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 8),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 8),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 46),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 4),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 4),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 8),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(196),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 42),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(212),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 28),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(402),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(81),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(314),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 31), SHIFT_REPEAT(113),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 31),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 34), SHIFT_REPEAT(220),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 34),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21), SHIFT_REPEAT(379),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 21),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18), SHIFT_REPEAT(367),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 18),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(326),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 37), SHIFT_REPEAT(328),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 37),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(130),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 40), SHIFT_REPEAT(243),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 40),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 29),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 38),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 14),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 35),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 32),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 51),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 49),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 15),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 13),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 12),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 28),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 51),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 27),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 43),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 26),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 45),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 48),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 49),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 27),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 26),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
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

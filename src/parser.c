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
#define STATE_COUNT 435
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 56

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
  anon_sym_bind_DASHproperty = 28,
  anon_sym_inverted = 29,
  anon_sym_bidirectional = 30,
  anon_sym_no_DASHsync_DASHcreate = 31,
  anon_sym_sync_DASHcreate = 32,
  anon_sym__ = 33,
  anon_sym_C_ = 34,
  anon_sym_PIPE = 35,
  anon_sym_LBRACK = 36,
  anon_sym_internal_DASHchild = 37,
  anon_sym_RBRACK = 38,
  anon_sym_menu = 39,
  anon_sym_section = 40,
  anon_sym_submenu = 41,
  anon_sym_item = 42,
  sym_comment = 43,
  anon_sym_accessibility = 44,
  anon_sym_responses = 45,
  anon_sym_condition = 46,
  anon_sym_setters = 47,
  anon_sym_items = 48,
  anon_sym_mime_DASHtypes = 49,
  anon_sym_patterns = 50,
  anon_sym_suffixes = 51,
  anon_sym_layout = 52,
  anon_sym_marks = 53,
  anon_sym_mark = 54,
  anon_sym_widgets = 55,
  anon_sym_strings = 56,
  anon_sym_styles = 57,
  anon_sym_action = 58,
  anon_sym_response = 59,
  anon_sym_EQ = 60,
  anon_sym_default = 61,
  sym_source_file = 62,
  sym_quoted = 63,
  sym_type_name = 64,
  sym_using = 65,
  sym_translation_domain = 66,
  sym_template = 67,
  sym_object = 68,
  sym_object_content = 69,
  sym_signal = 70,
  sym_property = 71,
  sym_closure_expression = 72,
  sym_lookup_expression = 73,
  sym_cast_expression = 74,
  sym_literal = 75,
  sym__type_literal = 76,
  sym__quoted_literal = 77,
  sym__number_literal = 78,
  sym__ident_literal = 79,
  sym__expression = 80,
  sym_binding = 81,
  sym_object_value = 82,
  sym_value = 83,
  sym_translated = 84,
  sym__flags = 85,
  sym__child = 86,
  sym_menu = 87,
  sym__menu_child = 88,
  sym_menu_section = 89,
  sym_menu_submenu = 90,
  sym_menu_item = 91,
  sym_menu_attribute = 92,
  sym_string_value = 93,
  sym_menu_item_shorthand = 94,
  sym__extension = 95,
  sym_ext_accessibility = 96,
  sym_ext_adw_dialog = 97,
  sym_ext_adw_dialog_response = 98,
  sym_ext_adw_breakpoint_condition = 99,
  sym_ext_adw_breakpoint = 100,
  sym_ext_combo_box_items = 101,
  sym__ext_combo_box_item = 102,
  sym_ext_file_filter_mime_types = 103,
  sym_ext_file_filter_patterns = 104,
  sym_ext_file_filter_suffixes = 105,
  sym__ext_file_filter_item = 106,
  sym_ext_layout = 107,
  sym_ext_list_item_factory = 108,
  sym_ext_scale_marks = 109,
  sym_ext_scale_mark = 110,
  sym_ext_size_group_widgets = 111,
  sym__ext_size_group_widget = 112,
  sym_ext_string_list_strings = 113,
  sym__ext_strings_list_item = 114,
  sym_ext_styles = 115,
  sym_child_extension = 116,
  sym_ext_response = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_source_file_repeat2 = 119,
  aux_sym_object_content_repeat1 = 120,
  aux_sym_signal_repeat1 = 121,
  aux_sym_closure_expression_repeat1 = 122,
  aux_sym__expression_repeat1 = 123,
  aux_sym_binding_repeat1 = 124,
  aux_sym__flags_repeat1 = 125,
  aux_sym_menu_repeat1 = 126,
  aux_sym_menu_section_repeat1 = 127,
  aux_sym_menu_item_repeat1 = 128,
  aux_sym_ext_accessibility_repeat1 = 129,
  aux_sym_ext_adw_dialog_repeat1 = 130,
  aux_sym_ext_adw_dialog_response_repeat1 = 131,
  aux_sym_ext_adw_breakpoint_repeat1 = 132,
  aux_sym_ext_combo_box_items_repeat1 = 133,
  aux_sym_ext_file_filter_mime_types_repeat1 = 134,
  aux_sym_ext_scale_marks_repeat1 = 135,
  aux_sym_ext_size_group_widgets_repeat1 = 136,
  aux_sym_ext_string_list_strings_repeat1 = 137,
  aux_sym_ext_styles_repeat1 = 138,
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
  [90] = 88,
  [91] = 87,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 85,
  [102] = 95,
  [103] = 93,
  [104] = 84,
  [105] = 96,
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
  [135] = 127,
  [136] = 136,
  [137] = 137,
  [138] = 125,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 143,
  [148] = 148,
  [149] = 78,
  [150] = 150,
  [151] = 79,
  [152] = 77,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 76,
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
  [195] = 173,
  [196] = 181,
  [197] = 197,
  [198] = 170,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 182,
  [210] = 203,
  [211] = 211,
  [212] = 184,
  [213] = 178,
  [214] = 158,
  [215] = 177,
  [216] = 185,
  [217] = 176,
  [218] = 218,
  [219] = 219,
  [220] = 175,
  [221] = 167,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 174,
  [229] = 211,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 172,
  [234] = 169,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 109,
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
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 272,
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
  [324] = 311,
  [325] = 310,
  [326] = 308,
  [327] = 327,
  [328] = 319,
  [329] = 329,
  [330] = 161,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 314,
  [338] = 317,
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
  [423] = 352,
  [424] = 424,
  [425] = 425,
  [426] = 385,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 396,
  [431] = 395,
  [432] = 432,
  [433] = 433,
  [434] = 386,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == ',') ADVANCE(454);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(436);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(445);
      if (lookahead == ';') ADVANCE(440);
      if (lookahead == '<') ADVANCE(456);
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == '\\') SKIP(257)
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '_') ADVANCE(470);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '}') ADVANCE(447);
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
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 't') ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == 'C') ADVANCE(268);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == 't') ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == 'C') ADVANCE(268);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == 't') ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(268);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '_') ADVANCE(471);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == ',') ADVANCE(454);
      if (lookahead == '.') ADVANCE(436);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(445);
      if (lookahead == ';') ADVANCE(440);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead == '}') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead == '}') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(489);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(488);
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
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '}') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '}') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(361);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(449);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(472);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(458);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(159);
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
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(513);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 247:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(492);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(464);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(430);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(489);
      if (lookahead == '\r') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(490);
      END_STATE();
    case 256:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 257:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(256)
      END_STATE();
    case 258:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(262)
      END_STATE();
    case 259:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(262)
      if (lookahead == '\r') SKIP(258)
      END_STATE();
    case 260:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(263)
      END_STATE();
    case 261:
      if (eof) ADVANCE(264);
      if (lookahead == '\n') SKIP(263)
      if (lookahead == '\r') SKIP(260)
      END_STATE();
    case 262:
      if (eof) ADVANCE(264);
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '=') ADVANCE(524);
      if (lookahead == '\\') SKIP(259)
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(385);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(262)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 263:
      if (eof) ADVANCE(264);
      if (lookahead == '$') ADVANCE(437);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(440);
      if (lookahead == '\\') SKIP(261)
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 't') ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(263)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == 'x') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(489);
      if (lookahead == '\r') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(255);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(449);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 262},
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
  [13] = {.lex_state = 21},
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
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 21},
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
  [55] = {.lex_state = 23},
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
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 262},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 41},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 41},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 41},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 263},
  [111] = {.lex_state = 263},
  [112] = {.lex_state = 263},
  [113] = {.lex_state = 42},
  [114] = {.lex_state = 263},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 42},
  [119] = {.lex_state = 42},
  [120] = {.lex_state = 42},
  [121] = {.lex_state = 263},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 263},
  [124] = {.lex_state = 42},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 262},
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
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 262},
  [149] = {.lex_state = 263},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 263},
  [152] = {.lex_state = 263},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 27},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 263},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 263},
  [164] = {.lex_state = 263},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 41},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 41},
  [179] = {.lex_state = 27},
  [180] = {.lex_state = 263},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 263},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 27},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 263},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 263},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 42},
  [199] = {.lex_state = 27},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 27},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 27},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 42},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 42},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 42},
  [217] = {.lex_state = 42},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 42},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 27},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 42},
  [229] = {.lex_state = 27},
  [230] = {.lex_state = 27},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 27},
  [233] = {.lex_state = 42},
  [234] = {.lex_state = 42},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 42},
  [238] = {.lex_state = 27},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 27},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 27},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 42},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 262},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 42},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 27},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 27},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 27},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 27},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 27},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 27},
  [325] = {.lex_state = 27},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 27},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 27},
  [341] = {.lex_state = 27},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 40},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 262},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 27},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 27},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 27},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 27},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 262},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 27},
  [370] = {.lex_state = 28},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 262},
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
  [389] = {.lex_state = 42},
  [390] = {.lex_state = 27},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 27},
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
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 27},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 27},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 27},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 262},
  [422] = {.lex_state = 27},
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
  [433] = {.lex_state = 27},
  [434] = {.lex_state = 0},
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
    [sym_source_file] = STATE(425),
    [sym_type_name] = STATE(291),
    [sym_using] = STATE(83),
    [sym_translation_domain] = STATE(112),
    [sym_template] = STATE(114),
    [sym_object] = STATE(114),
    [sym_menu] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(83),
    [aux_sym_source_file_repeat2] = STATE(114),
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
    STATE(272), 1,
      sym_type_name,
    STATE(57), 2,
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
    STATE(272), 1,
      sym_type_name,
    STATE(57), 2,
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
    STATE(272), 1,
      sym_type_name,
    STATE(57), 2,
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
    STATE(272), 1,
      sym_type_name,
    STATE(57), 2,
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
    STATE(272), 1,
      sym_type_name,
    STATE(57), 2,
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
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    STATE(291), 1,
      sym_type_name,
    STATE(371), 1,
      sym__flags,
    STATE(372), 1,
      sym_translated,
    STATE(376), 1,
      sym_literal,
    STATE(377), 1,
      sym_object,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(122), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(373), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [486] = 3,
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
  [512] = 3,
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
  [538] = 3,
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
  [564] = 3,
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
  [590] = 3,
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
  [616] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [660] = 3,
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
  [686] = 3,
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
  [712] = 3,
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
  [738] = 3,
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
  [764] = 3,
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
  [790] = 3,
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
  [816] = 3,
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
  [842] = 3,
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
  [868] = 3,
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
  [894] = 3,
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
  [920] = 3,
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
  [946] = 3,
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
  [972] = 3,
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
  [998] = 3,
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
  [1024] = 3,
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
  [1050] = 3,
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
  [1076] = 3,
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
  [1102] = 3,
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
  [1128] = 3,
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
  [1154] = 13,
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
    ACTIONS(232), 1,
      sym_ident,
    STATE(371), 1,
      sym__flags,
    STATE(372), 1,
      sym_translated,
    STATE(376), 1,
      sym_literal,
    STATE(419), 1,
      sym_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1200] = 3,
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
  [1226] = 3,
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
  [1252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1296] = 3,
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
  [1322] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1366] = 3,
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
  [1392] = 3,
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
  [1418] = 3,
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
  [1444] = 3,
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
  [1470] = 3,
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
  [1496] = 3,
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
  [1522] = 3,
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
  [1548] = 3,
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
  [1574] = 3,
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
  [1600] = 3,
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
  [1626] = 3,
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
  [1652] = 3,
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
  [1678] = 3,
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
  [1704] = 3,
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
  [1730] = 3,
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
  [1756] = 3,
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
  [1782] = 13,
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
    ACTIONS(232), 1,
      sym_ident,
    STATE(355), 1,
      sym_value,
    STATE(371), 1,
      sym__flags,
    STATE(372), 1,
      sym_translated,
    STATE(376), 1,
      sym_literal,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1828] = 3,
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
  [1854] = 3,
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
  [1880] = 3,
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
  [1906] = 3,
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
  [1932] = 3,
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
  [1958] = 3,
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
  [1984] = 3,
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
  [2010] = 3,
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
  [2036] = 3,
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
  [2062] = 3,
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
  [2088] = 3,
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
  [2114] = 3,
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
  [2140] = 3,
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
  [2166] = 3,
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
  [2192] = 3,
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
  [2218] = 3,
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
  [2244] = 3,
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
  [2270] = 3,
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
  [2296] = 3,
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
  [2322] = 3,
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
  [2348] = 3,
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
  [2374] = 3,
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
  [2400] = 3,
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
  [2426] = 3,
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
  [2452] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2534] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym__expression,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_closure_expression,
      sym_literal,
    STATE(137), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2575] = 12,
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
    STATE(110), 1,
      sym_translation_domain,
    STATE(291), 1,
      sym_type_name,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(121), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2616] = 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2644] = 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2672] = 7,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2700] = 7,
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
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2728] = 7,
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
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_as,
    STATE(97), 3,
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
  [2780] = 7,
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
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2808] = 7,
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
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_as,
    STATE(94), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(452), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2860] = 7,
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
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(104), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_as,
    STATE(97), 3,
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
  [2912] = 7,
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
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(90), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2940] = 7,
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
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(101), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(467), 1,
      anon_sym_as,
    STATE(97), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(465), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2992] = 7,
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
    STATE(87), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_as,
    STATE(89), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(472), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3044] = 7,
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
    STATE(91), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3072] = 7,
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
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3100] = 7,
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
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(88), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3128] = 7,
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
    STATE(84), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3156] = 7,
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
    STATE(86), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3184] = 7,
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
    STATE(85), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3212] = 9,
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
    STATE(301), 1,
      sym_string_value,
    STATE(306), 1,
      sym__ext_combo_box_item,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3243] = 9,
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
    STATE(251), 1,
      sym__ext_combo_box_item,
    STATE(301), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3274] = 9,
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
    STATE(301), 1,
      sym_string_value,
    STATE(306), 1,
      sym__ext_combo_box_item,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 10,
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
  [3321] = 8,
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
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym_type_name,
    STATE(123), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3349] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      anon_sym_template,
    ACTIONS(509), 1,
      anon_sym_menu,
    STATE(291), 1,
      sym_type_name,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3377] = 8,
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
    STATE(291), 1,
      sym_type_name,
    STATE(121), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_section,
    ACTIONS(517), 1,
      anon_sym_submenu,
    ACTIONS(520), 1,
      anon_sym_item,
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3429] = 8,
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
    STATE(291), 1,
      sym_type_name,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3457] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(304), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(304), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(282), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(539), 1,
      anon_sym_item,
    STATE(120), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(539), 1,
      anon_sym_item,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(539), 1,
      anon_sym_item,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(113), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3607] = 8,
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
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym_type_name,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3635] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_C_,
    ACTIONS(486), 1,
      sym_ident,
    STATE(301), 1,
      sym_string_value,
    STATE(306), 1,
      sym__ext_combo_box_item,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3663] = 8,
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
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym_type_name,
    STATE(111), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_section,
    ACTIONS(537), 1,
      anon_sym_submenu,
    ACTIONS(539), 1,
      anon_sym_item,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(119), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3715] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3740] = 2,
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
  [3755] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3780] = 2,
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
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3810] = 2,
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
  [3825] = 2,
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
  [3840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(304), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_using,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(133), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(565), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [3884] = 2,
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
  [3899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3939] = 2,
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
  [3954] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [3994] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(423), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4016] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(316), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(352), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(317), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(374), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(224), 1,
      sym_string_value,
    ACTIONS(582), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(383), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym__,
    ACTIONS(525), 1,
      anon_sym_C_,
    STATE(338), 1,
      sym_string_value,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
    STATE(189), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4170] = 3,
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
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(404), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    STATE(259), 1,
      aux_sym__flags_repeat1,
    ACTIONS(588), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(408), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(400), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      aux_sym_binding_repeat1,
    ACTIONS(598), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_COLON_COLON,
    ACTIONS(604), 1,
      anon_sym_EQ_GT,
    ACTIONS(588), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      aux_sym_binding_repeat1,
    ACTIONS(608), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_binding_repeat1,
    ACTIONS(613), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(629), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(633), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(637), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_ident,
    ACTIONS(641), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(643), 1,
      anon_sym_action,
    STATE(387), 1,
      sym_ext_response,
    STATE(388), 1,
      sym_child_extension,
  [4441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(667), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(695), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(707), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    ACTIONS(709), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(588), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(729), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(735), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_signal_repeat1,
    ACTIONS(739), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(30), 1,
      sym_object,
    STATE(272), 1,
      sym_type_name,
  [4906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [4920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(26), 1,
      sym_object,
    STATE(272), 1,
      sym_type_name,
  [4936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_ident,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [4960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_signal_repeat1,
    ACTIONS(754), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(758), 2,
      anon_sym_after,
      anon_sym_swapped,
  [4988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_signal_repeat1,
    ACTIONS(764), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_signal_repeat1,
    ACTIONS(764), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_ident,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_ident,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(203), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_ident,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(218), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      aux_sym_signal_repeat1,
    ACTIONS(779), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_ident,
    STATE(230), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(785), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_ident,
    STATE(223), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      aux_sym_signal_repeat1,
    ACTIONS(795), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(313), 1,
      sym__ext_file_filter_item,
    STATE(346), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_ident,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(210), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_ident,
    STATE(230), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_signal_repeat1,
    ACTIONS(764), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(66), 1,
      sym_object,
    STATE(272), 1,
      sym_type_name,
  [5324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_signal_repeat1,
    ACTIONS(764), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(815), 1,
      anon_sym_mark,
    STATE(302), 1,
      sym_ext_scale_mark,
  [5384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      aux_sym_ext_accessibility_repeat1,
  [5397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_ident,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(364), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym_ext_adw_dialog_response,
  [5434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_ext_accessibility_repeat1,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_ident,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_closure_expression_repeat1,
  [5482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      aux_sym_ext_accessibility_repeat1,
  [5508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      aux_sym_ext_styles_repeat1,
  [5521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_mark,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym_ext_scale_mark,
  [5534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    STATE(259), 1,
      aux_sym__flags_repeat1,
  [5547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_closure_expression_repeat1,
  [5586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_ext_adw_dialog_response,
  [5612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(397), 1,
      sym_type_name,
  [5651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    ACTIONS(874), 1,
      anon_sym_PIPE,
    STATE(266), 1,
      aux_sym__flags_repeat1,
  [5664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym__ext_size_group_widget,
  [5677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_ident,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      aux_sym_ext_accessibility_repeat1,
  [5703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__ext_size_group_widget,
  [5729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(897), 1,
      anon_sym_PIPE,
    STATE(266), 1,
      aux_sym__flags_repeat1,
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(382), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(380), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_number,
    ACTIONS(906), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_ident,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_object_content,
  [5827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(332), 1,
      sym_type_name,
  [5866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(305), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [5877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_ext_styles_repeat1,
  [5903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_mark,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      sym_ext_scale_mark,
  [5916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_ext_scale_marks_repeat1,
  [5929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(331), 1,
      sym_type_name,
  [5942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__ext_size_group_widget,
  [5968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [5994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_object_content,
  [6007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(393), 1,
      sym_type_name,
  [6020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_closure_expression_repeat1,
  [6033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [6046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [6059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    ACTIONS(973), 1,
      sym_ident,
    STATE(151), 1,
      sym_object_content,
  [6072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_ext_adw_dialog_response,
  [6085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_ident,
    STATE(286), 1,
      sym_type_name,
  [6098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      aux_sym_ext_styles_repeat1,
  [6111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      aux_sym_ext_scale_marks_repeat1,
  [6137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(392), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [6148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      aux_sym_ext_accessibility_repeat1,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(420), 1,
      sym_quoted,
    ACTIONS(116), 2,
      aux_sym_quoted_token1,
      aux_sym_quoted_token2,
  [6172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(995), 1,
      anon_sym_COMMA,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_ident,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
  [6240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LBRACE,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
  [6250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
  [6260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym_ident,
    ACTIONS(1019), 1,
      anon_sym_LBRACE,
  [6270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_ident,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
  [6306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_ident,
    STATE(318), 1,
      sym_ext_adw_dialog_response,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_object_content,
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    ACTIONS(1041), 1,
      anon_sym_default,
  [6362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
    ACTIONS(1045), 1,
      anon_sym_default,
  [6372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_ident,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [6382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_ident,
    ACTIONS(1055), 1,
      anon_sym_LBRACE,
  [6400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_ident,
    ACTIONS(1059), 1,
      anon_sym_LBRACE,
  [6410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
  [6420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_mark,
    STATE(302), 1,
      sym_ext_scale_mark,
  [6430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_object_content,
  [6440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_ident,
    STATE(303), 1,
      sym__ext_size_group_widget,
  [6450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_object_content,
  [6468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_object_content,
  [6478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym_ident,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
  [6522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_ident,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_ident,
    ACTIONS(1095), 1,
      sym_number,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
  [6628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_EQ,
  [6635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_DOLLAR,
  [6642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_SEMI,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_ident,
  [6656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
  [6663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym_ident,
  [6677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOLLAR,
  [6684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      sym_ident,
  [6691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym_ident,
  [6698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
  [6705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
  [6712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COLON,
  [6719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_DOT,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
  [6733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      sym_ident,
  [6740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
  [6747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_number,
  [6754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_ident,
  [6768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_EQ_GT,
  [6775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
  [6782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
  [6789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
  [6796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
  [6803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
  [6810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
  [6817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
  [6824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym_number,
  [6831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LT,
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
  [6845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
  [6852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
  [6866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
  [6894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_response,
  [6908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym_ident,
  [6915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
  [6922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [6929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_GT,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      sym_ident,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_LBRACE,
  [6957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_GT,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LBRACK,
  [6971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LBRACK,
  [6978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_LBRACK,
  [6985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_LBRACK,
  [6992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_LBRACE,
  [6999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
  [7006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_LBRACK,
  [7013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_LBRACK,
  [7020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_LBRACK,
  [7027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LBRACK,
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [7041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
  [7048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
  [7055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LBRACK,
  [7062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_LBRACE,
  [7069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_ident,
  [7076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LT,
  [7083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_ident,
  [7090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_SEMI,
  [7097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_ident,
  [7104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
  [7111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_SEMI,
  [7118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_SEMI,
  [7125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_number,
  [7132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_ident,
  [7139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
  [7146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_COLON,
  [7153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
  [7160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [7167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_COLON,
  [7174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
  [7181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_RBRACK,
  [7188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_LBRACE,
  [7195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
  [7202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [7209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      sym_ident,
  [7216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 538,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 590,
  [SMALL_STATE(13)] = 616,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 686,
  [SMALL_STATE(16)] = 712,
  [SMALL_STATE(17)] = 738,
  [SMALL_STATE(18)] = 764,
  [SMALL_STATE(19)] = 790,
  [SMALL_STATE(20)] = 816,
  [SMALL_STATE(21)] = 842,
  [SMALL_STATE(22)] = 868,
  [SMALL_STATE(23)] = 894,
  [SMALL_STATE(24)] = 920,
  [SMALL_STATE(25)] = 946,
  [SMALL_STATE(26)] = 972,
  [SMALL_STATE(27)] = 998,
  [SMALL_STATE(28)] = 1024,
  [SMALL_STATE(29)] = 1050,
  [SMALL_STATE(30)] = 1076,
  [SMALL_STATE(31)] = 1102,
  [SMALL_STATE(32)] = 1128,
  [SMALL_STATE(33)] = 1154,
  [SMALL_STATE(34)] = 1200,
  [SMALL_STATE(35)] = 1226,
  [SMALL_STATE(36)] = 1252,
  [SMALL_STATE(37)] = 1296,
  [SMALL_STATE(38)] = 1322,
  [SMALL_STATE(39)] = 1366,
  [SMALL_STATE(40)] = 1392,
  [SMALL_STATE(41)] = 1418,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1470,
  [SMALL_STATE(44)] = 1496,
  [SMALL_STATE(45)] = 1522,
  [SMALL_STATE(46)] = 1548,
  [SMALL_STATE(47)] = 1574,
  [SMALL_STATE(48)] = 1600,
  [SMALL_STATE(49)] = 1626,
  [SMALL_STATE(50)] = 1652,
  [SMALL_STATE(51)] = 1678,
  [SMALL_STATE(52)] = 1704,
  [SMALL_STATE(53)] = 1730,
  [SMALL_STATE(54)] = 1756,
  [SMALL_STATE(55)] = 1782,
  [SMALL_STATE(56)] = 1828,
  [SMALL_STATE(57)] = 1854,
  [SMALL_STATE(58)] = 1880,
  [SMALL_STATE(59)] = 1906,
  [SMALL_STATE(60)] = 1932,
  [SMALL_STATE(61)] = 1958,
  [SMALL_STATE(62)] = 1984,
  [SMALL_STATE(63)] = 2010,
  [SMALL_STATE(64)] = 2036,
  [SMALL_STATE(65)] = 2062,
  [SMALL_STATE(66)] = 2088,
  [SMALL_STATE(67)] = 2114,
  [SMALL_STATE(68)] = 2140,
  [SMALL_STATE(69)] = 2166,
  [SMALL_STATE(70)] = 2192,
  [SMALL_STATE(71)] = 2218,
  [SMALL_STATE(72)] = 2244,
  [SMALL_STATE(73)] = 2270,
  [SMALL_STATE(74)] = 2296,
  [SMALL_STATE(75)] = 2322,
  [SMALL_STATE(76)] = 2348,
  [SMALL_STATE(77)] = 2374,
  [SMALL_STATE(78)] = 2400,
  [SMALL_STATE(79)] = 2426,
  [SMALL_STATE(80)] = 2452,
  [SMALL_STATE(81)] = 2493,
  [SMALL_STATE(82)] = 2534,
  [SMALL_STATE(83)] = 2575,
  [SMALL_STATE(84)] = 2616,
  [SMALL_STATE(85)] = 2644,
  [SMALL_STATE(86)] = 2672,
  [SMALL_STATE(87)] = 2700,
  [SMALL_STATE(88)] = 2728,
  [SMALL_STATE(89)] = 2756,
  [SMALL_STATE(90)] = 2780,
  [SMALL_STATE(91)] = 2808,
  [SMALL_STATE(92)] = 2836,
  [SMALL_STATE(93)] = 2860,
  [SMALL_STATE(94)] = 2888,
  [SMALL_STATE(95)] = 2912,
  [SMALL_STATE(96)] = 2940,
  [SMALL_STATE(97)] = 2968,
  [SMALL_STATE(98)] = 2992,
  [SMALL_STATE(99)] = 3020,
  [SMALL_STATE(100)] = 3044,
  [SMALL_STATE(101)] = 3072,
  [SMALL_STATE(102)] = 3100,
  [SMALL_STATE(103)] = 3128,
  [SMALL_STATE(104)] = 3156,
  [SMALL_STATE(105)] = 3184,
  [SMALL_STATE(106)] = 3212,
  [SMALL_STATE(107)] = 3243,
  [SMALL_STATE(108)] = 3274,
  [SMALL_STATE(109)] = 3305,
  [SMALL_STATE(110)] = 3321,
  [SMALL_STATE(111)] = 3349,
  [SMALL_STATE(112)] = 3377,
  [SMALL_STATE(113)] = 3405,
  [SMALL_STATE(114)] = 3429,
  [SMALL_STATE(115)] = 3457,
  [SMALL_STATE(116)] = 3483,
  [SMALL_STATE(117)] = 3509,
  [SMALL_STATE(118)] = 3535,
  [SMALL_STATE(119)] = 3559,
  [SMALL_STATE(120)] = 3583,
  [SMALL_STATE(121)] = 3607,
  [SMALL_STATE(122)] = 3635,
  [SMALL_STATE(123)] = 3663,
  [SMALL_STATE(124)] = 3691,
  [SMALL_STATE(125)] = 3715,
  [SMALL_STATE(126)] = 3740,
  [SMALL_STATE(127)] = 3755,
  [SMALL_STATE(128)] = 3780,
  [SMALL_STATE(129)] = 3795,
  [SMALL_STATE(130)] = 3810,
  [SMALL_STATE(131)] = 3825,
  [SMALL_STATE(132)] = 3840,
  [SMALL_STATE(133)] = 3863,
  [SMALL_STATE(134)] = 3884,
  [SMALL_STATE(135)] = 3899,
  [SMALL_STATE(136)] = 3924,
  [SMALL_STATE(137)] = 3939,
  [SMALL_STATE(138)] = 3954,
  [SMALL_STATE(139)] = 3979,
  [SMALL_STATE(140)] = 3994,
  [SMALL_STATE(141)] = 4016,
  [SMALL_STATE(142)] = 4038,
  [SMALL_STATE(143)] = 4060,
  [SMALL_STATE(144)] = 4082,
  [SMALL_STATE(145)] = 4104,
  [SMALL_STATE(146)] = 4126,
  [SMALL_STATE(147)] = 4148,
  [SMALL_STATE(148)] = 4170,
  [SMALL_STATE(149)] = 4185,
  [SMALL_STATE(150)] = 4199,
  [SMALL_STATE(151)] = 4219,
  [SMALL_STATE(152)] = 4233,
  [SMALL_STATE(153)] = 4247,
  [SMALL_STATE(154)] = 4263,
  [SMALL_STATE(155)] = 4283,
  [SMALL_STATE(156)] = 4299,
  [SMALL_STATE(157)] = 4313,
  [SMALL_STATE(158)] = 4329,
  [SMALL_STATE(159)] = 4342,
  [SMALL_STATE(160)] = 4359,
  [SMALL_STATE(161)] = 4370,
  [SMALL_STATE(162)] = 4383,
  [SMALL_STATE(163)] = 4396,
  [SMALL_STATE(164)] = 4409,
  [SMALL_STATE(165)] = 4422,
  [SMALL_STATE(166)] = 4441,
  [SMALL_STATE(167)] = 4458,
  [SMALL_STATE(168)] = 4471,
  [SMALL_STATE(169)] = 4488,
  [SMALL_STATE(170)] = 4501,
  [SMALL_STATE(171)] = 4514,
  [SMALL_STATE(172)] = 4531,
  [SMALL_STATE(173)] = 4544,
  [SMALL_STATE(174)] = 4557,
  [SMALL_STATE(175)] = 4570,
  [SMALL_STATE(176)] = 4583,
  [SMALL_STATE(177)] = 4596,
  [SMALL_STATE(178)] = 4609,
  [SMALL_STATE(179)] = 4622,
  [SMALL_STATE(180)] = 4633,
  [SMALL_STATE(181)] = 4646,
  [SMALL_STATE(182)] = 4659,
  [SMALL_STATE(183)] = 4672,
  [SMALL_STATE(184)] = 4685,
  [SMALL_STATE(185)] = 4698,
  [SMALL_STATE(186)] = 4711,
  [SMALL_STATE(187)] = 4728,
  [SMALL_STATE(188)] = 4745,
  [SMALL_STATE(189)] = 4762,
  [SMALL_STATE(190)] = 4773,
  [SMALL_STATE(191)] = 4786,
  [SMALL_STATE(192)] = 4803,
  [SMALL_STATE(193)] = 4816,
  [SMALL_STATE(194)] = 4833,
  [SMALL_STATE(195)] = 4846,
  [SMALL_STATE(196)] = 4856,
  [SMALL_STATE(197)] = 4866,
  [SMALL_STATE(198)] = 4880,
  [SMALL_STATE(199)] = 4890,
  [SMALL_STATE(200)] = 4906,
  [SMALL_STATE(201)] = 4920,
  [SMALL_STATE(202)] = 4936,
  [SMALL_STATE(203)] = 4946,
  [SMALL_STATE(204)] = 4960,
  [SMALL_STATE(205)] = 4974,
  [SMALL_STATE(206)] = 4988,
  [SMALL_STATE(207)] = 4998,
  [SMALL_STATE(208)] = 5012,
  [SMALL_STATE(209)] = 5026,
  [SMALL_STATE(210)] = 5036,
  [SMALL_STATE(211)] = 5050,
  [SMALL_STATE(212)] = 5064,
  [SMALL_STATE(213)] = 5074,
  [SMALL_STATE(214)] = 5084,
  [SMALL_STATE(215)] = 5094,
  [SMALL_STATE(216)] = 5104,
  [SMALL_STATE(217)] = 5114,
  [SMALL_STATE(218)] = 5124,
  [SMALL_STATE(219)] = 5138,
  [SMALL_STATE(220)] = 5152,
  [SMALL_STATE(221)] = 5162,
  [SMALL_STATE(222)] = 5172,
  [SMALL_STATE(223)] = 5186,
  [SMALL_STATE(224)] = 5200,
  [SMALL_STATE(225)] = 5214,
  [SMALL_STATE(226)] = 5228,
  [SMALL_STATE(227)] = 5242,
  [SMALL_STATE(228)] = 5256,
  [SMALL_STATE(229)] = 5266,
  [SMALL_STATE(230)] = 5280,
  [SMALL_STATE(231)] = 5294,
  [SMALL_STATE(232)] = 5308,
  [SMALL_STATE(233)] = 5324,
  [SMALL_STATE(234)] = 5334,
  [SMALL_STATE(235)] = 5344,
  [SMALL_STATE(236)] = 5358,
  [SMALL_STATE(237)] = 5371,
  [SMALL_STATE(238)] = 5384,
  [SMALL_STATE(239)] = 5397,
  [SMALL_STATE(240)] = 5410,
  [SMALL_STATE(241)] = 5421,
  [SMALL_STATE(242)] = 5434,
  [SMALL_STATE(243)] = 5447,
  [SMALL_STATE(244)] = 5456,
  [SMALL_STATE(245)] = 5469,
  [SMALL_STATE(246)] = 5482,
  [SMALL_STATE(247)] = 5495,
  [SMALL_STATE(248)] = 5508,
  [SMALL_STATE(249)] = 5521,
  [SMALL_STATE(250)] = 5534,
  [SMALL_STATE(251)] = 5547,
  [SMALL_STATE(252)] = 5560,
  [SMALL_STATE(253)] = 5573,
  [SMALL_STATE(254)] = 5586,
  [SMALL_STATE(255)] = 5599,
  [SMALL_STATE(256)] = 5612,
  [SMALL_STATE(257)] = 5625,
  [SMALL_STATE(258)] = 5638,
  [SMALL_STATE(259)] = 5651,
  [SMALL_STATE(260)] = 5664,
  [SMALL_STATE(261)] = 5677,
  [SMALL_STATE(262)] = 5690,
  [SMALL_STATE(263)] = 5703,
  [SMALL_STATE(264)] = 5716,
  [SMALL_STATE(265)] = 5729,
  [SMALL_STATE(266)] = 5742,
  [SMALL_STATE(267)] = 5755,
  [SMALL_STATE(268)] = 5766,
  [SMALL_STATE(269)] = 5779,
  [SMALL_STATE(270)] = 5790,
  [SMALL_STATE(271)] = 5801,
  [SMALL_STATE(272)] = 5814,
  [SMALL_STATE(273)] = 5827,
  [SMALL_STATE(274)] = 5840,
  [SMALL_STATE(275)] = 5853,
  [SMALL_STATE(276)] = 5866,
  [SMALL_STATE(277)] = 5877,
  [SMALL_STATE(278)] = 5890,
  [SMALL_STATE(279)] = 5903,
  [SMALL_STATE(280)] = 5916,
  [SMALL_STATE(281)] = 5929,
  [SMALL_STATE(282)] = 5942,
  [SMALL_STATE(283)] = 5955,
  [SMALL_STATE(284)] = 5968,
  [SMALL_STATE(285)] = 5981,
  [SMALL_STATE(286)] = 5994,
  [SMALL_STATE(287)] = 6007,
  [SMALL_STATE(288)] = 6020,
  [SMALL_STATE(289)] = 6033,
  [SMALL_STATE(290)] = 6046,
  [SMALL_STATE(291)] = 6059,
  [SMALL_STATE(292)] = 6072,
  [SMALL_STATE(293)] = 6085,
  [SMALL_STATE(294)] = 6098,
  [SMALL_STATE(295)] = 6111,
  [SMALL_STATE(296)] = 6124,
  [SMALL_STATE(297)] = 6137,
  [SMALL_STATE(298)] = 6148,
  [SMALL_STATE(299)] = 6161,
  [SMALL_STATE(300)] = 6172,
  [SMALL_STATE(301)] = 6182,
  [SMALL_STATE(302)] = 6190,
  [SMALL_STATE(303)] = 6198,
  [SMALL_STATE(304)] = 6206,
  [SMALL_STATE(305)] = 6214,
  [SMALL_STATE(306)] = 6222,
  [SMALL_STATE(307)] = 6230,
  [SMALL_STATE(308)] = 6240,
  [SMALL_STATE(309)] = 6250,
  [SMALL_STATE(310)] = 6260,
  [SMALL_STATE(311)] = 6270,
  [SMALL_STATE(312)] = 6280,
  [SMALL_STATE(313)] = 6288,
  [SMALL_STATE(314)] = 6296,
  [SMALL_STATE(315)] = 6306,
  [SMALL_STATE(316)] = 6316,
  [SMALL_STATE(317)] = 6324,
  [SMALL_STATE(318)] = 6334,
  [SMALL_STATE(319)] = 6342,
  [SMALL_STATE(320)] = 6352,
  [SMALL_STATE(321)] = 6362,
  [SMALL_STATE(322)] = 6372,
  [SMALL_STATE(323)] = 6382,
  [SMALL_STATE(324)] = 6390,
  [SMALL_STATE(325)] = 6400,
  [SMALL_STATE(326)] = 6410,
  [SMALL_STATE(327)] = 6420,
  [SMALL_STATE(328)] = 6430,
  [SMALL_STATE(329)] = 6440,
  [SMALL_STATE(330)] = 6450,
  [SMALL_STATE(331)] = 6458,
  [SMALL_STATE(332)] = 6468,
  [SMALL_STATE(333)] = 6478,
  [SMALL_STATE(334)] = 6488,
  [SMALL_STATE(335)] = 6496,
  [SMALL_STATE(336)] = 6504,
  [SMALL_STATE(337)] = 6512,
  [SMALL_STATE(338)] = 6522,
  [SMALL_STATE(339)] = 6532,
  [SMALL_STATE(340)] = 6540,
  [SMALL_STATE(341)] = 6548,
  [SMALL_STATE(342)] = 6558,
  [SMALL_STATE(343)] = 6566,
  [SMALL_STATE(344)] = 6574,
  [SMALL_STATE(345)] = 6584,
  [SMALL_STATE(346)] = 6592,
  [SMALL_STATE(347)] = 6600,
  [SMALL_STATE(348)] = 6610,
  [SMALL_STATE(349)] = 6618,
  [SMALL_STATE(350)] = 6628,
  [SMALL_STATE(351)] = 6635,
  [SMALL_STATE(352)] = 6642,
  [SMALL_STATE(353)] = 6649,
  [SMALL_STATE(354)] = 6656,
  [SMALL_STATE(355)] = 6663,
  [SMALL_STATE(356)] = 6670,
  [SMALL_STATE(357)] = 6677,
  [SMALL_STATE(358)] = 6684,
  [SMALL_STATE(359)] = 6691,
  [SMALL_STATE(360)] = 6698,
  [SMALL_STATE(361)] = 6705,
  [SMALL_STATE(362)] = 6712,
  [SMALL_STATE(363)] = 6719,
  [SMALL_STATE(364)] = 6726,
  [SMALL_STATE(365)] = 6733,
  [SMALL_STATE(366)] = 6740,
  [SMALL_STATE(367)] = 6747,
  [SMALL_STATE(368)] = 6754,
  [SMALL_STATE(369)] = 6761,
  [SMALL_STATE(370)] = 6768,
  [SMALL_STATE(371)] = 6775,
  [SMALL_STATE(372)] = 6782,
  [SMALL_STATE(373)] = 6789,
  [SMALL_STATE(374)] = 6796,
  [SMALL_STATE(375)] = 6803,
  [SMALL_STATE(376)] = 6810,
  [SMALL_STATE(377)] = 6817,
  [SMALL_STATE(378)] = 6824,
  [SMALL_STATE(379)] = 6831,
  [SMALL_STATE(380)] = 6838,
  [SMALL_STATE(381)] = 6845,
  [SMALL_STATE(382)] = 6852,
  [SMALL_STATE(383)] = 6859,
  [SMALL_STATE(384)] = 6866,
  [SMALL_STATE(385)] = 6873,
  [SMALL_STATE(386)] = 6880,
  [SMALL_STATE(387)] = 6887,
  [SMALL_STATE(388)] = 6894,
  [SMALL_STATE(389)] = 6901,
  [SMALL_STATE(390)] = 6908,
  [SMALL_STATE(391)] = 6915,
  [SMALL_STATE(392)] = 6922,
  [SMALL_STATE(393)] = 6929,
  [SMALL_STATE(394)] = 6936,
  [SMALL_STATE(395)] = 6943,
  [SMALL_STATE(396)] = 6950,
  [SMALL_STATE(397)] = 6957,
  [SMALL_STATE(398)] = 6964,
  [SMALL_STATE(399)] = 6971,
  [SMALL_STATE(400)] = 6978,
  [SMALL_STATE(401)] = 6985,
  [SMALL_STATE(402)] = 6992,
  [SMALL_STATE(403)] = 6999,
  [SMALL_STATE(404)] = 7006,
  [SMALL_STATE(405)] = 7013,
  [SMALL_STATE(406)] = 7020,
  [SMALL_STATE(407)] = 7027,
  [SMALL_STATE(408)] = 7034,
  [SMALL_STATE(409)] = 7041,
  [SMALL_STATE(410)] = 7048,
  [SMALL_STATE(411)] = 7055,
  [SMALL_STATE(412)] = 7062,
  [SMALL_STATE(413)] = 7069,
  [SMALL_STATE(414)] = 7076,
  [SMALL_STATE(415)] = 7083,
  [SMALL_STATE(416)] = 7090,
  [SMALL_STATE(417)] = 7097,
  [SMALL_STATE(418)] = 7104,
  [SMALL_STATE(419)] = 7111,
  [SMALL_STATE(420)] = 7118,
  [SMALL_STATE(421)] = 7125,
  [SMALL_STATE(422)] = 7132,
  [SMALL_STATE(423)] = 7139,
  [SMALL_STATE(424)] = 7146,
  [SMALL_STATE(425)] = 7153,
  [SMALL_STATE(426)] = 7160,
  [SMALL_STATE(427)] = 7167,
  [SMALL_STATE(428)] = 7174,
  [SMALL_STATE(429)] = 7181,
  [SMALL_STATE(430)] = 7188,
  [SMALL_STATE(431)] = 7195,
  [SMALL_STATE(432)] = 7202,
  [SMALL_STATE(433)] = 7209,
  [SMALL_STATE(434)] = 7216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(154),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(365),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(275),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(165),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(412),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(411),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(410),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(409),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(407),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(406),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(405),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(404),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(402),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(401),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(400),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(399),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(398),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 18),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 50),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 50),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 19),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 19),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 46),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 46),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 46),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 46),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 53),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 53),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 55),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 55),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 53),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 53),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 55),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 55),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(386),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(311),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(310),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(308),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(413),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(414),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(190),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(365),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(293),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(307),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(324),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(325),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(326),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 9),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(155),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 48),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 10),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 10),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 13),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 13),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 10),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 10),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(197),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, .production_id = 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(434),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 44),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 31),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(230),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37), SHIFT_REPEAT(227),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(315),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34), SHIFT_REPEAT(122),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(359),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(327),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24), SHIFT_REPEAT(363),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40), SHIFT_REPEAT(329),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(81),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(132),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42), SHIFT_REPEAT(276),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21), SHIFT_REPEAT(366),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 14),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 38),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 32),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 18),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 35),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 31),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 30),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 29),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 45),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 54),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 52),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 54),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 51),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 52),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 16),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 15),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 47),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 30),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 29),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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

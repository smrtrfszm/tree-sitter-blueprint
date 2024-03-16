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
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 56

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_number = 2,
  sym_escape_sequence = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_quoted_token1 = 5,
  anon_sym_DQUOTE2 = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_quoted_token2 = 8,
  anon_sym_SQUOTE2 = 9,
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
  anon_sym_inverted = 34,
  anon_sym_bidirectional = 35,
  anon_sym_no_DASHsync_DASHcreate = 36,
  anon_sym_sync_DASHcreate = 37,
  anon_sym__ = 38,
  anon_sym_C_ = 39,
  anon_sym_PIPE = 40,
  anon_sym_LBRACK = 41,
  anon_sym_internal_DASHchild = 42,
  anon_sym_RBRACK = 43,
  anon_sym_menu = 44,
  anon_sym_section = 45,
  anon_sym_submenu = 46,
  anon_sym_item = 47,
  sym_comment = 48,
  anon_sym_accessibility = 49,
  anon_sym_responses = 50,
  anon_sym_condition = 51,
  anon_sym_setters = 52,
  anon_sym_items = 53,
  anon_sym_mime_DASHtypes = 54,
  anon_sym_patterns = 55,
  anon_sym_suffixes = 56,
  anon_sym_layout = 57,
  anon_sym_marks = 58,
  anon_sym_mark = 59,
  anon_sym_widgets = 60,
  anon_sym_strings = 61,
  anon_sym_styles = 62,
  anon_sym_action = 63,
  anon_sym_response = 64,
  anon_sym_EQ = 65,
  anon_sym_default = 66,
  sym_source_file = 67,
  sym_quoted = 68,
  sym_type_name = 69,
  sym_using = 70,
  sym_translation_domain = 71,
  sym_template = 72,
  sym_object = 73,
  sym_object_content = 74,
  sym_signal = 75,
  sym_property = 76,
  sym_closure_expression = 77,
  sym_lookup_expression = 78,
  sym_cast_expression = 79,
  sym_literal = 80,
  sym__type_literal = 81,
  sym__quoted_literal = 82,
  sym__number_literal = 83,
  sym__ident_literal = 84,
  sym__expression = 85,
  sym_binding = 86,
  sym_object_value = 87,
  sym_value = 88,
  sym_translated = 89,
  sym__flags = 90,
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
  sym_child_extension = 121,
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
  aux_sym__flags_repeat1 = 132,
  aux_sym_menu_repeat1 = 133,
  aux_sym_menu_section_repeat1 = 134,
  aux_sym_menu_item_repeat1 = 135,
  aux_sym_ext_accessibility_repeat1 = 136,
  aux_sym_ext_adw_dialog_repeat1 = 137,
  aux_sym_ext_adw_dialog_response_repeat1 = 138,
  aux_sym_ext_adw_breakpoint_repeat1 = 139,
  aux_sym_ext_combo_box_items_repeat1 = 140,
  aux_sym_ext_file_filter_mime_types_repeat1 = 141,
  aux_sym_ext_scale_marks_repeat1 = 142,
  aux_sym_ext_size_group_widgets_repeat1 = 143,
  aux_sym_ext_string_list_strings_repeat1 = 144,
  aux_sym_ext_styles_repeat1 = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_number] = "number",
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
  [sym_number] = sym_number,
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
  [sym_number] = {
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
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 91,
  [95] = 88,
  [96] = 86,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 87,
  [101] = 101,
  [102] = 97,
  [103] = 103,
  [104] = 85,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 130,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 136,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 143,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 68,
  [151] = 67,
  [152] = 152,
  [153] = 153,
  [154] = 69,
  [155] = 39,
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
  [196] = 174,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 178,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 189,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 165,
  [212] = 212,
  [213] = 213,
  [214] = 162,
  [215] = 215,
  [216] = 163,
  [217] = 217,
  [218] = 218,
  [219] = 198,
  [220] = 185,
  [221] = 221,
  [222] = 222,
  [223] = 170,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 172,
  [229] = 229,
  [230] = 160,
  [231] = 179,
  [232] = 232,
  [233] = 210,
  [234] = 181,
  [235] = 169,
  [236] = 199,
  [237] = 175,
  [238] = 238,
  [239] = 239,
  [240] = 176,
  [241] = 217,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 197,
  [246] = 222,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 251,
  [256] = 124,
  [257] = 257,
  [258] = 110,
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
  [327] = 320,
  [328] = 319,
  [329] = 315,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 325,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 195,
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
  [356] = 322,
  [357] = 357,
  [358] = 358,
  [359] = 324,
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
  [435] = 394,
  [436] = 436,
  [437] = 437,
  [438] = 396,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 401,
  [443] = 400,
  [444] = 444,
  [445] = 445,
  [446] = 377,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(459);
      if (lookahead == ';') ADVANCE(454);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(489);
      if (lookahead == '\\') SKIP(259)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '_') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\'') ADVANCE(449);
      if (lookahead == '/') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(446);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '/') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(446);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '\r') ADVANCE(436);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(444);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(441);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(441);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 't') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(271);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '_') ADVANCE(485);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 't') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(271);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(485);
      if (lookahead == 't') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(271);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '_') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(459);
      if (lookahead == ';') ADVANCE(454);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '=') ADVANCE(538);
      if (lookahead == '[') ADVANCE(489);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(503);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(502);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '\\') SKIP(25)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(463);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(486);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(472);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(161);
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
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(527);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(526);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(500);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(499);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 249:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(506);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(478);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(433);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(503);
      if (lookahead == '\r') ADVANCE(505);
      if (lookahead == '\\') ADVANCE(504);
      END_STATE();
    case 258:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 259:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(258)
      END_STATE();
    case 260:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(265)
      END_STATE();
    case 261:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(265)
      if (lookahead == '\r') SKIP(260)
      END_STATE();
    case 262:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(266)
      END_STATE();
    case 263:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') SKIP(266)
      if (lookahead == '\r') SKIP(262)
      END_STATE();
    case 264:
      if (eof) ADVANCE(267);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(459);
      if (lookahead == ';') ADVANCE(454);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(539);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == '[') ADVANCE(489);
      if (lookahead == '\\') SKIP(259)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == '_') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '|') ADVANCE(488);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264)
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '+') ADVANCE(475);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '\\') SKIP(261)
      if (lookahead == ']') ADVANCE(492);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(265)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(454);
      if (lookahead == '\\') SKIP(263)
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 't') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == 'y') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'x') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(503);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_quoted_token1);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(441);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(503);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_quoted_token2);
      if (lookahead == '/') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(446);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_translation_DASHdomain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_typeof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_bind_DASHproperty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_sync_DASHcreate);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_C_);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_C_);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_internal_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_submenu);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_submenu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(503);
      if (lookahead == '\r') ADVANCE(505);
      if (lookahead == '\\') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(257);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_accessibility);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_accessibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_responses);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_responses);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_setters);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_setters);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_items);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_mime_DASHtypes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_patterns);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_patterns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_suffixes);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_suffixes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_marks);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_marks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_widgets);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_widgets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(463);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 265},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 265},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 43},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 43},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 43},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 266},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 266},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 266},
  [118] = {.lex_state = 266},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 266},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 266},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 44},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 265},
  [140] = {.lex_state = 28},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 28},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 265},
  [150] = {.lex_state = 266},
  [151] = {.lex_state = 266},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 266},
  [155] = {.lex_state = 266},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 265},
  [160] = {.lex_state = 43},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 43},
  [163] = {.lex_state = 43},
  [164] = {.lex_state = 266},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 265},
  [167] = {.lex_state = 265},
  [168] = {.lex_state = 265},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 43},
  [171] = {.lex_state = 265},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 266},
  [174] = {.lex_state = 43},
  [175] = {.lex_state = 43},
  [176] = {.lex_state = 43},
  [177] = {.lex_state = 265},
  [178] = {.lex_state = 43},
  [179] = {.lex_state = 43},
  [180] = {.lex_state = 266},
  [181] = {.lex_state = 43},
  [182] = {.lex_state = 266},
  [183] = {.lex_state = 265},
  [184] = {.lex_state = 265},
  [185] = {.lex_state = 43},
  [186] = {.lex_state = 265},
  [187] = {.lex_state = 31},
  [188] = {.lex_state = 266},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 266},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 31},
  [193] = {.lex_state = 31},
  [194] = {.lex_state = 266},
  [195] = {.lex_state = 43},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 22},
  [200] = {.lex_state = 265},
  [201] = {.lex_state = 265},
  [202] = {.lex_state = 44},
  [203] = {.lex_state = 22},
  [204] = {.lex_state = 31},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 44},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 31},
  [210] = {.lex_state = 31},
  [211] = {.lex_state = 44},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 44},
  [215] = {.lex_state = 31},
  [216] = {.lex_state = 44},
  [217] = {.lex_state = 31},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 44},
  [221] = {.lex_state = 31},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 44},
  [224] = {.lex_state = 31},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 265},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 44},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 44},
  [231] = {.lex_state = 44},
  [232] = {.lex_state = 265},
  [233] = {.lex_state = 31},
  [234] = {.lex_state = 44},
  [235] = {.lex_state = 44},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 44},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 44},
  [241] = {.lex_state = 31},
  [242] = {.lex_state = 31},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 22},
  [247] = {.lex_state = 265},
  [248] = {.lex_state = 265},
  [249] = {.lex_state = 265},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 31},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 31},
  [254] = {.lex_state = 31},
  [255] = {.lex_state = 31},
  [256] = {.lex_state = 31},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 31},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 31},
  [262] = {.lex_state = 31},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 265},
  [266] = {.lex_state = 31},
  [267] = {.lex_state = 31},
  [268] = {.lex_state = 44},
  [269] = {.lex_state = 31},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 31},
  [274] = {.lex_state = 265},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 44},
  [282] = {.lex_state = 31},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 44},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 31},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 31},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 265},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 31},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 265},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 31},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 31},
  [311] = {.lex_state = 31},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 31},
  [320] = {.lex_state = 31},
  [321] = {.lex_state = 42},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 31},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 31},
  [327] = {.lex_state = 31},
  [328] = {.lex_state = 31},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 31},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 31},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 44},
  [340] = {.lex_state = 31},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 31},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 31},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 31},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 31},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 31},
  [365] = {.lex_state = 265},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 265},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 265},
  [380] = {.lex_state = 31},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 32},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 44},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 31},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 31},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 31},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 31},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 265},
  [430] = {.lex_state = 31},
  [431] = {.lex_state = 31},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 31},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 31},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 31},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(433),
    [sym_type_name] = STATE(251),
    [sym_using] = STATE(83),
    [sym_translation_domain] = STATE(123),
    [sym_template] = STATE(117),
    [sym_object] = STATE(117),
    [sym_menu] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(83),
    [aux_sym_source_file_repeat2] = STATE(117),
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
    STATE(255), 1,
      sym_type_name,
    STATE(61), 2,
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
    STATE(255), 1,
      sym_type_name,
    STATE(61), 2,
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
    STATE(255), 1,
      sym_type_name,
    STATE(61), 2,
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
    STATE(255), 1,
      sym_type_name,
    STATE(61), 2,
      sym_object,
      sym__child,
    STATE(6), 18,
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
    STATE(255), 1,
      sym_type_name,
    STATE(61), 2,
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
  [425] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      sym_ident,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    STATE(251), 1,
      sym_type_name,
    STATE(366), 1,
      sym__flags,
    STATE(368), 1,
      sym_translated,
    STATE(371), 1,
      sym_literal,
    STATE(372), 1,
      sym_object,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_bind,
      anon_sym_bind_DASHproperty,
    STATE(370), 3,
      sym_binding,
      sym_object_value,
      sym_value,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [488] = 3,
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
  [514] = 3,
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
  [540] = 3,
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
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(142), 15,
      sym_ident,
      anon_sym_template,
      anon_sym_accessibility,
      anon_sym_responses,
      anon_sym_condition,
      anon_sym_setters,
      anon_sym_items,
      anon_sym_mime_DASHtypes,
      anon_sym_patterns,
      anon_sym_suffixes,
      anon_sym_layout,
      anon_sym_marks,
      anon_sym_widgets,
      anon_sym_strings,
      anon_sym_styles,
  [592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
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
  [618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
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
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
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
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
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
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
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
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
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
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
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
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
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
  [800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
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
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
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
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
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
  [878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
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
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
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
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
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
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
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
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
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
  [1008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
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
  [1034] = 3,
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
  [1060] = 3,
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
  [1086] = 3,
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
  [1112] = 3,
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
  [1138] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(230), 1,
      sym_ident,
    STATE(366), 1,
      sym__flags,
    STATE(368), 1,
      sym_translated,
    STATE(371), 1,
      sym_literal,
    STATE(382), 1,
      sym_value,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1186] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(230), 1,
      sym_ident,
    STATE(366), 1,
      sym__flags,
    STATE(368), 1,
      sym_translated,
    STATE(371), 1,
      sym_literal,
    STATE(397), 1,
      sym_value,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1234] = 3,
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
  [1260] = 3,
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
  [1286] = 3,
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
  [1312] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1384] = 3,
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
  [1410] = 3,
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
  [1436] = 3,
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
  [1462] = 3,
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
  [1488] = 3,
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
  [1514] = 3,
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
  [1540] = 3,
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
  [1566] = 3,
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
  [1592] = 3,
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
  [1618] = 3,
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
  [1644] = 3,
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
  [1670] = 3,
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
  [1696] = 3,
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
  [1722] = 3,
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
  [1748] = 3,
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
  [1774] = 3,
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
  [1800] = 3,
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
  [1826] = 3,
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
  [1852] = 3,
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
  [1878] = 3,
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
  [1904] = 3,
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
  [1930] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2060] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2106] = 3,
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
  [2132] = 3,
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
  [2158] = 3,
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
  [2184] = 3,
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
  [2210] = 3,
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
  [2236] = 3,
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
  [2262] = 3,
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
  [2288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2334] = 3,
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
  [2360] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2412] = 3,
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
  [2438] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [2464] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2507] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2550] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_ident,
    ACTIONS(246), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(84), 2,
      sym_closure_expression,
      sym_literal,
    STATE(127), 5,
      sym_quoted,
      sym__type_literal,
      sym__quoted_literal,
      sym__number_literal,
      sym__ident_literal,
  [2593] = 12,
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
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_translation_domain,
    STATE(251), 1,
      sym_type_name,
    STATE(139), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    STATE(113), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [2634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    STATE(98), 3,
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
  [2658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    STATE(94), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(101), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(92), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(97), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    STATE(103), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(436), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    STATE(89), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(438), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [2818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2846] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2930] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(102), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2958] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(105), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [2986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      anon_sym_as,
    STATE(103), 3,
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
  [3038] = 7,
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
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(93), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3122] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
    ACTIONS(481), 1,
      anon_sym_as,
    STATE(103), 3,
      sym_lookup_expression,
      sym_cast_expression,
      aux_sym__expression_repeat1,
    ACTIONS(479), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(91), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3202] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_ident,
    ACTIONS(424), 1,
      anon_sym_section,
    ACTIONS(426), 1,
      anon_sym_submenu,
    ACTIONS(428), 1,
      anon_sym_item,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(99), 7,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_attribute,
      sym_menu_item_shorthand,
      aux_sym_menu_section_repeat1,
  [3230] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym_string_value,
    STATE(351), 1,
      sym__ext_combo_box_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3263] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym__ext_combo_box_item,
    STATE(341), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3296] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym_string_value,
    STATE(351), 1,
      sym__ext_combo_box_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3329] = 8,
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
    STATE(251), 1,
      sym_type_name,
    STATE(118), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 10,
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
  [3373] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(259), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_section,
    ACTIONS(510), 1,
      anon_sym_submenu,
    ACTIONS(512), 1,
      anon_sym_item,
    STATE(115), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3425] = 8,
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
    STATE(251), 1,
      sym_type_name,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym_C_,
    ACTIONS(488), 1,
      sym_ident,
    STATE(341), 1,
      sym_string_value,
    STATE(351), 1,
      sym__ext_combo_box_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_section,
    ACTIONS(510), 1,
      anon_sym_submenu,
    ACTIONS(512), 1,
      anon_sym_item,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(119), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_section,
    ACTIONS(510), 1,
      anon_sym_submenu,
    ACTIONS(512), 1,
      anon_sym_item,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(119), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3531] = 8,
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
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_type_name,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3559] = 8,
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
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_type_name,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(522), 1,
      anon_sym_section,
    ACTIONS(525), 1,
      anon_sym_submenu,
    ACTIONS(528), 1,
      anon_sym_item,
    STATE(119), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 1,
      sym_ident,
    ACTIONS(536), 1,
      anon_sym_DOLLAR,
    ACTIONS(539), 1,
      anon_sym_template,
    ACTIONS(542), 1,
      anon_sym_menu,
    STATE(251), 1,
      sym_type_name,
    STATE(120), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3639] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(318), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3667] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(318), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3695] = 8,
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
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_type_name,
    STATE(113), 4,
      sym_template,
      sym_object,
      sym_menu,
      aux_sym_source_file_repeat2,
  [3723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 10,
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
  [3739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_section,
    ACTIONS(510), 1,
      anon_sym_submenu,
    ACTIONS(512), 1,
      anon_sym_item,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(116), 6,
      sym__menu_child,
      sym_menu_section,
      sym_menu_submenu,
      sym_menu_item,
      sym_menu_item_shorthand,
      aux_sym_menu_repeat1,
  [3763] = 2,
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
  [3778] = 2,
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
  [3793] = 2,
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
  [3808] = 2,
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
  [3823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3865] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3892] = 2,
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
  [3907] = 2,
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
  [3922] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(318), 2,
      sym_string_value,
      sym__ext_strings_list_item,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3947] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [3974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [3989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 9,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_using,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    STATE(139), 2,
      sym_using,
      aux_sym_source_file_repeat1,
    ACTIONS(579), 4,
      sym_ident,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4025] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4052] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(349), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4076] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(359), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4100] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(435), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4124] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(390), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4148] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(381), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4172] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(394), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4196] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    STATE(324), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4220] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym__,
    ACTIONS(502), 1,
      anon_sym_C_,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_string_value,
    STATE(187), 3,
      sym_quoted,
      sym__quoted_literal,
      sym_translated,
  [4244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(592), 5,
      sym_ident,
      anon_sym_using,
      anon_sym_translation_DASHdomain,
      anon_sym_template,
      anon_sym_menu,
  [4259] = 3,
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
  [4273] = 3,
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
  [4287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_binding_repeat1,
    ACTIONS(596), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_PIPE,
    STATE(309), 1,
      aux_sym__flags_repeat1,
    ACTIONS(598), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4323] = 3,
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
  [4337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_SEMI,
  [4351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      aux_sym_binding_repeat1,
    ACTIONS(608), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      aux_sym_binding_repeat1,
    ACTIONS(613), 4,
      anon_sym_inverted,
      anon_sym_bidirectional,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_sync_DASHcreate,
  [4383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(615), 1,
      anon_sym_COLON,
    ACTIONS(617), 1,
      anon_sym_COLON_COLON,
    ACTIONS(619), 1,
      anon_sym_EQ_GT,
    ACTIONS(598), 2,
      sym_ident,
      anon_sym_LBRACE,
  [4403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4435] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_ident,
    ACTIONS(629), 1,
      anon_sym_internal_DASHchild,
    ACTIONS(631), 1,
      anon_sym_action,
    STATE(387), 1,
      sym_ext_response,
    STATE(388), 1,
      sym_child_extension,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(643), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym__ext_file_filter_item,
    STATE(338), 1,
      sym_quoted,
  [4544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      sym__ext_file_filter_item,
    STATE(338), 1,
      sym_quoted,
  [4563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__ext_file_filter_item,
    STATE(338), 1,
      sym_quoted,
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(671), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(673), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4673] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(697), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(705), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [4827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(721), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(729), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DOT,
    ACTIONS(598), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 5,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
    ACTIONS(737), 3,
      sym_ident,
      anon_sym_template,
      anon_sym_menu,
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 4,
      sym_ident,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [4948] = 4,
    ACTIONS(745), 1,
      anon_sym_SQUOTE2,
    ACTIONS(747), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(743), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [4962] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SQUOTE2,
    STATE(243), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(749), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [4976] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_DQUOTE2,
    STATE(203), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(753), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [4990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_quoted,
    STATE(361), 1,
      sym__ext_file_filter_item,
  [5006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      sym_quoted,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5032] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DQUOTE2,
    STATE(203), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(757), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      aux_sym_signal_repeat1,
    ACTIONS(766), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(770), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(774), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(36), 1,
      sym_object,
    STATE(255), 1,
      sym_type_name,
  [5124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_ident,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(224), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_ident,
    STATE(212), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(786), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(770), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(35), 1,
      sym_object,
    STATE(255), 1,
      sym_type_name,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_ident,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(233), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym_signal_repeat1,
    ACTIONS(794), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5240] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SQUOTE2,
    STATE(243), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(749), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(41), 1,
      sym_object,
    STATE(255), 1,
      sym_type_name,
  [5280] = 4,
    ACTIONS(745), 1,
      anon_sym_DQUOTE2,
    ACTIONS(747), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(798), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_ident,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(224), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 4,
      sym_ident,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_GT,
  [5328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_quoted,
  [5344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      aux_sym_signal_repeat1,
    ACTIONS(811), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(770), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      sym_quoted,
  [5418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_ident,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(224), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5452] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DQUOTE2,
    STATE(203), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(753), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_signal_repeat1,
    ACTIONS(770), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      aux_sym_signal_repeat1,
    ACTIONS(823), 2,
      anon_sym_after,
      anon_sym_swapped,
  [5504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 4,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_submenu,
      anon_sym_item,
  [5514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_ident,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    STATE(210), 2,
      sym_menu_attribute,
      aux_sym_menu_item_repeat1,
  [5528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_ident,
    STATE(212), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5542] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SQUOTE2,
    STATE(243), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(831), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_ident,
    STATE(242), 1,
      aux_sym_ext_adw_dialog_response_repeat1,
    ACTIONS(838), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5570] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SQUOTE2,
    STATE(219), 1,
      aux_sym_quoted_repeat2,
    ACTIONS(840), 2,
      sym_escape_sequence,
      aux_sym_quoted_token2,
  [5584] = 4,
    ACTIONS(747), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DQUOTE2,
    STATE(236), 1,
      aux_sym_quoted_repeat1,
    ACTIONS(844), 2,
      sym_escape_sequence,
      aux_sym_quoted_token1,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_number,
    ACTIONS(848), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(378), 1,
      sym_quoted,
  [5622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(428), 1,
      sym_quoted,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(252), 1,
      sym_type_name,
  [5648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_ident,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_object_content,
  [5661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_object_content,
  [5674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(343), 1,
      sym_type_name,
  [5687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(344), 1,
      sym_type_name,
  [5700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym_ident,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_object_content,
  [5713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_PIPE,
    STATE(309), 1,
      aux_sym__flags_repeat1,
  [5735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 3,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym__flags_repeat1,
  [5770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_ext_accessibility_repeat1,
  [5783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_ident,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
  [5796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [5809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_ident,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(306), 1,
      sym_ext_adw_dialog_response,
  [5822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      sym_quoted,
  [5835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_ident,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
    STATE(310), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [5848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      aux_sym_ext_accessibility_repeat1,
  [5861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    ACTIONS(892), 1,
      anon_sym_mark,
    STATE(307), 1,
      sym_ext_scale_mark,
  [5874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_ident,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      sym__ext_size_group_widget,
  [5887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [5900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
  [5913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_closure_expression_repeat1,
  [5926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      aux_sym_ext_accessibility_repeat1,
  [5939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(367), 1,
      sym_quoted,
  [5952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [5965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
  [5978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [5991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_ident,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      sym__ext_size_group_widget,
  [6017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
  [6030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_mark,
    ACTIONS(931), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      sym_ext_scale_mark,
  [6043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_ident,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      aux_sym_ext_accessibility_repeat1,
  [6056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_ext_styles_repeat1,
  [6095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_mark,
    ACTIONS(947), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      sym_ext_scale_mark,
  [6108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    STATE(287), 1,
      aux_sym_ext_scale_marks_repeat1,
  [6121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_ident,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    STATE(317), 1,
      sym__ext_size_group_widget,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [6199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      aux_sym_ext_file_filter_mime_types_repeat1,
  [6212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [6225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_ext_string_list_strings_repeat1,
  [6238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    ACTIONS(993), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_ext_combo_box_items_repeat1,
  [6251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_quoted,
  [6264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [6277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_ident,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
  [6290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_ext_styles_repeat1,
  [6303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_ident,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      aux_sym_ext_accessibility_repeat1,
  [6316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_ext_size_group_widgets_repeat1,
  [6329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(411), 1,
      sym_quoted,
  [6342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_closure_expression_repeat1,
  [6355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_ext_adw_dialog_repeat1,
  [6368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_ext_scale_marks_repeat1,
  [6381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(440), 1,
      sym_type_name,
  [6394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(1027), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      aux_sym__flags_repeat1,
  [6407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_ident,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      aux_sym_ext_adw_breakpoint_repeat1,
  [6420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(777), 1,
      sym_ident,
    STATE(392), 1,
      sym_type_name,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
  [6459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LBRACE,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_ident,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_ident,
    ACTIONS(1049), 1,
      anon_sym_LBRACE,
  [6513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_ident,
    ACTIONS(1053), 1,
      sym_number,
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_ident,
    ACTIONS(1061), 1,
      anon_sym_LBRACE,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_object_content,
  [6563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym_ident,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [6573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_ident,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym_ident,
    ACTIONS(1077), 1,
      anon_sym_LBRACE,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LBRACE,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
    ACTIONS(1087), 1,
      anon_sym_default,
  [6621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_ident,
    STATE(345), 1,
      sym_ext_adw_dialog_response,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_object_content,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_RBRACK,
    ACTIONS(1095), 1,
      anon_sym_default,
  [6667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
  [6677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_mark,
    STATE(316), 1,
      sym_ext_scale_mark,
  [6695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_ident,
    STATE(317), 1,
      sym__ext_size_group_widget,
  [6705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_object_content,
  [6731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_object_content,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym_ident,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [6775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_ident,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
  [6845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 2,
      sym_ident,
      anon_sym_RBRACE,
  [6853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
  [6871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [6881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
  [6896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_LBRACK,
  [6903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_ident,
  [6910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_EQ_GT,
  [6917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
  [6924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
  [6931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
  [6938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
  [6945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_number,
  [6973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_LT,
  [6980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
  [6987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
  [6994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_COLON,
  [7001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
  [7008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_number,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      sym_ident,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
  [7029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_SEMI,
  [7036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_EQ,
  [7043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COLON,
  [7050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
  [7057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_COLON,
  [7064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_RBRACK,
  [7071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_RBRACK,
  [7078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_COLON,
  [7085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
  [7092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_response,
  [7099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_GT,
  [7106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      sym_ident,
  [7113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_SEMI,
  [7120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_RBRACK,
  [7127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
  [7134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
  [7141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_DOLLAR,
  [7148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym_ident,
  [7155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LBRACE,
  [7162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
  [7169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_DOT,
  [7176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LBRACK,
  [7183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_LBRACK,
  [7190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_ident,
  [7197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LBRACK,
  [7204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LBRACE,
  [7211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_LBRACK,
  [7218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_LBRACK,
  [7225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACK,
  [7232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [7239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LBRACK,
  [7246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
  [7260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_COLON,
  [7267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACK,
  [7274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_LBRACE,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_ident,
  [7288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
  [7302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_RBRACK,
  [7309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_RBRACK,
  [7316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [7323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_SEMI,
  [7330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE,
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      sym_ident,
  [7351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
  [7358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_number,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      sym_ident,
  [7372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_ident,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_LT,
  [7386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      ts_builtin_sym_end,
  [7393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      sym_ident,
  [7400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_SEMI,
  [7407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_DOLLAR,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym_ident,
  [7421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [7428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
  [7435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_GT,
  [7442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym_ident,
  [7449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_LBRACE,
  [7456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE,
  [7463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym_ident,
  [7477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 514,
  [SMALL_STATE(10)] = 540,
  [SMALL_STATE(11)] = 566,
  [SMALL_STATE(12)] = 592,
  [SMALL_STATE(13)] = 618,
  [SMALL_STATE(14)] = 644,
  [SMALL_STATE(15)] = 670,
  [SMALL_STATE(16)] = 696,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 748,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 800,
  [SMALL_STATE(21)] = 826,
  [SMALL_STATE(22)] = 852,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 904,
  [SMALL_STATE(25)] = 930,
  [SMALL_STATE(26)] = 956,
  [SMALL_STATE(27)] = 982,
  [SMALL_STATE(28)] = 1008,
  [SMALL_STATE(29)] = 1034,
  [SMALL_STATE(30)] = 1060,
  [SMALL_STATE(31)] = 1086,
  [SMALL_STATE(32)] = 1112,
  [SMALL_STATE(33)] = 1138,
  [SMALL_STATE(34)] = 1186,
  [SMALL_STATE(35)] = 1234,
  [SMALL_STATE(36)] = 1260,
  [SMALL_STATE(37)] = 1286,
  [SMALL_STATE(38)] = 1312,
  [SMALL_STATE(39)] = 1358,
  [SMALL_STATE(40)] = 1384,
  [SMALL_STATE(41)] = 1410,
  [SMALL_STATE(42)] = 1436,
  [SMALL_STATE(43)] = 1462,
  [SMALL_STATE(44)] = 1488,
  [SMALL_STATE(45)] = 1514,
  [SMALL_STATE(46)] = 1540,
  [SMALL_STATE(47)] = 1566,
  [SMALL_STATE(48)] = 1592,
  [SMALL_STATE(49)] = 1618,
  [SMALL_STATE(50)] = 1644,
  [SMALL_STATE(51)] = 1670,
  [SMALL_STATE(52)] = 1696,
  [SMALL_STATE(53)] = 1722,
  [SMALL_STATE(54)] = 1748,
  [SMALL_STATE(55)] = 1774,
  [SMALL_STATE(56)] = 1800,
  [SMALL_STATE(57)] = 1826,
  [SMALL_STATE(58)] = 1852,
  [SMALL_STATE(59)] = 1878,
  [SMALL_STATE(60)] = 1904,
  [SMALL_STATE(61)] = 1930,
  [SMALL_STATE(62)] = 1956,
  [SMALL_STATE(63)] = 1982,
  [SMALL_STATE(64)] = 2008,
  [SMALL_STATE(65)] = 2034,
  [SMALL_STATE(66)] = 2060,
  [SMALL_STATE(67)] = 2106,
  [SMALL_STATE(68)] = 2132,
  [SMALL_STATE(69)] = 2158,
  [SMALL_STATE(70)] = 2184,
  [SMALL_STATE(71)] = 2210,
  [SMALL_STATE(72)] = 2236,
  [SMALL_STATE(73)] = 2262,
  [SMALL_STATE(74)] = 2288,
  [SMALL_STATE(75)] = 2334,
  [SMALL_STATE(76)] = 2360,
  [SMALL_STATE(77)] = 2386,
  [SMALL_STATE(78)] = 2412,
  [SMALL_STATE(79)] = 2438,
  [SMALL_STATE(80)] = 2464,
  [SMALL_STATE(81)] = 2507,
  [SMALL_STATE(82)] = 2550,
  [SMALL_STATE(83)] = 2593,
  [SMALL_STATE(84)] = 2634,
  [SMALL_STATE(85)] = 2658,
  [SMALL_STATE(86)] = 2686,
  [SMALL_STATE(87)] = 2714,
  [SMALL_STATE(88)] = 2742,
  [SMALL_STATE(89)] = 2770,
  [SMALL_STATE(90)] = 2794,
  [SMALL_STATE(91)] = 2818,
  [SMALL_STATE(92)] = 2846,
  [SMALL_STATE(93)] = 2874,
  [SMALL_STATE(94)] = 2902,
  [SMALL_STATE(95)] = 2930,
  [SMALL_STATE(96)] = 2958,
  [SMALL_STATE(97)] = 2986,
  [SMALL_STATE(98)] = 3014,
  [SMALL_STATE(99)] = 3038,
  [SMALL_STATE(100)] = 3066,
  [SMALL_STATE(101)] = 3094,
  [SMALL_STATE(102)] = 3122,
  [SMALL_STATE(103)] = 3150,
  [SMALL_STATE(104)] = 3174,
  [SMALL_STATE(105)] = 3202,
  [SMALL_STATE(106)] = 3230,
  [SMALL_STATE(107)] = 3263,
  [SMALL_STATE(108)] = 3296,
  [SMALL_STATE(109)] = 3329,
  [SMALL_STATE(110)] = 3357,
  [SMALL_STATE(111)] = 3373,
  [SMALL_STATE(112)] = 3401,
  [SMALL_STATE(113)] = 3425,
  [SMALL_STATE(114)] = 3453,
  [SMALL_STATE(115)] = 3483,
  [SMALL_STATE(116)] = 3507,
  [SMALL_STATE(117)] = 3531,
  [SMALL_STATE(118)] = 3559,
  [SMALL_STATE(119)] = 3587,
  [SMALL_STATE(120)] = 3611,
  [SMALL_STATE(121)] = 3639,
  [SMALL_STATE(122)] = 3667,
  [SMALL_STATE(123)] = 3695,
  [SMALL_STATE(124)] = 3723,
  [SMALL_STATE(125)] = 3739,
  [SMALL_STATE(126)] = 3763,
  [SMALL_STATE(127)] = 3778,
  [SMALL_STATE(128)] = 3793,
  [SMALL_STATE(129)] = 3808,
  [SMALL_STATE(130)] = 3823,
  [SMALL_STATE(131)] = 3850,
  [SMALL_STATE(132)] = 3865,
  [SMALL_STATE(133)] = 3892,
  [SMALL_STATE(134)] = 3907,
  [SMALL_STATE(135)] = 3922,
  [SMALL_STATE(136)] = 3947,
  [SMALL_STATE(137)] = 3974,
  [SMALL_STATE(138)] = 3989,
  [SMALL_STATE(139)] = 4004,
  [SMALL_STATE(140)] = 4025,
  [SMALL_STATE(141)] = 4052,
  [SMALL_STATE(142)] = 4076,
  [SMALL_STATE(143)] = 4100,
  [SMALL_STATE(144)] = 4124,
  [SMALL_STATE(145)] = 4148,
  [SMALL_STATE(146)] = 4172,
  [SMALL_STATE(147)] = 4196,
  [SMALL_STATE(148)] = 4220,
  [SMALL_STATE(149)] = 4244,
  [SMALL_STATE(150)] = 4259,
  [SMALL_STATE(151)] = 4273,
  [SMALL_STATE(152)] = 4287,
  [SMALL_STATE(153)] = 4303,
  [SMALL_STATE(154)] = 4323,
  [SMALL_STATE(155)] = 4337,
  [SMALL_STATE(156)] = 4351,
  [SMALL_STATE(157)] = 4367,
  [SMALL_STATE(158)] = 4383,
  [SMALL_STATE(159)] = 4403,
  [SMALL_STATE(160)] = 4422,
  [SMALL_STATE(161)] = 4435,
  [SMALL_STATE(162)] = 4454,
  [SMALL_STATE(163)] = 4467,
  [SMALL_STATE(164)] = 4480,
  [SMALL_STATE(165)] = 4493,
  [SMALL_STATE(166)] = 4506,
  [SMALL_STATE(167)] = 4525,
  [SMALL_STATE(168)] = 4544,
  [SMALL_STATE(169)] = 4563,
  [SMALL_STATE(170)] = 4576,
  [SMALL_STATE(171)] = 4589,
  [SMALL_STATE(172)] = 4608,
  [SMALL_STATE(173)] = 4621,
  [SMALL_STATE(174)] = 4634,
  [SMALL_STATE(175)] = 4647,
  [SMALL_STATE(176)] = 4660,
  [SMALL_STATE(177)] = 4673,
  [SMALL_STATE(178)] = 4692,
  [SMALL_STATE(179)] = 4705,
  [SMALL_STATE(180)] = 4718,
  [SMALL_STATE(181)] = 4731,
  [SMALL_STATE(182)] = 4744,
  [SMALL_STATE(183)] = 4757,
  [SMALL_STATE(184)] = 4776,
  [SMALL_STATE(185)] = 4795,
  [SMALL_STATE(186)] = 4808,
  [SMALL_STATE(187)] = 4827,
  [SMALL_STATE(188)] = 4838,
  [SMALL_STATE(189)] = 4851,
  [SMALL_STATE(190)] = 4864,
  [SMALL_STATE(191)] = 4877,
  [SMALL_STATE(192)] = 4890,
  [SMALL_STATE(193)] = 4901,
  [SMALL_STATE(194)] = 4912,
  [SMALL_STATE(195)] = 4925,
  [SMALL_STATE(196)] = 4938,
  [SMALL_STATE(197)] = 4948,
  [SMALL_STATE(198)] = 4962,
  [SMALL_STATE(199)] = 4976,
  [SMALL_STATE(200)] = 4990,
  [SMALL_STATE(201)] = 5006,
  [SMALL_STATE(202)] = 5022,
  [SMALL_STATE(203)] = 5032,
  [SMALL_STATE(204)] = 5046,
  [SMALL_STATE(205)] = 5056,
  [SMALL_STATE(206)] = 5070,
  [SMALL_STATE(207)] = 5084,
  [SMALL_STATE(208)] = 5094,
  [SMALL_STATE(209)] = 5108,
  [SMALL_STATE(210)] = 5124,
  [SMALL_STATE(211)] = 5138,
  [SMALL_STATE(212)] = 5148,
  [SMALL_STATE(213)] = 5162,
  [SMALL_STATE(214)] = 5176,
  [SMALL_STATE(215)] = 5186,
  [SMALL_STATE(216)] = 5202,
  [SMALL_STATE(217)] = 5212,
  [SMALL_STATE(218)] = 5226,
  [SMALL_STATE(219)] = 5240,
  [SMALL_STATE(220)] = 5254,
  [SMALL_STATE(221)] = 5264,
  [SMALL_STATE(222)] = 5280,
  [SMALL_STATE(223)] = 5294,
  [SMALL_STATE(224)] = 5304,
  [SMALL_STATE(225)] = 5318,
  [SMALL_STATE(226)] = 5328,
  [SMALL_STATE(227)] = 5344,
  [SMALL_STATE(228)] = 5358,
  [SMALL_STATE(229)] = 5368,
  [SMALL_STATE(230)] = 5382,
  [SMALL_STATE(231)] = 5392,
  [SMALL_STATE(232)] = 5402,
  [SMALL_STATE(233)] = 5418,
  [SMALL_STATE(234)] = 5432,
  [SMALL_STATE(235)] = 5442,
  [SMALL_STATE(236)] = 5452,
  [SMALL_STATE(237)] = 5466,
  [SMALL_STATE(238)] = 5476,
  [SMALL_STATE(239)] = 5490,
  [SMALL_STATE(240)] = 5504,
  [SMALL_STATE(241)] = 5514,
  [SMALL_STATE(242)] = 5528,
  [SMALL_STATE(243)] = 5542,
  [SMALL_STATE(244)] = 5556,
  [SMALL_STATE(245)] = 5570,
  [SMALL_STATE(246)] = 5584,
  [SMALL_STATE(247)] = 5598,
  [SMALL_STATE(248)] = 5609,
  [SMALL_STATE(249)] = 5622,
  [SMALL_STATE(250)] = 5635,
  [SMALL_STATE(251)] = 5648,
  [SMALL_STATE(252)] = 5661,
  [SMALL_STATE(253)] = 5674,
  [SMALL_STATE(254)] = 5687,
  [SMALL_STATE(255)] = 5700,
  [SMALL_STATE(256)] = 5713,
  [SMALL_STATE(257)] = 5722,
  [SMALL_STATE(258)] = 5735,
  [SMALL_STATE(259)] = 5744,
  [SMALL_STATE(260)] = 5757,
  [SMALL_STATE(261)] = 5770,
  [SMALL_STATE(262)] = 5783,
  [SMALL_STATE(263)] = 5796,
  [SMALL_STATE(264)] = 5809,
  [SMALL_STATE(265)] = 5822,
  [SMALL_STATE(266)] = 5835,
  [SMALL_STATE(267)] = 5848,
  [SMALL_STATE(268)] = 5861,
  [SMALL_STATE(269)] = 5874,
  [SMALL_STATE(270)] = 5887,
  [SMALL_STATE(271)] = 5900,
  [SMALL_STATE(272)] = 5913,
  [SMALL_STATE(273)] = 5926,
  [SMALL_STATE(274)] = 5939,
  [SMALL_STATE(275)] = 5952,
  [SMALL_STATE(276)] = 5965,
  [SMALL_STATE(277)] = 5978,
  [SMALL_STATE(278)] = 5991,
  [SMALL_STATE(279)] = 6004,
  [SMALL_STATE(280)] = 6017,
  [SMALL_STATE(281)] = 6030,
  [SMALL_STATE(282)] = 6043,
  [SMALL_STATE(283)] = 6056,
  [SMALL_STATE(284)] = 6069,
  [SMALL_STATE(285)] = 6082,
  [SMALL_STATE(286)] = 6095,
  [SMALL_STATE(287)] = 6108,
  [SMALL_STATE(288)] = 6121,
  [SMALL_STATE(289)] = 6134,
  [SMALL_STATE(290)] = 6147,
  [SMALL_STATE(291)] = 6160,
  [SMALL_STATE(292)] = 6173,
  [SMALL_STATE(293)] = 6186,
  [SMALL_STATE(294)] = 6199,
  [SMALL_STATE(295)] = 6212,
  [SMALL_STATE(296)] = 6225,
  [SMALL_STATE(297)] = 6238,
  [SMALL_STATE(298)] = 6251,
  [SMALL_STATE(299)] = 6264,
  [SMALL_STATE(300)] = 6277,
  [SMALL_STATE(301)] = 6290,
  [SMALL_STATE(302)] = 6303,
  [SMALL_STATE(303)] = 6316,
  [SMALL_STATE(304)] = 6329,
  [SMALL_STATE(305)] = 6342,
  [SMALL_STATE(306)] = 6355,
  [SMALL_STATE(307)] = 6368,
  [SMALL_STATE(308)] = 6381,
  [SMALL_STATE(309)] = 6394,
  [SMALL_STATE(310)] = 6407,
  [SMALL_STATE(311)] = 6420,
  [SMALL_STATE(312)] = 6433,
  [SMALL_STATE(313)] = 6441,
  [SMALL_STATE(314)] = 6449,
  [SMALL_STATE(315)] = 6459,
  [SMALL_STATE(316)] = 6469,
  [SMALL_STATE(317)] = 6477,
  [SMALL_STATE(318)] = 6485,
  [SMALL_STATE(319)] = 6493,
  [SMALL_STATE(320)] = 6503,
  [SMALL_STATE(321)] = 6513,
  [SMALL_STATE(322)] = 6523,
  [SMALL_STATE(323)] = 6533,
  [SMALL_STATE(324)] = 6543,
  [SMALL_STATE(325)] = 6553,
  [SMALL_STATE(326)] = 6563,
  [SMALL_STATE(327)] = 6573,
  [SMALL_STATE(328)] = 6583,
  [SMALL_STATE(329)] = 6593,
  [SMALL_STATE(330)] = 6603,
  [SMALL_STATE(331)] = 6611,
  [SMALL_STATE(332)] = 6621,
  [SMALL_STATE(333)] = 6631,
  [SMALL_STATE(334)] = 6639,
  [SMALL_STATE(335)] = 6649,
  [SMALL_STATE(336)] = 6657,
  [SMALL_STATE(337)] = 6667,
  [SMALL_STATE(338)] = 6677,
  [SMALL_STATE(339)] = 6685,
  [SMALL_STATE(340)] = 6695,
  [SMALL_STATE(341)] = 6705,
  [SMALL_STATE(342)] = 6713,
  [SMALL_STATE(343)] = 6721,
  [SMALL_STATE(344)] = 6731,
  [SMALL_STATE(345)] = 6741,
  [SMALL_STATE(346)] = 6749,
  [SMALL_STATE(347)] = 6757,
  [SMALL_STATE(348)] = 6765,
  [SMALL_STATE(349)] = 6775,
  [SMALL_STATE(350)] = 6783,
  [SMALL_STATE(351)] = 6793,
  [SMALL_STATE(352)] = 6801,
  [SMALL_STATE(353)] = 6809,
  [SMALL_STATE(354)] = 6817,
  [SMALL_STATE(355)] = 6827,
  [SMALL_STATE(356)] = 6835,
  [SMALL_STATE(357)] = 6845,
  [SMALL_STATE(358)] = 6853,
  [SMALL_STATE(359)] = 6861,
  [SMALL_STATE(360)] = 6871,
  [SMALL_STATE(361)] = 6881,
  [SMALL_STATE(362)] = 6889,
  [SMALL_STATE(363)] = 6896,
  [SMALL_STATE(364)] = 6903,
  [SMALL_STATE(365)] = 6910,
  [SMALL_STATE(366)] = 6917,
  [SMALL_STATE(367)] = 6924,
  [SMALL_STATE(368)] = 6931,
  [SMALL_STATE(369)] = 6938,
  [SMALL_STATE(370)] = 6945,
  [SMALL_STATE(371)] = 6952,
  [SMALL_STATE(372)] = 6959,
  [SMALL_STATE(373)] = 6966,
  [SMALL_STATE(374)] = 6973,
  [SMALL_STATE(375)] = 6980,
  [SMALL_STATE(376)] = 6987,
  [SMALL_STATE(377)] = 6994,
  [SMALL_STATE(378)] = 7001,
  [SMALL_STATE(379)] = 7008,
  [SMALL_STATE(380)] = 7015,
  [SMALL_STATE(381)] = 7022,
  [SMALL_STATE(382)] = 7029,
  [SMALL_STATE(383)] = 7036,
  [SMALL_STATE(384)] = 7043,
  [SMALL_STATE(385)] = 7050,
  [SMALL_STATE(386)] = 7057,
  [SMALL_STATE(387)] = 7064,
  [SMALL_STATE(388)] = 7071,
  [SMALL_STATE(389)] = 7078,
  [SMALL_STATE(390)] = 7085,
  [SMALL_STATE(391)] = 7092,
  [SMALL_STATE(392)] = 7099,
  [SMALL_STATE(393)] = 7106,
  [SMALL_STATE(394)] = 7113,
  [SMALL_STATE(395)] = 7120,
  [SMALL_STATE(396)] = 7127,
  [SMALL_STATE(397)] = 7134,
  [SMALL_STATE(398)] = 7141,
  [SMALL_STATE(399)] = 7148,
  [SMALL_STATE(400)] = 7155,
  [SMALL_STATE(401)] = 7162,
  [SMALL_STATE(402)] = 7169,
  [SMALL_STATE(403)] = 7176,
  [SMALL_STATE(404)] = 7183,
  [SMALL_STATE(405)] = 7190,
  [SMALL_STATE(406)] = 7197,
  [SMALL_STATE(407)] = 7204,
  [SMALL_STATE(408)] = 7211,
  [SMALL_STATE(409)] = 7218,
  [SMALL_STATE(410)] = 7225,
  [SMALL_STATE(411)] = 7232,
  [SMALL_STATE(412)] = 7239,
  [SMALL_STATE(413)] = 7246,
  [SMALL_STATE(414)] = 7253,
  [SMALL_STATE(415)] = 7260,
  [SMALL_STATE(416)] = 7267,
  [SMALL_STATE(417)] = 7274,
  [SMALL_STATE(418)] = 7281,
  [SMALL_STATE(419)] = 7288,
  [SMALL_STATE(420)] = 7295,
  [SMALL_STATE(421)] = 7302,
  [SMALL_STATE(422)] = 7309,
  [SMALL_STATE(423)] = 7316,
  [SMALL_STATE(424)] = 7323,
  [SMALL_STATE(425)] = 7330,
  [SMALL_STATE(426)] = 7337,
  [SMALL_STATE(427)] = 7344,
  [SMALL_STATE(428)] = 7351,
  [SMALL_STATE(429)] = 7358,
  [SMALL_STATE(430)] = 7365,
  [SMALL_STATE(431)] = 7372,
  [SMALL_STATE(432)] = 7379,
  [SMALL_STATE(433)] = 7386,
  [SMALL_STATE(434)] = 7393,
  [SMALL_STATE(435)] = 7400,
  [SMALL_STATE(436)] = 7407,
  [SMALL_STATE(437)] = 7414,
  [SMALL_STATE(438)] = 7421,
  [SMALL_STATE(439)] = 7428,
  [SMALL_STATE(440)] = 7435,
  [SMALL_STATE(441)] = 7442,
  [SMALL_STATE(442)] = 7449,
  [SMALL_STATE(443)] = 7456,
  [SMALL_STATE(444)] = 7463,
  [SMALL_STATE(445)] = 7470,
  [SMALL_STATE(446)] = 7477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(158),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(405),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(254),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(161),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(417),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(416),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(414),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(413),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(412),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(410),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(409),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(408),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(407),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(406),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(363),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(404),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 2, .production_id = 12), SHIFT_REPEAT(403),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 6, .production_id = 33),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 36),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 4, .production_id = 28),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 26),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 4, .production_id = 27),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 5, .production_id = 36),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 4, .production_id = 20),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 36),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 4, .production_id = 26),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 4, .production_id = 26),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 27),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 4, .production_id = 26),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 5, .production_id = 39),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 4, .production_id = 25),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 4, .production_id = 23),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint_condition, 4, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 28),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 5, .production_id = 41),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 4, .production_id = 19),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 4, .production_id = 19),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 18),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 18),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 3, .production_id = 11),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 5, .production_id = 26),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 5, .production_id = 26),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 4, .production_id = 20),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_layout, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_layout, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 6, .production_id = 36),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_patterns, 6, .production_id = 36),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_suffixes, 6, .production_id = 36),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_file_filter_mime_types, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_scale_marks, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_marks, 6),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_size_group_widgets, 6, .production_id = 39),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_string_list_strings, 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_string_list_strings, 6),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_breakpoint, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_styles, 6, .production_id = 41),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_content_repeat1, 1, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 33),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_accessibility, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_accessibility, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7, .production_id = 46),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7, .production_id = 46),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_list_item_factory, 3, .production_id = 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_content, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_content, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 7),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, .production_id = 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 11, .production_id = 55),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 11, .production_id = 55),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 53),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 53),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_combo_box_items, 5, .production_id = 25),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 10, .production_id = 55),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 10, .production_id = 55),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 46),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 46),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 8, .production_id = 50),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 8, .production_id = 50),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 50),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 50),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 9, .production_id = 53),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 9, .production_id = 53),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ext_adw_dialog, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(377),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(320),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(319),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(315),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(437),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(432),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(327),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(328),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_repeat1, 2), SHIFT_REPEAT(329),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(191),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(405),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(250),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(323),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 4, .production_id = 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 5, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 6, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closure_expression, 7, .production_id = 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookup_expression, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(445),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 9),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_literal, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2), SHIFT_REPEAT(156),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4, .production_id = 10),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5, .production_id = 10),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 4, .production_id = 17),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, .production_id = 6),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 4),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_submenu, 5, .production_id = 10),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 5, .production_id = 17),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 8, .production_id = 49),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5, .production_id = 13),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5, .production_id = 13),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4, .production_id = 10),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 5, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 5, .production_id = 10),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 7, .production_id = 43),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 4, .production_id = 10),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 4, .production_id = 10),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item_shorthand, 6, .production_id = 43),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translated, 6, .production_id = 48),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_domain, 3, .production_id = 5),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_attribute, 4, .production_id = 18),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat1, 2), SHIFT_REPEAT(203),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3, .production_id = 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signal_repeat1, 2), SHIFT_REPEAT(208),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2), SHIFT_REPEAT(212),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_response_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2), SHIFT_REPEAT(446),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_item_repeat1, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, .production_id = 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 4, .production_id = 44),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_repeat2, 2), SHIFT_REPEAT(243),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_repeat2, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_adw_dialog_response, 3, .production_id = 31),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__flags_repeat1, 2), SHIFT_REPEAT(431),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2), SHIFT_REPEAT(332),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_dialog_repeat1, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34), SHIFT_REPEAT(114),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 34),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_closure_expression_repeat1, 2), SHIFT_REPEAT(82),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37), SHIFT_REPEAT(200),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 37),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2), SHIFT_REPEAT(339),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_scale_marks_repeat1, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40), SHIFT_REPEAT(340),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 40),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24), SHIFT_REPEAT(402),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 2, .production_id = 24),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2), SHIFT_REPEAT(135),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_string_list_strings_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42), SHIFT_REPEAT(298),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 42),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21), SHIFT_REPEAT(384),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 2, .production_id = 21),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_styles_repeat1, 2, .production_id = 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_size_group_widgets_repeat1, 2, .production_id = 38),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_accessibility_repeat1, 4, .production_id = 18),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 29),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_size_group_widget, 1, .production_id = 16),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 4, .production_id = 45),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 4, .production_id = 30),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_file_filter_item, 1, .production_id = 15),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 1, .production_id = 14),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 9, .production_id = 54),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 8, .production_id = 52),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ext_combo_box_item, 3, .production_id = 31),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flags, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_combo_box_items_repeat1, 2, .production_id = 32),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 7, .production_id = 54),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 5, .production_id = 47),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_adw_breakpoint_repeat1, 6, .production_id = 51),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_scale_mark, 6, .production_id = 52),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ext_file_filter_mime_types_repeat1, 2, .production_id = 35),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_extension, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 30),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ext_response, 5, .production_id = 29),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
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

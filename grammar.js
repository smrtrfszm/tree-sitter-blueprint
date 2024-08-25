module.exports = grammar({
  name: 'blueprint',

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /[ \t\f\r\n]/,
  ],

  rules: {
    source_file: $ => seq(
      repeat($.using),
      optional($.translation_domain),
      repeat(choice(
        $.template,
        $.menu,
        $.object,
      )),
    ),

    ident: _ => /[A-Za-z_][A-Za-z0-9_-]*/,

    integer_literal: _ => /[0-9][0-9_]*/,

    hex_literal: _ => /0x[a-fA-F0-9_]+/,

    float_literal: _ => {
      const decimal_digits = /[0-9_]+/
      const leading_decimal_digit = /[0-9]/

      const end = seq('.', decimal_digits)

      return token(choice(
        seq(
          leading_decimal_digit,
          optional(decimal_digits),
          end,
        ),
        end,
      ))
    },

    _number: $ => choice(
      $.integer_literal,
      $.hex_literal,
      $.float_literal,
    ),

    escape_sequence: _ => /\\(\r\n|\r|\n|"|'|\\|t|n)/,

    quoted: $ => {
      const body = (body) => repeat(choice(
        body,
        $.escape_sequence,
      ))

      const double_body = body(token.immediate(prec(1, /[^"\\\n]/)))
      const single_body = body(token.immediate(prec(1, /[^'\\\n]/)))

      return choice(
        seq('"', double_body, '"'),
        seq('\'', single_body, '\''),
      )
    },

    type_name: $ => choice(
      seq(
        field('namespace', $.ident),
        '.',
        field('name', $.ident)
      ),
      seq(
        choice('$', '.'),
        field('name', $.ident)
      ),
      field('name', $.ident),
    ),

    using: $ => seq(
      'using',
      field('namespace', $.ident),
      field('version', $._number),
      ';'
    ),

    translation_domain: $ => seq(
      'translation-domain',
      field('domain', $.quoted),
      ';',
    ),

    template: $ => seq(
      'template',
      field('name', $.type_name),
      optional(
        field('subclass', seq(':', $.type_name))
      ),
      field('content', $.object_content),
    ),

    object: $ => seq(
      field('name', $.type_name),
      optional(field('id', $.ident)),
      field('content', $.object_content),
    ),

    object_content: $ => seq(
      '{',
      repeat(choice(
        $.signal,
        $.property,
        $._extension,
        $._child,
      )),
      '}',
    ),

    signal: $ => seq(
      field('name', $.ident),
      optional(seq('::', field('detail', $.ident))),
      '=>',
      optional('$'), // this will be required at some point
      field('handler', $.ident),
      '(',
      optional(field('object', $.ident)),
      ')',
      repeat(choice('after', 'swapped')),
      ';',
    ),

    property: $ => seq(
      field('name', $.ident),
      ':',
      field('value', choice(
        $.binding,
        $.object_value,
        $.value,
        $.array_value,
      )),
      ';',
    ),

    array_value: $ => seq(
      '[',
      delimited($.value, ','),
      ']',
    ),

    closure_expression: $ => seq(
      '$',
      field('name', $.ident),
      '(',
      delimited($._expression, ','),
      ')',
    ),

    lookup_expression: $ => seq('.', $.ident),

    cast_expression: $ => seq('as', '<', $.type_name, '>'),

    literal: $ => choice(
      $._type_literal,
      $._quoted_literal,
      $._number_literal,
      $._ident_literal,
    ),

    _type_literal: $ => seq('typeof', '<', $.type_name, '>'),

    _quoted_literal: $ => $.quoted,

    _number_literal: $ => seq(
      optional(choice('-', '+')),
      $._number,
    ),

    _ident_literal: $ => $.ident,

    _expression: $ => seq(
      choice(
        $.closure_expression,
        $.literal,
        seq('(', $._expression, ')'),
      ),
      repeat(choice(
        $.lookup_expression,
        $.cast_expression,
      ))
    ),

    binding: $ => seq(
      choice('bind', 'bind-property'),
      $._expression,
      repeat(field('flags', $.ident)),
    ),

    object_value: $ => $.object,

    value: $ => choice(
      $.translated,
      $.flags,
      $.literal,
    ),

    translated: $ => choice(
      seq('_', '(', $.quoted, ')'),
      seq(
        'C_',
        '(',
        field('context', $.quoted),
        ',',
        field('string', $.quoted),
        ')',
      ),
    ),

    flags: $ => seq(
      $.ident,
      repeat1(seq('|', $.ident)),
      optional('|'),
    ),

    child_internal: $ => seq(
      'internal-child',
      field('name', $.ident)
    ),

    child_annotation: $ => seq(
      '[',
      choice(
        $.child_internal,
        $._child_extension,
        // FIXME: shouldn't specify "action" explicitly
        field('child_type', choice($.ident, 'action')),
      ),
      ']',
    ),

    _child: $ => seq(
      optional($.child_annotation),
      $.object,
    ),

    menu: $ => seq(
      'menu',
      optional(field('id', $.ident)),
      '{',
      repeat($._menu_child),
      '}',
    ),

    _menu_child: $ => choice(
        $.menu_section,
        $.menu_submenu,
        $.menu_item_shorthand,
        $.menu_item,
    ),

    menu_section: $ => seq(
      'section',
      optional(field('id', $.ident)),
      '{',
      repeat(choice($._menu_child, $.menu_attribute)),
      '}',
    ),

    menu_submenu: $ => seq(
      'submenu',
      optional(field('id', $.ident)),
      '{',
      repeat(choice($._menu_child, $.menu_attribute)),
      '}',
    ),

    menu_item: $ => seq('item', '{', repeat($.menu_attribute), '}'),

    menu_attribute: $ => seq(
      field('name', $.ident),
      ':',
      field('value', $.string_value),
      ';'
    ),

    string_value: $ => choice($.translated, $._quoted_literal),

    menu_item_shorthand: $ => seq(
      'item',
      '(',
      field('label', $.string_value),
      optional(seq(
        ',',
        optional(seq(
          field('action', $.string_value),
          optional(seq(
            ',',
            optional(field('icon', $.string_value)),
          )),
        )),
      )),
      ')',
    ),

    line_comment: _ => token(seq('//', /[^\r\n]*/)),

    block_comment: _ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),

    _extension: $ => choice(
      $.ext_accessibility,
      // AdwAlertDialog
      // AdwMessageDialog
      $.ext_adw_dialog,
      $.ext_adw_breakpoint_condition,
      $.ext_adw_breakpoint,
      $.ext_combo_box_items,
      $.ext_file_filter_mime_types,
      $.ext_file_filter_patterns,
      $.ext_file_filter_suffixes,
      $.ext_layout,
      $.ext_list_item_factory,
      $.ext_scale_marks,
      $.ext_size_group_widgets,
      $.ext_string_list_strings,
      $.ext_styles,
    ),

    ext_accessibility: $ => seq(
      'accessibility',
      '{',
      repeat(seq(
        field('name', $.ident),
        ':',
        field('value', choice(
          $.value,
          $.array_value,
        )),
        ';',
      )),
      '}',
    ),

    ext_adw_dialog: $ => seq(
      'responses',
      '[',
      delimited($.ext_adw_dialog_response, ','),
      ']',
    ),

    ext_adw_dialog_response: $ => seq(
      field('id', $.ident),
      ':',
      field('value', $.string_value),
      repeat(field('flags', $.ident)),
    ),

    ext_adw_breakpoint_condition: $ => seq(
      'condition',
      '(',
      field('condition', $.quoted),
      ')',
    ),

    ext_adw_breakpoint: $ => seq(
      'setters',
      '{',
      repeat(seq(
        field('object', $.ident),
        '.',
        field('property', $.ident),
        ':',
        field('value', $.value),
        ';',
      )),
      '}',
    ),

    ext_combo_box_items: $ => seq(
      'items',
      '[',
      delimited($._ext_combo_box_item, ','),
      ']',
    ),

    _ext_combo_box_item: $ => seq(
      optional(seq(
        field('id', $.ident),
        ':',
      )),
      field('value', $.string_value),
    ),

    ext_file_filter_mime_types: $ => seq(
      'mime-types',
      '[',
      delimited($._ext_file_filter_item, ','),
      ']',
    ),

    ext_file_filter_patterns: $ => seq(
      'patterns',
      '[',
      delimited($._ext_file_filter_item, ','),
      ']',
    ),

    ext_file_filter_suffixes: $ => seq(
      'suffixes',
      '[',
      delimited($._ext_file_filter_item, ','),
      ']',
    ),

    _ext_file_filter_item: $ => field('item', $.quoted),

    ext_layout: $ => seq(
      'layout',
      '{',
      repeat(seq(
        field('name', $.ident),
        ':',
        field('value', $.value),
        ';',
      )),
      '}',
    ),

    ext_list_item_factory: $ => seq(
      'template',
      field('name', $.type_name),
      field('content', $.object_content),
    ),

    ext_scale_marks: $ => seq(
      'marks',
      '[',
      delimited($.ext_scale_mark, ','),
      ']',
    ),

    ext_scale_mark: $ => seq(
      'mark',
      '(',
      optional(choice('-', '+')),
      field('value', $._number),
      optional(seq(
        ',',
        field('position', $.ident),
        optional(seq(
          ',',
          $.string_value,
        ))
      )),
      ')',
    ),

    ext_size_group_widgets: $ => seq(
      'widgets',
      '[',
      delimited($._ext_size_group_widget, ','),
      ']',
    ),

    _ext_size_group_widget: $ => field('id', $.ident),

    ext_string_list_strings: $ => seq(
      'strings',
      '[',
      delimited($._ext_strings_list_item, ','),
      ']',
    ),

    _ext_strings_list_item: $ => $.string_value,

    ext_styles: $ => seq(
      'styles',
      '[',
      delimited(field('name', $.quoted), ','),
      ']',
    ),

    _child_extension: $ => choice(
      $.ext_response,
    ),

    ext_response: $ => seq(
      'action',
      'response',
      '=',
      choice(
        field('name', $.ident),
        field('id', $._number),
      ),
      optional('default'),
    ),
  }
})

function delimited(item, delimiter) {
  return optional(seq(
    item,
    repeat(seq(
      delimiter,
      item,
    )),
    optional(delimiter),
  ))
}


module.exports = grammar({
  name: 'blueprint',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => seq(
      repeat($.using),
      repeat(choice(
        prec(3, $.template),
        prec(2, $.menu),
        prec(1, $.object),
      )),
    ),

    ident: _ => /[A-Za-z_][A-Za-z0-9_-]*/,

    number: _ => {
      const decimal_digits = /[0-9_]+/
      const leading_decimal_digit = /[0-9]/

      const decimal_literal = choice(
        seq(
          leading_decimal_digit,
          optional(decimal_digits),
          ".",
          decimal_digits,
        ),
        seq(".", decimal_digits),
        seq(leading_decimal_digit, optional(decimal_digits)),
      )

      const hex_literal = /0x[a-fA-F0-9_]+/

      return token(choice(decimal_literal, hex_literal))
    },

    // TODO: escape new line
    quoted: _ => choice(
      /'([^']|\\['"nt])*'/,
      /"([^"]|\\['"nt])*"/,
    ),

    type_name: $ => choice(
      seq(
        field('namespace', $.ident),
        '.',
        field('name', $.ident)
      ),
      seq('$', $.ident),
      $.ident,
    ),

    using: $ => seq(
      'using',
      field('namespace', $.ident),
      field('version', $.number),
      ';'
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
        prec(4, $.signal),
        prec(3, $.property),
        prec(2, $._extension),
        prec(1, $._child),
      )),
      '}',
    ),

    signal: $ => seq(
      field('name', $.ident),
      optional(seq('::', field('detail', $.ident))),
      '=>',
      '$',
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
        prec(3, $.binding),
        prec(2, $.object_value),
        prec(1, $.value),
      )),
      ';',
    ),

    closure_expression: $ => seq(
      '$',
      field('name', $.ident),
      '(',
      optional(seq(
        $._expression,
        repeat(seq(',', $._expression)),
        optional(','),
      )),
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
      $.number,
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
      'bind',
      $._expression,
      repeat(choice('inverted', 'bidirectional', 'sync-create')),
    ),

    object_value: $ => $.object,

    value: $ => choice(
      prec(3, $.translated),
      prec(2, $._flags),
      prec(1, $.literal),
    ),

    translated: $ => choice(
      prec(2, seq('_', '(', $.quoted, ')')),
      prec(1, seq(
        'C_',
        '(',
        field('context', $.quoted),
        ',',
        field('string', $.quoted),
        ')',
      )),
    ),

    _flags: $ => seq(
      $.ident,
      repeat1(seq('|', $.ident)),
      optional('|'),
    ),

    _child: $ => seq(
      optional(seq(
        '[',
        choice(
          seq('internal-child', $.ident),
          $.child_extension,
          field('child_type', $.ident),
        ),
        ']',
      )),
      $.object,
    ),

    menu: $ => seq(
      'menu',
      optional(field('id', $.ident)),
      '{',
      repeat($.menu_child),
      '}',
    ),

    menu_child: $ => choice(
        $.menu_section,
        $.menu_submenu,
        $.menu_item_shorthand,
        $.menu_item,
    ),

    menu_section: $ => seq(
      'section',
      optional(field('id', $.ident)),
      '{',
      repeat(choice($.menu_child, $.menu_attribute)),
      '}',
    ),

    menu_submenu: $ => seq(
      'submenu',
      optional(field('id', $.ident)),
      '{',
      repeat(choice($.menu_child, $.menu_attribute)),
      '}',
    ),

    menu_item: $ => seq('item', '{', $.menu_attribute, '}'),

    menu_attribute: $ => seq(field('name', $.ident), ':', $.string_value, ';'),

    string_value: $ => choice($.translated, $._quoted_literal),

    menu_item_shorthand: $ => seq(
      'item',
      '(',
      $.string_value,
      optional(seq(
        ',',
        optional(seq(
          $.string_value,
          optional(seq(
            ',',
            optional($.string_value),
          )),
        )),
      )),
      ')',
    ),

    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
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
        field('value', $.value),
        ';',
      )),
      '}',
    ),

    ext_adw_dialog: $ => seq(
      'responses',
      '[',
      optional(seq(
        $.ext_adw_dialog_response,
        repeat(seq(
          ',',
          $.ext_adw_dialog_response,
        )),
        optional(','),
      )),
      ']',
    ),

    ext_adw_dialog_response: $ => seq(
      field('id', $.ident),
      ':',
      field('value', $.string_value),
      field('flags', repeat($.ident)),
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
      optional(seq(
        $._ext_combo_box_item,
        repeat(seq(
          ',',
          $._ext_combo_box_item,
        )),
        optional(','),
      )),
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
      optional(seq(
        $._ext_file_filter_item,
        repeat(seq(
          ',',
          $._ext_file_filter_item,
        )),
        optional(','),
      )),
      ']',
    ),

    ext_file_filter_patterns: $ => seq(
      'patterns',
      '[',
      optional(seq(
        $._ext_file_filter_item,
        repeat(seq(
          ',',
          $._ext_file_filter_item,
        )),
        optional(','),
      )),
      ']',
    ),

    ext_file_filter_suffixes: $ => seq(
      'suffixes',
      '[',
      optional(seq(
        $._ext_file_filter_item,
        repeat(seq(
          ',',
          $._ext_file_filter_item,
        )),
        optional(','),
      )),
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

    ext_size_group_widgets: $ => seq(
      'widgets',
      '[',
      optional(seq(
        $._ext_size_group_widget,
        repeat(seq(
          ',',
          $._ext_size_group_widget,
        )),
        optional(','),
      )),
      ']',
    ),

    _ext_size_group_widget: $ => field('id', $.ident),

    ext_string_list_strings: $ => seq(
      'strings',
      '[',
      optional(seq(
        $._ext_strings_list_item,
        repeat(seq(
          ',',
          $._ext_strings_list_item,
        )),
        optional(','),
      )),
      ']',
    ),
    
    _ext_strings_list_item: $ => $.string_value,

    ext_styles: $ => seq(
      'styles',
      '[',
      repeat(field('name', $.quoted)),
      ']',
    ),

    child_extension: $ => choice(
      $.ext_response,
    ),

    ext_response: $ => seq(
      'action',
      'response',
      '=',
      choice(
        field('name', $.ident),
        field('id', $.number),
      ),
      optional('default'),
    ),
  }
})

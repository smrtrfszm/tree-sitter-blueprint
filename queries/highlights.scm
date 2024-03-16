(line_comment) @comment
(block_comment) @comment

(using
  namespace: (ident) @module)

(type_name
  name: (ident) @type)
(type_name
  namespace: (ident) @module)

(object
  id: (ident) @variable)
(closure_expression
  name: (ident) @variable)
(lookup_expression (ident) @property)

(property
  name: (ident) @property)
(ext_adw_dialog_response
  id: (ident) @property)
(ext_adw_breakpoint
  property: (ident) @property)
(ext_combo_box_items
  id: (ident) @property)
(ext_accessibility
  name: (ident) @property)
(ext_layout
  name: (ident) @property)
(menu_attribute
  name: (ident) @property)

(ext_adw_breakpoint
  object: (ident) @property)

(signal
  handler: (ident) @function)

(escape_sequence) @string.escape

(number) @number
(quoted) @string

((literal (ident) @constant.builtin)
  (#any-of? @constant.builtin "true" "false" "null"))

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "<"
  ">"
] @punctuation.bracket

[
  ":"
  ";"
  "."
  ","
  "::"
  "|"
  "=>"
] @punctuation.delimiter

[
  "$" 
  "_" 
  "C_" 
] @punctuation.special

[
  "using"
  "template"
  "menu"
  "submenu"
  "section"
  "item"
  "accessibility"
  "styles"
  "bind"
  "bind-property"
  "responses"
  "condition"
  "setters"
  "items"
  "as"
  "mime-types"
  "patterns"
  "suffixes"
  "layout"
  "marks"
  "mark"
  "widgets"
  "strings"
  "translation-domain"
  "typeof"
] @keyword


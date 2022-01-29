
(comment) @comment

(identifier) @variable

(include_statement) @include
(return_statement) @keyword.return
(action) @parameter.reference

(subroutine
  name: (identifier) @function)

(string) @string

(error_statement) @exception

(number) @number

(type) @type.builtin

(vcl_scope) @variable.builtin

(vcl_variable
  scope: (vcl_scope) @variable.builtin
  variable: (identifier) @property
  index: (identifier) @variable)

(backend_declaration
  name: (identifier) @namespace)

(backend_attribute
  name: (identifier) @field)

"var" @variable.builtin

[
  (true)
  (false)
] @boolean

[
  ";"
  "."
] @punctuation.delimiter

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

[
  "="
] @operator

[
  "call"
  "synthetic"
  "sub"
  "restart"
  "esi"
  "declare"
  "set"
  "unset"
  "backend"
] @keyword

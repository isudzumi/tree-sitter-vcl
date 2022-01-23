
(comment) @comment

(identifier) @variable

(include_statement) @include
(return_statement) @keyword.return
(action) @parameter.reference

(subroutine
  name: (identifier) @function)

(string) @string

(error_statement) @exception

(status_code) @number

(type) @type.builtin

(vcl_scope) @variable.builtin

(vcl_variable
  scope: (vcl_scope) @variable.builtin
  variable: (identifier) @property
  index: (identifier) @variable)

"var" @variable.builtin

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
] @keyword

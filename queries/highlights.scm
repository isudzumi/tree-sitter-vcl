
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
  "call"
  "synthetic"
  "sub"
  "restart"
  "esi"
  "declare"
] @keyword

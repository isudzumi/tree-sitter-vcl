
(comment) @comment

(statement_block) @punctuation.bracket

(include_statement) @include
(return_statement
  (action) @parameter.reference) @keyword.return

(subroutine
  name: (identifier) @function) @keyword.function

(string) @string

(error_statement) @exception

(status_code) @number

(type) @type.builtin

(declare_statement) @keyword

(declare_scope) @keyword

(user_defined_variable
  name: (identifier) @variable) @property

";" @punctuation.delimiter

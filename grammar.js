module.exports = grammar({
    name: 'vcl',
    rules: {
        program: $ => repeat($._statement),

        _statement: $ => choice(
          $.subroutine,
          $.include_statement
        ),

        subroutine: $ => seq(
          'sub',
          field('name', $.identifier),
          $.statement_block
        ),

        identifier: $ => /\w+/,

        string_fragment: $ => /[\w\.\\\s]+/,

        string: $ => seq(
          '"',
          $.string_fragment,
          '"'
        ),

        /**
         * @see {@link https://varnish-cache.org/docs/3.0/tutorial/vcl.html#actions}
         */
        action: $ => choice(
          'pass',
          'hit_for_pass',
          'lookup',
          'pipe',
          'deliver'
        ),

        statement_block: $ => prec.right(seq(
          '{',
          optional($.return_statement),
          '}'
        )),

        include_statement: $ => seq(
          'include',
          field('source', $.string),
          ';'
        ),

        return_statement: $ => seq(
          'return',
          optional(
            seq('(', $.action, ')')
          ),
          ';'
        ),
    }
})

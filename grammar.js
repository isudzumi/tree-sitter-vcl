module.exports = grammar({
    name: 'vcl',
    rules: {
        program: $ => repeat($._definition),

        _definition: $ => choice(
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

        status_code: $ => /\d+/,

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
          optional(repeat($._statement)),
          '}'
        )),

        _statement: $ => choice(
          $.return_statement,
          $.error_statement,
          $.restart_statement,
          $.esi_statement
        ),

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

        error_statement: $ => seq(
          'error',
          optional(
            seq(
              field('status', $.status_code),
              optional(field('message', $.string))
            )
          ),
          ';'
        ),

        restart_statement: $ => seq(
          'restart',
          ';'
        ),

        esi_statement: $ => seq(
          'esi',
          ';'
        ),
    }
})

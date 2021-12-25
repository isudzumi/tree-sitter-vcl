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
          field('name', $.builtin_action),
          $.statement_block
        ),

        _identifier: $ => /[a-z_\.]+/,

        string_fragment: $ => /[^\t\r\n\v\f\0]+/,

        string: $ => seq(
          '"',
          $.string_fragment,
          '"'
        ),

        builtin_action: $ => choice(
          'vcl_fetch',
          'vcl_hash',
          'vcl_hit',
          'vcl_pass',
          'vcl_purge',
          'vcl_pipe',
          'vcl_miss',
          'vcl_deliver',
          'vcl_error'
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

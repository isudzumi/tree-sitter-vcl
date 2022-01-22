
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

        identifier: $ => /[\w\-]+/,

        string_fragment: $ => /[:\w\s\.\-\\]+/,

        status_code: $ => /\d+/,

        string: $ => seq(
          '"',
          optional($.string_fragment),
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

        type: $ => choice(
          'ACL',
          'BACKEND',
          'BOOL',
          'FLOAT',
          'ID',
          'INTEGER',
          'IP',
          'RTIME',
          'STRING',
          'TIME'
        ),

        declare_scope: $ => 'local',

        statement_block: $ => prec.right(seq(
          '{',
          optional(repeat($._statement)),
          '}'
        )),

        _statement: $ => choice(
          $.return_statement,
          $.error_statement,
          $.restart_statement,
          $.esi_statement,
          $.declare_statement,
          $.call_statement,
          $.synthetic_statement,
          $.synthetic_base64_statement,
          $.comment,
          $.set_statement
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

        declare_statement: $ => seq(
          'declare',
          field('scope', $.declare_scope),
          $.user_defined_variable,
          field('type', $.type),
          ';'
        ),

        user_defined_variable: $ => seq(
          'var',
          '.',
          field('name', $.identifier)
        ),

        call_statement: $ => seq(
          'call',
          field('subroutine_name', $.identifier),
          ';'
        ),

        synthetic_statement: $ => seq(
          'synthetic',
          $.string,
          ';'
        ),

        synthetic_base64_statement: $ => alias(
          'synthetic.base64',
          $.synthetic_statement
        ),

        comment: $ => token(choice(
          seq('//', /.*/),
          seq('#', /.*/),
          seq(
            '/*',
            // https://stackoverflow.com/a/36328890
            /[^*]*\*+([^/*][^*]*\*+)*/,
            '/'
          )
        )),

        set_statement: $ => seq(
          'set',
          choice(
            $.user_defined_variable,
            $.vcl_variable
          ),
          '=',
          $.string,
          ';'
        ),

        vcl_scope: $ => choice(
          'req',
          'bereq',
          'beresp',
          'resp',
          'obj'
        ),

        vcl_variable: $ => seq(
          field('scope', $.vcl_scope),
          '.',
          field('variable', $.identifier),
          optional(
            seq(
            '.',
            field('index', $.identifier),
          )),
          optional(
            seq(
            ':',
            field('subfield', $.identifier),
          )),
        ),
    }
})

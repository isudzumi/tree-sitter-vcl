
module.exports = grammar({
    name: 'vcl',
    extras: $ => [
      $.comment,
      /[\s\uFEFF\u2060\u200B]/,
    ],
    rules: {
        program: $ => repeat($._definition),

        _definition: $ => choice(
          $.subroutine,
          $.include_statement,
          $.backend_declaration,
          $.director_declaration,
          $.table_declaration,
          $.acl_declaration,
        ),

        subroutine: $ => seq(
          'sub',
          field('name', $.identifier),
          $.statement_block
        ),

        number: $ => /\d+/,

        /**
         * @see {@link https://developer.fastly.com/reference/vcl/types/rtime/}
         */
        rtime: $ => /\d+(ms|s|m|h|d|y)/,

        percentage: $ => /\d+%/,

        identifier: $ => /[\w\-]+/,

        string_fragment: $ => /[:\w\s\.\-\/\\]+/,

        true: $ => 'true',

        false: $ => 'false',

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
          $.set_statement,
          $.unset_statement
        ),

        _expression: $ => choice(
          $.number,
          $.rtime,
          $.percentage,
          $.true,
          $.false,
          $.string,
          $.identifier,
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
              field('status', $.number),
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
          $._expression,
          ';'
        ),

        unset_statement: $ => seq(
          'unset',
          choice(
            $.vcl_variable
          ),
          ';'
        ),

        vcl_scope: $ => choice(
          'req',
          'bereq',
          'beresp',
          'resp',
          'obj'
        ),

        backend_attribute: $ => seq(
          '.',
          field('name', $.identifier),
          '=',
          $._expression,
          ';'
        ),

        backend_declaration: $ => seq(
          'backend',
          field('name', $.identifier),
          '{',
          optional(
            repeat($.backend_attribute)
          ),
          '}',
        ),

        backend_field: $ => seq(
          '{',
          optional(
            repeat($.backend_attribute)
          ),
          '}',
        ),

        director_declaration: $ => seq(
          'director',
          field('name', $.identifier),
          field('type', $.identifier),
          '{',
          optional(
            repeat(
              choice(
                $.backend_attribute,
                $.backend_field,
              )
            )
          ),
          '}',
        ),

        table_key: $ => $.string,

        table_value: $ => $._expression,

        table_record: $ => seq(
          $.table_key,
          ':',
          $.table_value,
          optional(',')
        ),

        table_declaration: $ => seq(
          'table',
          field('name', $.identifier),
          optional(
            field('type', $.identifier)
          ),
          '{',
          optional(
            repeat(
              $.table_record
            )
          ),
          '}',
        ),

        negate_operator: $ => '!',

        routing_prefix: $ => /\/\d{1,2}/,

        ip_address: $ => seq(
          optional($.negate_operator),
          $.string,
          optional($.routing_prefix),
          ';'
        ),

        acl_declaration: $ => seq(
          'acl',
          field('name', $.identifier),
          '{',
          optional(
            repeat(
              $.ip_address
            )
          ),
          '}',
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

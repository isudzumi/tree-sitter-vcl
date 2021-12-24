module.exports = grammar({
    name: 'vcl',
    rules: {
        program: $ => repeat($._statement),

        _statement: $ => choice(
          $.subroutine,
          $.include
        ),

        subroutine: $ => seq(
          'sub',
          field('name', $.builtin_action),
          $.statement_block
        ),

        _identifier: $ => /[a-z_\.]+/,

        string: $ => seq(
          '"',
          $._identifier,
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

        statement_block: $ => prec.right(seq(
          '{',
          '}'
        )),

        include: $ => seq(
          'include',
          field('filename', $.string),
          ';'
        ),
    }
})

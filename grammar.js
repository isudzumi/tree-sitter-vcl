module.exports = grammar({
    name: 'vcl',
    rules: {
        program: $ => repeat($.subroutine),

        subroutine: $ => seq(
          'sub',
          field('name', $.builtin_action),
          $.statement_block
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
    }
})

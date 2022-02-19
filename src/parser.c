#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_sub = 1,
  sym_number = 2,
  sym_rtime = 3,
  sym_percentage = 4,
  sym_identifier = 5,
  sym_string_fragment = 6,
  sym_true = 7,
  sym_false = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_pass = 10,
  anon_sym_hit_for_pass = 11,
  anon_sym_lookup = 12,
  anon_sym_pipe = 13,
  anon_sym_deliver = 14,
  anon_sym_ACL = 15,
  anon_sym_BACKEND = 16,
  anon_sym_BOOL = 17,
  anon_sym_FLOAT = 18,
  anon_sym_ID = 19,
  anon_sym_INTEGER = 20,
  anon_sym_IP = 21,
  anon_sym_RTIME = 22,
  anon_sym_STRING = 23,
  anon_sym_TIME = 24,
  sym_declare_scope = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_include = 28,
  anon_sym_SEMI = 29,
  anon_sym_return = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_error = 33,
  anon_sym_restart = 34,
  anon_sym_esi = 35,
  anon_sym_declare = 36,
  anon_sym_var = 37,
  anon_sym_DOT = 38,
  anon_sym_call = 39,
  anon_sym_synthetic = 40,
  anon_sym_synthetic_DOTbase64 = 41,
  sym_comment = 42,
  anon_sym_set = 43,
  anon_sym_EQ = 44,
  anon_sym_unset = 45,
  anon_sym_req = 46,
  anon_sym_bereq = 47,
  anon_sym_beresp = 48,
  anon_sym_resp = 49,
  anon_sym_obj = 50,
  anon_sym_backend = 51,
  anon_sym_director = 52,
  anon_sym_COLON = 53,
  anon_sym_COMMA = 54,
  anon_sym_table = 55,
  sym_program = 56,
  sym__definition = 57,
  sym_subroutine = 58,
  sym_string = 59,
  sym_action = 60,
  sym_type = 61,
  sym_statement_block = 62,
  sym__statement = 63,
  sym__expression = 64,
  sym_include_statement = 65,
  sym_return_statement = 66,
  sym_error_statement = 67,
  sym_restart_statement = 68,
  sym_esi_statement = 69,
  sym_declare_statement = 70,
  sym_user_defined_variable = 71,
  sym_call_statement = 72,
  sym_synthetic_statement = 73,
  sym_synthetic_base64_statement = 74,
  sym_set_statement = 75,
  sym_unset_statement = 76,
  sym_vcl_scope = 77,
  sym_backend_attribute = 78,
  sym_backend_declaration = 79,
  sym_backend_field = 80,
  sym_director_declaration = 81,
  sym_table_key = 82,
  sym_table_value = 83,
  sym_table_record = 84,
  sym_table_declaration = 85,
  sym_vcl_variable = 86,
  aux_sym_program_repeat1 = 87,
  aux_sym_statement_block_repeat1 = 88,
  aux_sym_backend_declaration_repeat1 = 89,
  aux_sym_director_declaration_repeat1 = 90,
  aux_sym_table_declaration_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
  [sym_number] = "number",
  [sym_rtime] = "rtime",
  [sym_percentage] = "percentage",
  [sym_identifier] = "identifier",
  [sym_string_fragment] = "string_fragment",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_pass] = "pass",
  [anon_sym_hit_for_pass] = "hit_for_pass",
  [anon_sym_lookup] = "lookup",
  [anon_sym_pipe] = "pipe",
  [anon_sym_deliver] = "deliver",
  [anon_sym_ACL] = "ACL",
  [anon_sym_BACKEND] = "BACKEND",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_ID] = "ID",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_IP] = "IP",
  [anon_sym_RTIME] = "RTIME",
  [anon_sym_STRING] = "STRING",
  [anon_sym_TIME] = "TIME",
  [sym_declare_scope] = "declare_scope",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_error] = "error",
  [anon_sym_restart] = "restart",
  [anon_sym_esi] = "esi",
  [anon_sym_declare] = "declare",
  [anon_sym_var] = "var",
  [anon_sym_DOT] = ".",
  [anon_sym_call] = "call",
  [anon_sym_synthetic] = "synthetic",
  [anon_sym_synthetic_DOTbase64] = "synthetic_statement",
  [sym_comment] = "comment",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_unset] = "unset",
  [anon_sym_req] = "req",
  [anon_sym_bereq] = "bereq",
  [anon_sym_beresp] = "beresp",
  [anon_sym_resp] = "resp",
  [anon_sym_obj] = "obj",
  [anon_sym_backend] = "backend",
  [anon_sym_director] = "director",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_table] = "table",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_action] = "action",
  [sym_type] = "type",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_include_statement] = "include_statement",
  [sym_return_statement] = "return_statement",
  [sym_error_statement] = "error_statement",
  [sym_restart_statement] = "restart_statement",
  [sym_esi_statement] = "esi_statement",
  [sym_declare_statement] = "declare_statement",
  [sym_user_defined_variable] = "user_defined_variable",
  [sym_call_statement] = "call_statement",
  [sym_synthetic_statement] = "synthetic_statement",
  [sym_synthetic_base64_statement] = "synthetic_base64_statement",
  [sym_set_statement] = "set_statement",
  [sym_unset_statement] = "unset_statement",
  [sym_vcl_scope] = "vcl_scope",
  [sym_backend_attribute] = "backend_attribute",
  [sym_backend_declaration] = "backend_declaration",
  [sym_backend_field] = "backend_field",
  [sym_director_declaration] = "director_declaration",
  [sym_table_key] = "table_key",
  [sym_table_value] = "table_value",
  [sym_table_record] = "table_record",
  [sym_table_declaration] = "table_declaration",
  [sym_vcl_variable] = "vcl_variable",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_backend_declaration_repeat1] = "backend_declaration_repeat1",
  [aux_sym_director_declaration_repeat1] = "director_declaration_repeat1",
  [aux_sym_table_declaration_repeat1] = "table_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
  [sym_number] = sym_number,
  [sym_rtime] = sym_rtime,
  [sym_percentage] = sym_percentage,
  [sym_identifier] = sym_identifier,
  [sym_string_fragment] = sym_string_fragment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_hit_for_pass] = anon_sym_hit_for_pass,
  [anon_sym_lookup] = anon_sym_lookup,
  [anon_sym_pipe] = anon_sym_pipe,
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_ACL] = anon_sym_ACL,
  [anon_sym_BACKEND] = anon_sym_BACKEND,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_ID] = anon_sym_ID,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_IP] = anon_sym_IP,
  [anon_sym_RTIME] = anon_sym_RTIME,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_TIME] = anon_sym_TIME,
  [sym_declare_scope] = sym_declare_scope,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_synthetic] = anon_sym_synthetic,
  [anon_sym_synthetic_DOTbase64] = sym_synthetic_statement,
  [sym_comment] = sym_comment,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_req] = anon_sym_req,
  [anon_sym_bereq] = anon_sym_bereq,
  [anon_sym_beresp] = anon_sym_beresp,
  [anon_sym_resp] = anon_sym_resp,
  [anon_sym_obj] = anon_sym_obj,
  [anon_sym_backend] = anon_sym_backend,
  [anon_sym_director] = anon_sym_director,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_table] = anon_sym_table,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_action] = sym_action,
  [sym_type] = sym_type,
  [sym_statement_block] = sym_statement_block,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_include_statement] = sym_include_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_restart_statement] = sym_restart_statement,
  [sym_esi_statement] = sym_esi_statement,
  [sym_declare_statement] = sym_declare_statement,
  [sym_user_defined_variable] = sym_user_defined_variable,
  [sym_call_statement] = sym_call_statement,
  [sym_synthetic_statement] = sym_synthetic_statement,
  [sym_synthetic_base64_statement] = sym_synthetic_base64_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_unset_statement] = sym_unset_statement,
  [sym_vcl_scope] = sym_vcl_scope,
  [sym_backend_attribute] = sym_backend_attribute,
  [sym_backend_declaration] = sym_backend_declaration,
  [sym_backend_field] = sym_backend_field,
  [sym_director_declaration] = sym_director_declaration,
  [sym_table_key] = sym_table_key,
  [sym_table_value] = sym_table_value,
  [sym_table_record] = sym_table_record,
  [sym_table_declaration] = sym_table_declaration,
  [sym_vcl_variable] = sym_vcl_variable,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
  [aux_sym_backend_declaration_repeat1] = aux_sym_backend_declaration_repeat1,
  [aux_sym_director_declaration_repeat1] = aux_sym_director_declaration_repeat1,
  [aux_sym_table_declaration_repeat1] = aux_sym_table_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_rtime] = {
    .visible = true,
    .named = true,
  },
  [sym_percentage] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hit_for_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BACKEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [sym_declare_scope] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic_DOTbase64] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_req] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bereq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beresp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_director] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_restart_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_esi_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_base64_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_vcl_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_field] = {
    .visible = true,
    .named = true,
  },
  [sym_director_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_key] = {
    .visible = true,
    .named = true,
  },
  [sym_table_value] = {
    .visible = true,
    .named = true,
  },
  [sym_table_record] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_vcl_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_backend_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_director_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_index = 1,
  field_message = 2,
  field_name = 3,
  field_scope = 4,
  field_source = 5,
  field_status = 6,
  field_subfield = 7,
  field_subroutine_name = 8,
  field_type = 9,
  field_variable = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_index] = "index",
  [field_message] = "message",
  [field_name] = "name",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_status] = "status",
  [field_subfield] = "subfield",
  [field_subroutine_name] = "subroutine_name",
  [field_type] = "type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_source, 1},
  [2] =
    {field_name, 1},
    {field_type, 2},
  [4] =
    {field_status, 1},
  [5] =
    {field_subroutine_name, 1},
  [6] =
    {field_message, 2},
    {field_status, 1},
  [8] =
    {field_name, 2},
  [9] =
    {field_scope, 0},
    {field_variable, 2},
  [11] =
    {field_scope, 1},
    {field_type, 3},
  [13] =
    {field_index, 4},
    {field_scope, 0},
    {field_variable, 2},
  [16] =
    {field_scope, 0},
    {field_subfield, 4},
    {field_variable, 2},
  [19] =
    {field_index, 4},
    {field_scope, 0},
    {field_subfield, 6},
    {field_variable, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(182);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'K') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(174);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'j') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'q') ADVANCE(206);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'q') ADVANCE(207);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 144:
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_rtime);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_percentage);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_req);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bereq);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_beresp);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_resp);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_obj);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 144},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 144},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 144},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 144},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 144},
  [92] = {.lex_state = 144},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 144},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 144},
  [107] = {.lex_state = 144},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 144},
  [110] = {.lex_state = 144},
  [111] = {.lex_state = 144},
  [112] = {.lex_state = 144},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_rtime] = ACTIONS(1),
    [sym_percentage] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_hit_for_pass] = ACTIONS(1),
    [anon_sym_lookup] = ACTIONS(1),
    [anon_sym_pipe] = ACTIONS(1),
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_ACL] = ACTIONS(1),
    [anon_sym_BACKEND] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_ID] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_IP] = ACTIONS(1),
    [anon_sym_RTIME] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [sym_declare_scope] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_synthetic] = ACTIONS(1),
    [anon_sym_synthetic_DOTbase64] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_req] = ACTIONS(1),
    [anon_sym_bereq] = ACTIONS(1),
    [anon_sym_beresp] = ACTIONS(1),
    [anon_sym_resp] = ACTIONS(1),
    [anon_sym_obj] = ACTIONS(1),
    [anon_sym_backend] = ACTIONS(1),
    [anon_sym_director] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(108),
    [sym__definition] = STATE(5),
    [sym_subroutine] = STATE(5),
    [sym_include_statement] = STATE(5),
    [sym_backend_declaration] = STATE(5),
    [sym_director_declaration] = STATE(5),
    [sym_table_declaration] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
    [anon_sym_director] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_error,
    ACTIONS(21), 1,
      anon_sym_restart,
    ACTIONS(23), 1,
      anon_sym_esi,
    ACTIONS(25), 1,
      anon_sym_declare,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_synthetic,
    ACTIONS(31), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(37), 1,
      anon_sym_unset,
    STATE(3), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [51] = 13,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_error,
    ACTIONS(21), 1,
      anon_sym_restart,
    ACTIONS(23), 1,
      anon_sym_esi,
    ACTIONS(25), 1,
      anon_sym_declare,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_synthetic,
    ACTIONS(31), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(37), 1,
      anon_sym_unset,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(4), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [102] = 13,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_error,
    ACTIONS(51), 1,
      anon_sym_restart,
    ACTIONS(54), 1,
      anon_sym_esi,
    ACTIONS(57), 1,
      anon_sym_declare,
    ACTIONS(60), 1,
      anon_sym_call,
    ACTIONS(63), 1,
      anon_sym_synthetic,
    ACTIONS(66), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_set,
    ACTIONS(75), 1,
      anon_sym_unset,
    STATE(4), 12,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_set_statement,
      sym_unset_statement,
      aux_sym_statement_block_repeat1,
  [153] = 7,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_backend,
    ACTIONS(11), 1,
      anon_sym_director,
    ACTIONS(13), 1,
      anon_sym_table,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(6), 7,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      sym_table_declaration,
      aux_sym_program_repeat1,
  [181] = 7,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_sub,
    ACTIONS(85), 1,
      anon_sym_include,
    ACTIONS(88), 1,
      anon_sym_backend,
    ACTIONS(91), 1,
      anon_sym_director,
    ACTIONS(94), 1,
      anon_sym_table,
    STATE(6), 7,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      sym_table_declaration,
      aux_sym_program_repeat1,
  [209] = 2,
    ACTIONS(99), 1,
      anon_sym_synthetic,
    ACTIONS(97), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [226] = 2,
    ACTIONS(103), 1,
      anon_sym_synthetic,
    ACTIONS(101), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [243] = 2,
    ACTIONS(107), 1,
      anon_sym_synthetic,
    ACTIONS(105), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [260] = 2,
    ACTIONS(111), 1,
      anon_sym_synthetic,
    ACTIONS(109), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [277] = 2,
    ACTIONS(115), 1,
      anon_sym_synthetic,
    ACTIONS(113), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [294] = 2,
    ACTIONS(119), 1,
      anon_sym_synthetic,
    ACTIONS(117), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [311] = 2,
    ACTIONS(123), 1,
      anon_sym_synthetic,
    ACTIONS(121), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [328] = 2,
    ACTIONS(127), 1,
      anon_sym_synthetic,
    ACTIONS(125), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [345] = 2,
    ACTIONS(131), 1,
      anon_sym_synthetic,
    ACTIONS(129), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [362] = 2,
    ACTIONS(135), 1,
      anon_sym_synthetic,
    ACTIONS(133), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [379] = 2,
    ACTIONS(139), 1,
      anon_sym_synthetic,
    ACTIONS(137), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [396] = 2,
    ACTIONS(143), 1,
      anon_sym_synthetic,
    ACTIONS(141), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [413] = 2,
    ACTIONS(147), 1,
      anon_sym_synthetic,
    ACTIONS(145), 11,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
      anon_sym_set,
      anon_sym_unset,
  [430] = 2,
    STATE(96), 1,
      sym_type,
    ACTIONS(149), 10,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_ID,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
  [446] = 1,
    ACTIONS(151), 11,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_ID,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
      anon_sym_EQ,
  [460] = 5,
    ACTIONS(155), 1,
      sym_percentage,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_table_value,
    STATE(57), 2,
      sym_string,
      sym__expression,
    ACTIONS(153), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [481] = 4,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_percentage,
    STATE(98), 2,
      sym_string,
      sym__expression,
    ACTIONS(159), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [499] = 4,
    ACTIONS(163), 1,
      anon_sym_var,
    STATE(76), 1,
      sym_vcl_scope,
    STATE(80), 2,
      sym_user_defined_variable,
      sym_vcl_variable,
    ACTIONS(165), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [517] = 4,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym_percentage,
    STATE(100), 2,
      sym_string,
      sym__expression,
    ACTIONS(167), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [535] = 3,
    STATE(76), 1,
      sym_vcl_scope,
    STATE(78), 1,
      sym_vcl_variable,
    ACTIONS(165), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [549] = 1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [558] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [567] = 5,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_table_key,
    STATE(90), 1,
      sym_string,
    STATE(29), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [584] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [593] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [602] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_table_key,
    STATE(90), 1,
      sym_string,
    STATE(45), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [619] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [628] = 4,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(43), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [643] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [652] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [661] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_table_key,
    STATE(90), 1,
      sym_string,
    STATE(29), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [678] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [687] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [696] = 4,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(34), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [711] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_table_key,
    STATE(90), 1,
      sym_string,
    STATE(37), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [728] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [737] = 4,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(43), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [752] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [761] = 5,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_table_key,
    STATE(90), 1,
      sym_string,
    STATE(29), 2,
      sym_table_record,
      aux_sym_table_declaration_repeat1,
  [778] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_table,
  [787] = 2,
    STATE(75), 1,
      sym_action,
    ACTIONS(224), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [798] = 1,
    ACTIONS(226), 5,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [806] = 1,
    ACTIONS(228), 5,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [814] = 3,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(50), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [825] = 3,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [836] = 3,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [847] = 3,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(239), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [858] = 3,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [869] = 3,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [880] = 1,
    ACTIONS(249), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [886] = 1,
    ACTIONS(251), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [892] = 2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(253), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [900] = 3,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_string,
  [910] = 1,
    ACTIONS(259), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [916] = 1,
    ACTIONS(261), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [922] = 2,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(263), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [930] = 2,
    ACTIONS(267), 1,
      sym_number,
    ACTIONS(269), 1,
      anon_sym_SEMI,
  [937] = 1,
    ACTIONS(271), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [942] = 2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
  [949] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
  [956] = 2,
    ACTIONS(163), 1,
      anon_sym_var,
    STATE(20), 1,
      sym_user_defined_variable,
  [963] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [970] = 1,
    ACTIONS(281), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [975] = 2,
    ACTIONS(283), 1,
      sym_string_fragment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [982] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_statement_block,
  [989] = 1,
    ACTIONS(289), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [994] = 2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string,
  [1001] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [1005] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1009] = 1,
    ACTIONS(295), 1,
      anon_sym_DOT,
  [1013] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1017] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1021] = 1,
    ACTIONS(301), 1,
      anon_sym_DOT,
  [1025] = 1,
    ACTIONS(303), 1,
      anon_sym_EQ,
  [1029] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1033] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [1037] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [1041] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1045] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [1049] = 1,
    ACTIONS(315), 1,
      anon_sym_DOT,
  [1053] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1057] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [1061] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [1065] = 1,
    ACTIONS(323), 1,
      anon_sym_COLON,
  [1069] = 1,
    ACTIONS(325), 1,
      sym_identifier,
  [1073] = 1,
    ACTIONS(327), 1,
      sym_identifier,
  [1077] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1081] = 1,
    ACTIONS(331), 1,
      sym_declare_scope,
  [1085] = 1,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1089] = 1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [1093] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1097] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1101] = 1,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
  [1105] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [1109] = 1,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
  [1113] = 1,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
  [1117] = 1,
    ACTIONS(349), 1,
      sym_identifier,
  [1121] = 1,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [1125] = 1,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [1129] = 1,
    ACTIONS(355), 1,
      sym_identifier,
  [1133] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1137] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1141] = 1,
    ACTIONS(361), 1,
      sym_identifier,
  [1145] = 1,
    ACTIONS(363), 1,
      sym_identifier,
  [1149] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1153] = 1,
    ACTIONS(367), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 362,
  [SMALL_STATE(17)] = 379,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 430,
  [SMALL_STATE(21)] = 446,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 558,
  [SMALL_STATE(29)] = 567,
  [SMALL_STATE(30)] = 584,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 602,
  [SMALL_STATE(33)] = 619,
  [SMALL_STATE(34)] = 628,
  [SMALL_STATE(35)] = 643,
  [SMALL_STATE(36)] = 652,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 687,
  [SMALL_STATE(40)] = 696,
  [SMALL_STATE(41)] = 711,
  [SMALL_STATE(42)] = 728,
  [SMALL_STATE(43)] = 737,
  [SMALL_STATE(44)] = 752,
  [SMALL_STATE(45)] = 761,
  [SMALL_STATE(46)] = 778,
  [SMALL_STATE(47)] = 787,
  [SMALL_STATE(48)] = 798,
  [SMALL_STATE(49)] = 806,
  [SMALL_STATE(50)] = 814,
  [SMALL_STATE(51)] = 825,
  [SMALL_STATE(52)] = 836,
  [SMALL_STATE(53)] = 847,
  [SMALL_STATE(54)] = 858,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 880,
  [SMALL_STATE(57)] = 886,
  [SMALL_STATE(58)] = 892,
  [SMALL_STATE(59)] = 900,
  [SMALL_STATE(60)] = 910,
  [SMALL_STATE(61)] = 916,
  [SMALL_STATE(62)] = 922,
  [SMALL_STATE(63)] = 930,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 942,
  [SMALL_STATE(66)] = 949,
  [SMALL_STATE(67)] = 956,
  [SMALL_STATE(68)] = 963,
  [SMALL_STATE(69)] = 970,
  [SMALL_STATE(70)] = 975,
  [SMALL_STATE(71)] = 982,
  [SMALL_STATE(72)] = 989,
  [SMALL_STATE(73)] = 994,
  [SMALL_STATE(74)] = 1001,
  [SMALL_STATE(75)] = 1005,
  [SMALL_STATE(76)] = 1009,
  [SMALL_STATE(77)] = 1013,
  [SMALL_STATE(78)] = 1017,
  [SMALL_STATE(79)] = 1021,
  [SMALL_STATE(80)] = 1025,
  [SMALL_STATE(81)] = 1029,
  [SMALL_STATE(82)] = 1033,
  [SMALL_STATE(83)] = 1037,
  [SMALL_STATE(84)] = 1041,
  [SMALL_STATE(85)] = 1045,
  [SMALL_STATE(86)] = 1049,
  [SMALL_STATE(87)] = 1053,
  [SMALL_STATE(88)] = 1057,
  [SMALL_STATE(89)] = 1061,
  [SMALL_STATE(90)] = 1065,
  [SMALL_STATE(91)] = 1069,
  [SMALL_STATE(92)] = 1073,
  [SMALL_STATE(93)] = 1077,
  [SMALL_STATE(94)] = 1081,
  [SMALL_STATE(95)] = 1085,
  [SMALL_STATE(96)] = 1089,
  [SMALL_STATE(97)] = 1093,
  [SMALL_STATE(98)] = 1097,
  [SMALL_STATE(99)] = 1101,
  [SMALL_STATE(100)] = 1105,
  [SMALL_STATE(101)] = 1109,
  [SMALL_STATE(102)] = 1113,
  [SMALL_STATE(103)] = 1117,
  [SMALL_STATE(104)] = 1121,
  [SMALL_STATE(105)] = 1125,
  [SMALL_STATE(106)] = 1129,
  [SMALL_STATE(107)] = 1133,
  [SMALL_STATE(108)] = 1137,
  [SMALL_STATE(109)] = 1141,
  [SMALL_STATE(110)] = 1145,
  [SMALL_STATE(111)] = 1149,
  [SMALL_STATE(112)] = 1153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(63),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(74),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(97),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(94),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(92),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(65),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(24),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(112),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(110),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_statement, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 3, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 5, .production_id = 1),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2), SHIFT_REPEAT(70),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 5, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 6, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4, .production_id = 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(91),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 6, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2), SHIFT_REPEAT(91),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 3, .production_id = 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_value, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_record, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_attribute, 5, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 7, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_record, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 11),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_scope, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_key, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

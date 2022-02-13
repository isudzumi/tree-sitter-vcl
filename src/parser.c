#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
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
  sym_program = 54,
  sym__definition = 55,
  sym_subroutine = 56,
  sym_string = 57,
  sym_action = 58,
  sym_type = 59,
  sym_statement_block = 60,
  sym__statement = 61,
  sym__expression = 62,
  sym_include_statement = 63,
  sym_return_statement = 64,
  sym_error_statement = 65,
  sym_restart_statement = 66,
  sym_esi_statement = 67,
  sym_declare_statement = 68,
  sym_user_defined_variable = 69,
  sym_call_statement = 70,
  sym_synthetic_statement = 71,
  sym_synthetic_base64_statement = 72,
  sym_set_statement = 73,
  sym_unset_statement = 74,
  sym_vcl_scope = 75,
  sym_backend_attribute = 76,
  sym_backend_declaration = 77,
  sym_backend_field = 78,
  sym_director_declaration = 79,
  sym_vcl_variable = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_statement_block_repeat1 = 82,
  aux_sym_backend_declaration_repeat1 = 83,
  aux_sym_director_declaration_repeat1 = 84,
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
  [sym_vcl_variable] = "vcl_variable",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_backend_declaration_repeat1] = "backend_declaration_repeat1",
  [aux_sym_director_declaration_repeat1] = "director_declaration_repeat1",
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
  [sym_vcl_variable] = sym_vcl_variable,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
  [aux_sym_backend_declaration_repeat1] = aux_sym_backend_declaration_repeat1,
  [aux_sym_director_declaration_repeat1] = aux_sym_director_declaration_repeat1,
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

static inline bool sym_string_fragment_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c >= '-' && c <= '.')))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '(') ADVANCE(187);
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(197);
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
      if (lookahead == 'D') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(179);
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
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(173);
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
      if (lookahead == 'R') ADVANCE(176);
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
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'j') ADVANCE(207);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 'q') ADVANCE(203);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'q') ADVANCE(204);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 141:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_rtime);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_rtime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_percentage);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_req);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bereq);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_beresp);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_resp);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_obj);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
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
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 141},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 141},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 141},
  [68] = {.lex_state = 141},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 141},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 141},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 141},
  [88] = {.lex_state = 141},
  [89] = {.lex_state = 141},
  [90] = {.lex_state = 141},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 141},
  [94] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_program] = STATE(86),
    [sym__definition] = STATE(18),
    [sym_subroutine] = STATE(18),
    [sym_include_statement] = STATE(18),
    [sym_backend_declaration] = STATE(18),
    [sym_director_declaration] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
    [anon_sym_director] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_error,
    ACTIONS(19), 1,
      anon_sym_restart,
    ACTIONS(21), 1,
      anon_sym_esi,
    ACTIONS(23), 1,
      anon_sym_declare,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_synthetic,
    ACTIONS(29), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_set,
    ACTIONS(35), 1,
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
  [51] = 13,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(42), 1,
      anon_sym_error,
    ACTIONS(45), 1,
      anon_sym_restart,
    ACTIONS(48), 1,
      anon_sym_esi,
    ACTIONS(51), 1,
      anon_sym_declare,
    ACTIONS(54), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_synthetic,
    ACTIONS(60), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_set,
    ACTIONS(69), 1,
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
  [102] = 13,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_error,
    ACTIONS(19), 1,
      anon_sym_restart,
    ACTIONS(21), 1,
      anon_sym_esi,
    ACTIONS(23), 1,
      anon_sym_declare,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_synthetic,
    ACTIONS(29), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(33), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_unset,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      sym_comment,
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
  [153] = 2,
    ACTIONS(78), 1,
      anon_sym_synthetic,
    ACTIONS(76), 11,
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
  [170] = 2,
    ACTIONS(82), 1,
      anon_sym_synthetic,
    ACTIONS(80), 11,
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
  [187] = 2,
    ACTIONS(86), 1,
      anon_sym_synthetic,
    ACTIONS(84), 11,
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
  [204] = 2,
    ACTIONS(90), 1,
      anon_sym_synthetic,
    ACTIONS(88), 11,
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
  [221] = 2,
    ACTIONS(94), 1,
      anon_sym_synthetic,
    ACTIONS(92), 11,
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
  [238] = 2,
    ACTIONS(98), 1,
      anon_sym_synthetic,
    ACTIONS(96), 11,
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
  [255] = 2,
    ACTIONS(102), 1,
      anon_sym_synthetic,
    ACTIONS(100), 11,
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
  [272] = 2,
    ACTIONS(106), 1,
      anon_sym_synthetic,
    ACTIONS(104), 11,
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
  [289] = 2,
    ACTIONS(110), 1,
      anon_sym_synthetic,
    ACTIONS(108), 11,
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
  [306] = 2,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(112), 11,
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
  [323] = 2,
    ACTIONS(118), 1,
      anon_sym_synthetic,
    ACTIONS(116), 11,
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
  [340] = 2,
    ACTIONS(122), 1,
      anon_sym_synthetic,
    ACTIONS(120), 11,
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
  [357] = 2,
    ACTIONS(126), 1,
      anon_sym_synthetic,
    ACTIONS(124), 11,
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
  [374] = 6,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_backend,
    ACTIONS(11), 1,
      anon_sym_director,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(20), 6,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      aux_sym_program_repeat1,
  [398] = 1,
    ACTIONS(130), 11,
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
  [412] = 6,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_sub,
    ACTIONS(137), 1,
      anon_sym_include,
    ACTIONS(140), 1,
      anon_sym_backend,
    ACTIONS(143), 1,
      anon_sym_director,
    STATE(20), 6,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      sym_director_declaration,
      aux_sym_program_repeat1,
  [436] = 2,
    STATE(79), 1,
      sym_type,
    ACTIONS(146), 10,
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
  [452] = 4,
    ACTIONS(148), 1,
      anon_sym_var,
    STATE(63), 1,
      sym_vcl_scope,
    STATE(85), 2,
      sym_user_defined_variable,
      sym_vcl_variable,
    ACTIONS(150), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [470] = 4,
    ACTIONS(154), 1,
      sym_percentage,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(83), 2,
      sym_string,
      sym__expression,
    ACTIONS(152), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [488] = 4,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      sym_percentage,
    STATE(81), 2,
      sym_string,
      sym__expression,
    ACTIONS(158), 5,
      sym_number,
      sym_rtime,
      sym_identifier,
      sym_true,
      sym_false,
  [506] = 3,
    STATE(63), 1,
      sym_vcl_scope,
    STATE(84), 1,
      sym_vcl_variable,
    ACTIONS(150), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [520] = 4,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(26), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [535] = 4,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(26), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [550] = 2,
    STATE(58), 1,
      sym_action,
    ACTIONS(176), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [561] = 4,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(27), 3,
      sym_backend_attribute,
      sym_backend_field,
      aux_sym_director_declaration_repeat1,
  [576] = 1,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [584] = 1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [592] = 1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [600] = 1,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [608] = 1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [616] = 1,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [624] = 1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [632] = 1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
      anon_sym_director,
  [640] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [651] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [662] = 3,
    ACTIONS(202), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(200), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [673] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [684] = 3,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(42), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [695] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [706] = 1,
    ACTIONS(215), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [712] = 3,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_string,
  [722] = 1,
    ACTIONS(219), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [728] = 2,
    ACTIONS(223), 1,
      anon_sym_COLON,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [736] = 1,
    ACTIONS(225), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [742] = 2,
    ACTIONS(227), 1,
      sym_number,
    ACTIONS(229), 1,
      anon_sym_SEMI,
  [749] = 2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [756] = 1,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [761] = 1,
    ACTIONS(233), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [766] = 2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string,
  [773] = 2,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_statement_block,
  [780] = 2,
    ACTIONS(237), 1,
      sym_string_fragment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
  [787] = 2,
    ACTIONS(148), 1,
      anon_sym_var,
    STATE(21), 1,
      sym_user_defined_variable,
  [794] = 2,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
  [801] = 1,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
  [805] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [809] = 1,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [813] = 1,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [817] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [821] = 1,
    ACTIONS(255), 1,
      anon_sym_DOT,
  [825] = 1,
    ACTIONS(257), 1,
      sym_identifier,
  [829] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [833] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [837] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [841] = 1,
    ACTIONS(265), 1,
      sym_identifier,
  [845] = 1,
    ACTIONS(267), 1,
      sym_declare_scope,
  [849] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [853] = 1,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [857] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [861] = 1,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
  [865] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [869] = 1,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
  [873] = 1,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [877] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [881] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [885] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [889] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [893] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [897] = 1,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [901] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [905] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [909] = 1,
    ACTIONS(299), 1,
      anon_sym_EQ,
  [913] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [917] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [921] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [925] = 1,
    ACTIONS(307), 1,
      sym_identifier,
  [929] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [933] = 1,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [937] = 1,
    ACTIONS(313), 1,
      anon_sym_DOT,
  [941] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(317), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 357,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 398,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 488,
  [SMALL_STATE(25)] = 506,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 535,
  [SMALL_STATE(28)] = 550,
  [SMALL_STATE(29)] = 561,
  [SMALL_STATE(30)] = 576,
  [SMALL_STATE(31)] = 584,
  [SMALL_STATE(32)] = 592,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 608,
  [SMALL_STATE(35)] = 616,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 632,
  [SMALL_STATE(38)] = 640,
  [SMALL_STATE(39)] = 651,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 673,
  [SMALL_STATE(42)] = 684,
  [SMALL_STATE(43)] = 695,
  [SMALL_STATE(44)] = 706,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 728,
  [SMALL_STATE(48)] = 736,
  [SMALL_STATE(49)] = 742,
  [SMALL_STATE(50)] = 749,
  [SMALL_STATE(51)] = 756,
  [SMALL_STATE(52)] = 761,
  [SMALL_STATE(53)] = 766,
  [SMALL_STATE(54)] = 773,
  [SMALL_STATE(55)] = 780,
  [SMALL_STATE(56)] = 787,
  [SMALL_STATE(57)] = 794,
  [SMALL_STATE(58)] = 801,
  [SMALL_STATE(59)] = 805,
  [SMALL_STATE(60)] = 809,
  [SMALL_STATE(61)] = 813,
  [SMALL_STATE(62)] = 817,
  [SMALL_STATE(63)] = 821,
  [SMALL_STATE(64)] = 825,
  [SMALL_STATE(65)] = 829,
  [SMALL_STATE(66)] = 833,
  [SMALL_STATE(67)] = 837,
  [SMALL_STATE(68)] = 841,
  [SMALL_STATE(69)] = 845,
  [SMALL_STATE(70)] = 849,
  [SMALL_STATE(71)] = 853,
  [SMALL_STATE(72)] = 857,
  [SMALL_STATE(73)] = 861,
  [SMALL_STATE(74)] = 865,
  [SMALL_STATE(75)] = 869,
  [SMALL_STATE(76)] = 873,
  [SMALL_STATE(77)] = 877,
  [SMALL_STATE(78)] = 881,
  [SMALL_STATE(79)] = 885,
  [SMALL_STATE(80)] = 889,
  [SMALL_STATE(81)] = 893,
  [SMALL_STATE(82)] = 897,
  [SMALL_STATE(83)] = 901,
  [SMALL_STATE(84)] = 905,
  [SMALL_STATE(85)] = 909,
  [SMALL_STATE(86)] = 913,
  [SMALL_STATE(87)] = 917,
  [SMALL_STATE(88)] = 921,
  [SMALL_STATE(89)] = 925,
  [SMALL_STATE(90)] = 929,
  [SMALL_STATE(91)] = 933,
  [SMALL_STATE(92)] = 937,
  [SMALL_STATE(93)] = 941,
  [SMALL_STATE(94)] = 945,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(57),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(49),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(72),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(71),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(69),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(67),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(3),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(22),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_statement, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 3, .production_id = 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(41),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_director_declaration_repeat1, 2), SHIFT_REPEAT(64),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 5, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 5, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 6, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 3, .production_id = 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2), SHIFT_REPEAT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_field, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_attribute, 5, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 7, .production_id = 12),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 11),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_scope, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_sub = 1,
  sym_identifier = 2,
  sym_string_fragment = 3,
  sym_status_code = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_pass = 6,
  anon_sym_hit_for_pass = 7,
  anon_sym_lookup = 8,
  anon_sym_pipe = 9,
  anon_sym_deliver = 10,
  anon_sym_ACL = 11,
  anon_sym_BACKEND = 12,
  anon_sym_BOOL = 13,
  anon_sym_FLOAT = 14,
  anon_sym_ID = 15,
  anon_sym_INTEGER = 16,
  anon_sym_IP = 17,
  anon_sym_RTIME = 18,
  anon_sym_STRING = 19,
  anon_sym_TIME = 20,
  sym_declare_scope = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_include = 24,
  anon_sym_SEMI = 25,
  anon_sym_return = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_error = 29,
  anon_sym_restart = 30,
  anon_sym_esi = 31,
  anon_sym_declare = 32,
  anon_sym_var = 33,
  anon_sym_DOT = 34,
  anon_sym_call = 35,
  anon_sym_synthetic = 36,
  anon_sym_synthetic_DOTbase64 = 37,
  sym_comment = 38,
  anon_sym_set = 39,
  anon_sym_EQ = 40,
  anon_sym_unset = 41,
  anon_sym_req = 42,
  anon_sym_bereq = 43,
  anon_sym_beresp = 44,
  anon_sym_resp = 45,
  anon_sym_obj = 46,
  anon_sym_COLON = 47,
  sym_program = 48,
  sym__definition = 49,
  sym_subroutine = 50,
  sym_string = 51,
  sym_action = 52,
  sym_type = 53,
  sym_statement_block = 54,
  sym__statement = 55,
  sym_include_statement = 56,
  sym_return_statement = 57,
  sym_error_statement = 58,
  sym_restart_statement = 59,
  sym_esi_statement = 60,
  sym_declare_statement = 61,
  sym_user_defined_variable = 62,
  sym_call_statement = 63,
  sym_synthetic_statement = 64,
  sym_synthetic_base64_statement = 65,
  sym_set_statement = 66,
  sym_unset_statement = 67,
  sym_vcl_scope = 68,
  sym_vcl_variable = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_statement_block_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
  [sym_identifier] = "identifier",
  [sym_string_fragment] = "string_fragment",
  [sym_status_code] = "status_code",
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
  [anon_sym_COLON] = ":",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_action] = "action",
  [sym_type] = "type",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
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
  [sym_vcl_variable] = "vcl_variable",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
  [sym_identifier] = sym_identifier,
  [sym_string_fragment] = sym_string_fragment,
  [sym_status_code] = sym_status_code,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_action] = sym_action,
  [sym_type] = sym_type,
  [sym_statement_block] = sym_statement_block,
  [sym__statement] = sym__statement,
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
  [sym_vcl_variable] = sym_vcl_variable,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_status_code] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_source, 1},
  [2] =
    {field_status, 1},
  [3] =
    {field_subroutine_name, 1},
  [4] =
    {field_message, 2},
    {field_status, 1},
  [6] =
    {field_name, 2},
  [7] =
    {field_scope, 0},
    {field_variable, 2},
  [9] =
    {field_scope, 1},
    {field_type, 3},
  [11] =
    {field_index, 4},
    {field_scope, 0},
    {field_variable, 2},
  [14] =
    {field_scope, 0},
    {field_subfield, 4},
    {field_variable, 2},
  [17] =
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
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(161);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'G') ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'K') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'j') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 94:
      if (lookahead == 'q') ADVANCE(167);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'q') ADVANCE(168);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_req);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_bereq);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_beresp);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_resp);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_obj);
      END_STATE();
    case 172:
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
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
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 122},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 122},
  [45] = {.lex_state = 122},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 122},
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
  [65] = {.lex_state = 122},
  [66] = {.lex_state = 122},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 122},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(64),
    [sym__definition] = STATE(23),
    [sym_subroutine] = STATE(23),
    [sym_include_statement] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_error,
    ACTIONS(15), 1,
      anon_sym_restart,
    ACTIONS(17), 1,
      anon_sym_esi,
    ACTIONS(19), 1,
      anon_sym_declare,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(23), 1,
      anon_sym_synthetic,
    ACTIONS(25), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_set,
    ACTIONS(31), 1,
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
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_error,
    ACTIONS(15), 1,
      anon_sym_restart,
    ACTIONS(17), 1,
      anon_sym_esi,
    ACTIONS(19), 1,
      anon_sym_declare,
    ACTIONS(21), 1,
      anon_sym_call,
    ACTIONS(23), 1,
      anon_sym_synthetic,
    ACTIONS(25), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(29), 1,
      anon_sym_set,
    ACTIONS(31), 1,
      anon_sym_unset,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_comment,
    STATE(2), 12,
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
  [153] = 2,
    ACTIONS(74), 1,
      anon_sym_synthetic,
    ACTIONS(72), 11,
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
  [187] = 2,
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
  [204] = 2,
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
  [221] = 2,
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
  [238] = 2,
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
  [255] = 2,
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
  [272] = 2,
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
  [289] = 2,
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
  [306] = 2,
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
  [323] = 2,
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
  [340] = 2,
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
  [357] = 2,
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
  [374] = 1,
    ACTIONS(124), 11,
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
  [388] = 2,
    STATE(58), 1,
      sym_type,
    ACTIONS(126), 10,
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
  [404] = 4,
    ACTIONS(128), 1,
      anon_sym_var,
    STATE(54), 1,
      sym_vcl_scope,
    STATE(62), 2,
      sym_user_defined_variable,
      sym_vcl_variable,
    ACTIONS(130), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [422] = 3,
    STATE(54), 1,
      sym_vcl_scope,
    STATE(57), 1,
      sym_vcl_variable,
    ACTIONS(130), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [436] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_sub,
    ACTIONS(137), 1,
      anon_sym_include,
    STATE(22), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [452] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(22), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [468] = 2,
    STATE(47), 1,
      sym_action,
    ACTIONS(142), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [479] = 3,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_COLON,
    ACTIONS(144), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [490] = 2,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(150), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [498] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [504] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [510] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [516] = 1,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [522] = 3,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_string,
  [532] = 2,
    ACTIONS(128), 1,
      anon_sym_var,
    STATE(19), 1,
      sym_user_defined_variable,
  [539] = 2,
    ACTIONS(166), 1,
      sym_status_code,
    ACTIONS(168), 1,
      anon_sym_SEMI,
  [546] = 1,
    ACTIONS(170), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [551] = 1,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [556] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [563] = 2,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_statement_block,
  [570] = 2,
    ACTIONS(176), 1,
      sym_string_fragment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
  [577] = 2,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
  [584] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [591] = 2,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
  [598] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [602] = 1,
    ACTIONS(186), 1,
      anon_sym_SEMI,
  [606] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [610] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [614] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [618] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [622] = 1,
    ACTIONS(196), 1,
      sym_declare_scope,
  [626] = 1,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [630] = 1,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [634] = 1,
    ACTIONS(202), 1,
      anon_sym_SEMI,
  [638] = 1,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [642] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [646] = 1,
    ACTIONS(208), 1,
      anon_sym_DOT,
  [650] = 1,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [654] = 1,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [658] = 1,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [662] = 1,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [666] = 1,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
  [670] = 1,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [674] = 1,
    ACTIONS(222), 1,
      anon_sym_SEMI,
  [678] = 1,
    ACTIONS(224), 1,
      anon_sym_EQ,
  [682] = 1,
    ACTIONS(226), 1,
      anon_sym_DOT,
  [686] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [690] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [694] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [698] = 1,
    ACTIONS(234), 1,
      anon_sym_DOT,
  [702] = 1,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [706] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [710] = 1,
    ACTIONS(240), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 404,
  [SMALL_STATE(21)] = 422,
  [SMALL_STATE(22)] = 436,
  [SMALL_STATE(23)] = 452,
  [SMALL_STATE(24)] = 468,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 490,
  [SMALL_STATE(27)] = 498,
  [SMALL_STATE(28)] = 504,
  [SMALL_STATE(29)] = 510,
  [SMALL_STATE(30)] = 516,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 532,
  [SMALL_STATE(33)] = 539,
  [SMALL_STATE(34)] = 546,
  [SMALL_STATE(35)] = 551,
  [SMALL_STATE(36)] = 556,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 584,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 598,
  [SMALL_STATE(43)] = 602,
  [SMALL_STATE(44)] = 606,
  [SMALL_STATE(45)] = 610,
  [SMALL_STATE(46)] = 614,
  [SMALL_STATE(47)] = 618,
  [SMALL_STATE(48)] = 622,
  [SMALL_STATE(49)] = 626,
  [SMALL_STATE(50)] = 630,
  [SMALL_STATE(51)] = 634,
  [SMALL_STATE(52)] = 638,
  [SMALL_STATE(53)] = 642,
  [SMALL_STATE(54)] = 646,
  [SMALL_STATE(55)] = 650,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 662,
  [SMALL_STATE(59)] = 666,
  [SMALL_STATE(60)] = 670,
  [SMALL_STATE(61)] = 674,
  [SMALL_STATE(62)] = 678,
  [SMALL_STATE(63)] = 682,
  [SMALL_STATE(64)] = 686,
  [SMALL_STATE(65)] = 690,
  [SMALL_STATE(66)] = 694,
  [SMALL_STATE(67)] = 698,
  [SMALL_STATE(68)] = 702,
  [SMALL_STATE(69)] = 706,
  [SMALL_STATE(70)] = 710,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(39),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(33),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(51),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(48),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(45),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(12),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 8),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 8),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 3, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 3, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 7, .production_id = 11),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_scope, 1),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

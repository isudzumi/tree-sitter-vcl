#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_backend = 47,
  anon_sym_COLON = 48,
  sym_program = 49,
  sym__definition = 50,
  sym_subroutine = 51,
  sym_string = 52,
  sym_action = 53,
  sym_type = 54,
  sym_statement_block = 55,
  sym__statement = 56,
  sym__expression = 57,
  sym_include_statement = 58,
  sym_return_statement = 59,
  sym_error_statement = 60,
  sym_restart_statement = 61,
  sym_esi_statement = 62,
  sym_declare_statement = 63,
  sym_user_defined_variable = 64,
  sym_call_statement = 65,
  sym_synthetic_statement = 66,
  sym_synthetic_base64_statement = 67,
  sym_set_statement = 68,
  sym_unset_statement = 69,
  sym_vcl_scope = 70,
  sym_backend_attribute = 71,
  sym_backend_declaration = 72,
  sym_vcl_variable = 73,
  aux_sym_program_repeat1 = 74,
  aux_sym_statement_block_repeat1 = 75,
  aux_sym_backend_declaration_repeat1 = 76,
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
  [anon_sym_backend] = "backend",
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
  [sym_vcl_variable] = "vcl_variable",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_backend_declaration_repeat1] = "backend_declaration_repeat1",
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
  [anon_sym_backend] = anon_sym_backend,
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
  [sym_vcl_variable] = sym_vcl_variable,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
  [aux_sym_backend_declaration_repeat1] = aux_sym_backend_declaration_repeat1,
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
  [anon_sym_backend] = {
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
      if (eof) ADVANCE(130);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(45);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(168);
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
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(150);
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
      if (lookahead == 'L') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(144);
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
      if (lookahead == 'R') ADVANCE(147);
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
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'j') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 'q') ADVANCE(174);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'q') ADVANCE(175);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_req);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bereq);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_beresp);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_resp);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_obj);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 180:
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
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
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
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
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
    [anon_sym_backend] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(74),
    [sym__definition] = STATE(22),
    [sym_subroutine] = STATE(22),
    [sym_include_statement] = STATE(22),
    [sym_backend_declaration] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(16), 1,
      anon_sym_error,
    ACTIONS(19), 1,
      anon_sym_restart,
    ACTIONS(22), 1,
      anon_sym_esi,
    ACTIONS(25), 1,
      anon_sym_declare,
    ACTIONS(28), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_synthetic,
    ACTIONS(34), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_set,
    ACTIONS(43), 1,
      anon_sym_unset,
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
  [51] = 13,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_error,
    ACTIONS(52), 1,
      anon_sym_restart,
    ACTIONS(54), 1,
      anon_sym_esi,
    ACTIONS(56), 1,
      anon_sym_declare,
    ACTIONS(58), 1,
      anon_sym_call,
    ACTIONS(60), 1,
      anon_sym_synthetic,
    ACTIONS(62), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_set,
    ACTIONS(68), 1,
      anon_sym_unset,
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
    ACTIONS(48), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_error,
    ACTIONS(52), 1,
      anon_sym_restart,
    ACTIONS(54), 1,
      anon_sym_esi,
    ACTIONS(56), 1,
      anon_sym_declare,
    ACTIONS(58), 1,
      anon_sym_call,
    ACTIONS(60), 1,
      anon_sym_synthetic,
    ACTIONS(62), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(66), 1,
      anon_sym_set,
    ACTIONS(68), 1,
      anon_sym_unset,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
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
    ACTIONS(76), 1,
      anon_sym_synthetic,
    ACTIONS(74), 11,
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
    ACTIONS(80), 1,
      anon_sym_synthetic,
    ACTIONS(78), 11,
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
    ACTIONS(84), 1,
      anon_sym_synthetic,
    ACTIONS(82), 11,
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
    ACTIONS(88), 1,
      anon_sym_synthetic,
    ACTIONS(86), 11,
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
    ACTIONS(92), 1,
      anon_sym_synthetic,
    ACTIONS(90), 11,
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
    ACTIONS(96), 1,
      anon_sym_synthetic,
    ACTIONS(94), 11,
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
    ACTIONS(100), 1,
      anon_sym_synthetic,
    ACTIONS(98), 11,
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
    ACTIONS(104), 1,
      anon_sym_synthetic,
    ACTIONS(102), 11,
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
    ACTIONS(108), 1,
      anon_sym_synthetic,
    ACTIONS(106), 11,
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
    ACTIONS(112), 1,
      anon_sym_synthetic,
    ACTIONS(110), 11,
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
    ACTIONS(116), 1,
      anon_sym_synthetic,
    ACTIONS(114), 11,
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
    ACTIONS(120), 1,
      anon_sym_synthetic,
    ACTIONS(118), 11,
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
    ACTIONS(124), 1,
      anon_sym_synthetic,
    ACTIONS(122), 11,
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
    ACTIONS(126), 11,
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
    STATE(68), 1,
      sym_type,
    ACTIONS(128), 10,
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
    ACTIONS(130), 1,
      anon_sym_var,
    STATE(73), 1,
      sym_vcl_scope,
    STATE(78), 2,
      sym_user_defined_variable,
      sym_vcl_variable,
    ACTIONS(132), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [422] = 5,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_sub,
    ACTIONS(139), 1,
      anon_sym_include,
    ACTIONS(142), 1,
      anon_sym_backend,
    STATE(21), 5,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      aux_sym_program_repeat1,
  [442] = 5,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_backend,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(21), 5,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      sym_backend_declaration,
      aux_sym_program_repeat1,
  [462] = 3,
    STATE(66), 1,
      sym_vcl_variable,
    STATE(73), 1,
      sym_vcl_scope,
    ACTIONS(132), 5,
      anon_sym_req,
      anon_sym_bereq,
      anon_sym_beresp,
      anon_sym_resp,
      anon_sym_obj,
  [476] = 2,
    STATE(56), 1,
      sym_action,
    ACTIONS(147), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [487] = 1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [494] = 3,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(34), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [505] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(27), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [516] = 1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [523] = 1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [530] = 3,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym_string,
      sym__expression,
  [541] = 1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [548] = 1,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [555] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_backend,
  [562] = 3,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_backend_attribute,
      aux_sym_backend_declaration_repeat1,
  [573] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(72), 2,
      sym_string,
      sym__expression,
  [584] = 3,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(178), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [595] = 2,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [603] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_string,
  [613] = 2,
    ACTIONS(190), 1,
      sym_status_code,
    ACTIONS(192), 1,
      anon_sym_SEMI,
  [620] = 2,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string,
  [627] = 1,
    ACTIONS(194), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [632] = 1,
    ACTIONS(196), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [637] = 2,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string,
  [644] = 1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [649] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_statement_block,
  [656] = 2,
    ACTIONS(202), 1,
      sym_string_fragment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
  [663] = 2,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
  [670] = 2,
    ACTIONS(130), 1,
      anon_sym_var,
    STATE(19), 1,
      sym_user_defined_variable,
  [677] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [681] = 1,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
  [685] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [689] = 1,
    ACTIONS(216), 1,
      sym_identifier,
  [693] = 1,
    ACTIONS(218), 1,
      anon_sym_EQ,
  [697] = 1,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [701] = 1,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
  [705] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [709] = 1,
    ACTIONS(226), 1,
      sym_identifier,
  [713] = 1,
    ACTIONS(228), 1,
      anon_sym_SEMI,
  [717] = 1,
    ACTIONS(230), 1,
      sym_declare_scope,
  [721] = 1,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [725] = 1,
    ACTIONS(234), 1,
      anon_sym_SEMI,
  [729] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [733] = 1,
    ACTIONS(238), 1,
      anon_sym_SEMI,
  [737] = 1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
  [741] = 1,
    ACTIONS(242), 1,
      anon_sym_SEMI,
  [745] = 1,
    ACTIONS(244), 1,
      anon_sym_SEMI,
  [749] = 1,
    ACTIONS(246), 1,
      anon_sym_SEMI,
  [753] = 1,
    ACTIONS(248), 1,
      anon_sym_SEMI,
  [757] = 1,
    ACTIONS(250), 1,
      anon_sym_SEMI,
  [761] = 1,
    ACTIONS(252), 1,
      anon_sym_SEMI,
  [765] = 1,
    ACTIONS(254), 1,
      anon_sym_SEMI,
  [769] = 1,
    ACTIONS(256), 1,
      anon_sym_SEMI,
  [773] = 1,
    ACTIONS(258), 1,
      anon_sym_DOT,
  [777] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [781] = 1,
    ACTIONS(262), 1,
      sym_identifier,
  [785] = 1,
    ACTIONS(264), 1,
      sym_identifier,
  [789] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [793] = 1,
    ACTIONS(268), 1,
      anon_sym_EQ,
  [797] = 1,
    ACTIONS(270), 1,
      anon_sym_DOT,
  [801] = 1,
    ACTIONS(272), 1,
      anon_sym_DOT,
  [805] = 1,
    ACTIONS(274), 1,
      sym_identifier,
  [809] = 1,
    ACTIONS(276), 1,
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
  [SMALL_STATE(22)] = 442,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 476,
  [SMALL_STATE(25)] = 487,
  [SMALL_STATE(26)] = 494,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 516,
  [SMALL_STATE(29)] = 523,
  [SMALL_STATE(30)] = 530,
  [SMALL_STATE(31)] = 541,
  [SMALL_STATE(32)] = 548,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 562,
  [SMALL_STATE(35)] = 573,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 603,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 620,
  [SMALL_STATE(41)] = 627,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 637,
  [SMALL_STATE(44)] = 644,
  [SMALL_STATE(45)] = 649,
  [SMALL_STATE(46)] = 656,
  [SMALL_STATE(47)] = 663,
  [SMALL_STATE(48)] = 670,
  [SMALL_STATE(49)] = 677,
  [SMALL_STATE(50)] = 681,
  [SMALL_STATE(51)] = 685,
  [SMALL_STATE(52)] = 689,
  [SMALL_STATE(53)] = 693,
  [SMALL_STATE(54)] = 697,
  [SMALL_STATE(55)] = 701,
  [SMALL_STATE(56)] = 705,
  [SMALL_STATE(57)] = 709,
  [SMALL_STATE(58)] = 713,
  [SMALL_STATE(59)] = 717,
  [SMALL_STATE(60)] = 721,
  [SMALL_STATE(61)] = 725,
  [SMALL_STATE(62)] = 729,
  [SMALL_STATE(63)] = 733,
  [SMALL_STATE(64)] = 737,
  [SMALL_STATE(65)] = 741,
  [SMALL_STATE(66)] = 745,
  [SMALL_STATE(67)] = 749,
  [SMALL_STATE(68)] = 753,
  [SMALL_STATE(69)] = 757,
  [SMALL_STATE(70)] = 761,
  [SMALL_STATE(71)] = 765,
  [SMALL_STATE(72)] = 769,
  [SMALL_STATE(73)] = 773,
  [SMALL_STATE(74)] = 777,
  [SMALL_STATE(75)] = 781,
  [SMALL_STATE(76)] = 785,
  [SMALL_STATE(77)] = 789,
  [SMALL_STATE(78)] = 793,
  [SMALL_STATE(79)] = 797,
  [SMALL_STATE(80)] = 801,
  [SMALL_STATE(81)] = 805,
  [SMALL_STATE(82)] = 809,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(47),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(39),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(61),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(60),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(59),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(57),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_statement, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 8),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 8),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_statement, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 3, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2), SHIFT_REPEAT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 5, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 3, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 7, .production_id = 11),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_variable, 5, .production_id = 10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_attribute, 5, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vcl_scope, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

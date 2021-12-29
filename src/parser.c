#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_var_DOT = 33,
  anon_sym_call = 34,
  anon_sym_synthetic = 35,
  anon_sym_synthetic_DOTbase64 = 36,
  sym_comment = 37,
  sym_program = 38,
  sym__definition = 39,
  sym_subroutine = 40,
  sym_string = 41,
  sym_action = 42,
  sym_type = 43,
  sym_statement_block = 44,
  sym__statement = 45,
  sym_include_statement = 46,
  sym_return_statement = 47,
  sym_error_statement = 48,
  sym_restart_statement = 49,
  sym_esi_statement = 50,
  sym_declare_statement = 51,
  sym_user_defined_variable = 52,
  sym_call_statement = 53,
  sym_synthetic_statement = 54,
  sym_synthetic_base64_statement = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_statement_block_repeat1 = 57,
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
  [anon_sym_var_DOT] = "var.",
  [anon_sym_call] = "call",
  [anon_sym_synthetic] = "synthetic",
  [anon_sym_synthetic_DOTbase64] = "synthetic_statement",
  [sym_comment] = "comment",
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
  [anon_sym_var_DOT] = anon_sym_var_DOT,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_synthetic] = anon_sym_synthetic,
  [anon_sym_synthetic_DOTbase64] = sym_synthetic_statement,
  [sym_comment] = sym_comment,
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
  [anon_sym_var_DOT] = {
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
  field_message = 1,
  field_name = 2,
  field_scope = 3,
  field_source = 4,
  field_status = 5,
  field_subroutine_name = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_message] = "message",
  [field_name] = "name",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_status] = "status",
  [field_subroutine_name] = "subroutine_name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
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
    {field_scope, 1},
    {field_type, 3},
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
      if (eof) ADVANCE(112);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(149);
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
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'G') ADVANCE(132);
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
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(126);
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
      if (lookahead == 'R') ADVANCE(129);
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
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_var_DOT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
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
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 111},
  [46] = {.lex_state = 110},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [anon_sym_var_DOT] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_synthetic] = ACTIONS(1),
    [anon_sym_synthetic_DOTbase64] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(49),
    [sym__definition] = STATE(19),
    [sym_subroutine] = STATE(19),
    [sym_include_statement] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(3), 10,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      aux_sym_statement_block_repeat1,
  [43] = 11,
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
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_comment,
    STATE(4), 10,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      aux_sym_statement_block_repeat1,
  [86] = 11,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(44), 1,
      anon_sym_esi,
    ACTIONS(47), 1,
      anon_sym_declare,
    ACTIONS(50), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_synthetic,
    ACTIONS(56), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(59), 1,
      sym_comment,
    STATE(4), 10,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      sym_call_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      aux_sym_statement_block_repeat1,
  [129] = 2,
    STATE(48), 1,
      sym_type,
    ACTIONS(62), 10,
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
  [145] = 2,
    ACTIONS(66), 1,
      anon_sym_synthetic,
    ACTIONS(64), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [160] = 2,
    ACTIONS(70), 1,
      anon_sym_synthetic,
    ACTIONS(68), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [175] = 2,
    ACTIONS(74), 1,
      anon_sym_synthetic,
    ACTIONS(72), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [190] = 2,
    ACTIONS(78), 1,
      anon_sym_synthetic,
    ACTIONS(76), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [205] = 2,
    ACTIONS(82), 1,
      anon_sym_synthetic,
    ACTIONS(80), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [220] = 2,
    ACTIONS(86), 1,
      anon_sym_synthetic,
    ACTIONS(84), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [235] = 1,
    ACTIONS(88), 10,
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
  [248] = 2,
    ACTIONS(92), 1,
      anon_sym_synthetic,
    ACTIONS(90), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [263] = 2,
    ACTIONS(96), 1,
      anon_sym_synthetic,
    ACTIONS(94), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [278] = 2,
    ACTIONS(100), 1,
      anon_sym_synthetic,
    ACTIONS(98), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [293] = 2,
    ACTIONS(104), 1,
      anon_sym_synthetic,
    ACTIONS(102), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [308] = 2,
    ACTIONS(108), 1,
      anon_sym_synthetic,
    ACTIONS(106), 9,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
      sym_comment,
  [323] = 4,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_sub,
    ACTIONS(115), 1,
      anon_sym_include,
    STATE(18), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [339] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(18), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [355] = 2,
    STATE(37), 1,
      sym_action,
    ACTIONS(120), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [366] = 1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [372] = 1,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [378] = 1,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [384] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_string,
  [394] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [400] = 2,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
  [407] = 2,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [414] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_statement_block,
  [421] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
  [428] = 2,
    ACTIONS(140), 1,
      sym_status_code,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [435] = 2,
    ACTIONS(144), 1,
      anon_sym_var_DOT,
    STATE(5), 1,
      sym_user_defined_variable,
  [442] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [446] = 1,
    ACTIONS(148), 1,
      anon_sym_SEMI,
  [450] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [454] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [458] = 1,
    ACTIONS(154), 1,
      sym_declare_scope,
  [462] = 1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [466] = 1,
    ACTIONS(158), 1,
      sym_identifier,
  [470] = 1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
  [474] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [478] = 1,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
  [482] = 1,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [486] = 1,
    ACTIONS(168), 1,
      anon_sym_SEMI,
  [490] = 1,
    ACTIONS(170), 1,
      anon_sym_SEMI,
  [494] = 1,
    ACTIONS(172), 1,
      sym_string_fragment,
  [498] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [502] = 1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [506] = 1,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [510] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [514] = 1,
    ACTIONS(182), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 235,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 293,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 394,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 407,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 421,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 435,
  [SMALL_STATE(32)] = 442,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 450,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 458,
  [SMALL_STATE(37)] = 462,
  [SMALL_STATE(38)] = 466,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 474,
  [SMALL_STATE(41)] = 478,
  [SMALL_STATE(42)] = 482,
  [SMALL_STATE(43)] = 486,
  [SMALL_STATE(44)] = 490,
  [SMALL_STATE(45)] = 494,
  [SMALL_STATE(46)] = 498,
  [SMALL_STATE(47)] = 502,
  [SMALL_STATE(48)] = 506,
  [SMALL_STATE(49)] = 510,
  [SMALL_STATE(50)] = 514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(29),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(42),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(38),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
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

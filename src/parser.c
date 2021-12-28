#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  sym_program = 37,
  sym__definition = 38,
  sym_subroutine = 39,
  sym_string = 40,
  sym_action = 41,
  sym_type = 42,
  sym_statement_block = 43,
  sym__statement = 44,
  sym_include_statement = 45,
  sym_return_statement = 46,
  sym_error_statement = 47,
  sym_restart_statement = 48,
  sym_esi_statement = 49,
  sym_declare_statement = 50,
  sym_user_defined_variable = 51,
  sym_call_statement = 52,
  sym_synthetic_statement = 53,
  sym_synthetic_base64_statement = 54,
  aux_sym_program_repeat1 = 55,
  aux_sym_statement_block_repeat1 = 56,
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
      if (eof) ADVANCE(109);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(143);
      END_STATE();
    case 2:
      if (lookahead == '4') ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '6') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'K') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_var_DOT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
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
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 107},
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
  [0] = 10,
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
  [40] = 10,
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
      anon_sym_RBRACE,
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
  [80] = 10,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_restart,
    ACTIONS(40), 1,
      anon_sym_esi,
    ACTIONS(43), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      anon_sym_call,
    ACTIONS(49), 1,
      anon_sym_synthetic,
    ACTIONS(52), 1,
      anon_sym_synthetic_DOTbase64,
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
  [120] = 2,
    STATE(48), 1,
      sym_type,
    ACTIONS(55), 10,
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
  [136] = 1,
    ACTIONS(57), 10,
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
  [149] = 2,
    ACTIONS(61), 1,
      anon_sym_synthetic,
    ACTIONS(59), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [163] = 2,
    ACTIONS(65), 1,
      anon_sym_synthetic,
    ACTIONS(63), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [177] = 2,
    ACTIONS(69), 1,
      anon_sym_synthetic,
    ACTIONS(67), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [191] = 2,
    ACTIONS(73), 1,
      anon_sym_synthetic,
    ACTIONS(71), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [205] = 2,
    ACTIONS(77), 1,
      anon_sym_synthetic,
    ACTIONS(75), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [219] = 2,
    ACTIONS(81), 1,
      anon_sym_synthetic,
    ACTIONS(79), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [233] = 2,
    ACTIONS(85), 1,
      anon_sym_synthetic,
    ACTIONS(83), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [247] = 2,
    ACTIONS(89), 1,
      anon_sym_synthetic,
    ACTIONS(87), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [261] = 2,
    ACTIONS(93), 1,
      anon_sym_synthetic,
    ACTIONS(91), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [275] = 2,
    ACTIONS(97), 1,
      anon_sym_synthetic,
    ACTIONS(95), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [289] = 2,
    ACTIONS(101), 1,
      anon_sym_synthetic,
    ACTIONS(99), 8,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
      anon_sym_call,
      anon_sym_synthetic_DOTbase64,
  [303] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_sub,
    ACTIONS(108), 1,
      anon_sym_include,
    STATE(18), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [319] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(18), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [335] = 2,
    STATE(37), 1,
      sym_action,
    ACTIONS(113), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [346] = 1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [352] = 1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [358] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [364] = 3,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_string,
  [374] = 1,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [380] = 2,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
  [387] = 2,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [394] = 2,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_statement_block,
  [401] = 2,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
  [408] = 2,
    ACTIONS(133), 1,
      sym_status_code,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [415] = 2,
    ACTIONS(137), 1,
      anon_sym_var_DOT,
    STATE(5), 1,
      sym_user_defined_variable,
  [422] = 1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
  [426] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [430] = 1,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [434] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [438] = 1,
    ACTIONS(147), 1,
      sym_declare_scope,
  [442] = 1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
  [446] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [450] = 1,
    ACTIONS(153), 1,
      anon_sym_SEMI,
  [454] = 1,
    ACTIONS(155), 1,
      sym_identifier,
  [458] = 1,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
  [462] = 1,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [466] = 1,
    ACTIONS(161), 1,
      anon_sym_SEMI,
  [470] = 1,
    ACTIONS(163), 1,
      anon_sym_SEMI,
  [474] = 1,
    ACTIONS(165), 1,
      sym_string_fragment,
  [478] = 1,
    ACTIONS(167), 1,
      sym_identifier,
  [482] = 1,
    ACTIONS(169), 1,
      anon_sym_SEMI,
  [486] = 1,
    ACTIONS(171), 1,
      anon_sym_SEMI,
  [490] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(175), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 289,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 346,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 358,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 408,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 430,
  [SMALL_STATE(35)] = 434,
  [SMALL_STATE(36)] = 438,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 446,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 454,
  [SMALL_STATE(41)] = 458,
  [SMALL_STATE(42)] = 462,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 470,
  [SMALL_STATE(45)] = 474,
  [SMALL_STATE(46)] = 478,
  [SMALL_STATE(47)] = 482,
  [SMALL_STATE(48)] = 486,
  [SMALL_STATE(49)] = 490,
  [SMALL_STATE(50)] = 494,
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
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(33),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(42),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(36),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(38),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(27),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esi_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_statement, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_statement, 5, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 4, .production_id = 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restart_statement, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synthetic_base64_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
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

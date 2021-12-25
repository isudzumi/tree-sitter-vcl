#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

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
  sym_program = 34,
  sym__definition = 35,
  sym_subroutine = 36,
  sym_string = 37,
  sym_action = 38,
  sym_type = 39,
  sym_statement_block = 40,
  sym__statement = 41,
  sym_include_statement = 42,
  sym_return_statement = 43,
  sym_error_statement = 44,
  sym_restart_statement = 45,
  sym_esi_statement = 46,
  sym_declare_statement = 47,
  sym_user_defined_variable = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_statement_block_repeat1 = 50,
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
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_message] = "message",
  [field_name] = "name",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_status] = "status",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_source, 1},
  [2] =
    {field_status, 1},
  [3] =
    {field_message, 2},
    {field_status, 1},
  [5] =
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
      : (c <= ' ' || c == '.'))
    : (c <= '9' || (c < '_'
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
      if (eof) ADVANCE(93);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == ';') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'R') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '}') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'K') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(3);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ID);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_declare_scope);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_var_DOT);
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
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 91},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_program] = STATE(36),
    [sym__definition] = STATE(8),
    [sym_subroutine] = STATE(8),
    [sym_include_statement] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(14), 1,
      anon_sym_error,
    ACTIONS(17), 1,
      anon_sym_restart,
    ACTIONS(20), 1,
      anon_sym_esi,
    ACTIONS(23), 1,
      anon_sym_declare,
    STATE(2), 7,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      aux_sym_statement_block_repeat1,
  [28] = 7,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_return,
    ACTIONS(30), 1,
      anon_sym_error,
    ACTIONS(32), 1,
      anon_sym_restart,
    ACTIONS(34), 1,
      anon_sym_esi,
    ACTIONS(36), 1,
      anon_sym_declare,
    STATE(4), 7,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      aux_sym_statement_block_repeat1,
  [56] = 7,
    ACTIONS(28), 1,
      anon_sym_return,
    ACTIONS(30), 1,
      anon_sym_error,
    ACTIONS(32), 1,
      anon_sym_restart,
    ACTIONS(34), 1,
      anon_sym_esi,
    ACTIONS(36), 1,
      anon_sym_declare,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(2), 7,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      sym_declare_statement,
      aux_sym_statement_block_repeat1,
  [84] = 2,
    STATE(41), 1,
      sym_type,
    ACTIONS(40), 10,
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
  [100] = 1,
    ACTIONS(42), 10,
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
  [113] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_sub,
    ACTIONS(49), 1,
      anon_sym_include,
    STATE(7), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [129] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(7), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [145] = 1,
    ACTIONS(54), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [154] = 1,
    ACTIONS(56), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [163] = 1,
    ACTIONS(58), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [172] = 1,
    ACTIONS(60), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [181] = 1,
    ACTIONS(62), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [190] = 2,
    STATE(32), 1,
      sym_action,
    ACTIONS(64), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [201] = 1,
    ACTIONS(66), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [210] = 1,
    ACTIONS(68), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [219] = 1,
    ACTIONS(70), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
      anon_sym_declare,
  [228] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [234] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [240] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [246] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [252] = 3,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_string,
  [262] = 2,
    ACTIONS(84), 1,
      anon_sym_var_DOT,
    STATE(5), 1,
      sym_user_defined_variable,
  [269] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [276] = 2,
    ACTIONS(90), 1,
      sym_status_code,
    ACTIONS(92), 1,
      anon_sym_SEMI,
  [283] = 2,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [290] = 2,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_statement_block,
  [297] = 1,
    ACTIONS(96), 1,
      anon_sym_SEMI,
  [301] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [305] = 1,
    ACTIONS(100), 1,
      sym_identifier,
  [309] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [313] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [317] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [321] = 1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [325] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [329] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [333] = 1,
    ACTIONS(114), 1,
      anon_sym_SEMI,
  [337] = 1,
    ACTIONS(116), 1,
      sym_declare_scope,
  [341] = 1,
    ACTIONS(118), 1,
      anon_sym_SEMI,
  [345] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [349] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [353] = 1,
    ACTIONS(124), 1,
      sym_string_fragment,
  [357] = 1,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 201,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 219,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 240,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 252,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 283,
  [SMALL_STATE(27)] = 290,
  [SMALL_STATE(28)] = 297,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 305,
  [SMALL_STATE(31)] = 309,
  [SMALL_STATE(32)] = 313,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 321,
  [SMALL_STATE(35)] = 325,
  [SMALL_STATE(36)] = 329,
  [SMALL_STATE(37)] = 333,
  [SMALL_STATE(38)] = 337,
  [SMALL_STATE(39)] = 341,
  [SMALL_STATE(40)] = 345,
  [SMALL_STATE(41)] = 349,
  [SMALL_STATE(42)] = 353,
  [SMALL_STATE(43)] = 357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(25),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(28),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(38),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_variable, 2, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 5, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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

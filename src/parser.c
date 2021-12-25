#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_include = 13,
  anon_sym_SEMI = 14,
  anon_sym_return = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_error = 18,
  anon_sym_restart = 19,
  sym_program = 20,
  sym__definition = 21,
  sym_subroutine = 22,
  sym_string = 23,
  sym_action = 24,
  sym_statement_block = 25,
  sym__statement = 26,
  sym_include_statement = 27,
  sym_return_statement = 28,
  sym_error_statement = 29,
  sym_restart_statement = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_statement_block_repeat1 = 32,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_error] = "error",
  [anon_sym_restart] = "restart",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_action] = "action",
  [sym_statement_block] = "statement_block",
  [sym__statement] = "_statement",
  [sym_include_statement] = "include_statement",
  [sym_return_statement] = "return_statement",
  [sym_error_statement] = "error_statement",
  [sym_restart_statement] = "restart_statement",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_restart] = anon_sym_restart,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_action] = sym_action,
  [sym_statement_block] = sym_statement_block,
  [sym__statement] = sym__statement,
  [sym_include_statement] = sym_include_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_restart_statement] = sym_restart_statement,
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
  field_source = 3,
  field_status = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_message] = "message",
  [field_name] = "name",
  [field_source] = "source",
  [field_status] = "status",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
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
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_restart);
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
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(33),
    [sym__definition] = STATE(5),
    [sym_subroutine] = STATE(5),
    [sym_include_statement] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(14), 1,
      anon_sym_error,
    ACTIONS(17), 1,
      anon_sym_restart,
    STATE(2), 5,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      aux_sym_statement_block_repeat1,
  [20] = 5,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_return,
    ACTIONS(24), 1,
      anon_sym_error,
    ACTIONS(26), 1,
      anon_sym_restart,
    STATE(4), 5,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      aux_sym_statement_block_repeat1,
  [40] = 5,
    ACTIONS(22), 1,
      anon_sym_return,
    ACTIONS(24), 1,
      anon_sym_error,
    ACTIONS(26), 1,
      anon_sym_restart,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(2), 5,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      aux_sym_statement_block_repeat1,
  [60] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [76] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_sub,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(6), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [92] = 2,
    STATE(30), 1,
      sym_action,
    ACTIONS(40), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [103] = 1,
    ACTIONS(42), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [110] = 1,
    ACTIONS(44), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [117] = 1,
    ACTIONS(46), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [124] = 1,
    ACTIONS(48), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [131] = 1,
    ACTIONS(50), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [138] = 1,
    ACTIONS(52), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
  [145] = 1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [151] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [157] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [163] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [169] = 3,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_string,
  [179] = 2,
    ACTIONS(66), 1,
      sym_status_code,
    ACTIONS(68), 1,
      anon_sym_SEMI,
  [186] = 2,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
  [193] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_statement_block,
  [200] = 2,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [207] = 1,
    ACTIONS(76), 1,
      anon_sym_SEMI,
  [211] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [215] = 1,
    ACTIONS(80), 1,
      anon_sym_SEMI,
  [219] = 1,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
  [223] = 1,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [227] = 1,
    ACTIONS(86), 1,
      sym_string_fragment,
  [231] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [235] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [239] = 1,
    ACTIONS(92), 1,
      anon_sym_SEMI,
  [243] = 1,
    ACTIONS(94), 1,
      anon_sym_SEMI,
  [247] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 145,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 163,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 186,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 207,
  [SMALL_STATE(24)] = 211,
  [SMALL_STATE(25)] = 215,
  [SMALL_STATE(26)] = 219,
  [SMALL_STATE(27)] = 223,
  [SMALL_STATE(28)] = 227,
  [SMALL_STATE(29)] = 231,
  [SMALL_STATE(30)] = 235,
  [SMALL_STATE(31)] = 239,
  [SMALL_STATE(32)] = 243,
  [SMALL_STATE(33)] = 247,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(20),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(19),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(25),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

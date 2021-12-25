#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_esi = 20,
  sym_program = 21,
  sym__definition = 22,
  sym_subroutine = 23,
  sym_string = 24,
  sym_action = 25,
  sym_statement_block = 26,
  sym__statement = 27,
  sym_include_statement = 28,
  sym_return_statement = 29,
  sym_error_statement = 30,
  sym_restart_statement = 31,
  sym_esi_statement = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_statement_block_repeat1 = 34,
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
  [anon_sym_esi] = "esi",
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
  [sym_esi_statement] = "esi_statement",
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
  [anon_sym_esi] = anon_sym_esi,
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
  [sym_esi_statement] = sym_esi_statement,
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
  [anon_sym_esi] = {
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
  [sym_esi_statement] = {
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
      if (eof) ADVANCE(52);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_esi);
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
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [anon_sym_esi] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(35),
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
  [0] = 6,
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
    STATE(3), 6,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      aux_sym_statement_block_repeat1,
  [24] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(24), 1,
      anon_sym_error,
    ACTIONS(27), 1,
      anon_sym_restart,
    ACTIONS(30), 1,
      anon_sym_esi,
    STATE(3), 6,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      aux_sym_statement_block_repeat1,
  [48] = 6,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_error,
    ACTIONS(15), 1,
      anon_sym_restart,
    ACTIONS(17), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(2), 6,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      sym_restart_statement,
      sym_esi_statement,
      aux_sym_statement_block_repeat1,
  [72] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [88] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_sub,
    ACTIONS(42), 1,
      anon_sym_include,
    STATE(6), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [104] = 2,
    STATE(32), 1,
      sym_action,
    ACTIONS(45), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [115] = 1,
    ACTIONS(47), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [123] = 1,
    ACTIONS(49), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [131] = 1,
    ACTIONS(51), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [139] = 1,
    ACTIONS(53), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [147] = 1,
    ACTIONS(55), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [155] = 1,
    ACTIONS(57), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [163] = 1,
    ACTIONS(59), 5,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_esi,
  [171] = 1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [177] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [183] = 3,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_string,
  [193] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [199] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [205] = 2,
    ACTIONS(73), 1,
      sym_status_code,
    ACTIONS(75), 1,
      anon_sym_SEMI,
  [212] = 2,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
  [219] = 2,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_statement_block,
  [226] = 2,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [233] = 1,
    ACTIONS(83), 1,
      anon_sym_SEMI,
  [237] = 1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [241] = 1,
    ACTIONS(87), 1,
      sym_identifier,
  [245] = 1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [249] = 1,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
  [253] = 1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [257] = 1,
    ACTIONS(95), 1,
      sym_string_fragment,
  [261] = 1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [265] = 1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [269] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [273] = 1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [277] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 237,
  [SMALL_STATE(26)] = 241,
  [SMALL_STATE(27)] = 245,
  [SMALL_STATE(28)] = 249,
  [SMALL_STATE(29)] = 253,
  [SMALL_STATE(30)] = 257,
  [SMALL_STATE(31)] = 261,
  [SMALL_STATE(32)] = 265,
  [SMALL_STATE(33)] = 269,
  [SMALL_STATE(34)] = 273,
  [SMALL_STATE(35)] = 277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(24),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

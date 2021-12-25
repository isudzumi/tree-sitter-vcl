#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  sym_program = 19,
  sym__definition = 20,
  sym_subroutine = 21,
  sym_string = 22,
  sym_action = 23,
  sym_statement_block = 24,
  sym__statement = 25,
  sym_include_statement = 26,
  sym_return_statement = 27,
  sym_error_statement = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_statement_block_repeat1 = 30,
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
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_fragment);
      if (sym_string_fragment_character_set_1(lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_error);
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
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_program] = STATE(31),
    [sym__definition] = STATE(2),
    [sym_subroutine] = STATE(2),
    [sym_include_statement] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(16), 1,
      anon_sym_error,
    STATE(3), 4,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      aux_sym_statement_block_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_sub,
    ACTIONS(24), 1,
      anon_sym_include,
    STATE(4), 4,
      sym__definition,
      sym_subroutine,
      sym_include_statement,
      aux_sym_program_repeat1,
  [48] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_error,
    STATE(6), 4,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      aux_sym_statement_block_repeat1,
  [64] = 4,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(3), 4,
      sym__statement,
      sym_return_statement,
      sym_error_statement,
      aux_sym_statement_block_repeat1,
  [80] = 2,
    STATE(28), 1,
      sym_action,
    ACTIONS(35), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [91] = 1,
    ACTIONS(37), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
  [97] = 1,
    ACTIONS(39), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
  [103] = 1,
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
  [109] = 1,
    ACTIONS(43), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
  [115] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [121] = 1,
    ACTIONS(47), 3,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_error,
  [127] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [133] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_string,
  [143] = 1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [149] = 1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [155] = 2,
    ACTIONS(59), 1,
      sym_status_code,
    ACTIONS(61), 1,
      anon_sym_SEMI,
  [162] = 2,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
  [169] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_statement_block,
  [176] = 2,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_string,
  [183] = 1,
    ACTIONS(69), 1,
      anon_sym_SEMI,
  [187] = 1,
    ACTIONS(71), 1,
      sym_identifier,
  [191] = 1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
  [195] = 1,
    ACTIONS(75), 1,
      anon_sym_SEMI,
  [199] = 1,
    ACTIONS(77), 1,
      sym_string_fragment,
  [203] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [207] = 1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
  [211] = 1,
    ACTIONS(83), 1,
      anon_sym_SEMI,
  [215] = 1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [219] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 176,
  [SMALL_STATE(22)] = 183,
  [SMALL_STATE(23)] = 187,
  [SMALL_STATE(24)] = 191,
  [SMALL_STATE(25)] = 195,
  [SMALL_STATE(26)] = 199,
  [SMALL_STATE(27)] = 203,
  [SMALL_STATE(28)] = 207,
  [SMALL_STATE(29)] = 211,
  [SMALL_STATE(30)] = 215,
  [SMALL_STATE(31)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(19),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 4, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

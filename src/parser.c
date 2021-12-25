#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_sub = 1,
  sym__identifier = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_vcl_fetch = 4,
  anon_sym_vcl_hash = 5,
  anon_sym_vcl_hit = 6,
  anon_sym_vcl_pass = 7,
  anon_sym_vcl_purge = 8,
  anon_sym_vcl_pipe = 9,
  anon_sym_vcl_miss = 10,
  anon_sym_vcl_deliver = 11,
  anon_sym_vcl_error = 12,
  anon_sym_pass = 13,
  anon_sym_hit_for_pass = 14,
  anon_sym_lookup = 15,
  anon_sym_pipe = 16,
  anon_sym_deliver = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_include = 20,
  anon_sym_SEMI = 21,
  anon_sym_return = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_program = 25,
  sym__statement = 26,
  sym_subroutine = 27,
  sym_string = 28,
  sym_builtin_action = 29,
  sym_action = 30,
  sym_statement_block = 31,
  sym_include = 32,
  sym_return_statement = 33,
  aux_sym_program_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
  [sym__identifier] = "_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_vcl_fetch] = "vcl_fetch",
  [anon_sym_vcl_hash] = "vcl_hash",
  [anon_sym_vcl_hit] = "vcl_hit",
  [anon_sym_vcl_pass] = "vcl_pass",
  [anon_sym_vcl_purge] = "vcl_purge",
  [anon_sym_vcl_pipe] = "vcl_pipe",
  [anon_sym_vcl_miss] = "vcl_miss",
  [anon_sym_vcl_deliver] = "vcl_deliver",
  [anon_sym_vcl_error] = "vcl_error",
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
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_builtin_action] = "builtin_action",
  [sym_action] = "action",
  [sym_statement_block] = "statement_block",
  [sym_include] = "include",
  [sym_return_statement] = "return_statement",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
  [sym__identifier] = sym__identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_vcl_fetch] = anon_sym_vcl_fetch,
  [anon_sym_vcl_hash] = anon_sym_vcl_hash,
  [anon_sym_vcl_hit] = anon_sym_vcl_hit,
  [anon_sym_vcl_pass] = anon_sym_vcl_pass,
  [anon_sym_vcl_purge] = anon_sym_vcl_purge,
  [anon_sym_vcl_pipe] = anon_sym_vcl_pipe,
  [anon_sym_vcl_miss] = anon_sym_vcl_miss,
  [anon_sym_vcl_deliver] = anon_sym_vcl_deliver,
  [anon_sym_vcl_error] = anon_sym_vcl_error,
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
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_builtin_action] = sym_builtin_action,
  [sym_action] = sym_action,
  [sym_statement_block] = sym_statement_block,
  [sym_include] = sym_include,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_fetch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_hit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_purge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_pipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_miss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcl_error] = {
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
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
  [sym_builtin_action] = {
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
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_filename = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_filename] = "filename",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_filename, 1},
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
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_vcl_fetch);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_vcl_hash);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_vcl_hit);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_vcl_pass);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_vcl_purge);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_vcl_pipe);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_vcl_miss);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_vcl_deliver);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_vcl_error);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_hit_for_pass);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pipe);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_vcl_fetch] = ACTIONS(1),
    [anon_sym_vcl_hash] = ACTIONS(1),
    [anon_sym_vcl_hit] = ACTIONS(1),
    [anon_sym_vcl_pass] = ACTIONS(1),
    [anon_sym_vcl_purge] = ACTIONS(1),
    [anon_sym_vcl_pipe] = ACTIONS(1),
    [anon_sym_vcl_miss] = ACTIONS(1),
    [anon_sym_vcl_deliver] = ACTIONS(1),
    [anon_sym_vcl_error] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(16),
    [sym__statement] = STATE(3),
    [sym_subroutine] = STATE(3),
    [sym_include] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(12), 1,
      sym_builtin_action,
    ACTIONS(9), 9,
      anon_sym_vcl_fetch,
      anon_sym_vcl_hash,
      anon_sym_vcl_hit,
      anon_sym_vcl_pass,
      anon_sym_vcl_purge,
      anon_sym_vcl_pipe,
      anon_sym_vcl_miss,
      anon_sym_vcl_deliver,
      anon_sym_vcl_error,
  [15] = 4,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__statement,
      sym_subroutine,
      sym_include,
      aux_sym_program_repeat1,
  [31] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_sub,
    ACTIONS(18), 1,
      anon_sym_include,
    STATE(4), 4,
      sym__statement,
      sym_subroutine,
      sym_include,
      aux_sym_program_repeat1,
  [47] = 2,
    STATE(23), 1,
      sym_action,
    ACTIONS(21), 5,
      anon_sym_pass,
      anon_sym_hit_for_pass,
      anon_sym_lookup,
      anon_sym_pipe,
      anon_sym_deliver,
  [58] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [64] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [70] = 3,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    STATE(17), 1,
      sym_return_statement,
  [80] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [86] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [92] = 2,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string,
  [99] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_statement_block,
  [106] = 2,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
  [113] = 1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
  [117] = 1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
  [121] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [125] = 1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [129] = 1,
    ACTIONS(51), 1,
      anon_sym_SEMI,
  [133] = 1,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
  [137] = 1,
    ACTIONS(55), 1,
      anon_sym_SEMI,
  [141] = 1,
    ACTIONS(57), 1,
      sym__identifier,
  [145] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [149] = 1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [153] = 1,
    ACTIONS(63), 1,
      anon_sym_SEMI,
  [157] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 99,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 133,
  [SMALL_STATE(20)] = 137,
  [SMALL_STATE(21)] = 141,
  [SMALL_STATE(22)] = 145,
  [SMALL_STATE(23)] = 149,
  [SMALL_STATE(24)] = 153,
  [SMALL_STATE(25)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_action, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5),
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

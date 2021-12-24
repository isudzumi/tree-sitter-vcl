#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_include = 15,
  anon_sym_SEMI = 16,
  sym_program = 17,
  sym__statement = 18,
  sym_subroutine = 19,
  sym_string = 20,
  sym_builtin_action = 21,
  sym_statement_block = 22,
  sym_include = 23,
  aux_sym_program_repeat1 = 24,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_subroutine] = "subroutine",
  [sym_string] = "string",
  [sym_builtin_action] = "builtin_action",
  [sym_statement_block] = "statement_block",
  [sym_include] = "include",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_subroutine] = sym_subroutine,
  [sym_string] = sym_string,
  [sym_builtin_action] = sym_builtin_action,
  [sym_statement_block] = sym_statement_block,
  [sym_include] = sym_include,
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
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_vcl_fetch);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_vcl_hash);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_vcl_hit);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_vcl_pass);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_vcl_purge);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_vcl_pipe);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_vcl_miss);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_vcl_deliver);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_vcl_error);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(10),
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
    STATE(9), 1,
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
  [47] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [53] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [59] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_sub,
      anon_sym_include,
  [65] = 2,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
  [72] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_statement_block,
  [79] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [83] = 1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
  [87] = 1,
    ACTIONS(35), 1,
      sym__identifier,
  [91] = 1,
    ACTIONS(37), 1,
      anon_sym_SEMI,
  [95] = 1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
  [99] = 1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
  [103] = 1,
    ACTIONS(43), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 87,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 95,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 103,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_action, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
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

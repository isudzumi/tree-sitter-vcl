#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_sub = 1,
  anon_sym_vcl_fetch = 2,
  anon_sym_vcl_hash = 3,
  anon_sym_vcl_hit = 4,
  anon_sym_vcl_pass = 5,
  anon_sym_vcl_purge = 6,
  anon_sym_vcl_pipe = 7,
  anon_sym_vcl_miss = 8,
  anon_sym_vcl_deliver = 9,
  anon_sym_vcl_error = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_program = 13,
  sym_subroutine = 14,
  sym_builtin_action = 15,
  sym_statement_block = 16,
  aux_sym_program_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
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
  [sym_program] = "program",
  [sym_subroutine] = "subroutine",
  [sym_builtin_action] = "builtin_action",
  [sym_statement_block] = "statement_block",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
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
  [sym_program] = sym_program,
  [sym_subroutine] = sym_subroutine,
  [sym_builtin_action] = sym_builtin_action,
  [sym_statement_block] = sym_statement_block,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
      if (eof) ADVANCE(36);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_vcl_fetch);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_vcl_hash);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_vcl_hit);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_vcl_pass);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_vcl_purge);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_vcl_pipe);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_vcl_miss);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_vcl_deliver);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_vcl_error);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym_subroutine] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
  },
  [2] = {
    [sym_builtin_action] = STATE(5),
    [anon_sym_vcl_fetch] = ACTIONS(7),
    [anon_sym_vcl_hash] = ACTIONS(7),
    [anon_sym_vcl_hit] = ACTIONS(7),
    [anon_sym_vcl_pass] = ACTIONS(7),
    [anon_sym_vcl_purge] = ACTIONS(7),
    [anon_sym_vcl_pipe] = ACTIONS(7),
    [anon_sym_vcl_miss] = ACTIONS(7),
    [anon_sym_vcl_deliver] = ACTIONS(7),
    [anon_sym_vcl_error] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_subroutine,
      aux_sym_program_repeat1,
  [11] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_sub,
    STATE(4), 2,
      sym_subroutine,
      aux_sym_program_repeat1,
  [22] = 2,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_statement_block,
  [29] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_sub,
  [34] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_sub,
  [39] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [43] = 1,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
  [47] = 1,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 11,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 29,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 47,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 3, .production_id = 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_action, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  aux_sym__semicolon_token1 = 2,
  anon_sym_COMMA = 3,
  anon_sym_SQUOTE = 4,
  aux_sym_string_single_token1 = 5,
  sym_int_literal = 6,
  sym_float_literal = 7,
  sym_source_file = 8,
  sym__semicolon = 9,
  sym__expression_list_semicolon = 10,
  sym__expression = 11,
  sym__literal = 12,
  sym__string_literal = 13,
  sym_string_single = 14,
  sym__number_literal = 15,
  aux_sym__semicolon_repeat1 = 16,
  aux_sym__expression_list_semicolon_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__semicolon_token1] = "_semicolon_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_single_token1] = "string_single_token1",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym__semicolon] = "_semicolon",
  [sym__expression_list_semicolon] = "_expression_list_semicolon",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__string_literal] = "_string_literal",
  [sym_string_single] = "string_single",
  [sym__number_literal] = "_number_literal",
  [aux_sym__semicolon_repeat1] = "_semicolon_repeat1",
  [aux_sym__expression_list_semicolon_repeat1] = "_expression_list_semicolon_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__semicolon_token1] = aux_sym__semicolon_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_single_token1] = aux_sym_string_single_token1,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym__semicolon] = sym__semicolon,
  [sym__expression_list_semicolon] = sym__expression_list_semicolon,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym__string_literal] = sym__string_literal,
  [sym_string_single] = sym_string_single,
  [sym__number_literal] = sym__number_literal,
  [aux_sym__semicolon_repeat1] = aux_sym__semicolon_repeat1,
  [aux_sym__expression_list_semicolon_repeat1] = aux_sym__expression_list_semicolon_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__semicolon_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_single_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_list_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_single] = {
    .visible = true,
    .named = true,
  },
  [sym__number_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__semicolon_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_list_semicolon_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ';') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(10);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ';') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__semicolon_token1);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__expression_list_semicolon] = STATE(14),
    [sym__expression] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__string_literal] = STATE(5),
    [sym_string_single] = STATE(5),
    [sym__number_literal] = STATE(5),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(11), 5,
      sym__expression,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym__number_literal,
  [18] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(11), 5,
      sym__expression,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym__number_literal,
  [36] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(11), 5,
      sym__expression,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym__number_literal,
  [51] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      aux_sym__semicolon_token1,
    STATE(2), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(7), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [70] = 4,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      sym_int_literal,
      sym_float_literal,
  [85] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      aux_sym__semicolon_token1,
    STATE(3), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(9), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [104] = 4,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(32), 2,
      sym_int_literal,
      sym_float_literal,
  [119] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      aux_sym__semicolon_token1,
    STATE(4), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(9), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [138] = 2,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
  [146] = 2,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
  [154] = 1,
    ACTIONS(48), 1,
      aux_sym_string_single_token1,
  [158] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [166] = 1,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semicolon, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semicolon, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 3, 0, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single, 3, 0, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sol(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

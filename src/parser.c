#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  aux_sym_header_entry_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_AT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_foo = 7,
  sym_identifier = 8,
  sym_source_file = 9,
  sym_block = 10,
  sym_header = 11,
  sym_header_entry = 12,
  sym_header_param = 13,
  sym_section = 14,
  sym_section_name = 15,
  sym_section_entry = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_header_repeat1 = 18,
  aux_sym_section_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_header_entry_token1] = "header_entry_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_foo] = "foo",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_header] = "header",
  [sym_header_entry] = "header_entry",
  [sym_header_param] = "header_param",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_section_entry] = "section_entry",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_header_entry_token1] = aux_sym_header_entry_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_foo] = anon_sym_foo,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_header] = sym_header,
  [sym_header_entry] = sym_header_entry,
  [sym_header_param] = sym_header_param,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_section_entry] = sym_section_entry,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foo] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_header_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_header_param] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_foo);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
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
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_foo] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_block] = STATE(3),
    [sym_header] = STATE(20),
    [sym_header_entry] = STATE(8),
    [sym_header_param] = STATE(19),
    [sym_section] = STATE(12),
    [sym_section_name] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_header_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_section_name,
    STATE(12), 1,
      sym_section,
    STATE(2), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [17] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_section_name,
    STATE(12), 1,
      sym_section,
    STATE(2), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [34] = 3,
    ACTIONS(20), 1,
      anon_sym_foo,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_section_entry,
      aux_sym_section_repeat1,
  [46] = 3,
    ACTIONS(24), 1,
      anon_sym_foo,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_section_entry,
      aux_sym_section_repeat1,
  [58] = 4,
    ACTIONS(27), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_header_param,
    STATE(6), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [72] = 3,
    ACTIONS(20), 1,
      anon_sym_foo,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 2,
      sym_section_entry,
      aux_sym_section_repeat1,
  [84] = 4,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      sym_header_param,
    STATE(6), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [98] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_foo,
  [104] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_foo,
  [110] = 1,
    ACTIONS(40), 2,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT,
  [115] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [120] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [128] = 1,
    ACTIONS(48), 1,
      anon_sym_LF,
  [132] = 1,
    ACTIONS(50), 1,
      aux_sym_header_entry_token1,
  [136] = 1,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
  [140] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(54), 1,
      aux_sym_header_entry_token1,
  [148] = 1,
    ACTIONS(56), 1,
      anon_sym_DASH_DASH_DASH,
  [152] = 1,
    ACTIONS(58), 1,
      sym_identifier,
  [156] = 1,
    ACTIONS(60), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 140,
  [SMALL_STATE(19)] = 144,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 152,
  [SMALL_STATE(22)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3, 0, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_entry, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_entry, 3, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_param, 2, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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

TS_PUBLIC const TSLanguage *tree_sitter_aster(void) {
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

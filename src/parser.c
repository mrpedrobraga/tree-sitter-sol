#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  aux_sym__semicolon_token1 = 2,
  anon_sym_COMMA = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_GT = 6,
  sym_text_raw_fragment = 7,
  anon_sym_BSLASH = 8,
  aux_sym_text_escape_fragment_token1 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_string_single_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_double_token1 = 15,
  sym_int_literal = 16,
  sym_float_literal = 17,
  sym_source_file = 18,
  sym__semicolon = 19,
  sym__expression_list_semicolon = 20,
  sym__expression = 21,
  sym_dialog = 22,
  sym__dialog_prefix = 23,
  aux_sym__dialog_content = 24,
  sym_text_escape_fragment = 25,
  sym_text_expr_fragment = 26,
  sym__literal = 27,
  sym__string_literal = 28,
  sym_string_single = 29,
  sym_string_double = 30,
  sym__number_literal = 31,
  aux_sym__semicolon_repeat1 = 32,
  aux_sym__expression_list_semicolon_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym__semicolon_token1] = "_semicolon_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [sym_text_raw_fragment] = "text_raw_fragment",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_text_escape_fragment_token1] = "text_escape_fragment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_single_token1] = "string_single_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_token1] = "string_double_token1",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym__semicolon] = "_semicolon",
  [sym__expression_list_semicolon] = "_expression_list_semicolon",
  [sym__expression] = "_expression",
  [sym_dialog] = "dialog",
  [sym__dialog_prefix] = "_dialog_prefix",
  [aux_sym__dialog_content] = "_dialog_content",
  [sym_text_escape_fragment] = "text_escape_fragment",
  [sym_text_expr_fragment] = "text_expr_fragment",
  [sym__literal] = "_literal",
  [sym__string_literal] = "_string_literal",
  [sym_string_single] = "string_single",
  [sym_string_double] = "string_double",
  [sym__number_literal] = "_number_literal",
  [aux_sym__semicolon_repeat1] = "_semicolon_repeat1",
  [aux_sym__expression_list_semicolon_repeat1] = "_expression_list_semicolon_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__semicolon_token1] = aux_sym__semicolon_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [sym_text_raw_fragment] = sym_text_raw_fragment,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_text_escape_fragment_token1] = aux_sym_text_escape_fragment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_single_token1] = aux_sym_string_single_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_double_token1] = aux_sym_string_double_token1,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym__semicolon] = sym__semicolon,
  [sym__expression_list_semicolon] = sym__expression_list_semicolon,
  [sym__expression] = sym__expression,
  [sym_dialog] = sym_dialog,
  [sym__dialog_prefix] = sym__dialog_prefix,
  [aux_sym__dialog_content] = aux_sym__dialog_content,
  [sym_text_escape_fragment] = sym_text_escape_fragment,
  [sym_text_expr_fragment] = sym_text_expr_fragment,
  [sym__literal] = sym__literal,
  [sym__string_literal] = sym__string_literal,
  [sym_string_single] = sym_string_single,
  [sym_string_double] = sym_string_double,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_text_raw_fragment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_escape_fragment_token1] = {
    .visible = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_single_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_double_token1] = {
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
  [sym_dialog] = {
    .visible = true,
    .named = true,
  },
  [sym__dialog_prefix] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__dialog_content] = {
    .visible = false,
    .named = false,
  },
  [sym_text_escape_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_text_expr_fragment] = {
    .visible = true,
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
  [sym_string_double] = {
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
  field_prefix = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_prefix] = "prefix",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_prefix, 0},
  [1] =
    {field_content, 1},
    {field_prefix, 0, .inherited = true},
  [3] =
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 28,
        '\'', 25,
        '*', 15,
        ',', 13,
        '-', 14,
        ';', 10,
        '>', 16,
        '\\', 20,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(18);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(18);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 5:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\f' ||
          lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\f' ||
          lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(19);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 28,
        '\'', 25,
        '*', 15,
        ',', 13,
        '-', 14,
        ';', 10,
        '>', 16,
        '{', 23,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__semicolon_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\f' ||
          lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__semicolon_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\n') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
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
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__expression_list_semicolon] = STATE(23),
    [sym__expression] = STATE(10),
    [sym_dialog] = STATE(10),
    [sym__dialog_prefix] = STATE(15),
    [sym__literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [sym_string_single] = STATE(10),
    [sym_string_double] = STATE(10),
    [sym__number_literal] = STATE(10),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_int_literal] = ACTIONS(9),
    [sym_float_literal] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__dialog_prefix,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(18), 7,
      sym__expression,
      sym_dialog,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
      sym__number_literal,
  [32] = 7,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__dialog_prefix,
    ACTIONS(13), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(18), 7,
      sym__expression,
      sym_dialog,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
      sym__number_literal,
  [64] = 7,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__dialog_prefix,
    STATE(25), 1,
      sym__expression_list_semicolon,
    ACTIONS(9), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(10), 7,
      sym__expression,
      sym_dialog,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
      sym__number_literal,
  [95] = 6,
    ACTIONS(5), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__dialog_prefix,
    ACTIONS(13), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(18), 7,
      sym__expression,
      sym_dialog,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
      sym__number_literal,
  [123] = 4,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [143] = 4,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(28), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [163] = 6,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_text_raw_fragment,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 3,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
    STATE(8), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [186] = 6,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_text_raw_fragment,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 3,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
    STATE(8), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [209] = 7,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      aux_sym__semicolon_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(11), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [231] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      aux_sym__semicolon_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(12), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [253] = 7,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      aux_sym__semicolon_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(12), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [275] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(77), 5,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [287] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [299] = 4,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_text_raw_fragment,
    STATE(9), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [314] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(87), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [323] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(91), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [332] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [341] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 2,
      sym_text_raw_fragment,
      anon_sym_BSLASH,
  [349] = 1,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
  [353] = 1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
  [357] = 1,
    ACTIONS(101), 1,
      aux_sym_text_escape_fragment_token1,
  [361] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [365] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [369] = 1,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
  [373] = 1,
    ACTIONS(109), 1,
      aux_sym_string_double_token1,
  [377] = 1,
    ACTIONS(111), 1,
      aux_sym_string_single_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 287,
  [SMALL_STATE(15)] = 299,
  [SMALL_STATE(16)] = 314,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 349,
  [SMALL_STATE(21)] = 353,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semicolon, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semicolon, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 2, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 2, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 3, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single, 3, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 3, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double, 3, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  aux_sym_header_entry_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_AT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_0 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_GT = 12,
  aux_sym_text_text_fragment_token1 = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_markup_close_tag = 16,
  sym_identifier = 17,
  sym_source_file = 18,
  sym_block = 19,
  sym_header = 20,
  sym_header_entry = 21,
  sym_header_param = 22,
  sym_section = 23,
  sym_section_name = 24,
  sym__section_entry = 25,
  sym_expression = 26,
  sym_grouping = 27,
  sym_symbol_ref = 28,
  sym_dialog = 29,
  sym_text_content = 30,
  sym_text_text_fragment = 31,
  sym_text_escape_fragment = 32,
  sym_text_expr_fragment = 33,
  sym_markup_open_tag = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_header_repeat1 = 36,
  aux_sym_section_repeat1 = 37,
  aux_sym_text_content_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_header_entry_token1] = "header_entry_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_0] = "0",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [aux_sym_text_text_fragment_token1] = "text_text_fragment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_markup_close_tag] = "markup_close_tag",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_header] = "header",
  [sym_header_entry] = "header_entry",
  [sym_header_param] = "header_param",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym__section_entry] = "_section_entry",
  [sym_expression] = "expression",
  [sym_grouping] = "grouping",
  [sym_symbol_ref] = "symbol_ref",
  [sym_dialog] = "dialog",
  [sym_text_content] = "text_content",
  [sym_text_text_fragment] = "text_text_fragment",
  [sym_text_escape_fragment] = "text_escape_fragment",
  [sym_text_expr_fragment] = "text_expr_fragment",
  [sym_markup_open_tag] = "markup_open_tag",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_text_content_repeat1] = "text_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_header_entry_token1] = aux_sym_header_entry_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_text_text_fragment_token1] = aux_sym_text_text_fragment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_markup_close_tag] = sym_markup_close_tag,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_header] = sym_header,
  [sym_header_entry] = sym_header_entry,
  [sym_header_param] = sym_header_param,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym__section_entry] = sym__section_entry,
  [sym_expression] = sym_expression,
  [sym_grouping] = sym_grouping,
  [sym_symbol_ref] = sym_symbol_ref,
  [sym_dialog] = sym_dialog,
  [sym_text_content] = sym_text_content,
  [sym_text_text_fragment] = sym_text_text_fragment,
  [sym_text_escape_fragment] = sym_text_escape_fragment,
  [sym_text_expr_fragment] = sym_text_expr_fragment,
  [sym_markup_open_tag] = sym_markup_open_tag,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_text_content_repeat1] = aux_sym_text_content_repeat1,
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
  [anon_sym_0] = {
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
  [aux_sym_text_text_fragment_token1] = {
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
  [sym_markup_close_tag] = {
    .visible = true,
    .named = true,
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
  [sym__section_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_dialog] = {
    .visible = true,
    .named = true,
  },
  [sym_text_content] = {
    .visible = true,
    .named = true,
  },
  [sym_text_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_text_escape_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_text_expr_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_markup_open_tag] = {
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
  [aux_sym_text_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_blocks = 1,
  field_content = 2,
  field_expression = 3,
  field_header = 4,
  field_name = 5,
  field_prefix = 6,
  field_tag_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blocks] = "blocks",
  [field_content] = "content",
  [field_expression] = "expression",
  [field_header] = "header",
  [field_name] = "name",
  [field_prefix] = "prefix",
  [field_tag_name] = "tag_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header, 0},
  [1] =
    {field_blocks, 0},
  [2] =
    {field_blocks, 1},
    {field_header, 0},
  [4] =
    {field_name, 1},
  [5] =
    {field_header, 0},
    {field_header, 1},
  [7] =
    {field_blocks, 2},
    {field_header, 0},
    {field_header, 1},
  [10] =
    {field_content, 1},
  [11] =
    {field_content, 1},
    {field_prefix, 0},
  [13] =
    {field_tag_name, 1},
  [14] =
    {field_expression, 1},
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
  [10] = 8,
  [11] = 11,
  [12] = 9,
  [13] = 11,
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
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 28,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 38,
  [50] = 40,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '(', 20,
        ')', 21,
        '*', 23,
        '-', 22,
        '0', 19,
        '>', 24,
        '@', 15,
        '[', 17,
        ']', 18,
        '{', 28,
        '}', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(30);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_markup_close_tag);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
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
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_markup_close_tag] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_block] = STATE(24),
    [sym_header] = STATE(48),
    [sym_header_entry] = STATE(27),
    [sym_header_param] = STATE(47),
    [sym_section] = STATE(36),
    [sym_section_name] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym_header_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(2), 4,
      sym__section_entry,
      sym_expression,
      sym_dialog,
      aux_sym_section_repeat1,
  [29] = 7,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(4), 4,
      sym__section_entry,
      sym_expression,
      sym_dialog,
      aux_sym_section_repeat1,
  [58] = 7,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(2), 4,
      sym__section_entry,
      sym_expression,
      sym_dialog,
      aux_sym_section_repeat1,
  [87] = 1,
    ACTIONS(37), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_0,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [100] = 1,
    ACTIONS(39), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_0,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [113] = 1,
    ACTIONS(41), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_0,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      sym_identifier,
  [126] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_markup_open_tag,
    STATE(50), 1,
      sym_text_content,
    STATE(12), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [148] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_markup_open_tag,
    STATE(13), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [170] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_markup_open_tag,
    STATE(40), 1,
      sym_text_content,
    STATE(12), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [192] = 6,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_markup_close_tag,
    STATE(8), 1,
      sym_markup_open_tag,
    STATE(11), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [214] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_markup_close_tag,
    STATE(8), 1,
      sym_markup_open_tag,
    STATE(11), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [236] = 6,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_markup_open_tag,
    STATE(13), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [258] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      aux_sym_text_text_fragment_token1,
    STATE(10), 1,
      sym_markup_open_tag,
    STATE(41), 1,
      sym_text_content,
    STATE(9), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [280] = 1,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_0,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [291] = 1,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_0,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      sym_identifier,
  [302] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(22), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [319] = 5,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(43), 1,
      sym_expression,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
  [336] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(21), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [353] = 5,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(20), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [370] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(20), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [387] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(20), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [404] = 5,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expression,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
  [421] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_name,
    STATE(36), 1,
      sym_section,
    STATE(20), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [438] = 5,
    ACTIONS(27), 1,
      anon_sym_0,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(49), 1,
      sym_expression,
    STATE(5), 2,
      sym_grouping,
      sym_symbol_ref,
  [455] = 4,
    ACTIONS(93), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_header_param,
    STATE(26), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [469] = 4,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(98), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(47), 1,
      sym_header_param,
    STATE(26), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [483] = 1,
    ACTIONS(100), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [490] = 1,
    ACTIONS(102), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [497] = 2,
    ACTIONS(106), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(104), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [506] = 1,
    ACTIONS(104), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [513] = 2,
    ACTIONS(108), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(100), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [522] = 2,
    ACTIONS(110), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(102), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [531] = 2,
    ACTIONS(114), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(112), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [539] = 1,
    ACTIONS(116), 2,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT,
  [544] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [549] = 1,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
  [553] = 1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [557] = 1,
    ACTIONS(124), 1,
      sym_identifier,
  [561] = 1,
    ACTIONS(126), 1,
      sym_markup_close_tag,
  [565] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [569] = 1,
    ACTIONS(130), 1,
      sym_identifier,
  [573] = 1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(134), 1,
      anon_sym_LF,
  [581] = 1,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
  [585] = 1,
    ACTIONS(138), 1,
      aux_sym_header_entry_token1,
  [589] = 1,
    ACTIONS(140), 1,
      aux_sym_header_entry_token1,
  [593] = 1,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH_DASH,
  [597] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
  [601] = 1,
    ACTIONS(146), 1,
      sym_markup_close_tag,
  [605] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [609] = 1,
    ACTIONS(150), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 490,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 506,
  [SMALL_STATE(32)] = 513,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 531,
  [SMALL_STATE(35)] = 539,
  [SMALL_STATE(36)] = 544,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 585,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 597,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 605,
  [SMALL_STATE(52)] = 609,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_content, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3, 0, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 3, 0, 8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_expr_fragment, 3, 0, 10),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_escape_fragment, 3, 0, 7),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_text_fragment, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_text_fragment, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_expr_fragment, 3, 0, 10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_escape_fragment, 3, 0, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markup_open_tag, 3, 0, 9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup_open_tag, 3, 0, 9),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_entry, 3, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_param, 2, 0, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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

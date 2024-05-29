#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_POUND_POUND = 12,
  anon_sym_POUNDtodo = 13,
  anon_sym_POUND = 14,
  sym_comment_raw_fragment = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_string_single_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_double_token1 = 19,
  sym_int_literal = 20,
  sym_float_literal = 21,
  sym_source_file = 22,
  sym__semicolon = 23,
  sym__expression_list_semicolon = 24,
  sym__expression = 25,
  sym_dialog = 26,
  sym__dialog_prefix = 27,
  aux_sym__dialog_content = 28,
  sym_text_escape_fragment = 29,
  sym_text_expr_fragment = 30,
  sym__comment = 31,
  sym_doc_comment = 32,
  sym_todo_comment = 33,
  sym_inline_comment = 34,
  sym__literal = 35,
  sym__string_literal = 36,
  sym_string_single = 37,
  sym_string_double = 38,
  sym__number_literal = 39,
  aux_sym__semicolon_repeat1 = 40,
  aux_sym__expression_list_semicolon_repeat1 = 41,
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
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUNDtodo] = "#todo",
  [anon_sym_POUND] = "#",
  [sym_comment_raw_fragment] = "comment_raw_fragment",
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
  [sym__comment] = "_comment",
  [sym_doc_comment] = "doc_comment",
  [sym_todo_comment] = "todo_comment",
  [sym_inline_comment] = "inline_comment",
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
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUNDtodo] = anon_sym_POUNDtodo,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_comment_raw_fragment] = sym_comment_raw_fragment,
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
  [sym__comment] = sym__comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_todo_comment] = sym_todo_comment,
  [sym_inline_comment] = sym_inline_comment,
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
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDtodo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_raw_fragment] = {
    .visible = true,
    .named = true,
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
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
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
  field_what = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_prefix] = "prefix",
  [field_what] = "what",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_prefix, 0},
  [1] =
    {field_what, 1},
  [2] =
    {field_content, 1},
    {field_prefix, 0, .inherited = true},
  [4] =
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 35,
        '#', 29,
        '\'', 32,
        '*', 17,
        ',', 15,
        '-', 16,
        ';', 13,
        '>', 18,
        '\\', 22,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '{') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(39);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 35,
        '#', 29,
        '\'', 32,
        '*', 17,
        ',', 15,
        '-', 16,
        ';', 13,
        '>', 18,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__semicolon_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUNDtodo);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment_raw_fragment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment_raw_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(39);
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
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
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
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUNDtodo] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__expression_list_semicolon] = STATE(28),
    [sym__expression] = STATE(11),
    [sym_dialog] = STATE(11),
    [sym__dialog_prefix] = STATE(15),
    [sym__comment] = STATE(11),
    [sym_doc_comment] = STATE(11),
    [sym_todo_comment] = STATE(11),
    [sym_inline_comment] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__string_literal] = STATE(11),
    [sym_string_single] = STATE(11),
    [sym_string_double] = STATE(11),
    [sym__number_literal] = STATE(11),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(15),
  },
  [2] = {
    [sym__expression] = STATE(19),
    [sym_dialog] = STATE(19),
    [sym__dialog_prefix] = STATE(15),
    [sym__comment] = STATE(19),
    [sym_doc_comment] = STATE(19),
    [sym_todo_comment] = STATE(19),
    [sym_inline_comment] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__string_literal] = STATE(19),
    [sym_string_single] = STATE(19),
    [sym_string_double] = STATE(19),
    [sym__number_literal] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(19),
    [sym_float_literal] = ACTIONS(19),
  },
  [3] = {
    [sym__expression] = STATE(19),
    [sym_dialog] = STATE(19),
    [sym__dialog_prefix] = STATE(15),
    [sym__comment] = STATE(19),
    [sym_doc_comment] = STATE(19),
    [sym_todo_comment] = STATE(19),
    [sym_inline_comment] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__string_literal] = STATE(19),
    [sym_string_single] = STATE(19),
    [sym_string_double] = STATE(19),
    [sym__number_literal] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(19),
    [sym_float_literal] = ACTIONS(19),
  },
  [4] = {
    [sym__expression_list_semicolon] = STATE(30),
    [sym__expression] = STATE(11),
    [sym_dialog] = STATE(11),
    [sym__dialog_prefix] = STATE(15),
    [sym__comment] = STATE(11),
    [sym_doc_comment] = STATE(11),
    [sym_todo_comment] = STATE(11),
    [sym_inline_comment] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__string_literal] = STATE(11),
    [sym_string_single] = STATE(11),
    [sym_string_double] = STATE(11),
    [sym__number_literal] = STATE(11),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(15),
  },
  [5] = {
    [sym__expression] = STATE(19),
    [sym_dialog] = STATE(19),
    [sym__dialog_prefix] = STATE(15),
    [sym__comment] = STATE(19),
    [sym_doc_comment] = STATE(19),
    [sym_todo_comment] = STATE(19),
    [sym_inline_comment] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__string_literal] = STATE(19),
    [sym_string_single] = STATE(19),
    [sym_string_double] = STATE(19),
    [sym__number_literal] = STATE(19),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(19),
    [sym_float_literal] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(27), 3,
      anon_sym_POUND,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [23] = 4,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(34), 3,
      anon_sym_POUND,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [46] = 6,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_text_raw_fragment,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 3,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
    STATE(8), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [69] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_text_raw_fragment,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 3,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
    STATE(8), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [92] = 7,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      aux_sym__semicolon_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(10), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [114] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      aux_sym__semicolon_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(13), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [136] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(79), 5,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [148] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      aux_sym__semicolon_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__semicolon,
    STATE(6), 1,
      aux_sym__semicolon_repeat1,
    STATE(10), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [170] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(87), 5,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [182] = 4,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_text_raw_fragment,
    STATE(9), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [197] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [206] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(97), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [215] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(101), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [224] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(67), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [233] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(105), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [242] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [251] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 2,
      sym_text_raw_fragment,
      anon_sym_BSLASH,
  [259] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [263] = 1,
    ACTIONS(117), 1,
      aux_sym_text_escape_fragment_token1,
  [267] = 1,
    ACTIONS(119), 1,
      sym_comment_raw_fragment,
  [271] = 1,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
  [275] = 1,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
  [279] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [283] = 1,
    ACTIONS(127), 1,
      aux_sym_string_double_token1,
  [287] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
  [291] = 1,
    ACTIONS(131), 1,
      aux_sym_string_single_token1,
  [295] = 1,
    ACTIONS(133), 1,
      sym_comment_raw_fragment,
  [299] = 1,
    ACTIONS(135), 1,
      sym_comment_raw_fragment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 251,
  [SMALL_STATE(23)] = 259,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 267,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 275,
  [SMALL_STATE(28)] = 279,
  [SMALL_STATE(29)] = 283,
  [SMALL_STATE(30)] = 287,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 295,
  [SMALL_STATE(33)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semicolon, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semicolon, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(24),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 2, 0, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 2, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 2, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 2, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 3, 0, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double, 3, 0, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 3, 0, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single, 3, 0, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

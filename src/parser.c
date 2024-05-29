#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 10

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
  sym_identifier = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_string_single_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_double_token1 = 23,
  sym_int_literal = 24,
  sym_float_literal = 25,
  sym_source_file = 26,
  sym__semicolon = 27,
  sym__comma = 28,
  sym__expression_list_semicolon = 29,
  sym__expression = 30,
  sym_dialog = 31,
  sym__dialog_prefix = 32,
  aux_sym__dialog_content = 33,
  sym_text_escape_fragment = 34,
  sym_text_expr_fragment = 35,
  sym__comment = 36,
  sym_doc_comment = 37,
  sym_todo_comment = 38,
  sym_inline_comment = 39,
  sym_symbol_ref = 40,
  sym_function_call = 41,
  sym_call_argument_list = 42,
  sym_call_argument = 43,
  sym_unit_call = 44,
  sym__literal = 45,
  sym__string_literal = 46,
  sym_string_single = 47,
  sym_string_double = 48,
  sym__number_literal = 49,
  aux_sym__semicolon_repeat1 = 50,
  aux_sym__comma_repeat1 = 51,
  aux_sym__expression_list_semicolon_repeat1 = 52,
  aux_sym_call_argument_list_repeat1 = 53,
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
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_single_token1] = "string_single_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_token1] = "string_double_token1",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym__semicolon] = "_semicolon",
  [sym__comma] = "_comma",
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
  [sym_symbol_ref] = "symbol_ref",
  [sym_function_call] = "function_call",
  [sym_call_argument_list] = "call_argument_list",
  [sym_call_argument] = "call_argument",
  [sym_unit_call] = "unit_call",
  [sym__literal] = "_literal",
  [sym__string_literal] = "_string_literal",
  [sym_string_single] = "string_single",
  [sym_string_double] = "string_double",
  [sym__number_literal] = "_number_literal",
  [aux_sym__semicolon_repeat1] = "_semicolon_repeat1",
  [aux_sym__comma_repeat1] = "_comma_repeat1",
  [aux_sym__expression_list_semicolon_repeat1] = "_expression_list_semicolon_repeat1",
  [aux_sym_call_argument_list_repeat1] = "call_argument_list_repeat1",
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
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_single_token1] = aux_sym_string_single_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_double_token1] = aux_sym_string_double_token1,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym__semicolon] = sym__semicolon,
  [sym__comma] = sym__comma,
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
  [sym_symbol_ref] = sym_symbol_ref,
  [sym_function_call] = sym_function_call,
  [sym_call_argument_list] = sym_call_argument_list,
  [sym_call_argument] = sym_call_argument,
  [sym_unit_call] = sym_unit_call,
  [sym__literal] = sym__literal,
  [sym__string_literal] = sym__string_literal,
  [sym_string_single] = sym_string_single,
  [sym_string_double] = sym_string_double,
  [sym__number_literal] = sym__number_literal,
  [aux_sym__semicolon_repeat1] = aux_sym__semicolon_repeat1,
  [aux_sym__comma_repeat1] = aux_sym__comma_repeat1,
  [aux_sym__expression_list_semicolon_repeat1] = aux_sym__expression_list_semicolon_repeat1,
  [aux_sym_call_argument_list_repeat1] = aux_sym_call_argument_list_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym__comma] = {
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
  [sym_symbol_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_call_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_call] = {
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
  [aux_sym__comma_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_list_semicolon_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_callee = 2,
  field_content = 3,
  field_name = 4,
  field_prefix = 5,
  field_scalar = 6,
  field_unit = 7,
  field_value = 8,
  field_what = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_callee] = "callee",
  [field_content] = "content",
  [field_name] = "name",
  [field_prefix] = "prefix",
  [field_scalar] = "scalar",
  [field_unit] = "unit",
  [field_value] = "value",
  [field_what] = "what",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
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
    {field_scalar, 0},
    {field_unit, 1},
  [6] =
    {field_content, 1},
  [7] =
    {field_callee, 0},
  [8] =
    {field_value, 0},
  [9] =
    {field_arguments, 2},
    {field_callee, 0},
  [11] =
    {field_name, 0},
    {field_value, 2},
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 20,
  [30] = 30,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 58,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '"', 45,
        '#', 32,
        '\'', 42,
        '(', 37,
        ')', 39,
        '*', 19,
        ',', 16,
        '-', 18,
        ':', 41,
        ';', 14,
        '>', 20,
        '\\', 25,
        '_', 35,
        '{', 28,
        '}', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '"', 45,
        '#', 32,
        '\'', 42,
        '(', 37,
        ')', 39,
        '*', 19,
        ',', 16,
        '-', 18,
        ':', 41,
        ';', 14,
        '>', 20,
        '_', 35,
        '{', 28,
        '}', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__semicolon_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '(') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text_raw_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_text_escape_fragment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_POUNDtodo);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment_raw_fragment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment_raw_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
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
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
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
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__expression_list_semicolon] = STATE(53),
    [sym__expression] = STATE(21),
    [sym_dialog] = STATE(21),
    [sym__dialog_prefix] = STATE(40),
    [sym__comment] = STATE(21),
    [sym_doc_comment] = STATE(21),
    [sym_todo_comment] = STATE(21),
    [sym_inline_comment] = STATE(21),
    [sym_symbol_ref] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_unit_call] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__string_literal] = STATE(21),
    [sym_string_single] = STATE(21),
    [sym_string_double] = STATE(21),
    [sym__number_literal] = STATE(22),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
  [2] = {
    [sym__expression] = STATE(45),
    [sym_dialog] = STATE(45),
    [sym__dialog_prefix] = STATE(38),
    [sym__comment] = STATE(45),
    [sym_doc_comment] = STATE(45),
    [sym_todo_comment] = STATE(45),
    [sym_inline_comment] = STATE(45),
    [sym_symbol_ref] = STATE(45),
    [sym_function_call] = STATE(45),
    [sym_call_argument_list] = STATE(55),
    [sym_call_argument] = STATE(39),
    [sym_unit_call] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__string_literal] = STATE(45),
    [sym_string_single] = STATE(45),
    [sym_string_double] = STATE(45),
    [sym__number_literal] = STATE(22),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
  [3] = {
    [sym__expression] = STATE(45),
    [sym_dialog] = STATE(45),
    [sym__dialog_prefix] = STATE(38),
    [sym__comment] = STATE(45),
    [sym_doc_comment] = STATE(45),
    [sym_todo_comment] = STATE(45),
    [sym_inline_comment] = STATE(45),
    [sym_symbol_ref] = STATE(45),
    [sym_function_call] = STATE(45),
    [sym_call_argument] = STATE(47),
    [sym_unit_call] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__string_literal] = STATE(45),
    [sym_string_single] = STATE(45),
    [sym_string_double] = STATE(45),
    [sym__number_literal] = STATE(22),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
  [4] = {
    [sym__expression] = STATE(45),
    [sym_dialog] = STATE(45),
    [sym__dialog_prefix] = STATE(38),
    [sym__comment] = STATE(45),
    [sym_doc_comment] = STATE(45),
    [sym_todo_comment] = STATE(45),
    [sym_inline_comment] = STATE(45),
    [sym_symbol_ref] = STATE(45),
    [sym_function_call] = STATE(45),
    [sym_call_argument] = STATE(47),
    [sym_unit_call] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__string_literal] = STATE(45),
    [sym_string_single] = STATE(45),
    [sym_string_double] = STATE(45),
    [sym__number_literal] = STATE(22),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
  [5] = {
    [sym__expression] = STATE(43),
    [sym_dialog] = STATE(43),
    [sym__dialog_prefix] = STATE(40),
    [sym__comment] = STATE(43),
    [sym_doc_comment] = STATE(43),
    [sym_todo_comment] = STATE(43),
    [sym_inline_comment] = STATE(43),
    [sym_symbol_ref] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_unit_call] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__string_literal] = STATE(43),
    [sym_string_single] = STATE(43),
    [sym_string_double] = STATE(43),
    [sym__number_literal] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
  [6] = {
    [sym__expression] = STATE(43),
    [sym_dialog] = STATE(43),
    [sym__dialog_prefix] = STATE(40),
    [sym__comment] = STATE(43),
    [sym_doc_comment] = STATE(43),
    [sym_todo_comment] = STATE(43),
    [sym_inline_comment] = STATE(43),
    [sym_symbol_ref] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_unit_call] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__string_literal] = STATE(43),
    [sym_string_single] = STATE(43),
    [sym_string_double] = STATE(43),
    [sym__number_literal] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUNDtodo] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUNDtodo,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(22), 1,
      sym__number_literal,
    STATE(38), 1,
      sym__dialog_prefix,
    STATE(47), 1,
      sym_call_argument,
    ACTIONS(17), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(45), 13,
      sym__expression,
      sym_dialog,
      sym__comment,
      sym_doc_comment,
      sym_todo_comment,
      sym_inline_comment,
      sym_symbol_ref,
      sym_function_call,
      sym_unit_call,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
  [52] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUNDtodo,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__number_literal,
    STATE(40), 1,
      sym__dialog_prefix,
    STATE(58), 1,
      sym__expression_list_semicolon,
    ACTIONS(17), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(21), 13,
      sym__expression,
      sym_dialog,
      sym__comment,
      sym_doc_comment,
      sym_todo_comment,
      sym_inline_comment,
      sym_symbol_ref,
      sym_function_call,
      sym_unit_call,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
  [104] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUNDtodo,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__number_literal,
    STATE(40), 1,
      sym__dialog_prefix,
    STATE(60), 1,
      sym__expression_list_semicolon,
    ACTIONS(17), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(21), 13,
      sym__expression,
      sym_dialog,
      sym__comment,
      sym_doc_comment,
      sym_todo_comment,
      sym_inline_comment,
      sym_symbol_ref,
      sym_function_call,
      sym_unit_call,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
  [156] = 11,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUNDtodo,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__number_literal,
    STATE(40), 1,
      sym__dialog_prefix,
    ACTIONS(17), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(43), 13,
      sym__expression,
      sym_dialog,
      sym__comment,
      sym_doc_comment,
      sym_todo_comment,
      sym_inline_comment,
      sym_symbol_ref,
      sym_function_call,
      sym_unit_call,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
  [205] = 11,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUNDtodo,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__number_literal,
    STATE(38), 1,
      sym__dialog_prefix,
    ACTIONS(17), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(3), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(44), 13,
      sym__expression,
      sym_dialog,
      sym__comment,
      sym_doc_comment,
      sym_todo_comment,
      sym_inline_comment,
      sym_symbol_ref,
      sym_function_call,
      sym_unit_call,
      sym__literal,
      sym__string_literal,
      sym_string_single,
      sym_string_double,
  [254] = 4,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(35), 4,
      anon_sym_POUND,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [278] = 4,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym__semicolon_repeat1,
    ACTIONS(42), 4,
      anon_sym_POUND,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [302] = 4,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym__comma_repeat1,
    ACTIONS(49), 4,
      anon_sym_POUND,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(47), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [325] = 4,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym__comma_repeat1,
    ACTIONS(55), 4,
      anon_sym_POUND,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(53), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_POUND_POUND,
      anon_sym_POUNDtodo,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [348] = 6,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_text_raw_fragment,
    ACTIONS(64), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(16), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
    ACTIONS(59), 4,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [372] = 6,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_text_raw_fragment,
    ACTIONS(76), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    STATE(16), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
    ACTIONS(72), 4,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [396] = 5,
    ACTIONS(80), 1,
      sym_text_raw_fragment,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(19), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
    ACTIONS(72), 4,
      aux_sym__semicolon_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [417] = 5,
    ACTIONS(86), 1,
      sym_text_raw_fragment,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(19), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
    ACTIONS(59), 4,
      aux_sym__semicolon_token1,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [438] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(97), 6,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [451] = 8,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      aux_sym__semicolon_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__semicolon,
    STATE(12), 1,
      aux_sym__semicolon_repeat1,
    STATE(36), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [476] = 3,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(111), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [491] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      aux_sym__semicolon_token1,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [504] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(121), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [516] = 7,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym__semicolon_token1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym__semicolon,
    STATE(12), 1,
      aux_sym__semicolon_repeat1,
    STATE(25), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [538] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(135), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [550] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(139), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [562] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(143), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [574] = 2,
    ACTIONS(95), 1,
      anon_sym_BSLASH,
    ACTIONS(97), 6,
      aux_sym__semicolon_token1,
      anon_sym_COMMA,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [586] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(147), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [598] = 2,
    ACTIONS(115), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 6,
      aux_sym__semicolon_token1,
      anon_sym_COMMA,
      sym_text_raw_fragment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [610] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(151), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [622] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [634] = 2,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(159), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [646] = 2,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(163), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [658] = 7,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      aux_sym__semicolon_token1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__semicolon,
    STATE(12), 1,
      aux_sym__semicolon_repeat1,
    STATE(25), 1,
      aux_sym__expression_list_semicolon_repeat1,
  [680] = 6,
    ACTIONS(169), 1,
      aux_sym__semicolon_token1,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym__comma,
    STATE(15), 1,
      aux_sym__comma_repeat1,
    STATE(37), 1,
      aux_sym_call_argument_list_repeat1,
  [699] = 4,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_text_raw_fragment,
    STATE(18), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [714] = 6,
    ACTIONS(179), 1,
      aux_sym__semicolon_token1,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__comma,
    STATE(15), 1,
      aux_sym__comma_repeat1,
    STATE(41), 1,
      aux_sym_call_argument_list_repeat1,
  [733] = 4,
    ACTIONS(76), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      sym_text_raw_fragment,
    STATE(17), 3,
      aux_sym__dialog_content,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
  [748] = 6,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      aux_sym__semicolon_token1,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__comma,
    STATE(15), 1,
      aux_sym__comma_repeat1,
    STATE(37), 1,
      aux_sym_call_argument_list_repeat1,
  [767] = 3,
    ACTIONS(149), 1,
      aux_sym__semicolon_token1,
    ACTIONS(191), 1,
      anon_sym_COLON,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [779] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym__semicolon_token1,
    ACTIONS(131), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [791] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym__semicolon_token1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [802] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      aux_sym__semicolon_token1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [813] = 2,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 2,
      sym_text_raw_fragment,
      anon_sym_BSLASH,
  [821] = 2,
    ACTIONS(205), 1,
      aux_sym__semicolon_token1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [829] = 1,
    ACTIONS(207), 1,
      aux_sym_string_double_token1,
  [833] = 1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [837] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [841] = 1,
    ACTIONS(213), 1,
      aux_sym_string_single_token1,
  [845] = 1,
    ACTIONS(215), 1,
      aux_sym_text_escape_fragment_token1,
  [849] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [853] = 1,
    ACTIONS(219), 1,
      sym_comment_raw_fragment,
  [857] = 1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [861] = 1,
    ACTIONS(223), 1,
      sym_comment_raw_fragment,
  [865] = 1,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
  [869] = 1,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
  [873] = 1,
    ACTIONS(229), 1,
      aux_sym_text_escape_fragment_token1,
  [877] = 1,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
  [881] = 1,
    ACTIONS(233), 1,
      sym_comment_raw_fragment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 491,
  [SMALL_STATE(24)] = 504,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 574,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 622,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 680,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 714,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 748,
  [SMALL_STATE(42)] = 767,
  [SMALL_STATE(43)] = 779,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 813,
  [SMALL_STATE(47)] = 821,
  [SMALL_STATE(48)] = 829,
  [SMALL_STATE(49)] = 833,
  [SMALL_STATE(50)] = 837,
  [SMALL_STATE(51)] = 841,
  [SMALL_STATE(52)] = 845,
  [SMALL_STATE(53)] = 849,
  [SMALL_STATE(54)] = 853,
  [SMALL_STATE(55)] = 857,
  [SMALL_STATE(56)] = 861,
  [SMALL_STATE(57)] = 865,
  [SMALL_STATE(58)] = 869,
  [SMALL_STATE(59)] = 873,
  [SMALL_STATE(60)] = 877,
  [SMALL_STATE(61)] = 881,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semicolon, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semicolon, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__semicolon_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comma_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comma_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comma_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(52),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 2, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 2, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(19),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(59),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dialog_content, 2, 0, 0), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_expr_fragment, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_escape_fragment, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 2, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 2, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_list_semicolon_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_call, 2, 0, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_call, 2, 0, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 3, 0, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single, 3, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 3, 0, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double, 3, 0, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 6),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_list_semicolon, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_argument_list_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_argument_list, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_argument_list, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument, 3, 0, 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_argument, 3, 0, 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument, 1, 0, 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_argument, 1, 0, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dialog_prefix, 1, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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

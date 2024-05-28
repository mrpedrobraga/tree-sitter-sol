#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  aux_sym_header_entry_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_AT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_GT = 12,
  aux_sym_text_text_fragment_token1 = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_markup_close_tag = 16,
  anon_sym_if = 17,
  anon_sym_then = 18,
  anon_sym_unless = 19,
  sym_identifier = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_yes = 23,
  anon_sym_no = 24,
  anon_sym_maybe = 25,
  aux_sym_integer_token1 = 26,
  aux_sym_float_token1 = 27,
  sym_source_file = 28,
  sym_block = 29,
  sym_header = 30,
  sym_header_entry = 31,
  sym_header_param = 32,
  sym_section = 33,
  sym_section_name = 34,
  sym__section_entry = 35,
  sym_expression = 36,
  sym_grouping = 37,
  sym_symbol_ref = 38,
  sym_dialog = 39,
  sym_text_content = 40,
  sym_text_text_fragment = 41,
  sym_text_escape_fragment = 42,
  sym_text_expr_fragment = 43,
  sym_markup_open_tag = 44,
  sym__control_flow = 45,
  sym_if = 46,
  sym__literal = 47,
  sym_boolean = 48,
  sym__number = 49,
  sym_integer = 50,
  sym_float = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_header_repeat1 = 53,
  aux_sym_section_repeat1 = 54,
  aux_sym_text_content_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_header_entry_token1] = "header_entry_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [aux_sym_text_text_fragment_token1] = "text_text_fragment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_markup_close_tag] = "markup_close_tag",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_unless] = "unless",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_maybe] = "maybe",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_float_token1] = "float_token1",
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
  [sym__control_flow] = "_control_flow",
  [sym_if] = "if",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_float] = "float",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_text_text_fragment_token1] = aux_sym_text_text_fragment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_markup_close_tag] = sym_markup_close_tag,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_unless] = anon_sym_unless,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_maybe] = anon_sym_maybe,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_float_token1] = aux_sym_float_token1,
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
  [sym__control_flow] = sym__control_flow,
  [sym_if] = sym_if,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maybe] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
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
  [sym__control_flow] = {
    .visible = false,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  field_condition = 2,
  field_consequence = 3,
  field_content = 4,
  field_expression = 5,
  field_header = 6,
  field_name = 7,
  field_prefix = 8,
  field_symbol = 9,
  field_tag_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blocks] = "blocks",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_content] = "content",
  [field_expression] = "expression",
  [field_header] = "header",
  [field_name] = "name",
  [field_prefix] = "prefix",
  [field_symbol] = "symbol",
  [field_tag_name] = "tag_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
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
    {field_symbol, 0},
  [8] =
    {field_blocks, 2},
    {field_header, 0},
    {field_header, 1},
  [11] =
    {field_content, 1},
  [12] =
    {field_content, 1},
    {field_prefix, 0},
  [14] =
    {field_tag_name, 1},
  [15] =
    {field_expression, 1},
  [16] =
    {field_condition, 1},
    {field_consequence, 3},
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 8,
  [12] = 9,
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
  [27] = 25,
  [28] = 23,
  [29] = 26,
  [30] = 24,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 40,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 15,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 19,
  [53] = 20,
  [54] = 21,
  [55] = 16,
  [56] = 17,
  [57] = 18,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 14,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 13,
  [67] = 67,
  [68] = 65,
  [69] = 63,
  [70] = 64,
  [71] = 62,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '$', 45,
        '(', 43,
        ')', 44,
        '*', 47,
        '-', 46,
        '>', 48,
        '@', 39,
        '[', 41,
        ']', 42,
        'f', 7,
        'i', 16,
        'm', 8,
        'n', 22,
        't', 17,
        'u', 21,
        'y', 10,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(36);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '$', 45,
        '(', 43,
        ')', 44,
        '*', 47,
        '-', 46,
        '>', 48,
        '[', 40,
        '_', 59,
        'f', 60,
        'i', 67,
        'm', 61,
        'n', 69,
        't', 70,
        'y', 63,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_header_entry_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_markup_close_tag);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_yes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_maybe);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_markup_close_tag] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_maybe] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_block] = STATE(31),
    [sym_header] = STATE(67),
    [sym_header_entry] = STATE(38),
    [sym_header_param] = STATE(51),
    [sym_section] = STATE(46),
    [sym_section_name] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(31),
    [aux_sym_header_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [2] = {
    [sym__section_entry] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_grouping] = STATE(18),
    [sym_symbol_ref] = STATE(18),
    [sym_dialog] = STATE(18),
    [sym__control_flow] = STATE(18),
    [sym_if] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym__number] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_float] = STATE(18),
    [aux_sym_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_maybe] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(27),
  },
  [3] = {
    [sym__section_entry] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_grouping] = STATE(18),
    [sym_symbol_ref] = STATE(18),
    [sym_dialog] = STATE(18),
    [sym__control_flow] = STATE(18),
    [sym_if] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym__number] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_float] = STATE(18),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_maybe] = ACTIONS(23),
    [aux_sym_integer_token1] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(27),
  },
  [4] = {
    [sym__section_entry] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_grouping] = STATE(18),
    [sym_symbol_ref] = STATE(18),
    [sym_dialog] = STATE(18),
    [sym__control_flow] = STATE(18),
    [sym_if] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym__number] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_float] = STATE(18),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_yes] = ACTIONS(48),
    [anon_sym_no] = ACTIONS(48),
    [anon_sym_maybe] = ACTIONS(48),
    [aux_sym_integer_token1] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(54),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      aux_sym_integer_token1,
    ACTIONS(71), 1,
      aux_sym_float_token1,
    STATE(66), 1,
      sym_expression,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(57), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [46] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    STATE(13), 1,
      sym_expression,
    ACTIONS(17), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(18), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [92] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    STATE(70), 1,
      sym_expression,
    ACTIONS(17), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(18), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [138] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    STATE(49), 1,
      sym_expression,
    ACTIONS(17), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(18), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [184] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      aux_sym_integer_token1,
    ACTIONS(71), 1,
      aux_sym_float_token1,
    STATE(69), 1,
      sym_expression,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(57), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [230] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    STATE(64), 1,
      sym_expression,
    ACTIONS(17), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(18), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [276] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    STATE(50), 1,
      sym_expression,
    ACTIONS(17), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(18), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [322] = 10,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      aux_sym_integer_token1,
    ACTIONS(71), 1,
      aux_sym_float_token1,
    STATE(63), 1,
      sym_expression,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
    STATE(57), 10,
      sym_grouping,
      sym_symbol_ref,
      sym_dialog,
      sym__control_flow,
      sym_if,
      sym__literal,
      sym_boolean,
      sym__number,
      sym_integer,
      sym_float,
  [368] = 2,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(75), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [391] = 2,
    ACTIONS(77), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(79), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [414] = 2,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(83), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [437] = 2,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(87), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [460] = 2,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(91), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [483] = 2,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(95), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [506] = 2,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(99), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [529] = 2,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(103), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [552] = 2,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_RBRACE,
    ACTIONS(107), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [575] = 2,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(111), 9,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_maybe,
      aux_sym_integer_token1,
      aux_sym_float_token1,
  [596] = 6,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_markup_open_tag,
    STATE(29), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [618] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_markup_open_tag,
    STATE(71), 1,
      sym_text_content,
    STATE(28), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [640] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_text_text_fragment_token1,
    STATE(30), 1,
      sym_markup_open_tag,
    STATE(68), 1,
      sym_text_content,
    STATE(23), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [662] = 6,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      sym_markup_close_tag,
    STATE(24), 1,
      sym_markup_open_tag,
    STATE(26), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [684] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_text_text_fragment_token1,
    STATE(30), 1,
      sym_markup_open_tag,
    STATE(65), 1,
      sym_text_content,
    STATE(23), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [706] = 6,
    ACTIONS(113), 1,
      sym_markup_close_tag,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_markup_open_tag,
    STATE(26), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [728] = 6,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_markup_open_tag,
    STATE(29), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [750] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_markup_open_tag,
    STATE(62), 1,
      sym_text_content,
    STATE(28), 4,
      sym_text_text_fragment,
      sym_text_escape_fragment,
      sym_text_expr_fragment,
      aux_sym_text_content_repeat1,
  [772] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(33), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [789] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(34), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [806] = 5,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(33), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [823] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(33), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [840] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(36), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [857] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(46), 1,
      sym_section,
    STATE(33), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [874] = 4,
    ACTIONS(159), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_header_param,
    STATE(37), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [888] = 4,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(51), 1,
      sym_header_param,
    STATE(37), 2,
      sym_header_entry,
      aux_sym_header_repeat1,
  [902] = 1,
    ACTIONS(166), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [909] = 1,
    ACTIONS(168), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [916] = 2,
    ACTIONS(170), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(166), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [925] = 1,
    ACTIONS(172), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      aux_sym_text_text_fragment_token1,
      anon_sym_LBRACE,
  [932] = 2,
    ACTIONS(174), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(168), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [941] = 2,
    ACTIONS(176), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(172), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_markup_close_tag,
  [950] = 2,
    ACTIONS(180), 1,
      aux_sym_text_text_fragment_token1,
    ACTIONS(178), 2,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [958] = 1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [963] = 1,
    ACTIONS(184), 2,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT,
  [968] = 1,
    ACTIONS(81), 1,
      anon_sym_then,
  [972] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [976] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [980] = 1,
    ACTIONS(190), 1,
      aux_sym_header_entry_token1,
  [984] = 1,
    ACTIONS(97), 1,
      anon_sym_then,
  [988] = 1,
    ACTIONS(101), 1,
      anon_sym_then,
  [992] = 1,
    ACTIONS(105), 1,
      anon_sym_then,
  [996] = 1,
    ACTIONS(85), 1,
      anon_sym_then,
  [1000] = 1,
    ACTIONS(89), 1,
      anon_sym_then,
  [1004] = 1,
    ACTIONS(93), 1,
      anon_sym_then,
  [1008] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [1012] = 1,
    ACTIONS(194), 1,
      aux_sym_header_entry_token1,
  [1016] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
  [1020] = 1,
    ACTIONS(77), 1,
      anon_sym_then,
  [1024] = 1,
    ACTIONS(198), 1,
      sym_markup_close_tag,
  [1028] = 1,
    ACTIONS(200), 1,
      anon_sym_then,
  [1032] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
  [1036] = 1,
    ACTIONS(204), 1,
      anon_sym_LF,
  [1040] = 1,
    ACTIONS(73), 1,
      anon_sym_then,
  [1044] = 1,
    ACTIONS(206), 1,
      anon_sym_DASH_DASH_DASH,
  [1048] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [1052] = 1,
    ACTIONS(210), 1,
      anon_sym_then,
  [1056] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [1060] = 1,
    ACTIONS(214), 1,
      sym_markup_close_tag,
  [1064] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [1068] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
  [1072] = 1,
    ACTIONS(220), 1,
      sym_identifier,
  [1076] = 1,
    ACTIONS(222), 1,
      sym_identifier,
  [1080] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 276,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 414,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 460,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 506,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 552,
  [SMALL_STATE(22)] = 575,
  [SMALL_STATE(23)] = 596,
  [SMALL_STATE(24)] = 618,
  [SMALL_STATE(25)] = 640,
  [SMALL_STATE(26)] = 662,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 706,
  [SMALL_STATE(29)] = 728,
  [SMALL_STATE(30)] = 750,
  [SMALL_STATE(31)] = 772,
  [SMALL_STATE(32)] = 789,
  [SMALL_STATE(33)] = 806,
  [SMALL_STATE(34)] = 823,
  [SMALL_STATE(35)] = 840,
  [SMALL_STATE(36)] = 857,
  [SMALL_STATE(37)] = 874,
  [SMALL_STATE(38)] = 888,
  [SMALL_STATE(39)] = 902,
  [SMALL_STATE(40)] = 909,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 925,
  [SMALL_STATE(43)] = 932,
  [SMALL_STATE(44)] = 941,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 958,
  [SMALL_STATE(47)] = 963,
  [SMALL_STATE(48)] = 968,
  [SMALL_STATE(49)] = 972,
  [SMALL_STATE(50)] = 976,
  [SMALL_STATE(51)] = 980,
  [SMALL_STATE(52)] = 984,
  [SMALL_STATE(53)] = 988,
  [SMALL_STATE(54)] = 992,
  [SMALL_STATE(55)] = 996,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1004,
  [SMALL_STATE(58)] = 1008,
  [SMALL_STATE(59)] = 1012,
  [SMALL_STATE(60)] = 1016,
  [SMALL_STATE(61)] = 1020,
  [SMALL_STATE(62)] = 1024,
  [SMALL_STATE(63)] = 1028,
  [SMALL_STATE(64)] = 1032,
  [SMALL_STATE(65)] = 1036,
  [SMALL_STATE(66)] = 1040,
  [SMALL_STATE(67)] = 1044,
  [SMALL_STATE(68)] = 1048,
  [SMALL_STATE(69)] = 1052,
  [SMALL_STATE(70)] = 1056,
  [SMALL_STATE(71)] = 1060,
  [SMALL_STATE(72)] = 1064,
  [SMALL_STATE(73)] = 1068,
  [SMALL_STATE(74)] = 1072,
  [SMALL_STATE(75)] = 1076,
  [SMALL_STATE(76)] = 1080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, 0, 12),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 3, 0, 9),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 3, 0, 9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 1, 0, 6),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_ref, 1, 0, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3, 0, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name, 3, 0, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_content, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_escape_fragment, 3, 0, 8),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_expr_fragment, 3, 0, 11),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_escape_fragment, 3, 0, 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_text_fragment, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_expr_fragment, 3, 0, 11),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_text_fragment, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markup_open_tag, 3, 0, 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup_open_tag, 3, 0, 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_entry, 3, 0, 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_param, 2, 0, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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

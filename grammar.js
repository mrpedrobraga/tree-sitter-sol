const SPACING = /[ \r\f\t]+/;

module.exports = grammar({
  name: "sol",
  extras: ($) => [/\s/],
  rules: {
    source_file: ($) => seq($._expression_list_semicolon),

    _semicolon: ($) => choice(repeat1(";"), /\n\s*/),
    _comma: ($) => choice(repeat1(","), /\n\s*/),

    _expression_list_semicolon: ($) =>
      seq(
        $._expression,
        repeat(seq($._semicolon, $._expression)),
        optional($._semicolon),
      ),

    _expression_list_comma: ($) =>
      seq(
        $._expression,
        repeat(seq($._comma, $._expression)),
        optional($._comma),
      ),

    _expression: ($) =>
      choice(
        $.header,
        $.grouping,
        $._literal,
        $._dialog_expr,
        $._comment,
        $.symbol_ref,
        $.unit_call,
        $.function_call,
      ),

    header: ($) =>
      seq(
        "---",
        optional(
          seq(
            $.header_entry,
            repeat(seq($._semicolon, $.header_entry)),
            optional($._semicolon),
          ),
        ),
        "---",
      ),
    header_entry: ($) =>
      seq(
        "@",
        field("tag", $.identifier),
        field("content", $.header_tag_content),
      ),
    header_tag_content: ($) =>
      repeat1(seq($._header_tag_fragment, token.immediate(SPACING))),
    _header_tag_fragment: ($) =>
      choice($.header_tag_raw_fragment, $.header_tag_expr_fragment),
    header_tag_raw_fragment: ($) => /[^\n\{\}]+/,
    header_tag_expr_fragment: ($) =>
      seq("{", $._expression_list_semicolon, "}"),

    grouping: ($) => seq("(", $._expression_list_semicolon, ")"),

    _dialog_expr: ($) => choice($.dialog, $.speaker_marker),
    dialog: ($) =>
      seq(field("prefix", $.dialog_prefix), field("content", $.dialog_content)),
    dialog_prefix: ($) => choice("-", "*", ">"),
    dialog_content: ($) => repeat1($._text_fragment),
    _text_fragment: ($) =>
      choice($.text_raw_fragment, $.text_escape_fragment, $.text_expr_fragment),
    text_raw_fragment: ($) => choice(token.immediate(SPACING), /[^\\;\n\{]+/),
    text_escape_fragment: ($) => /\\./,
    text_expr_fragment: ($) => seq("{", $._expression_list_semicolon, "}"),

    speaker_marker: ($) =>
      seq(
        "((",
        field("speaker", choice($.identifier, "&")),
        optional($.call_argument_list),
        "))",
      ),

    _comment: ($) => choice($.inline_comment, $.doc_comment, $.todo_comment),
    doc_comment: ($) => prec.right(2, seq("##", $.comment_raw_fragment)),
    todo_comment: ($) =>
      prec.right(1, seq("#todo", field("what", $.comment_raw_fragment))),
    inline_comment: ($) => prec.right(1, seq("#", $.comment_raw_fragment)),
    comment_raw_fragment: ($) => /[^\n]+/,

    identifier: ($) => /[_a-zA-Z][_a-zA-Z0-9]*/,

    symbol_ref: ($) => choice($.identifier),
    function_call: ($) =>
      seq(
        field("callee", $._expression),
        token.immediate(/[ \t\r\f]+/),
        token.immediate("("),
        field("arguments", optional($.call_argument_list)),
        ")",
      ),
    call_argument_list: ($) =>
      seq(
        $.call_argument,
        repeat(seq($._comma, $.call_argument)),
        optional($._comma),
      ),
    call_argument: ($) =>
      seq(
        optional(seq(field("name", $.identifier), ":")),
        field("value", $._expression),
      ),

    unit_call: ($) =>
      seq(
        field("scalar", $._number_literal),
        optional(token.immediate(SPACING)),
        field("unit", $.identifier),
      ),

    _literal: ($) => choice($._number_literal, $._string_literal),

    _string_literal: ($) => choice($.string_single, $.string_double),
    string_single: ($) =>
      prec.left(0, seq("'", field("content", /[^\']*/), "'")),
    string_double: ($) =>
      prec.left(0, seq('"', field("content", /[^\"]*/), '"')),

    _number_literal: ($) => choice($.int_literal, $.float_literal),
    int_literal: ($) => /[0-9_]+/,
    float_literal: ($) => /[0-9_]+(\.[0-9_]+)?/,
  },
});

const SPACING = /[ \r\f\t]+/;

module.exports = grammar({
  name: "sol",
  word: ($) => $.identifier,
  extras: ($) => [/\s+/],
  rules: {
    source_file: ($) => seq($._expression_list_semicolon),

    _semicolon: ($) => choice(repeat1(";"), /\n\s*/),
    _comma: ($) => choice(repeat1(","), /\n\s*/),
    _immediate_spacing: ($) => token.immediate(SPACING),

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
        $._block,
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
    _header_tag_fragment: ($) => choice($.header_tag_raw_fragment),
    header_tag_raw_fragment: ($) => /[^\n\{\}]+/,

    grouping: ($) => seq("(", $._expression_list_semicolon, ")"),

    _dialog_expr: ($) => choice($.dialog, $.speaker_marker),
    dialog: ($) =>
      prec.right(
        1,
        seq(
          field("prefix", $.dialog_prefix),
          optional(token.immediate(SPACING)),
          field("content", $.dialog_content),
        ),
      ),
    dialog_prefix: ($) => choice("-", "*", ">"),
    dialog_content: ($) => prec.right(0, repeat1($._text_fragment)),
    _text_fragment: ($) =>
      choice($.text_raw_fragment, $.text_escape_fragment, $.text_expr_fragment),
    text_raw_fragment: ($) => choice(token.immediate(SPACING), /[^\\;\n\{]+/),
    text_escape_fragment: ($) => /\\./,
    text_expr_fragment: ($) => seq("{", $._expression_list_semicolon, "}"),

    speaker_marker: ($) =>
      seq(
        "[",
        field("speaker", choice($.identifier, "&")),
        optional($.call_argument_list),
        "]",
      ),

    _comment: ($) => choice($.inline_comment, $.doc_comment, $.todo_comment),
    doc_comment: ($) => prec.right(2, seq("##", $.comment_raw_fragment)),
    todo_comment: ($) =>
      prec.right(1, seq("#todo", field("what", $.comment_raw_fragment))),
    inline_comment: ($) => prec.right(1, seq("#", $.comment_raw_fragment)),
    comment_raw_fragment: ($) => /[^\n]+/,

    function_call: ($) =>
      prec(
        1,
        seq(
          field("callee", $._expression),
          token.immediate("("),
          field("arguments", optional($.call_argument_list)),
          ")",
        ),
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
      seq(field("scalar", $._number_literal), field("unit", $.identifier)),

    _block: ($) =>
      choice(
        $.scene,
        $.if,
        $.unless,
        $.loop,
        $.while,
        $.until,
        $.for,
        $.break,
        $.return,
        $.next,
        $.yield,
        $.async,
        $.await,
      ),
    _rich_identifier: ($) => choice($.identifier, $._string_literal),
    scene: ($) =>
      seq(
        choice("scene", "fn", "action"),
        field("name", $._rich_identifier),
        field("content", optional($.scene_content)),
        "end",
      ),
    scene_content: ($) => $._expression_list_semicolon,

    if: ($) =>
      seq(
        "if",
        field("condition", optional($._expression)),
        "then",
        field("then", optional($._expression_list_semicolon)),
        optional(
          seq("else", field("else", optional($._expression_list_semicolon))),
        ),
        "end",
      ),
    unless: ($) =>
      seq(
        "unless",
        field("condition", $._expression),
        "then",
        field("then", optional($._expression_list_semicolon)),
        optional(
          seq("else", field("else", optional($._expression_list_semicolon))),
        ),
        "end",
      ),
    loop: ($) =>
      seq(
        "loop",
        field("block", optional($._expression_list_semicolon)),
        "end",
      ),
    while: ($) =>
      seq(
        "while",
        field("condition", optional($._expression)),
        "do",
        field("block", optional($._expression_list_semicolon)),
        "end",
      ),
    until: ($) =>
      seq(
        "until",
        field("condition", optional($._expression)),
        "do",
        field("block", optional($._expression_list_semicolon)),
        "end",
      ),
    for: ($) =>
      seq(
        "for",
        seq(field("iteration_param", $.identifier), "in"),
        field("iterator", optional($._expression)),
        "do",
        field("block", optional($._expression_list_semicolon)),
        "end",
      ),
    break: ($) => seq("break"),
    return: ($) => prec.left(0, seq("return", field("value", $._expression))),
    next: ($) => prec.left(0, seq("next", field("value", $._expression))),
    yield: ($) => prec.left(seq("yield", field("value", $._expression))),
    await: ($) =>
      prec.right(
        0,
        seq(
          "await",
          field("what", $._expression),
          optional(
            seq(
              "meanwhile",
              field("meanwhile", optional($._expression_list_semicolon)),
              "end",
            ),
          ),
        ),
      ),
    async: ($) =>
      seq("async", field("block", $._expression_list_semicolon), "end"),

    identifier: ($) => /[_a-zA-Z][_a-zA-Z0-9]*/,
    symbol_ref: ($) => $.identifier,

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

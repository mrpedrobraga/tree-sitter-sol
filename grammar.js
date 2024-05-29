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
        repeat(seq($._semicolon, $._expression)),
        optional($._semicolon),
      ),

    _expression: ($) => choice($._literal, $.dialog, $._comment),

    dialog: ($) => seq($._dialog_prefix, field("content", $._dialog_content)),
    _dialog_prefix: ($) => field("prefix", choice("-", "*", ">")),
    _dialog_content: ($) =>
      repeat1(
        choice(
          $.text_raw_fragment,
          $.text_escape_fragment,
          $.text_expr_fragment,
        ),
      ),
    text_raw_fragment: ($) => /[^\\;\n\{\}]+/,
    text_escape_fragment: ($) => seq(token.immediate("\\"), /./),
    text_expr_fragment: ($) => seq("{", $._expression_list_semicolon, "}"),

    _comment: ($) => choice($.inline_comment, $.doc_comment, $.todo_comment),
    doc_comment: ($) => prec.right(2, seq("##", $.comment_raw_fragment)),
    todo_comment: ($) =>
      prec.right(1, seq("#todo", field("what", $.comment_raw_fragment))),
    inline_comment: ($) => prec.right(1, seq("#", $.comment_raw_fragment)),
    comment_raw_fragment: ($) => /[^\n]+/,

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

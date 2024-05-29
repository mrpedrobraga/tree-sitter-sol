module.exports = grammar({
  name: "sol",

  rules: {
    source_file: ($) => seq($._expression_list_semicolon),

    _semicolon: ($) => choice(repeat1(";"), /\n/),
    _comma: ($) => choice(repeat1(","), /\n/),

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

    _expression: ($) => choice($._literal),

    _literal: ($) => choice($._number_literal, $._string_literal),

    _string_literal: ($) => choice($.string_single),
    string_single: ($) => seq("'", field("content", /[^"]*/), "'"),

    _number_literal: ($) => choice($.int_literal, $.float_literal),
    int_literal: ($) => /[0-9_]+/,
    float_literal: ($) => /[0-9_]+(\.[0-9_]+)?/,
  },
});

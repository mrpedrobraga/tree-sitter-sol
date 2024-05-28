module.exports = grammar({
  name: "aster",

  extras: ($) => [/\s+/],

  rules: {
    source_file: ($) =>
      seq(
        optional(field("header", seq(optional($.header), "---"))),
        field("blocks", repeat($.block)),
      ),

    block: ($) => choice($.section),

    header: ($) => repeat1($.header_entry),
    header_entry: ($) => seq($.header_param, field("content", /[^@]+/), "\n"),
    header_param: ($) => seq("@", field("name", $.identifier)),

    section: ($) => seq($.section_name, repeat($._section_entry)),
    section_name: ($) => seq("[", field("name", $.identifier), "]"),
    _section_entry: ($) => choice($.expression),

    expression: ($) =>
      choice($.dialog, $.symbol_ref, $.grouping, $._literal, $._control_flow),
    grouping: ($) => seq("(", $.expression, ")"),
    symbol_ref: ($) => choice("$", field("symbol", seq($.identifier))),

    dialog: ($) =>
      seq(
        field("prefix", choice("-", "*", ">")),
        field("content", $.text_content),
        "\n",
      ),

    text_content: ($) =>
      repeat1(
        choice(
          prec.right(3, $.text_expr_fragment),
          prec.right(3, $.text_escape_fragment),
          $.text_text_fragment,
        ),
      ),
    text_text_fragment: ($) => seq(/[^\n\{\[]+/),
    text_escape_fragment: ($) =>
      seq(
        $.markup_open_tag,
        field("content", $.text_content),
        $.markup_close_tag,
      ),
    text_expr_fragment: ($) => seq("{", field("expression", $.expression), "}"),

    markup_open_tag: ($) => seq("[", field("tag_name", $.identifier), "]"),
    markup_close_tag: ($) => "[/]",

    _control_flow: ($) => choice($.if),
    if: ($) =>
      seq(
        "if",
        field("condition", $.expression),
        "then",
        field("consequence", $.expression),
      ),
    unless: ($) =>
      seq(
        "unless",
        field("condition", $.expression),
        "then",
        field("consequence", $.expression),
      ),

    command: ($) => seq(field("name", $.identifier)),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _literal: ($) => choice($.boolean, $._number),
    boolean: (_) => choice("true", "false", "yes", "no", "maybe"),
    _number: ($) => choice($.integer, $.float),
    integer: (_) => seq(/[0-9_]+/),
    float: (_) => seq(/[0-9_]+(\.[0-9_]+)?/),
  },
});

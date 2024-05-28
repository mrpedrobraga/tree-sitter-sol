module.exports = grammar({
  name: "aster",

  word: ($) => $.identifier,
  extras: ($) => [/\s+/],

  rules: {
    source_file: ($) =>
      seq(
        optional(field("header", seq(optional($.header), "---"))),
        field("blocks", $.block_list),
      ),

    _newline: ($) => /\n/,

    block_list: ($) => repeat1($._block),
    _block: ($) => choice($.section, $.pre_section),
    pre_section: ($) => $.expression_list,

    header: ($) => repeat1($.header_entry),
    header_entry: ($) =>
      seq($.header_param, field("content", /[^\n]+/), $._newline),
    header_param: ($) => seq("@", field("name", $.identifier)),

    section: ($) =>
      prec.right(
        0,
        seq(
          field("name", $.section_name),
          field("entries", optional($.expression_list)),
        ),
      ),
    section_name: ($) => seq("[", field("expr", $.section_name_expr), "]"),
    section_name_expr: ($) =>
      choice(seq($.identifier, repeat(seq(".", $._field_access)))),

    expression_list: ($) =>
      prec.right(0, seq($._expression, repeat(seq($._expression)))),
    _expression: ($) =>
      choice(
        $._comment,
        $.speaker,
        $.dialog,
        $._grouping,
        $._literal,
        $._control_flow,
        $.symbol_ref,
        $._symbolic_expr,
        $.command,
      ),
    _grouping: ($) => seq("(", $.expression_list, ")"),
    symbol_ref: ($) => seq("$", field("symbol", seq($.identifier))),

    speaker: ($) => seq("(", field("speaker", $.identifier), ")"),
    dialog: ($) =>
      seq(
        field("prefix", choice("-", "*", ">")),
        field("content", $.text_content),
        $._newline,
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
    text_expr_fragment: ($) =>
      seq("{", field("expression", $._expression), "}"),

    markup_open_tag: ($) => seq("[", field("tag_name", $.identifier), "]"),
    markup_close_tag: ($) => "[/]",

    _control_flow: ($) =>
      choice(
        $.if,
        $.unless,
        $.else,
        $.loop,
        $.while,
        $.until,
        $.break,
        $.restart,
        $.end,
      ),
    if: ($) =>
      prec.right(
        0,
        seq(
          "if",
          field("condition", $._expression),
          "then",
          field("consequence", $._expression),
        ),
      ),
    unless: ($) =>
      prec.right(
        0,
        seq(
          "unless",
          field("condition", $._expression),
          "then",
          field("consequence", $._expression),
        ),
      ),
    else: ($) => seq("else", field("consequence", $._expression)),
    loop: ($) => seq("loop", field("body", $._expression)),
    while: ($) =>
      prec.right(
        0,
        seq(
          "while",
          field("condition", $._expression),
          "do",
          field("body", $._expression),
        ),
      ),
    until: ($) =>
      prec.right(
        0,
        seq(
          "until",
          field("condition", $._expression),
          "do",
          field("body", $._expression),
        ),
      ),
    break: ($) => seq("break"),
    restart: ($) => seq("restart"),
    end: ($) => seq("end", choice("section")),

    command: ($) =>
      prec.right(
        0,
        seq(
          field("name", $.identifier),
          optional($.command_attribute_list),
          $._newline,
        ),
      ),
    command_attribute_list: ($) =>
      prec.right(0, seq($._expression, repeat(seq(/,/, $._expression)))),

    _comment: ($) => choice($.inline_comment, $.attribute_comment),
    inline_comment: ($) => seq("#", /[^\n]*/, $._newline),
    attribute_comment: ($) => prec.right(2, seq("##", /[^\n]*/, $._newline)),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    _field_access: ($) => choice($.identifier, $.integer),

    _symbolic_expr: ($) => choice($._bin_expr),
    _bin_expr: ($) => choice($.addition),
    addition: ($) => prec.right(3, seq($._expression, "+", $._expression)),

    _literal: ($) => choice($.boolean, $._number),
    boolean: (_) => choice("true", "false", "yes", "no", "maybe"),
    _number: ($) => choice($.integer, $.float),
    integer: (_) => seq(/[0-9_]+/),
    float: (_) => seq(/[0-9_]+(\.[0-9_]+)?/),
  },
});

module.exports = grammar({
  name: "aster",

  extras: ($) => [/\r/],

  rules: {
    source_file: ($) =>
      choice(optional(seq(optional($.header), "---")), repeat($.block)),

    block: ($) => choice($.section),

    header: ($) => repeat1($.header_entry),
    header_entry: ($) => seq($.header_param, field("content", /[^\n]*/), "\n"),
    header_param: ($) => seq("@", field("name", $.identifier)),

    section: ($) => seq($.section_name, repeat($.section_entry)),
    section_name: ($) => seq("[", field("name", $.identifier), "]"),
    section_entry: ($) => choice("foo"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});

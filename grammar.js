/**
 * @file Gin grammar for tree-sitter
 * @author Patrick Trickett <patrickett@protonmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gin",
  rules: {
    source_file: ($) => repeat($.expression),
    // comment: ($) => token(choice(seq("#", /.*/), seq("//", /.*/))),
    expression: ($) =>
      choice($.literal, $.function_definition, $.function_call),

    // identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: ($) => /[A-z]+/,

    literal_number: ($) => /\d+/,

    // Define a rule for parsing escape sequences within strings
    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /["\\]/, // Match double quote or backslash
            /u\{[0-9a-fA-F]+\}/ // Match Unicode code point escape
            // Add more escape sequences as needed
          )
        )
      ),

    literal_string: ($) =>
      seq(
        "'", // Single quote to start the string
        /[^'\n\r]*[^\\]'/ // Characters between quotes (excluding escape sequences)
      ),

    literal_list: ($) => seq("[", commaSep($.argument), "]"),

    literal_data: ($) =>
      // identifier in this {value} is just shorthand for {value: value}
      // but we can't allow an arg so no $.function_call {value arg}? != {value}
      // you have to {value: value arg, y: 'thing'}
      seq("{", commaSep(choice($.function_definition, $.identifier)), "}"),

    literal: ($) => choice($.literal_string, $.literal_number, $.literal_data),

    // data: ($) => seq("{", commaSep(optional(choice($.identifier))), "}"),

    // _type: ($) => choice("bool", "string", "number"),

    // Define rules for handling indentation
    indent: ($) => token(choice("  ", "\t")),
    newline: ($) => "\n",
    // dedent: ($) => token(prec(-1, choice("  ", "\t"))),

    // Define a rule for indented blocks
    indented_block: ($) => seq($.indent, repeat($.expression), $.newline),

    argument: ($) => choice($.function_call, $.literal),

    function_definition: ($) =>
      seq(
        $.identifier,
        // optional(choice($.identifier, optional($._type))),
        ":",
        choice($.indented_block, $.argument)
      ),

    function_call: ($) =>
      prec.right(seq($.identifier, optional(choice($.argument)))),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

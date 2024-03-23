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
    source_file: ($) => repeat($._node),

    // comment: ($) => token(choice(seq("#", /.*/), seq("//", /.*/))),
    function_call: ($) =>
      choice(
        prec.right(seq($.identifier, $._space, optional($._expression))),
        $.identifier
      ),
    function_definition: ($) =>
      prec.right(seq(
        $.identifier,
        optional(seq($.identifier, optional($.type))),
        ":",
        choice($._block, $._expression)
      )),

    _space: ($) => /\s/,
    _statement: ($) => choice($.function_definition, $.include),
    _expression: ($) => choice($._literal, $.function_call),
    _node: ($) => choice($._statement, $._expression),
    _literal: ($) => choice($.string, $.number, $.data, $.list),
    _block: ($) => repeat1(seq(repeat1($._indent), $._node)),

    identifier: ($) => /[a-z][a-z0-9]*([A-Z][a-z0-9]*)*/,
    type: ($) => /[A-Z][a-zA-Z0-9]*/,
    number: ($) => /\d+/,
    list: ($) => seq("[", commaSep($._expression), "]"),
    string: ($) =>
      seq(
        "'", // Single quote to start the string
        /[^'\n\r]*[^\\]'/ // Characters between quotes (excluding escape sequences)
      ),
    include: ($) => seq("include"),

    // identifier in this {value} is just shorthand for {value: value}
    // but we can't allow an arg so no $.function_call {value arg}? != {value}
    // you have to {value: value arg, y: 'thing'}
    data: ($) =>
      seq("{", commaSep(choice($.function_definition, $.identifier)), "}"),

    _indent: ($) => token(choice("  ", "\t")),
    //newline: ($) => "\n",
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_literal_number = 2,
  sym_escape_sequence = 3,
  anon_sym_SQUOTE = 4,
  aux_sym_literal_string_token1 = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_indent = 11,
  sym_newline = 12,
  anon_sym_COLON = 13,
  sym_source_file = 14,
  sym_expression = 15,
  sym_literal_string = 16,
  sym_literal_data = 17,
  sym_literal = 18,
  sym_indented_block = 19,
  sym_argument = 20,
  sym_function_definition = 21,
  sym_function_call = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_literal_data_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_literal_number] = "literal_number",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_literal_string_token1] = "literal_string_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_indent] = "indent",
  [sym_newline] = "newline",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_literal_string] = "literal_string",
  [sym_literal_data] = "literal_data",
  [sym_literal] = "literal",
  [sym_indented_block] = "indented_block",
  [sym_argument] = "argument",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_literal_data_repeat1] = "literal_data_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_literal_number] = sym_literal_number,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_literal_string_token1] = aux_sym_literal_string_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_indent] = sym_indent,
  [sym_newline] = sym_newline,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_literal_string] = sym_literal_string,
  [sym_literal_data] = sym_literal_data,
  [sym_literal] = sym_literal,
  [sym_indented_block] = sym_indented_block,
  [sym_argument] = sym_argument,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_literal_data_repeat1] = aux_sym_literal_data_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_data] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_block] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_data_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 2,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 10,
  [14] = 3,
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
  [25] = 19,
  [26] = 23,
  [27] = 20,
  [28] = 24,
  [29] = 22,
  [30] = 21,
  [31] = 17,
  [32] = 32,
  [33] = 32,
  [34] = 15,
  [35] = 16,
  [36] = 18,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 40,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '{') ADVANCE(25);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '{') ADVANCE(25);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '{') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_literal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_literal_string_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_literal_string_token1);
      if (lookahead == '\'') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_indent);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_indent);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_literal_number] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_expression] = STATE(8),
    [sym_literal_string] = STATE(17),
    [sym_literal_data] = STATE(17),
    [sym_literal] = STATE(33),
    [sym_function_definition] = STATE(33),
    [sym_function_call] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_literal_number] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_newline,
    STATE(7), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(32), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [29] = 8,
    ACTIONS(7), 1,
      sym_literal_number,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(18), 1,
      sym_argument,
    STATE(16), 2,
      sym_literal,
      sym_function_call,
    STATE(17), 2,
      sym_literal_string,
      sym_literal_data,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [58] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_newline,
    STATE(6), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(32), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [87] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_newline,
    STATE(4), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(32), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [116] = 8,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_literal_number,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_newline,
    STATE(6), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(32), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [145] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym_newline,
    STATE(6), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(32), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [174] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_literal_number,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(33), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [203] = 8,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      sym_literal_number,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(9), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(33), 3,
      sym_literal,
      sym_function_definition,
      sym_function_call,
  [232] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_literal_number,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym_indent,
    STATE(16), 2,
      sym_literal,
      sym_function_call,
    STATE(17), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(21), 2,
      sym_indented_block,
      sym_argument,
  [260] = 9,
    ACTIONS(7), 1,
      sym_literal_number,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_argument,
    STATE(16), 2,
      sym_literal,
      sym_function_call,
    STATE(17), 2,
      sym_literal_string,
      sym_literal_data,
  [290] = 9,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_newline,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym_argument,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(35), 2,
      sym_literal,
      sym_function_call,
  [320] = 8,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_indent,
    STATE(30), 2,
      sym_indented_block,
      sym_argument,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(35), 2,
      sym_literal,
      sym_function_call,
  [348] = 8,
    ACTIONS(15), 1,
      sym_literal_number,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_newline,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(36), 1,
      sym_argument,
    STATE(31), 2,
      sym_literal_string,
      sym_literal_data,
    STATE(35), 2,
      sym_literal,
      sym_function_call,
  [375] = 1,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [385] = 1,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [395] = 1,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [405] = 1,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [415] = 1,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [425] = 1,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [435] = 1,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [445] = 1,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [455] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [465] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [475] = 2,
    ACTIONS(87), 1,
      sym_newline,
    ACTIONS(99), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [485] = 2,
    ACTIONS(95), 1,
      sym_newline,
    ACTIONS(101), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [495] = 2,
    ACTIONS(89), 1,
      sym_newline,
    ACTIONS(103), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [505] = 2,
    ACTIONS(97), 1,
      sym_newline,
    ACTIONS(105), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [515] = 2,
    ACTIONS(93), 1,
      sym_newline,
    ACTIONS(107), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [525] = 2,
    ACTIONS(91), 1,
      sym_newline,
    ACTIONS(109), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [535] = 2,
    ACTIONS(83), 1,
      sym_newline,
    ACTIONS(111), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [545] = 2,
    ACTIONS(115), 1,
      sym_newline,
    ACTIONS(113), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [555] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [563] = 2,
    ACTIONS(79), 1,
      sym_newline,
    ACTIONS(117), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [573] = 2,
    ACTIONS(81), 1,
      sym_newline,
    ACTIONS(119), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [583] = 2,
    ACTIONS(85), 1,
      sym_newline,
    ACTIONS(121), 4,
      sym_identifier,
      sym_literal_number,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [593] = 4,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_literal_data_repeat1,
  [606] = 4,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_literal_data_repeat1,
  [619] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_literal_data_repeat1,
  [629] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_literal_data_repeat1,
  [639] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_literal_data_repeat1,
  [649] = 2,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [657] = 3,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_function_definition,
  [667] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_literal_data_repeat1,
  [677] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_literal_data_repeat1,
  [687] = 3,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_function_definition,
  [697] = 2,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(48), 1,
      sym_function_definition,
  [704] = 1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [709] = 1,
    ACTIONS(148), 1,
      aux_sym_literal_string_token1,
  [713] = 1,
    ACTIONS(150), 1,
      aux_sym_literal_string_token1,
  [717] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 385,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 415,
  [SMALL_STATE(20)] = 425,
  [SMALL_STATE(21)] = 435,
  [SMALL_STATE(22)] = 445,
  [SMALL_STATE(23)] = 455,
  [SMALL_STATE(24)] = 465,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 485,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 515,
  [SMALL_STATE(30)] = 525,
  [SMALL_STATE(31)] = 535,
  [SMALL_STATE(32)] = 545,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 573,
  [SMALL_STATE(36)] = 583,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 619,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 657,
  [SMALL_STATE(44)] = 667,
  [SMALL_STATE(45)] = 677,
  [SMALL_STATE(46)] = 687,
  [SMALL_STATE(47)] = 697,
  [SMALL_STATE(48)] = 704,
  [SMALL_STATE(49)] = 709,
  [SMALL_STATE(50)] = 713,
  [SMALL_STATE(51)] = 717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_data, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_data, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_data, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_block, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_data, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_block, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_data, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_block, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_data, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_data_repeat1, 2), SHIFT_REPEAT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_data_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gin(void) {
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

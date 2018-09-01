#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 14
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  anon_sym_foo = 3,
  anon_sym_ = 4,
  anon_sym_CARET = 5,
  anon_sym_AMP = 6,
  anon_sym_2 = 7,
  anon_sym__ = 8,
  anon_sym_PIPE = 9,
  sym_block = 10,
  sym_expression = 11,
  sym_term = 12,
  sym_and = 13,
  sym_or = 14,
  sym__and_operator = 15,
  sym__or_operator = 16,
  aux_sym_block_repeat1 = 17,
  aux_sym_expression_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_foo] = "foo",
  [anon_sym_] = "∧",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_2] = "∨",
  [anon_sym__] = "_",
  [anon_sym_PIPE] = "|",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym__and_operator] = "_and_operator",
  [sym__or_operator] = "_or_operator",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym__and_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__or_operator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '^')
        ADVANCE(5);
      if (lookahead == '_')
        ADVANCE(6);
      if (lookahead == 'f')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(10);
      if (lookahead == 8743)
        ADVANCE(11);
      if (lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 7:
      if (lookahead == 'o')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'o')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_foo);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'f')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_foo] = ACTIONS(3),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
  },
  [1] = {
    [sym_block] = STATE(3),
    [sym_expression] = STATE(5),
    [sym_term] = STATE(4),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(9),
  },
  [2] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_foo] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(15),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__and_operator] = STATE(7),
    [sym__or_operator] = STATE(8),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_foo] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym__] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
  },
  [5] = {
    [sym_expression] = STATE(9),
    [sym_term] = STATE(4),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [aux_sym_block_repeat1] = STATE(9),
    [aux_sym_expression_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(9),
  },
  [6] = {
    [sym_term] = STATE(4),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [aux_sym_expression_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_foo] = ACTIONS(31),
  },
  [7] = {
    [sym_term] = STATE(12),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(9),
  },
  [8] = {
    [sym_term] = STATE(13),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(9),
  },
  [9] = {
    [sym_expression] = STATE(9),
    [sym_term] = STATE(4),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [aux_sym_block_repeat1] = STATE(9),
    [aux_sym_expression_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(35),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_comment] = ACTIONS(7),
    [anon_sym_foo] = ACTIONS(38),
  },
  [11] = {
    [sym_term] = STATE(4),
    [sym_and] = STATE(2),
    [sym_or] = STATE(2),
    [aux_sym_expression_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(40),
    [anon_sym_foo] = ACTIONS(42),
  },
  [12] = {
    [sym__and_operator] = STATE(7),
    [sym__or_operator] = STATE(8),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_foo] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_2] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
  },
  [13] = {
    [sym__and_operator] = STATE(7),
    [sym__or_operator] = STATE(8),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_foo] = ACTIONS(51),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [15] = {.count = 1, .reusable = false}, REDUCE(sym_term, 1),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 1),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(2),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [42] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nd() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

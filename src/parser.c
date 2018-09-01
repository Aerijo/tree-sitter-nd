#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 37
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_function_name = 5,
  anon_sym_DASH = 6,
  anon_sym_BANG = 7,
  anon_sym_TILDE = 8,
  anon_sym_ = 9,
  anon_sym_CARET = 10,
  anon_sym_AMP = 11,
  anon_sym_2 = 12,
  anon_sym__ = 13,
  anon_sym_PIPE = 14,
  anon_sym_3 = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_4 = 18,
  anon_sym_5 = 19,
  anon_sym_LT_DASH_GT = 20,
  anon_sym_LT_EQ_GT = 21,
  anon_sym_6 = 22,
  anon_sym_7 = 23,
  anon_sym_8 = 24,
  sym_variable = 25,
  sym_block = 26,
  sym_expression = 27,
  sym__term = 28,
  sym_function = 29,
  sym_not = 30,
  sym_and = 31,
  sym_or = 32,
  sym_implies = 33,
  sym_iff = 34,
  sym__not_operator = 35,
  sym__and_operator = 36,
  sym__or_operator = 37,
  sym__implies_operator = 38,
  sym__iff_operator = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_expression_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_function_name] = "function_name",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_] = "¬",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_2] = "∧",
  [anon_sym__] = "_",
  [anon_sym_PIPE] = "|",
  [anon_sym_3] = "∨",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_4] = "→",
  [anon_sym_5] = "⇒",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_6] = "↔",
  [anon_sym_7] = "⇔",
  [anon_sym_8] = "≡",
  [sym_variable] = "variable",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_function] = "function",
  [sym_not] = "not",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_implies] = "implies",
  [sym_iff] = "iff",
  [sym__not_operator] = "_not_operator",
  [sym__and_operator] = "_and_operator",
  [sym__or_operator] = "_or_operator",
  [sym__implies_operator] = "_implies_operator",
  [sym__iff_operator] = "_iff_operator",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
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
  [sym_implies] = {
    .visible = true,
    .named = true,
  },
  [sym_iff] = {
    .visible = true,
    .named = true,
  },
  [sym__not_operator] = {
    .visible = false,
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
  [sym__implies_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__iff_operator] = {
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == '~')
        ADVANCE(19);
      if (lookahead == 172)
        ADVANCE(20);
      if (lookahead == 8594)
        ADVANCE(21);
      if (lookahead == 8596)
        ADVANCE(22);
      if (lookahead == 8658)
        ADVANCE(23);
      if (lookahead == 8660)
        ADVANCE(24);
      if (lookahead == 8743)
        ADVANCE(25);
      if (lookahead == 8744)
        ADVANCE(26);
      if (lookahead == 8801)
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 9:
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 12:
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 14:
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(19);
      if (lookahead == 172)
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == '~')
        ADVANCE(19);
      if (lookahead == 172)
        ADVANCE(20);
      if (lookahead == 8594)
        ADVANCE(21);
      if (lookahead == 8596)
        ADVANCE(22);
      if (lookahead == 8658)
        ADVANCE(23);
      if (lookahead == 8660)
        ADVANCE(24);
      if (lookahead == 8743)
        ADVANCE(25);
      if (lookahead == 8744)
        ADVANCE(26);
      if (lookahead == 8801)
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 36:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '|')
        ADVANCE(18);
      if (lookahead == 8594)
        ADVANCE(21);
      if (lookahead == 8596)
        ADVANCE(22);
      if (lookahead == 8658)
        ADVANCE(23);
      if (lookahead == 8660)
        ADVANCE(24);
      if (lookahead == 8743)
        ADVANCE(25);
      if (lookahead == 8744)
        ADVANCE(26);
      if (lookahead == 8801)
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(3),
    [sym_expression] = STATE(6),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym__not_operator] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [sym_function_name] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_EQ_GT] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_LT_DASH_GT] = ACTIONS(31),
    [anon_sym_LT_EQ_GT] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(31),
    [anon_sym_7] = ACTIONS(31),
    [anon_sym_8] = ACTIONS(31),
    [sym_variable] = ACTIONS(23),
  },
  [5] = {
    [sym__term] = STATE(13),
    [sym_function] = STATE(13),
    [sym_not] = STATE(13),
    [sym_and] = STATE(13),
    [sym_or] = STATE(13),
    [sym_implies] = STATE(13),
    [sym_iff] = STATE(13),
    [sym__not_operator] = STATE(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(33),
  },
  [6] = {
    [sym_expression] = STATE(14),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym__not_operator] = STATE(5),
    [aux_sym_block_repeat1] = STATE(14),
    [aux_sym_expression_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
  },
  [7] = {
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym__not_operator] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(37),
    [sym_function_name] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_] = ACTIONS(41),
    [sym_variable] = ACTIONS(43),
  },
  [8] = {
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(49),
  },
  [9] = {
    [sym__term] = STATE(20),
    [sym_function] = STATE(20),
    [sym_not] = STATE(20),
    [sym_and] = STATE(20),
    [sym_or] = STATE(20),
    [sym_implies] = STATE(20),
    [sym_iff] = STATE(20),
    [sym__not_operator] = STATE(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(51),
  },
  [10] = {
    [sym__term] = STATE(21),
    [sym_function] = STATE(21),
    [sym_not] = STATE(21),
    [sym_and] = STATE(21),
    [sym_or] = STATE(21),
    [sym_implies] = STATE(21),
    [sym_iff] = STATE(21),
    [sym__not_operator] = STATE(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(53),
  },
  [11] = {
    [sym__term] = STATE(22),
    [sym_function] = STATE(22),
    [sym_not] = STATE(22),
    [sym_and] = STATE(22),
    [sym_or] = STATE(22),
    [sym_implies] = STATE(22),
    [sym_iff] = STATE(22),
    [sym__not_operator] = STATE(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(55),
  },
  [12] = {
    [sym__term] = STATE(23),
    [sym_function] = STATE(23),
    [sym_not] = STATE(23),
    [sym_and] = STATE(23),
    [sym_or] = STATE(23),
    [sym_implies] = STATE(23),
    [sym_iff] = STATE(23),
    [sym__not_operator] = STATE(5),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_] = ACTIONS(11),
    [sym_variable] = ACTIONS(57),
  },
  [13] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(59),
    [sym_function_name] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_2] = ACTIONS(61),
    [anon_sym__] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_EQ_GT] = ACTIONS(61),
    [anon_sym_4] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [sym_variable] = ACTIONS(61),
  },
  [14] = {
    [sym_expression] = STATE(14),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym__not_operator] = STATE(5),
    [aux_sym_block_repeat1] = STATE(14),
    [aux_sym_expression_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_] = ACTIONS(68),
    [sym_variable] = ACTIONS(71),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_] = ACTIONS(74),
    [sym_variable] = ACTIONS(74),
  },
  [16] = {
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym__not_operator] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(76),
    [sym_function_name] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_] = ACTIONS(81),
    [sym_variable] = ACTIONS(84),
  },
  [17] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [18] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_3] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
  },
  [19] = {
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(99),
  },
  [20] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(101),
    [sym_function_name] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_2] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_3] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_4] = ACTIONS(103),
    [anon_sym_5] = ACTIONS(103),
    [anon_sym_LT_DASH_GT] = ACTIONS(103),
    [anon_sym_LT_EQ_GT] = ACTIONS(103),
    [anon_sym_6] = ACTIONS(103),
    [anon_sym_7] = ACTIONS(103),
    [anon_sym_8] = ACTIONS(103),
    [sym_variable] = ACTIONS(103),
  },
  [21] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(105),
    [sym_function_name] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_4] = ACTIONS(107),
    [anon_sym_5] = ACTIONS(107),
    [anon_sym_LT_DASH_GT] = ACTIONS(107),
    [anon_sym_LT_EQ_GT] = ACTIONS(107),
    [anon_sym_6] = ACTIONS(107),
    [anon_sym_7] = ACTIONS(107),
    [anon_sym_8] = ACTIONS(107),
    [sym_variable] = ACTIONS(107),
  },
  [22] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(109),
    [sym_function_name] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_EQ_GT] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_LT_DASH_GT] = ACTIONS(111),
    [anon_sym_LT_EQ_GT] = ACTIONS(111),
    [anon_sym_6] = ACTIONS(111),
    [anon_sym_7] = ACTIONS(111),
    [anon_sym_8] = ACTIONS(111),
    [sym_variable] = ACTIONS(111),
  },
  [23] = {
    [sym__and_operator] = STATE(9),
    [sym__or_operator] = STATE(10),
    [sym__implies_operator] = STATE(11),
    [sym__iff_operator] = STATE(12),
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(113),
    [sym_function_name] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_EQ_GT] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_LT_DASH_GT] = ACTIONS(31),
    [anon_sym_LT_EQ_GT] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(31),
    [anon_sym_7] = ACTIONS(31),
    [anon_sym_8] = ACTIONS(31),
    [sym_variable] = ACTIONS(115),
  },
  [24] = {
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(117),
  },
  [25] = {
    [sym_comment] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(119),
    [sym_function_name] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_2] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_3] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_EQ_GT] = ACTIONS(121),
    [anon_sym_4] = ACTIONS(121),
    [anon_sym_5] = ACTIONS(121),
    [anon_sym_LT_DASH_GT] = ACTIONS(121),
    [anon_sym_LT_EQ_GT] = ACTIONS(121),
    [anon_sym_6] = ACTIONS(121),
    [anon_sym_7] = ACTIONS(121),
    [anon_sym_8] = ACTIONS(121),
    [sym_variable] = ACTIONS(121),
  },
  [26] = {
    [sym__term] = STATE(32),
    [sym_function] = STATE(32),
    [sym_not] = STATE(32),
    [sym_and] = STATE(32),
    [sym_or] = STATE(32),
    [sym_implies] = STATE(32),
    [sym_iff] = STATE(32),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(123),
  },
  [27] = {
    [sym__term] = STATE(33),
    [sym_function] = STATE(33),
    [sym_not] = STATE(33),
    [sym_and] = STATE(33),
    [sym_or] = STATE(33),
    [sym_implies] = STATE(33),
    [sym_iff] = STATE(33),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(125),
  },
  [28] = {
    [sym__term] = STATE(34),
    [sym_function] = STATE(34),
    [sym_not] = STATE(34),
    [sym_and] = STATE(34),
    [sym_or] = STATE(34),
    [sym_implies] = STATE(34),
    [sym_iff] = STATE(34),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(127),
  },
  [29] = {
    [sym__term] = STATE(35),
    [sym_function] = STATE(35),
    [sym_not] = STATE(35),
    [sym_and] = STATE(35),
    [sym_or] = STATE(35),
    [sym_implies] = STATE(35),
    [sym_iff] = STATE(35),
    [sym__not_operator] = STATE(19),
    [sym_comment] = ACTIONS(7),
    [sym_function_name] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [sym_variable] = ACTIONS(129),
  },
  [30] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_2] = ACTIONS(59),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_3] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(59),
    [anon_sym_LT_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
  },
  [31] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_3] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
  },
  [32] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_2] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_3] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_4] = ACTIONS(101),
    [anon_sym_5] = ACTIONS(101),
    [anon_sym_LT_DASH_GT] = ACTIONS(101),
    [anon_sym_LT_EQ_GT] = ACTIONS(101),
    [anon_sym_6] = ACTIONS(101),
    [anon_sym_7] = ACTIONS(101),
    [anon_sym_8] = ACTIONS(101),
  },
  [33] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym__] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_3] = ACTIONS(105),
    [anon_sym_DASH_GT] = ACTIONS(105),
    [anon_sym_EQ_GT] = ACTIONS(105),
    [anon_sym_4] = ACTIONS(105),
    [anon_sym_5] = ACTIONS(105),
    [anon_sym_LT_DASH_GT] = ACTIONS(105),
    [anon_sym_LT_EQ_GT] = ACTIONS(105),
    [anon_sym_6] = ACTIONS(105),
    [anon_sym_7] = ACTIONS(105),
    [anon_sym_8] = ACTIONS(105),
  },
  [34] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_3] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(109),
    [anon_sym_LT_EQ_GT] = ACTIONS(109),
    [anon_sym_6] = ACTIONS(109),
    [anon_sym_7] = ACTIONS(109),
    [anon_sym_8] = ACTIONS(109),
  },
  [35] = {
    [sym__and_operator] = STATE(26),
    [sym__or_operator] = STATE(27),
    [sym__implies_operator] = STATE(28),
    [sym__iff_operator] = STATE(29),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_3] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
  },
  [36] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_2] = ACTIONS(119),
    [anon_sym__] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_3] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(119),
    [anon_sym_EQ_GT] = ACTIONS(119),
    [anon_sym_4] = ACTIONS(119),
    [anon_sym_5] = ACTIONS(119),
    [anon_sym_LT_DASH_GT] = ACTIONS(119),
    [anon_sym_LT_EQ_GT] = ACTIONS(119),
    [anon_sym_6] = ACTIONS(119),
    [anon_sym_7] = ACTIONS(119),
    [anon_sym_8] = ACTIONS(119),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(2),
  [41] = {.count = 1, .reusable = false}, SHIFT(5),
  [43] = {.count = 1, .reusable = false}, SHIFT(4),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(18),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.count = 1, .reusable = true}, SHIFT(24),
  [89] = {.count = 1, .reusable = true}, SHIFT(25),
  [91] = {.count = 1, .reusable = true}, SHIFT(26),
  [93] = {.count = 1, .reusable = true}, SHIFT(27),
  [95] = {.count = 1, .reusable = true}, SHIFT(28),
  [97] = {.count = 1, .reusable = true}, SHIFT(29),
  [99] = {.count = 1, .reusable = true}, SHIFT(30),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_iff, 3),
  [117] = {.count = 1, .reusable = true}, SHIFT(31),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [123] = {.count = 1, .reusable = true}, SHIFT(32),
  [125] = {.count = 1, .reusable = true}, SHIFT(33),
  [127] = {.count = 1, .reusable = true}, SHIFT(34),
  [129] = {.count = 1, .reusable = true}, SHIFT(35),
  [131] = {.count = 1, .reusable = true}, SHIFT(36),
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

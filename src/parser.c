#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 53
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_variable = 5,
  sym_function_name = 6,
  sym_true = 7,
  sym_false = 8,
  anon_sym_DASH = 9,
  anon_sym_BANG = 10,
  anon_sym_TILDE = 11,
  anon_sym_ = 12,
  anon_sym_CARET = 13,
  anon_sym_AMP = 14,
  anon_sym_2 = 15,
  anon_sym__ = 16,
  anon_sym_PIPE = 17,
  anon_sym_3 = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_4 = 21,
  anon_sym_5 = 22,
  anon_sym_LT_DASH_GT = 23,
  anon_sym_LT_EQ_GT = 24,
  anon_sym_6 = 25,
  anon_sym_7 = 26,
  anon_sym_8 = 27,
  anon_sym_A = 28,
  anon_sym_9 = 29,
  anon_sym_E = 30,
  anon_sym_10 = 31,
  sym__universal_sep = 32,
  sym_block = 33,
  sym_expression = 34,
  sym__term = 35,
  sym_function = 36,
  sym_not = 37,
  sym_and = 38,
  sym_or = 39,
  sym_implies = 40,
  sym_iff = 41,
  sym_forall = 42,
  sym_exists = 43,
  sym__not_operator = 44,
  sym__and_operator = 45,
  sym__or_operator = 46,
  sym__implies_operator = 47,
  sym__iff_operator = 48,
  sym__forall_operator = 49,
  sym__exists_operator = 50,
  aux_sym_block_repeat1 = 51,
  aux_sym_expression_repeat1 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_variable] = "variable",
  [sym_function_name] = "function_name",
  [sym_true] = "true",
  [sym_false] = "false",
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
  [anon_sym_A] = "A",
  [anon_sym_9] = "∀",
  [anon_sym_E] = "E",
  [anon_sym_10] = "∃",
  [sym__universal_sep] = "_universal_sep",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_function] = "function",
  [sym_not] = "not",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_implies] = "implies",
  [sym_iff] = "iff",
  [sym_forall] = "forall",
  [sym_exists] = "exists",
  [sym__not_operator] = "_not_operator",
  [sym__and_operator] = "_and_operator",
  [sym__or_operator] = "_or_operator",
  [sym__implies_operator] = "_implies_operator",
  [sym__iff_operator] = "_iff_operator",
  [sym__forall_operator] = "_forall_operator",
  [sym__exists_operator] = "_exists_operator",
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [sym__universal_sep] = {
    .visible = false,
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
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_exists] = {
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
  [sym__forall_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__exists_operator] = {
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
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(17);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'F')
        ADVANCE(20);
      if (lookahead == 'T')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(22);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == 172)
        ADVANCE(26);
      if (lookahead == 8594)
        ADVANCE(27);
      if (lookahead == 8596)
        ADVANCE(28);
      if (lookahead == 8658)
        ADVANCE(29);
      if (lookahead == 8660)
        ADVANCE(30);
      if (lookahead == 8704)
        ADVANCE(31);
      if (lookahead == 8707)
        ADVANCE(32);
      if (lookahead == 8743)
        ADVANCE(33);
      if (lookahead == 8744)
        ADVANCE(34);
      if (lookahead == 8801)
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
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
      ACCEPT_TOKEN(sym__universal_sep);
      END_STATE();
    case 10:
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 13:
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 15:
      if (lookahead == '>')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(17);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'F')
        ADVANCE(20);
      if (lookahead == 'T')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == 172)
        ADVANCE(26);
      if (lookahead == 8704)
        ADVANCE(31);
      if (lookahead == 8707)
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        ADVANCE(40);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(17);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'F')
        ADVANCE(20);
      if (lookahead == 'T')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(22);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == 172)
        ADVANCE(26);
      if (lookahead == 8594)
        ADVANCE(27);
      if (lookahead == 8596)
        ADVANCE(28);
      if (lookahead == 8658)
        ADVANCE(29);
      if (lookahead == 8660)
        ADVANCE(30);
      if (lookahead == 8704)
        ADVANCE(31);
      if (lookahead == 8707)
        ADVANCE(32);
      if (lookahead == 8743)
        ADVANCE(33);
      if (lookahead == 8744)
        ADVANCE(34);
      if (lookahead == 8801)
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '^')
        ADVANCE(22);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == 8594)
        ADVANCE(27);
      if (lookahead == 8596)
        ADVANCE(28);
      if (lookahead == 8658)
        ADVANCE(29);
      if (lookahead == 8660)
        ADVANCE(30);
      if (lookahead == 8743)
        ADVANCE(33);
      if (lookahead == 8744)
        ADVANCE(34);
      if (lookahead == 8801)
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_function_name] = ACTIONS(3),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
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
    [anon_sym_A] = ACTIONS(3),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(3),
    [anon_sym_10] = ACTIONS(1),
    [sym__universal_sep] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(3),
    [sym_expression] = STATE(8),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym_forall] = STATE(4),
    [sym_exists] = STATE(4),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_expression_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [2] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_function_name] = ACTIONS(31),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(31),
    [anon_sym_4] = ACTIONS(31),
    [anon_sym_5] = ACTIONS(31),
    [anon_sym_LT_DASH_GT] = ACTIONS(31),
    [anon_sym_LT_EQ_GT] = ACTIONS(31),
    [anon_sym_6] = ACTIONS(31),
    [anon_sym_7] = ACTIONS(31),
    [anon_sym_8] = ACTIONS(31),
    [anon_sym_A] = ACTIONS(31),
    [anon_sym_9] = ACTIONS(31),
    [anon_sym_E] = ACTIONS(31),
    [anon_sym_10] = ACTIONS(31),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(35),
    [sym_variable] = ACTIONS(37),
    [sym_function_name] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_A] = ACTIONS(37),
    [anon_sym_9] = ACTIONS(37),
    [anon_sym_E] = ACTIONS(37),
    [anon_sym_10] = ACTIONS(37),
  },
  [5] = {
    [sym__term] = STATE(15),
    [sym_function] = STATE(15),
    [sym_not] = STATE(15),
    [sym_and] = STATE(15),
    [sym_or] = STATE(15),
    [sym_implies] = STATE(15),
    [sym_iff] = STATE(15),
    [sym_forall] = STATE(15),
    [sym_exists] = STATE(15),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(47),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [6] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(51),
  },
  [7] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(53),
  },
  [8] = {
    [sym_expression] = STATE(18),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym_forall] = STATE(4),
    [sym_exists] = STATE(4),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [aux_sym_block_repeat1] = STATE(18),
    [aux_sym_expression_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [9] = {
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym_forall] = STATE(4),
    [sym_exists] = STATE(4),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [aux_sym_expression_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(57),
    [sym_variable] = ACTIONS(13),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(59),
    [anon_sym_] = ACTIONS(59),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(21),
  },
  [10] = {
    [sym__term] = STATE(22),
    [sym_function] = STATE(22),
    [sym_not] = STATE(22),
    [sym_and] = STATE(22),
    [sym_or] = STATE(22),
    [sym_implies] = STATE(22),
    [sym_iff] = STATE(22),
    [sym_forall] = STATE(22),
    [sym_exists] = STATE(22),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(61),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [11] = {
    [sym__term] = STATE(26),
    [sym_function] = STATE(26),
    [sym_not] = STATE(26),
    [sym_and] = STATE(26),
    [sym_or] = STATE(26),
    [sym_implies] = STATE(26),
    [sym_iff] = STATE(26),
    [sym_forall] = STATE(26),
    [sym_exists] = STATE(26),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(77),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [12] = {
    [sym__term] = STATE(27),
    [sym_function] = STATE(27),
    [sym_not] = STATE(27),
    [sym_and] = STATE(27),
    [sym_or] = STATE(27),
    [sym_implies] = STATE(27),
    [sym_iff] = STATE(27),
    [sym_forall] = STATE(27),
    [sym_exists] = STATE(27),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(81),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [13] = {
    [sym__term] = STATE(28),
    [sym_function] = STATE(28),
    [sym_not] = STATE(28),
    [sym_and] = STATE(28),
    [sym_or] = STATE(28),
    [sym_implies] = STATE(28),
    [sym_iff] = STATE(28),
    [sym_forall] = STATE(28),
    [sym_exists] = STATE(28),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(85),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [14] = {
    [sym__term] = STATE(29),
    [sym_function] = STATE(29),
    [sym_not] = STATE(29),
    [sym_and] = STATE(29),
    [sym_or] = STATE(29),
    [sym_implies] = STATE(29),
    [sym_iff] = STATE(29),
    [sym_forall] = STATE(29),
    [sym_exists] = STATE(29),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(89),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [15] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(93),
    [sym_variable] = ACTIONS(95),
    [sym_function_name] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_2] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_3] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(95),
    [anon_sym_LT_EQ_GT] = ACTIONS(95),
    [anon_sym_6] = ACTIONS(95),
    [anon_sym_7] = ACTIONS(95),
    [anon_sym_8] = ACTIONS(95),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_9] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(95),
    [anon_sym_10] = ACTIONS(95),
  },
  [16] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(97),
  },
  [17] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(99),
  },
  [18] = {
    [sym_expression] = STATE(18),
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym_forall] = STATE(4),
    [sym_exists] = STATE(4),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [aux_sym_block_repeat1] = STATE(18),
    [aux_sym_expression_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(103),
    [sym_function_name] = ACTIONS(106),
    [sym_true] = ACTIONS(109),
    [sym_false] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym_] = ACTIONS(112),
    [anon_sym_A] = ACTIONS(115),
    [anon_sym_9] = ACTIONS(118),
    [anon_sym_E] = ACTIONS(121),
    [anon_sym_10] = ACTIONS(124),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(127),
    [sym_function_name] = ACTIONS(129),
    [sym_true] = ACTIONS(129),
    [sym_false] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_] = ACTIONS(127),
    [anon_sym_A] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(127),
    [anon_sym_E] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(127),
  },
  [20] = {
    [sym__term] = STATE(4),
    [sym_function] = STATE(4),
    [sym_not] = STATE(4),
    [sym_and] = STATE(4),
    [sym_or] = STATE(4),
    [sym_implies] = STATE(4),
    [sym_iff] = STATE(4),
    [sym_forall] = STATE(4),
    [sym_exists] = STATE(4),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [aux_sym_expression_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(131),
    [sym_variable] = ACTIONS(133),
    [sym_function_name] = ACTIONS(136),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_] = ACTIONS(139),
    [anon_sym_A] = ACTIONS(142),
    [anon_sym_9] = ACTIONS(142),
    [anon_sym_E] = ACTIONS(145),
    [anon_sym_10] = ACTIONS(145),
  },
  [21] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [anon_sym_EQ_GT] = ACTIONS(27),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_LT_DASH_GT] = ACTIONS(27),
    [anon_sym_LT_EQ_GT] = ACTIONS(27),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
  },
  [22] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
  },
  [23] = {
    [sym__term] = STATE(38),
    [sym_function] = STATE(38),
    [sym_not] = STATE(38),
    [sym_and] = STATE(38),
    [sym_or] = STATE(38),
    [sym_implies] = STATE(38),
    [sym_iff] = STATE(38),
    [sym_forall] = STATE(38),
    [sym_exists] = STATE(38),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(160),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(162),
    [sym_false] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [24] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(164),
  },
  [25] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(166),
  },
  [26] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(168),
    [sym_variable] = ACTIONS(170),
    [sym_function_name] = ACTIONS(170),
    [sym_true] = ACTIONS(170),
    [sym_false] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_2] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_4] = ACTIONS(170),
    [anon_sym_5] = ACTIONS(170),
    [anon_sym_LT_DASH_GT] = ACTIONS(170),
    [anon_sym_LT_EQ_GT] = ACTIONS(170),
    [anon_sym_6] = ACTIONS(170),
    [anon_sym_7] = ACTIONS(170),
    [anon_sym_8] = ACTIONS(170),
    [anon_sym_A] = ACTIONS(170),
    [anon_sym_9] = ACTIONS(170),
    [anon_sym_E] = ACTIONS(170),
    [anon_sym_10] = ACTIONS(170),
  },
  [27] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(172),
    [sym_variable] = ACTIONS(174),
    [sym_function_name] = ACTIONS(174),
    [sym_true] = ACTIONS(174),
    [sym_false] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_3] = ACTIONS(174),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_4] = ACTIONS(174),
    [anon_sym_5] = ACTIONS(174),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
    [anon_sym_A] = ACTIONS(174),
    [anon_sym_9] = ACTIONS(174),
    [anon_sym_E] = ACTIONS(174),
    [anon_sym_10] = ACTIONS(174),
  },
  [28] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(176),
    [sym_variable] = ACTIONS(178),
    [sym_function_name] = ACTIONS(178),
    [sym_true] = ACTIONS(178),
    [sym_false] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(178),
    [anon_sym_LT_EQ_GT] = ACTIONS(178),
    [anon_sym_6] = ACTIONS(178),
    [anon_sym_7] = ACTIONS(178),
    [anon_sym_8] = ACTIONS(178),
    [anon_sym_A] = ACTIONS(178),
    [anon_sym_9] = ACTIONS(178),
    [anon_sym_E] = ACTIONS(178),
    [anon_sym_10] = ACTIONS(178),
  },
  [29] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(180),
    [sym_variable] = ACTIONS(182),
    [sym_function_name] = ACTIONS(182),
    [sym_true] = ACTIONS(182),
    [sym_false] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(182),
    [anon_sym_] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_A] = ACTIONS(182),
    [anon_sym_9] = ACTIONS(182),
    [anon_sym_E] = ACTIONS(182),
    [anon_sym_10] = ACTIONS(182),
  },
  [30] = {
    [sym__term] = STATE(41),
    [sym_function] = STATE(41),
    [sym_not] = STATE(41),
    [sym_and] = STATE(41),
    [sym_or] = STATE(41),
    [sym_implies] = STATE(41),
    [sym_iff] = STATE(41),
    [sym_forall] = STATE(41),
    [sym_exists] = STATE(41),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(184),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(186),
    [sym_false] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [31] = {
    [sym__term] = STATE(42),
    [sym_function] = STATE(42),
    [sym_not] = STATE(42),
    [sym_and] = STATE(42),
    [sym_or] = STATE(42),
    [sym_implies] = STATE(42),
    [sym_iff] = STATE(42),
    [sym_forall] = STATE(42),
    [sym_exists] = STATE(42),
    [sym__not_operator] = STATE(5),
    [sym__forall_operator] = STATE(6),
    [sym__exists_operator] = STATE(7),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(188),
    [sym_function_name] = ACTIONS(11),
    [sym_true] = ACTIONS(190),
    [sym_false] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(23),
  },
  [32] = {
    [sym__term] = STATE(43),
    [sym_function] = STATE(43),
    [sym_not] = STATE(43),
    [sym_and] = STATE(43),
    [sym_or] = STATE(43),
    [sym_implies] = STATE(43),
    [sym_iff] = STATE(43),
    [sym_forall] = STATE(43),
    [sym_exists] = STATE(43),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(192),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(194),
    [sym_false] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [33] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(196),
    [sym_variable] = ACTIONS(198),
    [sym_function_name] = ACTIONS(198),
    [sym_true] = ACTIONS(198),
    [sym_false] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_2] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_3] = ACTIONS(198),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_EQ_GT] = ACTIONS(198),
    [anon_sym_4] = ACTIONS(198),
    [anon_sym_5] = ACTIONS(198),
    [anon_sym_LT_DASH_GT] = ACTIONS(198),
    [anon_sym_LT_EQ_GT] = ACTIONS(198),
    [anon_sym_6] = ACTIONS(198),
    [anon_sym_7] = ACTIONS(198),
    [anon_sym_8] = ACTIONS(198),
    [anon_sym_A] = ACTIONS(198),
    [anon_sym_9] = ACTIONS(198),
    [anon_sym_E] = ACTIONS(198),
    [anon_sym_10] = ACTIONS(198),
  },
  [34] = {
    [sym__term] = STATE(44),
    [sym_function] = STATE(44),
    [sym_not] = STATE(44),
    [sym_and] = STATE(44),
    [sym_or] = STATE(44),
    [sym_implies] = STATE(44),
    [sym_iff] = STATE(44),
    [sym_forall] = STATE(44),
    [sym_exists] = STATE(44),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(200),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(202),
    [sym_false] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [35] = {
    [sym__term] = STATE(45),
    [sym_function] = STATE(45),
    [sym_not] = STATE(45),
    [sym_and] = STATE(45),
    [sym_or] = STATE(45),
    [sym_implies] = STATE(45),
    [sym_iff] = STATE(45),
    [sym_forall] = STATE(45),
    [sym_exists] = STATE(45),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(204),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(206),
    [sym_false] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [36] = {
    [sym__term] = STATE(46),
    [sym_function] = STATE(46),
    [sym_not] = STATE(46),
    [sym_and] = STATE(46),
    [sym_or] = STATE(46),
    [sym_implies] = STATE(46),
    [sym_iff] = STATE(46),
    [sym_forall] = STATE(46),
    [sym_exists] = STATE(46),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(208),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(210),
    [sym_false] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [37] = {
    [sym__term] = STATE(47),
    [sym_function] = STATE(47),
    [sym_not] = STATE(47),
    [sym_and] = STATE(47),
    [sym_or] = STATE(47),
    [sym_implies] = STATE(47),
    [sym_iff] = STATE(47),
    [sym_forall] = STATE(47),
    [sym_exists] = STATE(47),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(212),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(214),
    [sym_false] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [38] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_2] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_3] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_EQ_GT] = ACTIONS(93),
    [anon_sym_4] = ACTIONS(93),
    [anon_sym_5] = ACTIONS(93),
    [anon_sym_LT_DASH_GT] = ACTIONS(93),
    [anon_sym_LT_EQ_GT] = ACTIONS(93),
    [anon_sym_6] = ACTIONS(93),
    [anon_sym_7] = ACTIONS(93),
    [anon_sym_8] = ACTIONS(93),
  },
  [39] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(216),
  },
  [40] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(218),
  },
  [41] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(220),
    [sym_variable] = ACTIONS(222),
    [sym_function_name] = ACTIONS(222),
    [sym_true] = ACTIONS(222),
    [sym_false] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_A] = ACTIONS(222),
    [anon_sym_9] = ACTIONS(222),
    [anon_sym_E] = ACTIONS(222),
    [anon_sym_10] = ACTIONS(222),
  },
  [42] = {
    [sym__and_operator] = STATE(11),
    [sym__or_operator] = STATE(12),
    [sym__implies_operator] = STATE(13),
    [sym__iff_operator] = STATE(14),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(224),
    [sym_variable] = ACTIONS(226),
    [sym_function_name] = ACTIONS(226),
    [sym_true] = ACTIONS(226),
    [sym_false] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(226),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_EQ_GT] = ACTIONS(43),
    [anon_sym_4] = ACTIONS(43),
    [anon_sym_5] = ACTIONS(43),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_A] = ACTIONS(226),
    [anon_sym_9] = ACTIONS(226),
    [anon_sym_E] = ACTIONS(226),
    [anon_sym_10] = ACTIONS(226),
  },
  [43] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
  },
  [44] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_3] = ACTIONS(168),
    [anon_sym_DASH_GT] = ACTIONS(168),
    [anon_sym_EQ_GT] = ACTIONS(168),
    [anon_sym_4] = ACTIONS(168),
    [anon_sym_5] = ACTIONS(168),
    [anon_sym_LT_DASH_GT] = ACTIONS(168),
    [anon_sym_LT_EQ_GT] = ACTIONS(168),
    [anon_sym_6] = ACTIONS(168),
    [anon_sym_7] = ACTIONS(168),
    [anon_sym_8] = ACTIONS(168),
  },
  [45] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_3] = ACTIONS(172),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(172),
    [anon_sym_LT_EQ_GT] = ACTIONS(172),
    [anon_sym_6] = ACTIONS(172),
    [anon_sym_7] = ACTIONS(172),
    [anon_sym_8] = ACTIONS(172),
  },
  [46] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(176),
    [anon_sym_LT_EQ_GT] = ACTIONS(176),
    [anon_sym_6] = ACTIONS(176),
    [anon_sym_7] = ACTIONS(176),
    [anon_sym_8] = ACTIONS(176),
  },
  [47] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
  },
  [48] = {
    [sym__term] = STATE(51),
    [sym_function] = STATE(51),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_implies] = STATE(51),
    [sym_iff] = STATE(51),
    [sym_forall] = STATE(51),
    [sym_exists] = STATE(51),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(230),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [49] = {
    [sym__term] = STATE(52),
    [sym_function] = STATE(52),
    [sym_not] = STATE(52),
    [sym_and] = STATE(52),
    [sym_or] = STATE(52),
    [sym_implies] = STATE(52),
    [sym_iff] = STATE(52),
    [sym_forall] = STATE(52),
    [sym_exists] = STATE(52),
    [sym__not_operator] = STATE(23),
    [sym__forall_operator] = STATE(24),
    [sym__exists_operator] = STATE(25),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(234),
    [sym_function_name] = ACTIONS(63),
    [sym_true] = ACTIONS(236),
    [sym_false] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_9] = ACTIONS(71),
    [anon_sym_E] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(75),
  },
  [50] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_2] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_3] = ACTIONS(196),
    [anon_sym_DASH_GT] = ACTIONS(196),
    [anon_sym_EQ_GT] = ACTIONS(196),
    [anon_sym_4] = ACTIONS(196),
    [anon_sym_5] = ACTIONS(196),
    [anon_sym_LT_DASH_GT] = ACTIONS(196),
    [anon_sym_LT_EQ_GT] = ACTIONS(196),
    [anon_sym_6] = ACTIONS(196),
    [anon_sym_7] = ACTIONS(196),
    [anon_sym_8] = ACTIONS(196),
  },
  [51] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
  },
  [52] = {
    [sym__and_operator] = STATE(34),
    [sym__or_operator] = STATE(35),
    [sym__implies_operator] = STATE(36),
    [sym__iff_operator] = STATE(37),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_2] = ACTIONS(152),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_3] = ACTIONS(154),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [33] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT(11),
  [41] = {.count = 1, .reusable = false}, SHIFT(12),
  [43] = {.count = 1, .reusable = false}, SHIFT(13),
  [45] = {.count = 1, .reusable = false}, SHIFT(14),
  [47] = {.count = 1, .reusable = true}, SHIFT(15),
  [49] = {.count = 1, .reusable = false}, SHIFT(15),
  [51] = {.count = 1, .reusable = true}, SHIFT(16),
  [53] = {.count = 1, .reusable = true}, SHIFT(17),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(19),
  [59] = {.count = 1, .reusable = false}, SHIFT(5),
  [61] = {.count = 1, .reusable = true}, SHIFT(22),
  [63] = {.count = 1, .reusable = false}, SHIFT(21),
  [65] = {.count = 1, .reusable = false}, SHIFT(22),
  [67] = {.count = 1, .reusable = true}, SHIFT(23),
  [69] = {.count = 1, .reusable = false}, SHIFT(24),
  [71] = {.count = 1, .reusable = true}, SHIFT(24),
  [73] = {.count = 1, .reusable = false}, SHIFT(25),
  [75] = {.count = 1, .reusable = true}, SHIFT(25),
  [77] = {.count = 1, .reusable = true}, SHIFT(26),
  [79] = {.count = 1, .reusable = false}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = false}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(28),
  [87] = {.count = 1, .reusable = false}, SHIFT(28),
  [89] = {.count = 1, .reusable = true}, SHIFT(29),
  [91] = {.count = 1, .reusable = false}, SHIFT(29),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(30),
  [99] = {.count = 1, .reusable = true}, SHIFT(31),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(4),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(6),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(7),
  [148] = {.count = 1, .reusable = true}, SHIFT(32),
  [150] = {.count = 1, .reusable = true}, SHIFT(33),
  [152] = {.count = 1, .reusable = true}, SHIFT(34),
  [154] = {.count = 1, .reusable = true}, SHIFT(35),
  [156] = {.count = 1, .reusable = true}, SHIFT(36),
  [158] = {.count = 1, .reusable = true}, SHIFT(37),
  [160] = {.count = 1, .reusable = true}, SHIFT(38),
  [162] = {.count = 1, .reusable = false}, SHIFT(38),
  [164] = {.count = 1, .reusable = true}, SHIFT(39),
  [166] = {.count = 1, .reusable = true}, SHIFT(40),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_iff, 3),
  [184] = {.count = 1, .reusable = true}, SHIFT(41),
  [186] = {.count = 1, .reusable = false}, SHIFT(41),
  [188] = {.count = 1, .reusable = true}, SHIFT(42),
  [190] = {.count = 1, .reusable = false}, SHIFT(42),
  [192] = {.count = 1, .reusable = true}, SHIFT(43),
  [194] = {.count = 1, .reusable = false}, SHIFT(43),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [200] = {.count = 1, .reusable = true}, SHIFT(44),
  [202] = {.count = 1, .reusable = false}, SHIFT(44),
  [204] = {.count = 1, .reusable = true}, SHIFT(45),
  [206] = {.count = 1, .reusable = false}, SHIFT(45),
  [208] = {.count = 1, .reusable = true}, SHIFT(46),
  [210] = {.count = 1, .reusable = false}, SHIFT(46),
  [212] = {.count = 1, .reusable = true}, SHIFT(47),
  [214] = {.count = 1, .reusable = false}, SHIFT(47),
  [216] = {.count = 1, .reusable = true}, SHIFT(48),
  [218] = {.count = 1, .reusable = true}, SHIFT(49),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 4),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 4),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 4),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 4),
  [228] = {.count = 1, .reusable = true}, SHIFT(50),
  [230] = {.count = 1, .reusable = true}, SHIFT(51),
  [232] = {.count = 1, .reusable = false}, SHIFT(51),
  [234] = {.count = 1, .reusable = true}, SHIFT(52),
  [236] = {.count = 1, .reusable = false}, SHIFT(52),
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

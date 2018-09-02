#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 63
#define SYMBOL_COUNT 57
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
  sym__function_name = 6,
  anon_sym_A = 7,
  anon_sym_E = 8,
  anon_sym_T = 9,
  anon_sym_F = 10,
  anon_sym_DASH = 11,
  anon_sym_BANG = 12,
  anon_sym_TILDE = 13,
  anon_sym_ = 14,
  anon_sym_CARET = 15,
  anon_sym_AMP = 16,
  anon_sym_2 = 17,
  anon_sym__ = 18,
  anon_sym_PIPE = 19,
  anon_sym_3 = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_4 = 23,
  anon_sym_5 = 24,
  anon_sym_LT_DASH_GT = 25,
  anon_sym_LT_EQ_GT = 26,
  anon_sym_6 = 27,
  anon_sym_7 = 28,
  anon_sym_8 = 29,
  anon_sym_9 = 30,
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
  sym_function_name = 44,
  sym__reserved_function_name = 45,
  sym__TF_func_name = 46,
  sym_true = 47,
  sym_false = 48,
  sym__not_operator = 49,
  sym__and_operator = 50,
  sym__or_operator = 51,
  sym__implies_operator = 52,
  sym__iff_operator = 53,
  sym__forall_operator = 54,
  sym__exists_operator = 55,
  aux_sym_block_repeat1 = 56,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_variable] = "variable",
  [sym__function_name] = "_function_name",
  [anon_sym_A] = "A",
  [anon_sym_E] = "E",
  [anon_sym_T] = "T",
  [anon_sym_F] = "F",
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
  [anon_sym_9] = "∀",
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
  [sym_function_name] = "function_name",
  [sym__reserved_function_name] = "_reserved_function_name",
  [sym__TF_func_name] = "function_name",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym__not_operator] = "_not_operator",
  [sym__and_operator] = "_and_operator",
  [sym__or_operator] = "_or_operator",
  [sym__implies_operator] = "_implies_operator",
  [sym__iff_operator] = "_iff_operator",
  [sym__forall_operator] = "_forall_operator",
  [sym__exists_operator] = "_exists_operator",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [sym__function_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
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
  [anon_sym_9] = {
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
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym__reserved_function_name] = {
    .visible = false,
    .named = true,
  },
  [sym__TF_func_name] = {
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
      ACCEPT_TOKEN(sym__function_name);
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
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_T);
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(41);
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
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 41:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
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
        ADVANCE(41);
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
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 43},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym__function_name] = ACTIONS(3),
    [anon_sym_A] = ACTIONS(3),
    [anon_sym_E] = ACTIONS(3),
    [anon_sym_T] = ACTIONS(3),
    [anon_sym_F] = ACTIONS(3),
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
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [sym__universal_sep] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(7),
    [sym_expression] = STATE(14),
    [sym__term] = STATE(8),
    [sym_function] = STATE(8),
    [sym_not] = STATE(8),
    [sym_and] = STATE(8),
    [sym_or] = STATE(8),
    [sym_implies] = STATE(8),
    [sym_iff] = STATE(8),
    [sym_forall] = STATE(8),
    [sym_exists] = STATE(8),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(8),
    [sym_false] = STATE(8),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [aux_sym_block_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [2] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
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
  },
  [3] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_variable] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_2] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(35),
    [anon_sym_5] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(35),
    [anon_sym_8] = ACTIONS(35),
  },
  [4] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_variable] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_2] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(35),
    [anon_sym_5] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(35),
    [anon_sym_8] = ACTIONS(35),
  },
  [5] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_2] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_3] = ACTIONS(45),
    [anon_sym_DASH_GT] = ACTIONS(45),
    [anon_sym_EQ_GT] = ACTIONS(45),
    [anon_sym_4] = ACTIONS(45),
    [anon_sym_5] = ACTIONS(45),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
  },
  [6] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_2] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_LT_DASH_GT] = ACTIONS(49),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_6] = ACTIONS(49),
    [anon_sym_7] = ACTIONS(49),
    [anon_sym_8] = ACTIONS(49),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
  },
  [9] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(67),
    [anon_sym_EQ_GT] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(67),
    [anon_sym_5] = ACTIONS(67),
    [anon_sym_LT_DASH_GT] = ACTIONS(67),
    [anon_sym_LT_EQ_GT] = ACTIONS(67),
    [anon_sym_6] = ACTIONS(67),
    [anon_sym_7] = ACTIONS(67),
    [anon_sym_8] = ACTIONS(67),
  },
  [10] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(69),
  },
  [11] = {
    [sym__term] = STATE(21),
    [sym_function] = STATE(21),
    [sym_not] = STATE(21),
    [sym_and] = STATE(21),
    [sym_or] = STATE(21),
    [sym_implies] = STATE(21),
    [sym_iff] = STATE(21),
    [sym_forall] = STATE(21),
    [sym_exists] = STATE(21),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(21),
    [sym_false] = STATE(21),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(71),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [12] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(73),
  },
  [13] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(75),
  },
  [14] = {
    [sym_expression] = STATE(24),
    [sym__term] = STATE(8),
    [sym_function] = STATE(8),
    [sym_not] = STATE(8),
    [sym_and] = STATE(8),
    [sym_or] = STATE(8),
    [sym_implies] = STATE(8),
    [sym_iff] = STATE(8),
    [sym_forall] = STATE(8),
    [sym_exists] = STATE(8),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(8),
    [sym_false] = STATE(8),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [aux_sym_block_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(79),
    [sym__function_name] = ACTIONS(81),
    [anon_sym_A] = ACTIONS(81),
    [anon_sym_E] = ACTIONS(81),
    [anon_sym_T] = ACTIONS(81),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_10] = ACTIONS(79),
  },
  [16] = {
    [sym__term] = STATE(25),
    [sym_function] = STATE(25),
    [sym_not] = STATE(25),
    [sym_and] = STATE(25),
    [sym_or] = STATE(25),
    [sym_implies] = STATE(25),
    [sym_iff] = STATE(25),
    [sym_forall] = STATE(25),
    [sym_exists] = STATE(25),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(25),
    [sym_false] = STATE(25),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(83),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [17] = {
    [sym__term] = STATE(26),
    [sym_function] = STATE(26),
    [sym_not] = STATE(26),
    [sym_and] = STATE(26),
    [sym_or] = STATE(26),
    [sym_implies] = STATE(26),
    [sym_iff] = STATE(26),
    [sym_forall] = STATE(26),
    [sym_exists] = STATE(26),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(85),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [18] = {
    [sym__term] = STATE(27),
    [sym_function] = STATE(27),
    [sym_not] = STATE(27),
    [sym_and] = STATE(27),
    [sym_or] = STATE(27),
    [sym_implies] = STATE(27),
    [sym_iff] = STATE(27),
    [sym_forall] = STATE(27),
    [sym_exists] = STATE(27),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(27),
    [sym_false] = STATE(27),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(87),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [19] = {
    [sym__term] = STATE(28),
    [sym_function] = STATE(28),
    [sym_not] = STATE(28),
    [sym_and] = STATE(28),
    [sym_or] = STATE(28),
    [sym_implies] = STATE(28),
    [sym_iff] = STATE(28),
    [sym_forall] = STATE(28),
    [sym_exists] = STATE(28),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(89),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [20] = {
    [sym__term] = STATE(34),
    [sym_function] = STATE(34),
    [sym_not] = STATE(34),
    [sym_and] = STATE(34),
    [sym_or] = STATE(34),
    [sym_implies] = STATE(34),
    [sym_iff] = STATE(34),
    [sym_forall] = STATE(34),
    [sym_exists] = STATE(34),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(34),
    [sym_false] = STATE(34),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(91),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [21] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_2] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_3] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(111),
    [anon_sym_EQ_GT] = ACTIONS(111),
    [anon_sym_4] = ACTIONS(111),
    [anon_sym_5] = ACTIONS(111),
    [anon_sym_LT_DASH_GT] = ACTIONS(111),
    [anon_sym_LT_EQ_GT] = ACTIONS(111),
    [anon_sym_6] = ACTIONS(111),
    [anon_sym_7] = ACTIONS(111),
    [anon_sym_8] = ACTIONS(111),
  },
  [22] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(113),
  },
  [23] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(115),
  },
  [24] = {
    [sym_expression] = STATE(24),
    [sym__term] = STATE(8),
    [sym_function] = STATE(8),
    [sym_not] = STATE(8),
    [sym_and] = STATE(8),
    [sym_or] = STATE(8),
    [sym_implies] = STATE(8),
    [sym_iff] = STATE(8),
    [sym_forall] = STATE(8),
    [sym_exists] = STATE(8),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(8),
    [sym_false] = STATE(8),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [aux_sym_block_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(119),
    [sym__function_name] = ACTIONS(122),
    [anon_sym_A] = ACTIONS(125),
    [anon_sym_E] = ACTIONS(128),
    [anon_sym_T] = ACTIONS(131),
    [anon_sym_F] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_] = ACTIONS(137),
    [anon_sym_9] = ACTIONS(140),
    [anon_sym_10] = ACTIONS(143),
  },
  [25] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(148),
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_2] = ACTIONS(148),
    [anon_sym__] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_3] = ACTIONS(148),
    [anon_sym_DASH_GT] = ACTIONS(148),
    [anon_sym_EQ_GT] = ACTIONS(148),
    [anon_sym_4] = ACTIONS(148),
    [anon_sym_5] = ACTIONS(148),
    [anon_sym_LT_DASH_GT] = ACTIONS(148),
    [anon_sym_LT_EQ_GT] = ACTIONS(148),
    [anon_sym_6] = ACTIONS(148),
    [anon_sym_7] = ACTIONS(148),
    [anon_sym_8] = ACTIONS(148),
  },
  [26] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_3] = ACTIONS(152),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [anon_sym_4] = ACTIONS(152),
    [anon_sym_5] = ACTIONS(152),
    [anon_sym_LT_DASH_GT] = ACTIONS(152),
    [anon_sym_LT_EQ_GT] = ACTIONS(152),
    [anon_sym_6] = ACTIONS(152),
    [anon_sym_7] = ACTIONS(152),
    [anon_sym_8] = ACTIONS(152),
  },
  [27] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(156),
    [anon_sym_LT_EQ_GT] = ACTIONS(156),
    [anon_sym_6] = ACTIONS(156),
    [anon_sym_7] = ACTIONS(156),
    [anon_sym_8] = ACTIONS(156),
  },
  [28] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
  },
  [29] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(29),
    [anon_sym_EQ_GT] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_LT_DASH_GT] = ACTIONS(29),
    [anon_sym_LT_EQ_GT] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(29),
    [anon_sym_8] = ACTIONS(29),
  },
  [30] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_variable] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_3] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_4] = ACTIONS(33),
    [anon_sym_5] = ACTIONS(33),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_EQ_GT] = ACTIONS(33),
    [anon_sym_6] = ACTIONS(33),
    [anon_sym_7] = ACTIONS(33),
    [anon_sym_8] = ACTIONS(33),
  },
  [31] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_variable] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_3] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_4] = ACTIONS(33),
    [anon_sym_5] = ACTIONS(33),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_EQ_GT] = ACTIONS(33),
    [anon_sym_6] = ACTIONS(33),
    [anon_sym_7] = ACTIONS(33),
    [anon_sym_8] = ACTIONS(33),
  },
  [32] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_3] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(41),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(41),
    [anon_sym_5] = ACTIONS(41),
    [anon_sym_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_EQ_GT] = ACTIONS(41),
    [anon_sym_6] = ACTIONS(41),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_8] = ACTIONS(41),
  },
  [33] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_2] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_EQ_GT] = ACTIONS(47),
    [anon_sym_4] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(47),
    [anon_sym_LT_DASH_GT] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(47),
  },
  [34] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
  },
  [35] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_2] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_3] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_EQ_GT] = ACTIONS(63),
    [anon_sym_4] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_LT_DASH_GT] = ACTIONS(63),
    [anon_sym_LT_EQ_GT] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
  },
  [36] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(176),
  },
  [37] = {
    [sym__term] = STATE(48),
    [sym_function] = STATE(48),
    [sym_not] = STATE(48),
    [sym_and] = STATE(48),
    [sym_or] = STATE(48),
    [sym_implies] = STATE(48),
    [sym_iff] = STATE(48),
    [sym_forall] = STATE(48),
    [sym_exists] = STATE(48),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(178),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [38] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(180),
  },
  [39] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(182),
  },
  [40] = {
    [sym__term] = STATE(51),
    [sym_function] = STATE(51),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_implies] = STATE(51),
    [sym_iff] = STATE(51),
    [sym_forall] = STATE(51),
    [sym_exists] = STATE(51),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(184),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [41] = {
    [sym__term] = STATE(52),
    [sym_function] = STATE(52),
    [sym_not] = STATE(52),
    [sym_and] = STATE(52),
    [sym_or] = STATE(52),
    [sym_implies] = STATE(52),
    [sym_iff] = STATE(52),
    [sym_forall] = STATE(52),
    [sym_exists] = STATE(52),
    [sym_function_name] = STATE(9),
    [sym__reserved_function_name] = STATE(2),
    [sym__TF_func_name] = STATE(10),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [sym__not_operator] = STATE(11),
    [sym__forall_operator] = STATE(12),
    [sym__exists_operator] = STATE(13),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(186),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(25),
  },
  [42] = {
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_2] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_3] = ACTIONS(190),
    [anon_sym_DASH_GT] = ACTIONS(190),
    [anon_sym_EQ_GT] = ACTIONS(190),
    [anon_sym_4] = ACTIONS(190),
    [anon_sym_5] = ACTIONS(190),
    [anon_sym_LT_DASH_GT] = ACTIONS(190),
    [anon_sym_LT_EQ_GT] = ACTIONS(190),
    [anon_sym_6] = ACTIONS(190),
    [anon_sym_7] = ACTIONS(190),
    [anon_sym_8] = ACTIONS(190),
  },
  [43] = {
    [sym__term] = STATE(53),
    [sym_function] = STATE(53),
    [sym_not] = STATE(53),
    [sym_and] = STATE(53),
    [sym_or] = STATE(53),
    [sym_implies] = STATE(53),
    [sym_iff] = STATE(53),
    [sym_forall] = STATE(53),
    [sym_exists] = STATE(53),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(53),
    [sym_false] = STATE(53),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(192),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [44] = {
    [sym__term] = STATE(54),
    [sym_function] = STATE(54),
    [sym_not] = STATE(54),
    [sym_and] = STATE(54),
    [sym_or] = STATE(54),
    [sym_implies] = STATE(54),
    [sym_iff] = STATE(54),
    [sym_forall] = STATE(54),
    [sym_exists] = STATE(54),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(54),
    [sym_false] = STATE(54),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(194),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [45] = {
    [sym__term] = STATE(55),
    [sym_function] = STATE(55),
    [sym_not] = STATE(55),
    [sym_and] = STATE(55),
    [sym_or] = STATE(55),
    [sym_implies] = STATE(55),
    [sym_iff] = STATE(55),
    [sym_forall] = STATE(55),
    [sym_exists] = STATE(55),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(55),
    [sym_false] = STATE(55),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(196),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [46] = {
    [sym__term] = STATE(56),
    [sym_function] = STATE(56),
    [sym_not] = STATE(56),
    [sym_and] = STATE(56),
    [sym_or] = STATE(56),
    [sym_implies] = STATE(56),
    [sym_iff] = STATE(56),
    [sym_forall] = STATE(56),
    [sym_exists] = STATE(56),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(198),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [47] = {
    [sym__term] = STATE(57),
    [sym_function] = STATE(57),
    [sym_not] = STATE(57),
    [sym_and] = STATE(57),
    [sym_or] = STATE(57),
    [sym_implies] = STATE(57),
    [sym_iff] = STATE(57),
    [sym_forall] = STATE(57),
    [sym_exists] = STATE(57),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(200),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [48] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_2] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_3] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_EQ_GT] = ACTIONS(109),
    [anon_sym_4] = ACTIONS(109),
    [anon_sym_5] = ACTIONS(109),
    [anon_sym_LT_DASH_GT] = ACTIONS(109),
    [anon_sym_LT_EQ_GT] = ACTIONS(109),
    [anon_sym_6] = ACTIONS(109),
    [anon_sym_7] = ACTIONS(109),
    [anon_sym_8] = ACTIONS(109),
  },
  [49] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(202),
  },
  [50] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(204),
  },
  [51] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
  },
  [52] = {
    [sym__and_operator] = STATE(16),
    [sym__or_operator] = STATE(17),
    [sym__implies_operator] = STATE(18),
    [sym__iff_operator] = STATE(19),
    [sym_comment] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_4] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
  },
  [53] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(146),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_2] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_3] = ACTIONS(146),
    [anon_sym_DASH_GT] = ACTIONS(146),
    [anon_sym_EQ_GT] = ACTIONS(146),
    [anon_sym_4] = ACTIONS(146),
    [anon_sym_5] = ACTIONS(146),
    [anon_sym_LT_DASH_GT] = ACTIONS(146),
    [anon_sym_LT_EQ_GT] = ACTIONS(146),
    [anon_sym_6] = ACTIONS(146),
    [anon_sym_7] = ACTIONS(146),
    [anon_sym_8] = ACTIONS(146),
  },
  [54] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_3] = ACTIONS(150),
    [anon_sym_DASH_GT] = ACTIONS(150),
    [anon_sym_EQ_GT] = ACTIONS(150),
    [anon_sym_4] = ACTIONS(150),
    [anon_sym_5] = ACTIONS(150),
    [anon_sym_LT_DASH_GT] = ACTIONS(150),
    [anon_sym_LT_EQ_GT] = ACTIONS(150),
    [anon_sym_6] = ACTIONS(150),
    [anon_sym_7] = ACTIONS(150),
    [anon_sym_8] = ACTIONS(150),
  },
  [55] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(154),
    [anon_sym_LT_EQ_GT] = ACTIONS(154),
    [anon_sym_6] = ACTIONS(154),
    [anon_sym_7] = ACTIONS(154),
    [anon_sym_8] = ACTIONS(154),
  },
  [56] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
  },
  [57] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
  },
  [58] = {
    [sym__term] = STATE(61),
    [sym_function] = STATE(61),
    [sym_not] = STATE(61),
    [sym_and] = STATE(61),
    [sym_or] = STATE(61),
    [sym_implies] = STATE(61),
    [sym_iff] = STATE(61),
    [sym_forall] = STATE(61),
    [sym_exists] = STATE(61),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(61),
    [sym_false] = STATE(61),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(212),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [59] = {
    [sym__term] = STATE(62),
    [sym_function] = STATE(62),
    [sym_not] = STATE(62),
    [sym_and] = STATE(62),
    [sym_or] = STATE(62),
    [sym_implies] = STATE(62),
    [sym_iff] = STATE(62),
    [sym_forall] = STATE(62),
    [sym_exists] = STATE(62),
    [sym_function_name] = STATE(35),
    [sym__reserved_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(36),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym__not_operator] = STATE(37),
    [sym__forall_operator] = STATE(38),
    [sym__exists_operator] = STATE(39),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(214),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(105),
    [anon_sym_10] = ACTIONS(107),
  },
  [60] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_2] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_3] = ACTIONS(188),
    [anon_sym_DASH_GT] = ACTIONS(188),
    [anon_sym_EQ_GT] = ACTIONS(188),
    [anon_sym_4] = ACTIONS(188),
    [anon_sym_5] = ACTIONS(188),
    [anon_sym_LT_DASH_GT] = ACTIONS(188),
    [anon_sym_LT_EQ_GT] = ACTIONS(188),
    [anon_sym_6] = ACTIONS(188),
    [anon_sym_7] = ACTIONS(188),
    [anon_sym_8] = ACTIONS(188),
  },
  [61] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
  },
  [62] = {
    [sym__and_operator] = STATE(43),
    [sym__or_operator] = STATE(44),
    [sym__implies_operator] = STATE(45),
    [sym__iff_operator] = STATE(46),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_2] = ACTIONS(168),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_4] = ACTIONS(172),
    [anon_sym_5] = ACTIONS(172),
    [anon_sym_LT_DASH_GT] = ACTIONS(174),
    [anon_sym_LT_EQ_GT] = ACTIONS(174),
    [anon_sym_6] = ACTIONS(174),
    [anon_sym_7] = ACTIONS(174),
    [anon_sym_8] = ACTIONS(174),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__reserved_function_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__reserved_function_name, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym__forall_operator, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__exists_operator, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [51] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [53] = {.count = 1, .reusable = true}, SHIFT(15),
  [55] = {.count = 1, .reusable = false}, SHIFT(16),
  [57] = {.count = 1, .reusable = false}, SHIFT(17),
  [59] = {.count = 1, .reusable = false}, SHIFT(18),
  [61] = {.count = 1, .reusable = false}, SHIFT(19),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(20),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(20),
  [71] = {.count = 1, .reusable = true}, SHIFT(21),
  [73] = {.count = 1, .reusable = true}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, SHIFT(23),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = true}, SHIFT(26),
  [87] = {.count = 1, .reusable = true}, SHIFT(27),
  [89] = {.count = 1, .reusable = true}, SHIFT(28),
  [91] = {.count = 1, .reusable = true}, SHIFT(34),
  [93] = {.count = 1, .reusable = false}, SHIFT(29),
  [95] = {.count = 1, .reusable = false}, SHIFT(30),
  [97] = {.count = 1, .reusable = false}, SHIFT(31),
  [99] = {.count = 1, .reusable = false}, SHIFT(32),
  [101] = {.count = 1, .reusable = false}, SHIFT(33),
  [103] = {.count = 1, .reusable = true}, SHIFT(37),
  [105] = {.count = 1, .reusable = true}, SHIFT(38),
  [107] = {.count = 1, .reusable = true}, SHIFT(39),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(40),
  [115] = {.count = 1, .reusable = true}, SHIFT(41),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__forall_operator, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__exists_operator, 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(42),
  [168] = {.count = 1, .reusable = true}, SHIFT(43),
  [170] = {.count = 1, .reusable = true}, SHIFT(44),
  [172] = {.count = 1, .reusable = true}, SHIFT(45),
  [174] = {.count = 1, .reusable = true}, SHIFT(46),
  [176] = {.count = 1, .reusable = true}, SHIFT(47),
  [178] = {.count = 1, .reusable = true}, SHIFT(48),
  [180] = {.count = 1, .reusable = true}, SHIFT(49),
  [182] = {.count = 1, .reusable = true}, SHIFT(50),
  [184] = {.count = 1, .reusable = true}, SHIFT(51),
  [186] = {.count = 1, .reusable = true}, SHIFT(52),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(53),
  [194] = {.count = 1, .reusable = true}, SHIFT(54),
  [196] = {.count = 1, .reusable = true}, SHIFT(55),
  [198] = {.count = 1, .reusable = true}, SHIFT(56),
  [200] = {.count = 1, .reusable = true}, SHIFT(57),
  [202] = {.count = 1, .reusable = true}, SHIFT(58),
  [204] = {.count = 1, .reusable = true}, SHIFT(59),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 4),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 4),
  [210] = {.count = 1, .reusable = true}, SHIFT(60),
  [212] = {.count = 1, .reusable = true}, SHIFT(61),
  [214] = {.count = 1, .reusable = true}, SHIFT(62),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 67
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_1 = 11,
  anon_sym_ = 12,
  anon_sym_0 = 13,
  anon_sym_2 = 14,
  anon_sym_DASH = 15,
  anon_sym_BANG = 16,
  anon_sym_TILDE = 17,
  anon_sym_3 = 18,
  anon_sym_CARET = 19,
  anon_sym_AMP = 20,
  anon_sym_4 = 21,
  anon_sym__ = 22,
  anon_sym_PIPE = 23,
  anon_sym_5 = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_EQ_GT = 26,
  anon_sym_6 = 27,
  anon_sym_7 = 28,
  anon_sym_LT_DASH_GT = 29,
  anon_sym_LT_EQ_GT = 30,
  anon_sym_8 = 31,
  anon_sym_9 = 32,
  anon_sym_10 = 33,
  anon_sym_11 = 34,
  anon_sym_12 = 35,
  sym__universal_sep = 36,
  sym_block = 37,
  sym_expression = 38,
  sym__term = 39,
  sym_function = 40,
  sym_not = 41,
  sym_and = 42,
  sym_or = 43,
  sym_implies = 44,
  sym_iff = 45,
  sym_forall = 46,
  sym_exists = 47,
  sym_function_name = 48,
  sym__TF_func_name = 49,
  sym_true = 50,
  sym_false = 51,
  sym__not_operator = 52,
  sym__and_operator = 53,
  sym__or_operator = 54,
  sym__implies_operator = 55,
  sym__iff_operator = 56,
  sym__forall_operator = 57,
  sym__exists_operator = 58,
  aux_sym_block_repeat1 = 59,
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
  [anon_sym_1] = "1",
  [anon_sym_] = "⊤",
  [anon_sym_0] = "0",
  [anon_sym_2] = "⊥",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_3] = "¬",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_4] = "∧",
  [anon_sym__] = "_",
  [anon_sym_PIPE] = "|",
  [anon_sym_5] = "∨",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_6] = "→",
  [anon_sym_7] = "⇒",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_8] = "↔",
  [anon_sym_9] = "⇔",
  [anon_sym_10] = "≡",
  [anon_sym_11] = "∀",
  [anon_sym_12] = "∃",
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
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [anon_sym_3] = {
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
  [anon_sym_4] = {
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
  [anon_sym_5] = {
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
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
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
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
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
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == '1')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'T')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '_')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == 172)
        ADVANCE(28);
      if (lookahead == 8594)
        ADVANCE(29);
      if (lookahead == 8596)
        ADVANCE(30);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(32);
      if (lookahead == 8704)
        ADVANCE(33);
      if (lookahead == 8707)
        ADVANCE(34);
      if (lookahead == 8743)
        ADVANCE(35);
      if (lookahead == 8744)
        ADVANCE(36);
      if (lookahead == 8801)
        ADVANCE(37);
      if (lookahead == 8868)
        ADVANCE(38);
      if (lookahead == 8869)
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
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
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 12:
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 15:
      if (lookahead == '>')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 17:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'T')
        ADVANCE(23);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == 172)
        ADVANCE(28);
      if (lookahead == 8704)
        ADVANCE(33);
      if (lookahead == 8707)
        ADVANCE(34);
      if (lookahead == 8868)
        ADVANCE(38);
      if (lookahead == 8869)
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      if (lookahead == '\n')
        ADVANCE(44);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '_')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == 8594)
        ADVANCE(29);
      if (lookahead == 8596)
        ADVANCE(30);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(32);
      if (lookahead == 8743)
        ADVANCE(35);
      if (lookahead == 8744)
        ADVANCE(36);
      if (lookahead == 8801)
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 45:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '_')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == 8594)
        ADVANCE(29);
      if (lookahead == 8596)
        ADVANCE(30);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(32);
      if (lookahead == 8743)
        ADVANCE(35);
      if (lookahead == 8744)
        ADVANCE(36);
      if (lookahead == 8801)
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 47},
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
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [sym__universal_sep] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(9),
    [sym_expression] = STATE(16),
    [sym__term] = STATE(10),
    [sym_function] = STATE(10),
    [sym_not] = STATE(10),
    [sym_and] = STATE(10),
    [sym_or] = STATE(10),
    [sym_implies] = STATE(10),
    [sym_iff] = STATE(10),
    [sym_forall] = STATE(10),
    [sym_exists] = STATE(10),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(10),
    [sym_false] = STATE(10),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [aux_sym_block_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [2] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_5] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_8] = ACTIONS(35),
    [anon_sym_9] = ACTIONS(35),
    [anon_sym_10] = ACTIONS(35),
  },
  [3] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_variable] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_5] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_8] = ACTIONS(35),
    [anon_sym_9] = ACTIONS(35),
    [anon_sym_10] = ACTIONS(35),
  },
  [4] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_variable] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_5] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_8] = ACTIONS(35),
    [anon_sym_9] = ACTIONS(35),
    [anon_sym_10] = ACTIONS(35),
  },
  [5] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_4] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_5] = ACTIONS(45),
    [anon_sym_DASH_GT] = ACTIONS(45),
    [anon_sym_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_9] = ACTIONS(45),
    [anon_sym_10] = ACTIONS(45),
  },
  [6] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_6] = ACTIONS(49),
    [anon_sym_7] = ACTIONS(49),
    [anon_sym_LT_DASH_GT] = ACTIONS(49),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_8] = ACTIONS(49),
    [anon_sym_9] = ACTIONS(49),
    [anon_sym_10] = ACTIONS(49),
  },
  [7] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_4] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_5] = ACTIONS(45),
    [anon_sym_DASH_GT] = ACTIONS(45),
    [anon_sym_EQ_GT] = ACTIONS(45),
    [anon_sym_6] = ACTIONS(45),
    [anon_sym_7] = ACTIONS(45),
    [anon_sym_LT_DASH_GT] = ACTIONS(45),
    [anon_sym_LT_EQ_GT] = ACTIONS(45),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_9] = ACTIONS(45),
    [anon_sym_10] = ACTIONS(45),
  },
  [8] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_6] = ACTIONS(49),
    [anon_sym_7] = ACTIONS(49),
    [anon_sym_LT_DASH_GT] = ACTIONS(49),
    [anon_sym_LT_EQ_GT] = ACTIONS(49),
    [anon_sym_8] = ACTIONS(49),
    [anon_sym_9] = ACTIONS(49),
    [anon_sym_10] = ACTIONS(49),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [10] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
  },
  [11] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_5] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(67),
    [anon_sym_EQ_GT] = ACTIONS(67),
    [anon_sym_6] = ACTIONS(67),
    [anon_sym_7] = ACTIONS(67),
    [anon_sym_LT_DASH_GT] = ACTIONS(67),
    [anon_sym_LT_EQ_GT] = ACTIONS(67),
    [anon_sym_8] = ACTIONS(67),
    [anon_sym_9] = ACTIONS(67),
    [anon_sym_10] = ACTIONS(67),
  },
  [12] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(69),
  },
  [13] = {
    [sym__term] = STATE(23),
    [sym_function] = STATE(23),
    [sym_not] = STATE(23),
    [sym_and] = STATE(23),
    [sym_or] = STATE(23),
    [sym_implies] = STATE(23),
    [sym_iff] = STATE(23),
    [sym_forall] = STATE(23),
    [sym_exists] = STATE(23),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(71),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [14] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(73),
  },
  [15] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(75),
  },
  [16] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(10),
    [sym_function] = STATE(10),
    [sym_not] = STATE(10),
    [sym_and] = STATE(10),
    [sym_or] = STATE(10),
    [sym_implies] = STATE(10),
    [sym_iff] = STATE(10),
    [sym_forall] = STATE(10),
    [sym_exists] = STATE(10),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(10),
    [sym_false] = STATE(10),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [aux_sym_block_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(79),
    [sym__function_name] = ACTIONS(81),
    [anon_sym_A] = ACTIONS(81),
    [anon_sym_E] = ACTIONS(81),
    [anon_sym_T] = ACTIONS(81),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_0] = ACTIONS(79),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(79),
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
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(27),
    [sym_false] = STATE(27),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(83),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
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
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(85),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [20] = {
    [sym__term] = STATE(29),
    [sym_function] = STATE(29),
    [sym_not] = STATE(29),
    [sym_and] = STATE(29),
    [sym_or] = STATE(29),
    [sym_implies] = STATE(29),
    [sym_iff] = STATE(29),
    [sym_forall] = STATE(29),
    [sym_exists] = STATE(29),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(87),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [21] = {
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(89),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [22] = {
    [sym__term] = STATE(38),
    [sym_function] = STATE(38),
    [sym_not] = STATE(38),
    [sym_and] = STATE(38),
    [sym_or] = STATE(38),
    [sym_implies] = STATE(38),
    [sym_iff] = STATE(38),
    [sym_forall] = STATE(38),
    [sym_exists] = STATE(38),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(38),
    [sym_false] = STATE(38),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(91),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [23] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_4] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_5] = ACTIONS(115),
    [anon_sym_DASH_GT] = ACTIONS(115),
    [anon_sym_EQ_GT] = ACTIONS(115),
    [anon_sym_6] = ACTIONS(115),
    [anon_sym_7] = ACTIONS(115),
    [anon_sym_LT_DASH_GT] = ACTIONS(115),
    [anon_sym_LT_EQ_GT] = ACTIONS(115),
    [anon_sym_8] = ACTIONS(115),
    [anon_sym_9] = ACTIONS(115),
    [anon_sym_10] = ACTIONS(115),
  },
  [24] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(117),
  },
  [25] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(119),
  },
  [26] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(10),
    [sym_function] = STATE(10),
    [sym_not] = STATE(10),
    [sym_and] = STATE(10),
    [sym_or] = STATE(10),
    [sym_implies] = STATE(10),
    [sym_iff] = STATE(10),
    [sym_forall] = STATE(10),
    [sym_exists] = STATE(10),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(10),
    [sym_false] = STATE(10),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [aux_sym_block_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(123),
    [sym__function_name] = ACTIONS(126),
    [anon_sym_A] = ACTIONS(129),
    [anon_sym_E] = ACTIONS(132),
    [anon_sym_T] = ACTIONS(135),
    [anon_sym_F] = ACTIONS(138),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(144),
    [anon_sym_2] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(150),
    [anon_sym_12] = ACTIONS(153),
  },
  [27] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_4] = ACTIONS(158),
    [anon_sym__] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_5] = ACTIONS(158),
    [anon_sym_DASH_GT] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_6] = ACTIONS(158),
    [anon_sym_7] = ACTIONS(158),
    [anon_sym_LT_DASH_GT] = ACTIONS(158),
    [anon_sym_LT_EQ_GT] = ACTIONS(158),
    [anon_sym_8] = ACTIONS(158),
    [anon_sym_9] = ACTIONS(158),
    [anon_sym_10] = ACTIONS(158),
  },
  [28] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_5] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [anon_sym_6] = ACTIONS(162),
    [anon_sym_7] = ACTIONS(162),
    [anon_sym_LT_DASH_GT] = ACTIONS(162),
    [anon_sym_LT_EQ_GT] = ACTIONS(162),
    [anon_sym_8] = ACTIONS(162),
    [anon_sym_9] = ACTIONS(162),
    [anon_sym_10] = ACTIONS(162),
  },
  [29] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(166),
    [anon_sym_LT_EQ_GT] = ACTIONS(166),
    [anon_sym_8] = ACTIONS(166),
    [anon_sym_9] = ACTIONS(166),
    [anon_sym_10] = ACTIONS(166),
  },
  [30] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
  },
  [31] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_4] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_5] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_6] = ACTIONS(33),
    [anon_sym_7] = ACTIONS(33),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_EQ_GT] = ACTIONS(33),
    [anon_sym_8] = ACTIONS(33),
    [anon_sym_9] = ACTIONS(33),
    [anon_sym_10] = ACTIONS(33),
  },
  [32] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_variable] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_4] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_5] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_6] = ACTIONS(33),
    [anon_sym_7] = ACTIONS(33),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_EQ_GT] = ACTIONS(33),
    [anon_sym_8] = ACTIONS(33),
    [anon_sym_9] = ACTIONS(33),
    [anon_sym_10] = ACTIONS(33),
  },
  [33] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_variable] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_4] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_5] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_EQ_GT] = ACTIONS(33),
    [anon_sym_6] = ACTIONS(33),
    [anon_sym_7] = ACTIONS(33),
    [anon_sym_LT_DASH_GT] = ACTIONS(33),
    [anon_sym_LT_EQ_GT] = ACTIONS(33),
    [anon_sym_8] = ACTIONS(33),
    [anon_sym_9] = ACTIONS(33),
    [anon_sym_10] = ACTIONS(33),
  },
  [34] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_5] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(41),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [anon_sym_6] = ACTIONS(41),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_EQ_GT] = ACTIONS(41),
    [anon_sym_8] = ACTIONS(41),
    [anon_sym_9] = ACTIONS(41),
    [anon_sym_10] = ACTIONS(41),
  },
  [35] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_4] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_EQ_GT] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(47),
    [anon_sym_LT_DASH_GT] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(47),
    [anon_sym_9] = ACTIONS(47),
    [anon_sym_10] = ACTIONS(47),
  },
  [36] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(41),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_5] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(41),
    [anon_sym_EQ_GT] = ACTIONS(41),
    [anon_sym_6] = ACTIONS(41),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_LT_DASH_GT] = ACTIONS(41),
    [anon_sym_LT_EQ_GT] = ACTIONS(41),
    [anon_sym_8] = ACTIONS(41),
    [anon_sym_9] = ACTIONS(41),
    [anon_sym_10] = ACTIONS(41),
  },
  [37] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_4] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(47),
    [anon_sym_EQ_GT] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(47),
    [anon_sym_LT_DASH_GT] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(47),
    [anon_sym_9] = ACTIONS(47),
    [anon_sym_10] = ACTIONS(47),
  },
  [38] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
  [39] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_4] = ACTIONS(63),
    [anon_sym__] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_EQ_GT] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_LT_DASH_GT] = ACTIONS(63),
    [anon_sym_LT_EQ_GT] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
  },
  [40] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(186),
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(188),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [42] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(190),
  },
  [43] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(192),
  },
  [44] = {
    [sym__term] = STATE(55),
    [sym_function] = STATE(55),
    [sym_not] = STATE(55),
    [sym_and] = STATE(55),
    [sym_or] = STATE(55),
    [sym_implies] = STATE(55),
    [sym_iff] = STATE(55),
    [sym_forall] = STATE(55),
    [sym_exists] = STATE(55),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(55),
    [sym_false] = STATE(55),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(194),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [45] = {
    [sym__term] = STATE(56),
    [sym_function] = STATE(56),
    [sym_not] = STATE(56),
    [sym_and] = STATE(56),
    [sym_or] = STATE(56),
    [sym_implies] = STATE(56),
    [sym_iff] = STATE(56),
    [sym_forall] = STATE(56),
    [sym_exists] = STATE(56),
    [sym_function_name] = STATE(11),
    [sym__TF_func_name] = STATE(12),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [sym__not_operator] = STATE(13),
    [sym__forall_operator] = STATE(14),
    [sym__exists_operator] = STATE(15),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(196),
    [sym__function_name] = ACTIONS(11),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_E] = ACTIONS(15),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(19),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_0] = ACTIONS(23),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(29),
  },
  [46] = {
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(200),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_4] = ACTIONS(200),
    [anon_sym__] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(200),
    [anon_sym_5] = ACTIONS(200),
    [anon_sym_DASH_GT] = ACTIONS(200),
    [anon_sym_EQ_GT] = ACTIONS(200),
    [anon_sym_6] = ACTIONS(200),
    [anon_sym_7] = ACTIONS(200),
    [anon_sym_LT_DASH_GT] = ACTIONS(200),
    [anon_sym_LT_EQ_GT] = ACTIONS(200),
    [anon_sym_8] = ACTIONS(200),
    [anon_sym_9] = ACTIONS(200),
    [anon_sym_10] = ACTIONS(200),
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(202),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [48] = {
    [sym__term] = STATE(58),
    [sym_function] = STATE(58),
    [sym_not] = STATE(58),
    [sym_and] = STATE(58),
    [sym_or] = STATE(58),
    [sym_implies] = STATE(58),
    [sym_iff] = STATE(58),
    [sym_forall] = STATE(58),
    [sym_exists] = STATE(58),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(58),
    [sym_false] = STATE(58),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(204),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [49] = {
    [sym__term] = STATE(59),
    [sym_function] = STATE(59),
    [sym_not] = STATE(59),
    [sym_and] = STATE(59),
    [sym_or] = STATE(59),
    [sym_implies] = STATE(59),
    [sym_iff] = STATE(59),
    [sym_forall] = STATE(59),
    [sym_exists] = STATE(59),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(59),
    [sym_false] = STATE(59),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(206),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [50] = {
    [sym__term] = STATE(60),
    [sym_function] = STATE(60),
    [sym_not] = STATE(60),
    [sym_and] = STATE(60),
    [sym_or] = STATE(60),
    [sym_implies] = STATE(60),
    [sym_iff] = STATE(60),
    [sym_forall] = STATE(60),
    [sym_exists] = STATE(60),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(208),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [51] = {
    [sym__term] = STATE(61),
    [sym_function] = STATE(61),
    [sym_not] = STATE(61),
    [sym_and] = STATE(61),
    [sym_or] = STATE(61),
    [sym_implies] = STATE(61),
    [sym_iff] = STATE(61),
    [sym_forall] = STATE(61),
    [sym_exists] = STATE(61),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(61),
    [sym_false] = STATE(61),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(210),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [52] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_4] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_5] = ACTIONS(113),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_EQ_GT] = ACTIONS(113),
    [anon_sym_6] = ACTIONS(113),
    [anon_sym_7] = ACTIONS(113),
    [anon_sym_LT_DASH_GT] = ACTIONS(113),
    [anon_sym_LT_EQ_GT] = ACTIONS(113),
    [anon_sym_8] = ACTIONS(113),
    [anon_sym_9] = ACTIONS(113),
    [anon_sym_10] = ACTIONS(113),
  },
  [53] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(212),
  },
  [54] = {
    [sym_comment] = ACTIONS(7),
    [sym__universal_sep] = ACTIONS(214),
  },
  [55] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
  },
  [56] = {
    [sym__and_operator] = STATE(18),
    [sym__or_operator] = STATE(19),
    [sym__implies_operator] = STATE(20),
    [sym__iff_operator] = STATE(21),
    [sym_comment] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym__] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_LT_DASH_GT] = ACTIONS(61),
    [anon_sym_LT_EQ_GT] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
  },
  [57] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_4] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_5] = ACTIONS(156),
    [anon_sym_DASH_GT] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(156),
    [anon_sym_6] = ACTIONS(156),
    [anon_sym_7] = ACTIONS(156),
    [anon_sym_LT_DASH_GT] = ACTIONS(156),
    [anon_sym_LT_EQ_GT] = ACTIONS(156),
    [anon_sym_8] = ACTIONS(156),
    [anon_sym_9] = ACTIONS(156),
    [anon_sym_10] = ACTIONS(156),
  },
  [58] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_5] = ACTIONS(160),
    [anon_sym_DASH_GT] = ACTIONS(160),
    [anon_sym_EQ_GT] = ACTIONS(160),
    [anon_sym_6] = ACTIONS(160),
    [anon_sym_7] = ACTIONS(160),
    [anon_sym_LT_DASH_GT] = ACTIONS(160),
    [anon_sym_LT_EQ_GT] = ACTIONS(160),
    [anon_sym_8] = ACTIONS(160),
    [anon_sym_9] = ACTIONS(160),
    [anon_sym_10] = ACTIONS(160),
  },
  [59] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(164),
    [anon_sym_LT_EQ_GT] = ACTIONS(164),
    [anon_sym_8] = ACTIONS(164),
    [anon_sym_9] = ACTIONS(164),
    [anon_sym_10] = ACTIONS(164),
  },
  [60] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
  [61] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
  [62] = {
    [sym__term] = STATE(65),
    [sym_function] = STATE(65),
    [sym_not] = STATE(65),
    [sym_and] = STATE(65),
    [sym_or] = STATE(65),
    [sym_implies] = STATE(65),
    [sym_iff] = STATE(65),
    [sym_forall] = STATE(65),
    [sym_exists] = STATE(65),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(65),
    [sym_false] = STATE(65),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(222),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [63] = {
    [sym__term] = STATE(66),
    [sym_function] = STATE(66),
    [sym_not] = STATE(66),
    [sym_and] = STATE(66),
    [sym_or] = STATE(66),
    [sym_implies] = STATE(66),
    [sym_iff] = STATE(66),
    [sym_forall] = STATE(66),
    [sym_exists] = STATE(66),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(66),
    [sym_false] = STATE(66),
    [sym__not_operator] = STATE(41),
    [sym__forall_operator] = STATE(42),
    [sym__exists_operator] = STATE(43),
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(224),
    [sym__function_name] = ACTIONS(93),
    [anon_sym_A] = ACTIONS(95),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_F] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(105),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_3] = ACTIONS(107),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(111),
  },
  [64] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_4] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_5] = ACTIONS(198),
    [anon_sym_DASH_GT] = ACTIONS(198),
    [anon_sym_EQ_GT] = ACTIONS(198),
    [anon_sym_6] = ACTIONS(198),
    [anon_sym_7] = ACTIONS(198),
    [anon_sym_LT_DASH_GT] = ACTIONS(198),
    [anon_sym_LT_EQ_GT] = ACTIONS(198),
    [anon_sym_8] = ACTIONS(198),
    [anon_sym_9] = ACTIONS(198),
    [anon_sym_10] = ACTIONS(198),
  },
  [65] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
  [66] = {
    [sym__and_operator] = STATE(47),
    [sym__or_operator] = STATE(48),
    [sym__implies_operator] = STATE(49),
    [sym__iff_operator] = STATE(50),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_4] = ACTIONS(178),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_5] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(182),
    [anon_sym_EQ_GT] = ACTIONS(182),
    [anon_sym_6] = ACTIONS(182),
    [anon_sym_7] = ACTIONS(182),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym__forall_operator, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__exists_operator, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [51] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [53] = {.count = 1, .reusable = true}, SHIFT(17),
  [55] = {.count = 1, .reusable = false}, SHIFT(18),
  [57] = {.count = 1, .reusable = false}, SHIFT(19),
  [59] = {.count = 1, .reusable = false}, SHIFT(20),
  [61] = {.count = 1, .reusable = false}, SHIFT(21),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(22),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(22),
  [71] = {.count = 1, .reusable = true}, SHIFT(23),
  [73] = {.count = 1, .reusable = true}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, SHIFT(25),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(28),
  [87] = {.count = 1, .reusable = true}, SHIFT(29),
  [89] = {.count = 1, .reusable = true}, SHIFT(30),
  [91] = {.count = 1, .reusable = true}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(31),
  [95] = {.count = 1, .reusable = false}, SHIFT(32),
  [97] = {.count = 1, .reusable = false}, SHIFT(33),
  [99] = {.count = 1, .reusable = false}, SHIFT(34),
  [101] = {.count = 1, .reusable = false}, SHIFT(35),
  [103] = {.count = 1, .reusable = true}, SHIFT(36),
  [105] = {.count = 1, .reusable = true}, SHIFT(37),
  [107] = {.count = 1, .reusable = true}, SHIFT(41),
  [109] = {.count = 1, .reusable = true}, SHIFT(42),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(44),
  [119] = {.count = 1, .reusable = true}, SHIFT(45),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__forall_operator, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym__exists_operator, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(46),
  [178] = {.count = 1, .reusable = true}, SHIFT(47),
  [180] = {.count = 1, .reusable = true}, SHIFT(48),
  [182] = {.count = 1, .reusable = true}, SHIFT(49),
  [184] = {.count = 1, .reusable = true}, SHIFT(50),
  [186] = {.count = 1, .reusable = true}, SHIFT(51),
  [188] = {.count = 1, .reusable = true}, SHIFT(52),
  [190] = {.count = 1, .reusable = true}, SHIFT(53),
  [192] = {.count = 1, .reusable = true}, SHIFT(54),
  [194] = {.count = 1, .reusable = true}, SHIFT(55),
  [196] = {.count = 1, .reusable = true}, SHIFT(56),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [202] = {.count = 1, .reusable = true}, SHIFT(57),
  [204] = {.count = 1, .reusable = true}, SHIFT(58),
  [206] = {.count = 1, .reusable = true}, SHIFT(59),
  [208] = {.count = 1, .reusable = true}, SHIFT(60),
  [210] = {.count = 1, .reusable = true}, SHIFT(61),
  [212] = {.count = 1, .reusable = true}, SHIFT(62),
  [214] = {.count = 1, .reusable = true}, SHIFT(63),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 4),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 4),
  [220] = {.count = 1, .reusable = true}, SHIFT(64),
  [222] = {.count = 1, .reusable = true}, SHIFT(65),
  [224] = {.count = 1, .reusable = true}, SHIFT(66),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_variable,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

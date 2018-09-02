#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 73
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LF = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOT = 5,
  sym_variable = 6,
  sym__function_name = 7,
  anon_sym_A = 8,
  anon_sym_E = 9,
  anon_sym_T = 10,
  anon_sym_F = 11,
  anon_sym_1 = 12,
  anon_sym_ = 13,
  anon_sym_0 = 14,
  anon_sym_2 = 15,
  anon_sym_DASH = 16,
  anon_sym_BANG = 17,
  anon_sym_TILDE = 18,
  anon_sym_3 = 19,
  anon_sym_CARET = 20,
  anon_sym_AMP = 21,
  anon_sym_4 = 22,
  anon_sym__ = 23,
  anon_sym_PIPE = 24,
  anon_sym_5 = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_6 = 28,
  anon_sym_7 = 29,
  anon_sym_LT_DASH_GT = 30,
  anon_sym_LT_EQ_GT = 31,
  anon_sym_8 = 32,
  anon_sym_9 = 33,
  anon_sym_10 = 34,
  anon_sym_11 = 35,
  anon_sym_12 = 36,
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
  sym__group = 48,
  sym__universal_group = 49,
  sym_function_name = 50,
  sym__TF_func_name = 51,
  sym_true = 52,
  sym_false = 53,
  sym__not_sym = 54,
  sym__and_sym = 55,
  sym__or_sym = 56,
  sym__implies_sym = 57,
  sym__iff_sym = 58,
  sym__forall_sym = 59,
  sym__exists_sym = 60,
  aux_sym_block_repeat1 = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
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
  [sym__group] = "_group",
  [sym__universal_group] = "_universal_group",
  [sym_function_name] = "function_name",
  [sym__TF_func_name] = "function_name",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym__not_sym] = "_not_sym",
  [sym__and_sym] = "_and_sym",
  [sym__or_sym] = "_or_sym",
  [sym__implies_sym] = "_implies_sym",
  [sym__iff_sym] = "_iff_sym",
  [sym__forall_sym] = "_forall_sym",
  [sym__exists_sym] = "_exists_sym",
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
  [anon_sym_DOT] = {
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
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__universal_group] = {
    .visible = false,
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
  [sym__not_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__and_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__or_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__implies_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__iff_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__forall_sym] = {
    .visible = false,
    .named = true,
  },
  [sym__exists_sym] = {
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
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(23);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(26);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(31);
      if (lookahead == 172)
        ADVANCE(32);
      if (lookahead == 8594)
        ADVANCE(33);
      if (lookahead == 8596)
        ADVANCE(34);
      if (lookahead == 8658)
        ADVANCE(35);
      if (lookahead == 8660)
        ADVANCE(36);
      if (lookahead == 8704)
        ADVANCE(37);
      if (lookahead == 8707)
        ADVANCE(38);
      if (lookahead == 8743)
        ADVANCE(39);
      if (lookahead == 8744)
        ADVANCE(40);
      if (lookahead == 8801)
        ADVANCE(41);
      if (lookahead == 8868)
        ADVANCE(42);
      if (lookahead == 8869)
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 16:
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 19:
      if (lookahead == '>')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 21:
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(46);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(23);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(26);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(31);
      if (lookahead == 172)
        ADVANCE(32);
      if (lookahead == 8704)
        ADVANCE(37);
      if (lookahead == 8707)
        ADVANCE(38);
      if (lookahead == 8868)
        ADVANCE(42);
      if (lookahead == 8869)
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      if (lookahead == '\n')
        ADVANCE(48);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == 8594)
        ADVANCE(33);
      if (lookahead == 8596)
        ADVANCE(34);
      if (lookahead == 8658)
        ADVANCE(35);
      if (lookahead == 8660)
        ADVANCE(36);
      if (lookahead == 8743)
        ADVANCE(39);
      if (lookahead == 8744)
        ADVANCE(40);
      if (lookahead == 8801)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 49:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == 8594)
        ADVANCE(33);
      if (lookahead == 8596)
        ADVANCE(34);
      if (lookahead == 8658)
        ADVANCE(35);
      if (lookahead == 8660)
        ADVANCE(36);
      if (lookahead == 8743)
        ADVANCE(39);
      if (lookahead == 8744)
        ADVANCE(40);
      if (lookahead == 8801)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
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
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 51},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 51},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 51},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
  },
  [1] = {
    [sym_block] = STATE(11),
    [sym_expression] = STATE(18),
    [sym__term] = STATE(12),
    [sym_function] = STATE(12),
    [sym_not] = STATE(12),
    [sym_and] = STATE(12),
    [sym_or] = STATE(12),
    [sym_implies] = STATE(12),
    [sym_iff] = STATE(12),
    [sym_forall] = STATE(12),
    [sym_exists] = STATE(12),
    [sym__group] = STATE(12),
    [sym__universal_group] = STATE(12),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [aux_sym_block_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [2] = {
    [sym__term] = STATE(28),
    [sym_function] = STATE(28),
    [sym_not] = STATE(28),
    [sym_and] = STATE(28),
    [sym_or] = STATE(28),
    [sym_implies] = STATE(28),
    [sym_iff] = STATE(28),
    [sym_forall] = STATE(28),
    [sym_exists] = STATE(28),
    [sym__group] = STATE(28),
    [sym__universal_group] = STATE(28),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [3] = {
    [sym__term] = STATE(34),
    [sym_function] = STATE(34),
    [sym_not] = STATE(34),
    [sym_and] = STATE(34),
    [sym_or] = STATE(34),
    [sym_implies] = STATE(34),
    [sym_iff] = STATE(34),
    [sym_forall] = STATE(34),
    [sym_exists] = STATE(34),
    [sym__group] = STATE(34),
    [sym__universal_group] = STATE(34),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(34),
    [sym_false] = STATE(34),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(61),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [4] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
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
  [5] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_variable] = ACTIONS(69),
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
  [6] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_variable] = ACTIONS(71),
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
  [7] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_4] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_5] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_6] = ACTIONS(77),
    [anon_sym_7] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_8] = ACTIONS(77),
    [anon_sym_9] = ACTIONS(77),
    [anon_sym_10] = ACTIONS(77),
  },
  [8] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(81),
    [anon_sym_LT_DASH_GT] = ACTIONS(81),
    [anon_sym_LT_EQ_GT] = ACTIONS(81),
    [anon_sym_8] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(81),
  },
  [9] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_4] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_5] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_6] = ACTIONS(77),
    [anon_sym_7] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_8] = ACTIONS(77),
    [anon_sym_9] = ACTIONS(77),
    [anon_sym_10] = ACTIONS(77),
  },
  [10] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(81),
    [anon_sym_LT_DASH_GT] = ACTIONS(81),
    [anon_sym_LT_EQ_GT] = ACTIONS(81),
    [anon_sym_8] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(81),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_5] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_6] = ACTIONS(91),
    [anon_sym_7] = ACTIONS(91),
    [anon_sym_LT_DASH_GT] = ACTIONS(93),
    [anon_sym_LT_EQ_GT] = ACTIONS(93),
    [anon_sym_8] = ACTIONS(93),
    [anon_sym_9] = ACTIONS(93),
    [anon_sym_10] = ACTIONS(93),
  },
  [13] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_4] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_5] = ACTIONS(99),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_6] = ACTIONS(99),
    [anon_sym_7] = ACTIONS(99),
    [anon_sym_LT_DASH_GT] = ACTIONS(99),
    [anon_sym_LT_EQ_GT] = ACTIONS(99),
    [anon_sym_8] = ACTIONS(99),
    [anon_sym_9] = ACTIONS(99),
    [anon_sym_10] = ACTIONS(99),
  },
  [14] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(101),
  },
  [15] = {
    [sym__term] = STATE(41),
    [sym_function] = STATE(41),
    [sym_not] = STATE(41),
    [sym_and] = STATE(41),
    [sym_or] = STATE(41),
    [sym_implies] = STATE(41),
    [sym_iff] = STATE(41),
    [sym_forall] = STATE(41),
    [sym_exists] = STATE(41),
    [sym__group] = STATE(41),
    [sym__universal_group] = STATE(41),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(41),
    [sym_false] = STATE(41),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(103),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [16] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(105),
  },
  [17] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(107),
  },
  [18] = {
    [sym_expression] = STATE(44),
    [sym__term] = STATE(12),
    [sym_function] = STATE(12),
    [sym_not] = STATE(12),
    [sym_and] = STATE(12),
    [sym_or] = STATE(12),
    [sym_implies] = STATE(12),
    [sym_iff] = STATE(12),
    [sym_forall] = STATE(12),
    [sym_exists] = STATE(12),
    [sym__group] = STATE(12),
    [sym__universal_group] = STATE(12),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [aux_sym_block_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [19] = {
    [sym__term] = STATE(45),
    [sym_function] = STATE(45),
    [sym_not] = STATE(45),
    [sym_and] = STATE(45),
    [sym_or] = STATE(45),
    [sym_implies] = STATE(45),
    [sym_iff] = STATE(45),
    [sym_forall] = STATE(45),
    [sym_exists] = STATE(45),
    [sym__group] = STATE(45),
    [sym__universal_group] = STATE(45),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(45),
    [sym_false] = STATE(45),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(111),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [20] = {
    [sym__term] = STATE(46),
    [sym_function] = STATE(46),
    [sym_not] = STATE(46),
    [sym_and] = STATE(46),
    [sym_or] = STATE(46),
    [sym_implies] = STATE(46),
    [sym_iff] = STATE(46),
    [sym_forall] = STATE(46),
    [sym_exists] = STATE(46),
    [sym__group] = STATE(46),
    [sym__universal_group] = STATE(46),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(46),
    [sym_false] = STATE(46),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(113),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [21] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_4] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_5] = ACTIONS(65),
    [anon_sym_DASH_GT] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_6] = ACTIONS(65),
    [anon_sym_7] = ACTIONS(65),
    [anon_sym_LT_DASH_GT] = ACTIONS(65),
    [anon_sym_LT_EQ_GT] = ACTIONS(65),
    [anon_sym_8] = ACTIONS(65),
    [anon_sym_9] = ACTIONS(65),
    [anon_sym_10] = ACTIONS(65),
  },
  [22] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_variable] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_4] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_5] = ACTIONS(65),
    [anon_sym_DASH_GT] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_6] = ACTIONS(65),
    [anon_sym_7] = ACTIONS(65),
    [anon_sym_LT_DASH_GT] = ACTIONS(65),
    [anon_sym_LT_EQ_GT] = ACTIONS(65),
    [anon_sym_8] = ACTIONS(65),
    [anon_sym_9] = ACTIONS(65),
    [anon_sym_10] = ACTIONS(65),
  },
  [23] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_variable] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_4] = ACTIONS(65),
    [anon_sym__] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_5] = ACTIONS(65),
    [anon_sym_DASH_GT] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_6] = ACTIONS(65),
    [anon_sym_7] = ACTIONS(65),
    [anon_sym_LT_DASH_GT] = ACTIONS(65),
    [anon_sym_LT_EQ_GT] = ACTIONS(65),
    [anon_sym_8] = ACTIONS(65),
    [anon_sym_9] = ACTIONS(65),
    [anon_sym_10] = ACTIONS(65),
  },
  [24] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_4] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_5] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_6] = ACTIONS(73),
    [anon_sym_7] = ACTIONS(73),
    [anon_sym_LT_DASH_GT] = ACTIONS(73),
    [anon_sym_LT_EQ_GT] = ACTIONS(73),
    [anon_sym_8] = ACTIONS(73),
    [anon_sym_9] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(73),
  },
  [25] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_LT_DASH_GT] = ACTIONS(79),
    [anon_sym_LT_EQ_GT] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_10] = ACTIONS(79),
  },
  [26] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_4] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_5] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_6] = ACTIONS(73),
    [anon_sym_7] = ACTIONS(73),
    [anon_sym_LT_DASH_GT] = ACTIONS(73),
    [anon_sym_LT_EQ_GT] = ACTIONS(73),
    [anon_sym_8] = ACTIONS(73),
    [anon_sym_9] = ACTIONS(73),
    [anon_sym_10] = ACTIONS(73),
  },
  [27] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_LT_DASH_GT] = ACTIONS(79),
    [anon_sym_LT_EQ_GT] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_10] = ACTIONS(79),
  },
  [28] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [29] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_5] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_6] = ACTIONS(95),
    [anon_sym_7] = ACTIONS(95),
    [anon_sym_LT_DASH_GT] = ACTIONS(95),
    [anon_sym_LT_EQ_GT] = ACTIONS(95),
    [anon_sym_8] = ACTIONS(95),
    [anon_sym_9] = ACTIONS(95),
    [anon_sym_10] = ACTIONS(95),
  },
  [30] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(131),
  },
  [31] = {
    [sym__term] = STATE(53),
    [sym_function] = STATE(53),
    [sym_not] = STATE(53),
    [sym_and] = STATE(53),
    [sym_or] = STATE(53),
    [sym_implies] = STATE(53),
    [sym_iff] = STATE(53),
    [sym_forall] = STATE(53),
    [sym_exists] = STATE(53),
    [sym__group] = STATE(53),
    [sym__universal_group] = STATE(53),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(53),
    [sym_false] = STATE(53),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(133),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [32] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(135),
  },
  [33] = {
    [sym_comment] = ACTIONS(7),
    [sym_variable] = ACTIONS(137),
  },
  [34] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_5] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_6] = ACTIONS(91),
    [anon_sym_7] = ACTIONS(91),
    [anon_sym_LT_DASH_GT] = ACTIONS(93),
    [anon_sym_LT_EQ_GT] = ACTIONS(93),
    [anon_sym_8] = ACTIONS(93),
    [anon_sym_9] = ACTIONS(93),
    [anon_sym_10] = ACTIONS(93),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(143),
    [anon_sym_A] = ACTIONS(143),
    [anon_sym_E] = ACTIONS(143),
    [anon_sym_T] = ACTIONS(143),
    [anon_sym_F] = ACTIONS(143),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(141),
  },
  [36] = {
    [sym__term] = STATE(56),
    [sym_function] = STATE(56),
    [sym_not] = STATE(56),
    [sym_and] = STATE(56),
    [sym_or] = STATE(56),
    [sym_implies] = STATE(56),
    [sym_iff] = STATE(56),
    [sym_forall] = STATE(56),
    [sym_exists] = STATE(56),
    [sym__group] = STATE(56),
    [sym__universal_group] = STATE(56),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(145),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [37] = {
    [sym__term] = STATE(57),
    [sym_function] = STATE(57),
    [sym_not] = STATE(57),
    [sym_and] = STATE(57),
    [sym_or] = STATE(57),
    [sym_implies] = STATE(57),
    [sym_iff] = STATE(57),
    [sym_forall] = STATE(57),
    [sym_exists] = STATE(57),
    [sym__group] = STATE(57),
    [sym__universal_group] = STATE(57),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(147),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [38] = {
    [sym__term] = STATE(58),
    [sym_function] = STATE(58),
    [sym_not] = STATE(58),
    [sym_and] = STATE(58),
    [sym_or] = STATE(58),
    [sym_implies] = STATE(58),
    [sym_iff] = STATE(58),
    [sym_forall] = STATE(58),
    [sym_exists] = STATE(58),
    [sym__group] = STATE(58),
    [sym__universal_group] = STATE(58),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(58),
    [sym_false] = STATE(58),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(149),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [39] = {
    [sym__term] = STATE(59),
    [sym_function] = STATE(59),
    [sym_not] = STATE(59),
    [sym_and] = STATE(59),
    [sym_or] = STATE(59),
    [sym_implies] = STATE(59),
    [sym_iff] = STATE(59),
    [sym_forall] = STATE(59),
    [sym_exists] = STATE(59),
    [sym__group] = STATE(59),
    [sym__universal_group] = STATE(59),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(59),
    [sym_false] = STATE(59),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(151),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [40] = {
    [sym__term] = STATE(60),
    [sym_function] = STATE(60),
    [sym_not] = STATE(60),
    [sym_and] = STATE(60),
    [sym_or] = STATE(60),
    [sym_implies] = STATE(60),
    [sym_iff] = STATE(60),
    [sym_forall] = STATE(60),
    [sym_exists] = STATE(60),
    [sym__group] = STATE(60),
    [sym__universal_group] = STATE(60),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(153),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [41] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_4] = ACTIONS(157),
    [anon_sym__] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_5] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_6] = ACTIONS(157),
    [anon_sym_7] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_8] = ACTIONS(157),
    [anon_sym_9] = ACTIONS(157),
    [anon_sym_10] = ACTIONS(157),
  },
  [42] = {
    [sym__term] = STATE(61),
    [sym_function] = STATE(61),
    [sym_not] = STATE(61),
    [sym_and] = STATE(61),
    [sym_or] = STATE(61),
    [sym_implies] = STATE(61),
    [sym_iff] = STATE(61),
    [sym_forall] = STATE(61),
    [sym_exists] = STATE(61),
    [sym__group] = STATE(61),
    [sym__universal_group] = STATE(61),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(61),
    [sym_false] = STATE(61),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(159),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [43] = {
    [sym__term] = STATE(62),
    [sym_function] = STATE(62),
    [sym_not] = STATE(62),
    [sym_and] = STATE(62),
    [sym_or] = STATE(62),
    [sym_implies] = STATE(62),
    [sym_iff] = STATE(62),
    [sym_forall] = STATE(62),
    [sym_exists] = STATE(62),
    [sym__group] = STATE(62),
    [sym__universal_group] = STATE(62),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_variable] = ACTIONS(161),
    [sym__function_name] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(19),
    [anon_sym_T] = ACTIONS(21),
    [anon_sym_F] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(31),
    [anon_sym_12] = ACTIONS(33),
  },
  [44] = {
    [sym_expression] = STATE(44),
    [sym__term] = STATE(12),
    [sym_function] = STATE(12),
    [sym_not] = STATE(12),
    [sym_and] = STATE(12),
    [sym_or] = STATE(12),
    [sym_implies] = STATE(12),
    [sym_iff] = STATE(12),
    [sym_forall] = STATE(12),
    [sym_exists] = STATE(12),
    [sym__group] = STATE(12),
    [sym__universal_group] = STATE(12),
    [sym_function_name] = STATE(13),
    [sym__TF_func_name] = STATE(14),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym__not_sym] = STATE(15),
    [sym__forall_sym] = STATE(16),
    [sym__exists_sym] = STATE(17),
    [aux_sym_block_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(168),
    [sym_variable] = ACTIONS(171),
    [sym__function_name] = ACTIONS(174),
    [anon_sym_A] = ACTIONS(177),
    [anon_sym_E] = ACTIONS(180),
    [anon_sym_T] = ACTIONS(183),
    [anon_sym_F] = ACTIONS(186),
    [anon_sym_1] = ACTIONS(189),
    [anon_sym_] = ACTIONS(189),
    [anon_sym_0] = ACTIONS(192),
    [anon_sym_2] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_3] = ACTIONS(195),
    [anon_sym_11] = ACTIONS(198),
    [anon_sym_12] = ACTIONS(201),
  },
  [45] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [46] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [47] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_4] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_5] = ACTIONS(208),
    [anon_sym_DASH_GT] = ACTIONS(208),
    [anon_sym_EQ_GT] = ACTIONS(208),
    [anon_sym_6] = ACTIONS(208),
    [anon_sym_7] = ACTIONS(208),
    [anon_sym_LT_DASH_GT] = ACTIONS(208),
    [anon_sym_LT_EQ_GT] = ACTIONS(208),
    [anon_sym_8] = ACTIONS(208),
    [anon_sym_9] = ACTIONS(208),
    [anon_sym_10] = ACTIONS(208),
  },
  [48] = {
    [sym__term] = STATE(64),
    [sym_function] = STATE(64),
    [sym_not] = STATE(64),
    [sym_and] = STATE(64),
    [sym_or] = STATE(64),
    [sym_implies] = STATE(64),
    [sym_iff] = STATE(64),
    [sym_forall] = STATE(64),
    [sym_exists] = STATE(64),
    [sym__group] = STATE(64),
    [sym__universal_group] = STATE(64),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(64),
    [sym_false] = STATE(64),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(210),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [49] = {
    [sym__term] = STATE(65),
    [sym_function] = STATE(65),
    [sym_not] = STATE(65),
    [sym_and] = STATE(65),
    [sym_or] = STATE(65),
    [sym_implies] = STATE(65),
    [sym_iff] = STATE(65),
    [sym_forall] = STATE(65),
    [sym_exists] = STATE(65),
    [sym__group] = STATE(65),
    [sym__universal_group] = STATE(65),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(65),
    [sym_false] = STATE(65),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(212),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [50] = {
    [sym__term] = STATE(66),
    [sym_function] = STATE(66),
    [sym_not] = STATE(66),
    [sym_and] = STATE(66),
    [sym_or] = STATE(66),
    [sym_implies] = STATE(66),
    [sym_iff] = STATE(66),
    [sym_forall] = STATE(66),
    [sym_exists] = STATE(66),
    [sym__group] = STATE(66),
    [sym__universal_group] = STATE(66),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(66),
    [sym_false] = STATE(66),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(214),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [51] = {
    [sym__term] = STATE(67),
    [sym_function] = STATE(67),
    [sym_not] = STATE(67),
    [sym_and] = STATE(67),
    [sym_or] = STATE(67),
    [sym_implies] = STATE(67),
    [sym_iff] = STATE(67),
    [sym_forall] = STATE(67),
    [sym_exists] = STATE(67),
    [sym__group] = STATE(67),
    [sym__universal_group] = STATE(67),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(67),
    [sym_false] = STATE(67),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(216),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [52] = {
    [sym__term] = STATE(68),
    [sym_function] = STATE(68),
    [sym_not] = STATE(68),
    [sym_and] = STATE(68),
    [sym_or] = STATE(68),
    [sym_implies] = STATE(68),
    [sym_iff] = STATE(68),
    [sym_forall] = STATE(68),
    [sym_exists] = STATE(68),
    [sym__group] = STATE(68),
    [sym__universal_group] = STATE(68),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(68),
    [sym_false] = STATE(68),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(218),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [53] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_4] = ACTIONS(155),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_5] = ACTIONS(155),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_EQ_GT] = ACTIONS(155),
    [anon_sym_6] = ACTIONS(155),
    [anon_sym_7] = ACTIONS(155),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [54] = {
    [sym__term] = STATE(69),
    [sym_function] = STATE(69),
    [sym_not] = STATE(69),
    [sym_and] = STATE(69),
    [sym_or] = STATE(69),
    [sym_implies] = STATE(69),
    [sym_iff] = STATE(69),
    [sym_forall] = STATE(69),
    [sym_exists] = STATE(69),
    [sym__group] = STATE(69),
    [sym__universal_group] = STATE(69),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(69),
    [sym_false] = STATE(69),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(220),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [55] = {
    [sym__term] = STATE(70),
    [sym_function] = STATE(70),
    [sym_not] = STATE(70),
    [sym_and] = STATE(70),
    [sym_or] = STATE(70),
    [sym_implies] = STATE(70),
    [sym_iff] = STATE(70),
    [sym_forall] = STATE(70),
    [sym_exists] = STATE(70),
    [sym__group] = STATE(70),
    [sym__universal_group] = STATE(70),
    [sym_function_name] = STATE(29),
    [sym__TF_func_name] = STATE(30),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [sym_variable] = ACTIONS(222),
    [sym__function_name] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(43),
    [anon_sym_E] = ACTIONS(45),
    [anon_sym_T] = ACTIONS(47),
    [anon_sym_F] = ACTIONS(49),
    [anon_sym_1] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_11] = ACTIONS(57),
    [anon_sym_12] = ACTIONS(59),
  },
  [56] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_4] = ACTIONS(226),
    [anon_sym__] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_5] = ACTIONS(226),
    [anon_sym_DASH_GT] = ACTIONS(226),
    [anon_sym_EQ_GT] = ACTIONS(226),
    [anon_sym_6] = ACTIONS(226),
    [anon_sym_7] = ACTIONS(226),
    [anon_sym_LT_DASH_GT] = ACTIONS(226),
    [anon_sym_LT_EQ_GT] = ACTIONS(226),
    [anon_sym_8] = ACTIONS(226),
    [anon_sym_9] = ACTIONS(226),
    [anon_sym_10] = ACTIONS(226),
  },
  [57] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_5] = ACTIONS(230),
    [anon_sym_DASH_GT] = ACTIONS(230),
    [anon_sym_EQ_GT] = ACTIONS(230),
    [anon_sym_6] = ACTIONS(230),
    [anon_sym_7] = ACTIONS(230),
    [anon_sym_LT_DASH_GT] = ACTIONS(230),
    [anon_sym_LT_EQ_GT] = ACTIONS(230),
    [anon_sym_8] = ACTIONS(230),
    [anon_sym_9] = ACTIONS(230),
    [anon_sym_10] = ACTIONS(230),
  },
  [58] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_5] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_6] = ACTIONS(91),
    [anon_sym_7] = ACTIONS(91),
    [anon_sym_LT_DASH_GT] = ACTIONS(234),
    [anon_sym_LT_EQ_GT] = ACTIONS(234),
    [anon_sym_8] = ACTIONS(234),
    [anon_sym_9] = ACTIONS(234),
    [anon_sym_10] = ACTIONS(234),
  },
  [59] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_5] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_6] = ACTIONS(91),
    [anon_sym_7] = ACTIONS(91),
    [anon_sym_LT_DASH_GT] = ACTIONS(93),
    [anon_sym_LT_EQ_GT] = ACTIONS(93),
    [anon_sym_8] = ACTIONS(93),
    [anon_sym_9] = ACTIONS(93),
    [anon_sym_10] = ACTIONS(93),
  },
  [60] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [61] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(242),
    [anon_sym_AMP] = ACTIONS(242),
    [anon_sym_4] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_5] = ACTIONS(242),
    [anon_sym_DASH_GT] = ACTIONS(242),
    [anon_sym_EQ_GT] = ACTIONS(242),
    [anon_sym_6] = ACTIONS(242),
    [anon_sym_7] = ACTIONS(242),
    [anon_sym_LT_DASH_GT] = ACTIONS(242),
    [anon_sym_LT_EQ_GT] = ACTIONS(242),
    [anon_sym_8] = ACTIONS(242),
    [anon_sym_9] = ACTIONS(242),
    [anon_sym_10] = ACTIONS(242),
  },
  [62] = {
    [sym__and_sym] = STATE(36),
    [sym__or_sym] = STATE(37),
    [sym__implies_sym] = STATE(38),
    [sym__iff_sym] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_4] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_5] = ACTIONS(246),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_6] = ACTIONS(246),
    [anon_sym_7] = ACTIONS(246),
    [anon_sym_LT_DASH_GT] = ACTIONS(246),
    [anon_sym_LT_EQ_GT] = ACTIONS(246),
    [anon_sym_8] = ACTIONS(246),
    [anon_sym_9] = ACTIONS(246),
    [anon_sym_10] = ACTIONS(246),
  },
  [63] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_4] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_5] = ACTIONS(206),
    [anon_sym_DASH_GT] = ACTIONS(206),
    [anon_sym_EQ_GT] = ACTIONS(206),
    [anon_sym_6] = ACTIONS(206),
    [anon_sym_7] = ACTIONS(206),
    [anon_sym_LT_DASH_GT] = ACTIONS(206),
    [anon_sym_LT_EQ_GT] = ACTIONS(206),
    [anon_sym_8] = ACTIONS(206),
    [anon_sym_9] = ACTIONS(206),
    [anon_sym_10] = ACTIONS(206),
  },
  [64] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(224),
    [anon_sym_4] = ACTIONS(224),
    [anon_sym__] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_5] = ACTIONS(224),
    [anon_sym_DASH_GT] = ACTIONS(224),
    [anon_sym_EQ_GT] = ACTIONS(224),
    [anon_sym_6] = ACTIONS(224),
    [anon_sym_7] = ACTIONS(224),
    [anon_sym_LT_DASH_GT] = ACTIONS(224),
    [anon_sym_LT_EQ_GT] = ACTIONS(224),
    [anon_sym_8] = ACTIONS(224),
    [anon_sym_9] = ACTIONS(224),
    [anon_sym_10] = ACTIONS(224),
  },
  [65] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_5] = ACTIONS(228),
    [anon_sym_DASH_GT] = ACTIONS(228),
    [anon_sym_EQ_GT] = ACTIONS(228),
    [anon_sym_6] = ACTIONS(228),
    [anon_sym_7] = ACTIONS(228),
    [anon_sym_LT_DASH_GT] = ACTIONS(228),
    [anon_sym_LT_EQ_GT] = ACTIONS(228),
    [anon_sym_8] = ACTIONS(228),
    [anon_sym_9] = ACTIONS(228),
    [anon_sym_10] = ACTIONS(228),
  },
  [66] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(232),
    [anon_sym_LT_EQ_GT] = ACTIONS(232),
    [anon_sym_8] = ACTIONS(232),
    [anon_sym_9] = ACTIONS(232),
    [anon_sym_10] = ACTIONS(232),
  },
  [67] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [68] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(129),
    [anon_sym_10] = ACTIONS(129),
  },
  [69] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_4] = ACTIONS(240),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_5] = ACTIONS(240),
    [anon_sym_DASH_GT] = ACTIONS(240),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [anon_sym_6] = ACTIONS(240),
    [anon_sym_7] = ACTIONS(240),
    [anon_sym_LT_DASH_GT] = ACTIONS(240),
    [anon_sym_LT_EQ_GT] = ACTIONS(240),
    [anon_sym_8] = ACTIONS(240),
    [anon_sym_9] = ACTIONS(240),
    [anon_sym_10] = ACTIONS(240),
  },
  [70] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_4] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_5] = ACTIONS(244),
    [anon_sym_DASH_GT] = ACTIONS(244),
    [anon_sym_EQ_GT] = ACTIONS(244),
    [anon_sym_6] = ACTIONS(244),
    [anon_sym_7] = ACTIONS(244),
    [anon_sym_LT_DASH_GT] = ACTIONS(244),
    [anon_sym_LT_EQ_GT] = ACTIONS(244),
    [anon_sym_8] = ACTIONS(244),
    [anon_sym_9] = ACTIONS(244),
    [anon_sym_10] = ACTIONS(244),
  },
  [71] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_4] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_5] = ACTIONS(252),
    [anon_sym_DASH_GT] = ACTIONS(252),
    [anon_sym_EQ_GT] = ACTIONS(252),
    [anon_sym_6] = ACTIONS(252),
    [anon_sym_7] = ACTIONS(252),
    [anon_sym_LT_DASH_GT] = ACTIONS(252),
    [anon_sym_LT_EQ_GT] = ACTIONS(252),
    [anon_sym_8] = ACTIONS(252),
    [anon_sym_9] = ACTIONS(252),
    [anon_sym_10] = ACTIONS(252),
  },
  [72] = {
    [sym_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_4] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_5] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [anon_sym_EQ_GT] = ACTIONS(250),
    [anon_sym_6] = ACTIONS(250),
    [anon_sym_7] = ACTIONS(250),
    [anon_sym_LT_DASH_GT] = ACTIONS(250),
    [anon_sym_LT_EQ_GT] = ACTIONS(250),
    [anon_sym_8] = ACTIONS(250),
    [anon_sym_9] = ACTIONS(250),
    [anon_sym_10] = ACTIONS(250),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_block, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(28),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(23),
  [47] = {.count = 1, .reusable = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, SHIFT(33),
  [61] = {.count = 1, .reusable = true}, SHIFT(34),
  [63] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__forall_sym, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym__exists_sym, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [83] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [85] = {.count = 1, .reusable = true}, SHIFT(35),
  [87] = {.count = 1, .reusable = false}, SHIFT(36),
  [89] = {.count = 1, .reusable = false}, SHIFT(37),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(39),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(40),
  [103] = {.count = 1, .reusable = true}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, SHIFT(43),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(45),
  [113] = {.count = 1, .reusable = true}, SHIFT(46),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__forall_sym, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__exists_sym, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(47),
  [123] = {.count = 1, .reusable = true}, SHIFT(48),
  [125] = {.count = 1, .reusable = true}, SHIFT(49),
  [127] = {.count = 1, .reusable = true}, SHIFT(50),
  [129] = {.count = 1, .reusable = true}, SHIFT(51),
  [131] = {.count = 1, .reusable = true}, SHIFT(52),
  [133] = {.count = 1, .reusable = true}, SHIFT(53),
  [135] = {.count = 1, .reusable = true}, SHIFT(54),
  [137] = {.count = 1, .reusable = true}, SHIFT(55),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(56),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, SHIFT(58),
  [151] = {.count = 1, .reusable = true}, SHIFT(59),
  [153] = {.count = 1, .reusable = true}, SHIFT(60),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(61),
  [161] = {.count = 1, .reusable = true}, SHIFT(62),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [204] = {.count = 1, .reusable = true}, SHIFT(63),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [210] = {.count = 1, .reusable = true}, SHIFT(64),
  [212] = {.count = 1, .reusable = true}, SHIFT(65),
  [214] = {.count = 1, .reusable = true}, SHIFT(66),
  [216] = {.count = 1, .reusable = true}, SHIFT(67),
  [218] = {.count = 1, .reusable = true}, SHIFT(68),
  [220] = {.count = 1, .reusable = true}, SHIFT(69),
  [222] = {.count = 1, .reusable = true}, SHIFT(70),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [238] = {.count = 1, .reusable = true}, SHIFT(71),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [248] = {.count = 1, .reusable = true}, SHIFT(72),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
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

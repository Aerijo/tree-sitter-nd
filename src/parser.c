#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 91
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  sym__hypothesis_end = 4,
  sym_comment = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DOT = 8,
  sym_variable = 9,
  sym__function_name = 10,
  anon_sym_A = 11,
  anon_sym_E = 12,
  anon_sym_T = 13,
  anon_sym_F = 14,
  anon_sym_1 = 15,
  anon_sym_ = 16,
  anon_sym_0 = 17,
  anon_sym_2 = 18,
  anon_sym_DASH = 19,
  anon_sym_BANG = 20,
  anon_sym_TILDE = 21,
  anon_sym_3 = 22,
  anon_sym_CARET = 23,
  anon_sym_AMP = 24,
  anon_sym_4 = 25,
  anon_sym__ = 26,
  anon_sym_PIPE = 27,
  anon_sym_v = 28,
  anon_sym_5 = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_EQ_GT = 31,
  anon_sym_6 = 32,
  anon_sym_7 = 33,
  anon_sym_LT_DASH_GT = 34,
  anon_sym_LT_EQ_GT = 35,
  anon_sym_8 = 36,
  anon_sym_9 = 37,
  anon_sym_10 = 38,
  anon_sym_11 = 39,
  anon_sym_12 = 40,
  sym_block = 41,
  sym_guard = 42,
  sym_hypothesis = 43,
  sym_expression = 44,
  sym__term = 45,
  sym_function = 46,
  sym_not = 47,
  sym_and = 48,
  sym_or = 49,
  sym_implies = 50,
  sym_iff = 51,
  sym_forall = 52,
  sym_exists = 53,
  sym__group = 54,
  sym__universal_group = 55,
  sym_function_name = 56,
  sym__TF_func_name = 57,
  sym_true = 58,
  sym_false = 59,
  sym__not_sym = 60,
  sym__and_sym = 61,
  sym__or_sym = 62,
  sym__implies_sym = 63,
  sym__iff_sym = 64,
  sym__forall_sym = 65,
  sym__exists_sym = 66,
  aux_sym_block_repeat1 = 67,
  aux_sym_guard_repeat1 = 68,
  aux_sym_hypothesis_repeat1 = 69,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__hypothesis_end] = "_hypothesis_end",
  [sym_comment] = "comment",
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
  [anon_sym_v] = "v",
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
  [sym_guard] = "guard",
  [sym_hypothesis] = "hypothesis",
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
  [aux_sym_guard_repeat1] = "guard_repeat1",
  [aux_sym_hypothesis_repeat1] = "hypothesis_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__hypothesis_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [anon_sym_v] = {
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
  [sym_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_hypothesis] = {
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
  [aux_sym_guard_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hypothesis_repeat1] = {
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
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '_')
        ADVANCE(31);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead == 172)
        ADVANCE(37);
      if (lookahead == 8594)
        ADVANCE(38);
      if (lookahead == 8596)
        ADVANCE(39);
      if (lookahead == 8658)
        ADVANCE(40);
      if (lookahead == 8660)
        ADVANCE(41);
      if (lookahead == 8704)
        ADVANCE(42);
      if (lookahead == 8707)
        ADVANCE(43);
      if (lookahead == 8743)
        ADVANCE(44);
      if (lookahead == 8744)
        ADVANCE(45);
      if (lookahead == 8801)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(47);
      if (lookahead == 8869)
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '_')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__hypothesis_end);
      if (lookahead == '_')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 49:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(50);
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
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead == 172)
        ADVANCE(37);
      if (lookahead == 8704)
        ADVANCE(42);
      if (lookahead == 8707)
        ADVANCE(43);
      if (lookahead == 8868)
        ADVANCE(47);
      if (lookahead == 8869)
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      if (lookahead == '_')
        ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        ADVANCE(54);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == 8594)
        ADVANCE(38);
      if (lookahead == 8596)
        ADVANCE(39);
      if (lookahead == 8658)
        ADVANCE(40);
      if (lookahead == 8660)
        ADVANCE(41);
      if (lookahead == 8743)
        ADVANCE(44);
      if (lookahead == 8744)
        ADVANCE(45);
      if (lookahead == 8801)
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 55:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 57:
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
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(50);
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
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead == 172)
        ADVANCE(37);
      if (lookahead == 8704)
        ADVANCE(42);
      if (lookahead == 8707)
        ADVANCE(43);
      if (lookahead == 8868)
        ADVANCE(47);
      if (lookahead == 8869)
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == 8594)
        ADVANCE(38);
      if (lookahead == 8596)
        ADVANCE(39);
      if (lookahead == 8658)
        ADVANCE(40);
      if (lookahead == 8660)
        ADVANCE(41);
      if (lookahead == 8743)
        ADVANCE(44);
      if (lookahead == 8744)
        ADVANCE(45);
      if (lookahead == 8801)
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'v')
        ADVANCE(1);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 53},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 49},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 49},
  [67] = {.lex_state = 49},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 58},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 59},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 53},
  [80] = {.lex_state = 59},
  [81] = {.lex_state = 59},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 59},
  [84] = {.lex_state = 59},
  [85] = {.lex_state = 59},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 58},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 59},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__hypothesis_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_variable] = ACTIONS(3),
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
    [anon_sym__] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(3),
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
    [sym_block] = STATE(13),
    [sym_guard] = STATE(14),
    [sym_hypothesis] = STATE(15),
    [sym_expression] = STATE(16),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_hypothesis_repeat1] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__hypothesis_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [2] = {
    [aux_sym_guard_repeat1] = STATE(25),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(39),
  },
  [3] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(27),
    [sym_comment] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [4] = {
    [sym__term] = STATE(37),
    [sym_function] = STATE(37),
    [sym_not] = STATE(37),
    [sym_and] = STATE(37),
    [sym_or] = STATE(37),
    [sym_implies] = STATE(37),
    [sym_iff] = STATE(37),
    [sym_forall] = STATE(37),
    [sym_exists] = STATE(37),
    [sym__group] = STATE(37),
    [sym__universal_group] = STATE(37),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(37),
    [sym_false] = STATE(37),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(48),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [5] = {
    [sym__term] = STATE(43),
    [sym_function] = STATE(43),
    [sym_not] = STATE(43),
    [sym_and] = STATE(43),
    [sym_or] = STATE(43),
    [sym_implies] = STATE(43),
    [sym_iff] = STATE(43),
    [sym_forall] = STATE(43),
    [sym_exists] = STATE(43),
    [sym__group] = STATE(43),
    [sym__universal_group] = STATE(43),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(70),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_4] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_6] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(76),
    [anon_sym_LT_DASH_GT] = ACTIONS(76),
    [anon_sym_LT_EQ_GT] = ACTIONS(76),
    [anon_sym_8] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(76),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_variable] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_4] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_6] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(76),
    [anon_sym_LT_DASH_GT] = ACTIONS(76),
    [anon_sym_LT_EQ_GT] = ACTIONS(76),
    [anon_sym_8] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(76),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_variable] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_4] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_6] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(76),
    [anon_sym_LT_DASH_GT] = ACTIONS(76),
    [anon_sym_LT_EQ_GT] = ACTIONS(76),
    [anon_sym_8] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(76),
  },
  [9] = {
    [anon_sym_LF] = ACTIONS(82),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_4] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_v] = ACTIONS(86),
    [anon_sym_5] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_6] = ACTIONS(86),
    [anon_sym_7] = ACTIONS(86),
    [anon_sym_LT_DASH_GT] = ACTIONS(86),
    [anon_sym_LT_EQ_GT] = ACTIONS(86),
    [anon_sym_8] = ACTIONS(86),
    [anon_sym_9] = ACTIONS(86),
    [anon_sym_10] = ACTIONS(86),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(88),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_4] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_v] = ACTIONS(90),
    [anon_sym_5] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_6] = ACTIONS(90),
    [anon_sym_7] = ACTIONS(90),
    [anon_sym_LT_DASH_GT] = ACTIONS(90),
    [anon_sym_LT_EQ_GT] = ACTIONS(90),
    [anon_sym_8] = ACTIONS(90),
    [anon_sym_9] = ACTIONS(90),
    [anon_sym_10] = ACTIONS(90),
  },
  [11] = {
    [anon_sym_LF] = ACTIONS(82),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_4] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_v] = ACTIONS(86),
    [anon_sym_5] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_6] = ACTIONS(86),
    [anon_sym_7] = ACTIONS(86),
    [anon_sym_LT_DASH_GT] = ACTIONS(86),
    [anon_sym_LT_EQ_GT] = ACTIONS(86),
    [anon_sym_8] = ACTIONS(86),
    [anon_sym_9] = ACTIONS(86),
    [anon_sym_10] = ACTIONS(86),
  },
  [12] = {
    [anon_sym_LF] = ACTIONS(88),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_4] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_v] = ACTIONS(90),
    [anon_sym_5] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_6] = ACTIONS(90),
    [anon_sym_7] = ACTIONS(90),
    [anon_sym_LT_DASH_GT] = ACTIONS(90),
    [anon_sym_LT_EQ_GT] = ACTIONS(90),
    [anon_sym_8] = ACTIONS(90),
    [anon_sym_9] = ACTIONS(90),
    [anon_sym_10] = ACTIONS(90),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_hypothesis] = STATE(45),
    [sym_expression] = STATE(16),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_hypothesis_repeat1] = STATE(23),
    [sym__hypothesis_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [15] = {
    [sym__hypothesis_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_LF] = ACTIONS(96),
    [sym_comment] = ACTIONS(74),
  },
  [17] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(98),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(106),
    [anon_sym_LT_EQ_GT] = ACTIONS(106),
    [anon_sym_8] = ACTIONS(106),
    [anon_sym_9] = ACTIONS(106),
    [anon_sym_10] = ACTIONS(106),
  },
  [18] = {
    [anon_sym_LF] = ACTIONS(108),
    [sym_comment] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(112),
    [anon_sym__] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_v] = ACTIONS(112),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
    [anon_sym_EQ_GT] = ACTIONS(112),
    [anon_sym_6] = ACTIONS(112),
    [anon_sym_7] = ACTIONS(112),
    [anon_sym_LT_DASH_GT] = ACTIONS(112),
    [anon_sym_LT_EQ_GT] = ACTIONS(112),
    [anon_sym_8] = ACTIONS(112),
    [anon_sym_9] = ACTIONS(112),
    [anon_sym_10] = ACTIONS(112),
  },
  [19] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(114),
  },
  [20] = {
    [sym__term] = STATE(52),
    [sym_function] = STATE(52),
    [sym_not] = STATE(52),
    [sym_and] = STATE(52),
    [sym_or] = STATE(52),
    [sym_implies] = STATE(52),
    [sym_iff] = STATE(52),
    [sym_forall] = STATE(52),
    [sym_exists] = STATE(52),
    [sym__group] = STATE(52),
    [sym__universal_group] = STATE(52),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(116),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [21] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(118),
  },
  [22] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(120),
  },
  [23] = {
    [sym_expression] = STATE(16),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_hypothesis_repeat1] = STATE(55),
    [sym__hypothesis_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [24] = {
    [sym__hypothesis_end] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [sym_variable] = ACTIONS(124),
    [sym__function_name] = ACTIONS(126),
    [anon_sym_A] = ACTIONS(126),
    [anon_sym_E] = ACTIONS(126),
    [anon_sym_T] = ACTIONS(126),
    [anon_sym_F] = ACTIONS(126),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_] = ACTIONS(124),
    [anon_sym_0] = ACTIONS(124),
    [anon_sym_2] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_3] = ACTIONS(124),
    [anon_sym_11] = ACTIONS(124),
    [anon_sym_12] = ACTIONS(124),
  },
  [25] = {
    [aux_sym_guard_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(130),
  },
  [26] = {
    [anon_sym_LF] = ACTIONS(132),
    [sym_comment] = ACTIONS(74),
  },
  [27] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [28] = {
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
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(139),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [29] = {
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
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(61),
    [sym_false] = STATE(61),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [30] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_4] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_v] = ACTIONS(72),
    [anon_sym_5] = ACTIONS(72),
    [anon_sym_DASH_GT] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_6] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(72),
    [anon_sym_LT_DASH_GT] = ACTIONS(72),
    [anon_sym_LT_EQ_GT] = ACTIONS(72),
    [anon_sym_8] = ACTIONS(72),
    [anon_sym_9] = ACTIONS(72),
    [anon_sym_10] = ACTIONS(72),
  },
  [31] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [sym_variable] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_4] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(72),
    [anon_sym_DASH_GT] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_6] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(72),
    [anon_sym_LT_DASH_GT] = ACTIONS(72),
    [anon_sym_LT_EQ_GT] = ACTIONS(72),
    [anon_sym_8] = ACTIONS(72),
    [anon_sym_9] = ACTIONS(72),
    [anon_sym_10] = ACTIONS(72),
  },
  [32] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [sym_variable] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_4] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_5] = ACTIONS(72),
    [anon_sym_DASH_GT] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_6] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(72),
    [anon_sym_LT_DASH_GT] = ACTIONS(72),
    [anon_sym_LT_EQ_GT] = ACTIONS(72),
    [anon_sym_8] = ACTIONS(72),
    [anon_sym_9] = ACTIONS(72),
    [anon_sym_10] = ACTIONS(72),
  },
  [33] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_4] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_5] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_6] = ACTIONS(82),
    [anon_sym_7] = ACTIONS(82),
    [anon_sym_LT_DASH_GT] = ACTIONS(82),
    [anon_sym_LT_EQ_GT] = ACTIONS(82),
    [anon_sym_8] = ACTIONS(82),
    [anon_sym_9] = ACTIONS(82),
    [anon_sym_10] = ACTIONS(82),
  },
  [34] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_4] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_v] = ACTIONS(88),
    [anon_sym_5] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_6] = ACTIONS(88),
    [anon_sym_7] = ACTIONS(88),
    [anon_sym_LT_DASH_GT] = ACTIONS(88),
    [anon_sym_LT_EQ_GT] = ACTIONS(88),
    [anon_sym_8] = ACTIONS(88),
    [anon_sym_9] = ACTIONS(88),
    [anon_sym_10] = ACTIONS(88),
  },
  [35] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_4] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_5] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_6] = ACTIONS(82),
    [anon_sym_7] = ACTIONS(82),
    [anon_sym_LT_DASH_GT] = ACTIONS(82),
    [anon_sym_LT_EQ_GT] = ACTIONS(82),
    [anon_sym_8] = ACTIONS(82),
    [anon_sym_9] = ACTIONS(82),
    [anon_sym_10] = ACTIONS(82),
  },
  [36] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_4] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_v] = ACTIONS(88),
    [anon_sym_5] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [anon_sym_EQ_GT] = ACTIONS(88),
    [anon_sym_6] = ACTIONS(88),
    [anon_sym_7] = ACTIONS(88),
    [anon_sym_LT_DASH_GT] = ACTIONS(88),
    [anon_sym_LT_EQ_GT] = ACTIONS(88),
    [anon_sym_8] = ACTIONS(88),
    [anon_sym_9] = ACTIONS(88),
    [anon_sym_10] = ACTIONS(88),
  },
  [37] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [38] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_4] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_v] = ACTIONS(108),
    [anon_sym_5] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(108),
    [anon_sym_6] = ACTIONS(108),
    [anon_sym_7] = ACTIONS(108),
    [anon_sym_LT_DASH_GT] = ACTIONS(108),
    [anon_sym_LT_EQ_GT] = ACTIONS(108),
    [anon_sym_8] = ACTIONS(108),
    [anon_sym_9] = ACTIONS(108),
    [anon_sym_10] = ACTIONS(108),
  },
  [39] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(155),
  },
  [40] = {
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
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(68),
    [sym_false] = STATE(68),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(157),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [41] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(159),
  },
  [42] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(161),
  },
  [43] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(163),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(106),
    [anon_sym_LT_EQ_GT] = ACTIONS(106),
    [anon_sym_8] = ACTIONS(106),
    [anon_sym_9] = ACTIONS(106),
    [anon_sym_10] = ACTIONS(106),
  },
  [44] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(71),
    [sym_comment] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [45] = {
    [sym__hypothesis_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__hypothesis_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [sym_variable] = ACTIONS(170),
    [sym__function_name] = ACTIONS(172),
    [anon_sym_A] = ACTIONS(172),
    [anon_sym_E] = ACTIONS(172),
    [anon_sym_T] = ACTIONS(172),
    [anon_sym_F] = ACTIONS(172),
    [anon_sym_1] = ACTIONS(170),
    [anon_sym_] = ACTIONS(170),
    [anon_sym_0] = ACTIONS(170),
    [anon_sym_2] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_3] = ACTIONS(170),
    [anon_sym_11] = ACTIONS(170),
    [anon_sym_12] = ACTIONS(170),
  },
  [47] = {
    [sym__term] = STATE(73),
    [sym_function] = STATE(73),
    [sym_not] = STATE(73),
    [sym_and] = STATE(73),
    [sym_or] = STATE(73),
    [sym_implies] = STATE(73),
    [sym_iff] = STATE(73),
    [sym_forall] = STATE(73),
    [sym_exists] = STATE(73),
    [sym__group] = STATE(73),
    [sym__universal_group] = STATE(73),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(174),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [48] = {
    [sym__term] = STATE(74),
    [sym_function] = STATE(74),
    [sym_not] = STATE(74),
    [sym_and] = STATE(74),
    [sym_or] = STATE(74),
    [sym_implies] = STATE(74),
    [sym_iff] = STATE(74),
    [sym_forall] = STATE(74),
    [sym_exists] = STATE(74),
    [sym__group] = STATE(74),
    [sym__universal_group] = STATE(74),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(176),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [49] = {
    [sym__term] = STATE(75),
    [sym_function] = STATE(75),
    [sym_not] = STATE(75),
    [sym_and] = STATE(75),
    [sym_or] = STATE(75),
    [sym_implies] = STATE(75),
    [sym_iff] = STATE(75),
    [sym_forall] = STATE(75),
    [sym_exists] = STATE(75),
    [sym__group] = STATE(75),
    [sym__universal_group] = STATE(75),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(178),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [50] = {
    [sym__term] = STATE(76),
    [sym_function] = STATE(76),
    [sym_not] = STATE(76),
    [sym_and] = STATE(76),
    [sym_or] = STATE(76),
    [sym_implies] = STATE(76),
    [sym_iff] = STATE(76),
    [sym_forall] = STATE(76),
    [sym_exists] = STATE(76),
    [sym__group] = STATE(76),
    [sym__universal_group] = STATE(76),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(76),
    [sym_false] = STATE(76),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(180),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [51] = {
    [sym__term] = STATE(77),
    [sym_function] = STATE(77),
    [sym_not] = STATE(77),
    [sym_and] = STATE(77),
    [sym_or] = STATE(77),
    [sym_implies] = STATE(77),
    [sym_iff] = STATE(77),
    [sym_forall] = STATE(77),
    [sym_exists] = STATE(77),
    [sym__group] = STATE(77),
    [sym__universal_group] = STATE(77),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(77),
    [sym_false] = STATE(77),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(182),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [52] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(184),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_4] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_v] = ACTIONS(186),
    [anon_sym_5] = ACTIONS(186),
    [anon_sym_DASH_GT] = ACTIONS(186),
    [anon_sym_EQ_GT] = ACTIONS(186),
    [anon_sym_6] = ACTIONS(186),
    [anon_sym_7] = ACTIONS(186),
    [anon_sym_LT_DASH_GT] = ACTIONS(186),
    [anon_sym_LT_EQ_GT] = ACTIONS(186),
    [anon_sym_8] = ACTIONS(186),
    [anon_sym_9] = ACTIONS(186),
    [anon_sym_10] = ACTIONS(186),
  },
  [53] = {
    [sym__term] = STATE(78),
    [sym_function] = STATE(78),
    [sym_not] = STATE(78),
    [sym_and] = STATE(78),
    [sym_or] = STATE(78),
    [sym_implies] = STATE(78),
    [sym_iff] = STATE(78),
    [sym_forall] = STATE(78),
    [sym_exists] = STATE(78),
    [sym__group] = STATE(78),
    [sym__universal_group] = STATE(78),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(78),
    [sym_false] = STATE(78),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(188),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [54] = {
    [sym__term] = STATE(79),
    [sym_function] = STATE(79),
    [sym_not] = STATE(79),
    [sym_and] = STATE(79),
    [sym_or] = STATE(79),
    [sym_implies] = STATE(79),
    [sym_iff] = STATE(79),
    [sym_forall] = STATE(79),
    [sym_exists] = STATE(79),
    [sym__group] = STATE(79),
    [sym__universal_group] = STATE(79),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(79),
    [sym_false] = STATE(79),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(190),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [55] = {
    [sym_expression] = STATE(16),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_hypothesis_repeat1] = STATE(55),
    [sym__hypothesis_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_variable] = ACTIONS(198),
    [sym__function_name] = ACTIONS(201),
    [anon_sym_A] = ACTIONS(204),
    [anon_sym_E] = ACTIONS(207),
    [anon_sym_T] = ACTIONS(210),
    [anon_sym_F] = ACTIONS(213),
    [anon_sym_1] = ACTIONS(216),
    [anon_sym_] = ACTIONS(216),
    [anon_sym_0] = ACTIONS(219),
    [anon_sym_2] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_3] = ACTIONS(222),
    [anon_sym_11] = ACTIONS(225),
    [anon_sym_12] = ACTIONS(228),
  },
  [56] = {
    [sym__hypothesis_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [sym_variable] = ACTIONS(231),
    [sym__function_name] = ACTIONS(233),
    [anon_sym_A] = ACTIONS(233),
    [anon_sym_E] = ACTIONS(233),
    [anon_sym_T] = ACTIONS(233),
    [anon_sym_F] = ACTIONS(233),
    [anon_sym_1] = ACTIONS(231),
    [anon_sym_] = ACTIONS(231),
    [anon_sym_0] = ACTIONS(231),
    [anon_sym_2] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_3] = ACTIONS(231),
    [anon_sym_11] = ACTIONS(231),
    [anon_sym_12] = ACTIONS(231),
  },
  [57] = {
    [aux_sym_guard_repeat1] = STATE(57),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(237),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [sym_variable] = ACTIONS(240),
    [sym__function_name] = ACTIONS(242),
    [anon_sym_A] = ACTIONS(242),
    [anon_sym_E] = ACTIONS(242),
    [anon_sym_T] = ACTIONS(242),
    [anon_sym_F] = ACTIONS(242),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_] = ACTIONS(240),
    [anon_sym_0] = ACTIONS(240),
    [anon_sym_2] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_3] = ACTIONS(240),
    [anon_sym_11] = ACTIONS(240),
    [anon_sym_12] = ACTIONS(240),
  },
  [59] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(251),
    [sym_variable] = ACTIONS(254),
    [sym__function_name] = ACTIONS(257),
    [anon_sym_A] = ACTIONS(260),
    [anon_sym_E] = ACTIONS(263),
    [anon_sym_T] = ACTIONS(266),
    [anon_sym_F] = ACTIONS(269),
    [anon_sym_1] = ACTIONS(272),
    [anon_sym_] = ACTIONS(272),
    [anon_sym_0] = ACTIONS(275),
    [anon_sym_2] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(278),
    [anon_sym_TILDE] = ACTIONS(278),
    [anon_sym_3] = ACTIONS(278),
    [anon_sym_11] = ACTIONS(281),
    [anon_sym_12] = ACTIONS(284),
  },
  [60] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [61] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [62] = {
    [anon_sym_LF] = ACTIONS(289),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
    [anon_sym_4] = ACTIONS(291),
    [anon_sym__] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_v] = ACTIONS(291),
    [anon_sym_5] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(291),
    [anon_sym_EQ_GT] = ACTIONS(291),
    [anon_sym_6] = ACTIONS(291),
    [anon_sym_7] = ACTIONS(291),
    [anon_sym_LT_DASH_GT] = ACTIONS(291),
    [anon_sym_LT_EQ_GT] = ACTIONS(291),
    [anon_sym_8] = ACTIONS(291),
    [anon_sym_9] = ACTIONS(291),
    [anon_sym_10] = ACTIONS(291),
  },
  [63] = {
    [sym__term] = STATE(81),
    [sym_function] = STATE(81),
    [sym_not] = STATE(81),
    [sym_and] = STATE(81),
    [sym_or] = STATE(81),
    [sym_implies] = STATE(81),
    [sym_iff] = STATE(81),
    [sym_forall] = STATE(81),
    [sym_exists] = STATE(81),
    [sym__group] = STATE(81),
    [sym__universal_group] = STATE(81),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(81),
    [sym_false] = STATE(81),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(293),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [64] = {
    [sym__term] = STATE(82),
    [sym_function] = STATE(82),
    [sym_not] = STATE(82),
    [sym_and] = STATE(82),
    [sym_or] = STATE(82),
    [sym_implies] = STATE(82),
    [sym_iff] = STATE(82),
    [sym_forall] = STATE(82),
    [sym_exists] = STATE(82),
    [sym__group] = STATE(82),
    [sym__universal_group] = STATE(82),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(82),
    [sym_false] = STATE(82),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(295),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [65] = {
    [sym__term] = STATE(83),
    [sym_function] = STATE(83),
    [sym_not] = STATE(83),
    [sym_and] = STATE(83),
    [sym_or] = STATE(83),
    [sym_implies] = STATE(83),
    [sym_iff] = STATE(83),
    [sym_forall] = STATE(83),
    [sym_exists] = STATE(83),
    [sym__group] = STATE(83),
    [sym__universal_group] = STATE(83),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(83),
    [sym_false] = STATE(83),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(297),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [66] = {
    [sym__term] = STATE(84),
    [sym_function] = STATE(84),
    [sym_not] = STATE(84),
    [sym_and] = STATE(84),
    [sym_or] = STATE(84),
    [sym_implies] = STATE(84),
    [sym_iff] = STATE(84),
    [sym_forall] = STATE(84),
    [sym_exists] = STATE(84),
    [sym__group] = STATE(84),
    [sym__universal_group] = STATE(84),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(84),
    [sym_false] = STATE(84),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(299),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [67] = {
    [sym__term] = STATE(85),
    [sym_function] = STATE(85),
    [sym_not] = STATE(85),
    [sym_and] = STATE(85),
    [sym_or] = STATE(85),
    [sym_implies] = STATE(85),
    [sym_iff] = STATE(85),
    [sym_forall] = STATE(85),
    [sym_exists] = STATE(85),
    [sym__group] = STATE(85),
    [sym__universal_group] = STATE(85),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(85),
    [sym_false] = STATE(85),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(301),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [68] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_4] = ACTIONS(184),
    [anon_sym__] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_v] = ACTIONS(184),
    [anon_sym_5] = ACTIONS(184),
    [anon_sym_DASH_GT] = ACTIONS(184),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [anon_sym_6] = ACTIONS(184),
    [anon_sym_7] = ACTIONS(184),
    [anon_sym_LT_DASH_GT] = ACTIONS(184),
    [anon_sym_LT_EQ_GT] = ACTIONS(184),
    [anon_sym_8] = ACTIONS(184),
    [anon_sym_9] = ACTIONS(184),
    [anon_sym_10] = ACTIONS(184),
  },
  [69] = {
    [sym__term] = STATE(86),
    [sym_function] = STATE(86),
    [sym_not] = STATE(86),
    [sym_and] = STATE(86),
    [sym_or] = STATE(86),
    [sym_implies] = STATE(86),
    [sym_iff] = STATE(86),
    [sym_forall] = STATE(86),
    [sym_exists] = STATE(86),
    [sym__group] = STATE(86),
    [sym__universal_group] = STATE(86),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(303),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [70] = {
    [sym__term] = STATE(87),
    [sym_function] = STATE(87),
    [sym_not] = STATE(87),
    [sym_and] = STATE(87),
    [sym_or] = STATE(87),
    [sym_implies] = STATE(87),
    [sym_iff] = STATE(87),
    [sym_forall] = STATE(87),
    [sym_exists] = STATE(87),
    [sym__group] = STATE(87),
    [sym__universal_group] = STATE(87),
    [sym_function_name] = STATE(38),
    [sym__TF_func_name] = STATE(39),
    [sym_true] = STATE(87),
    [sym_false] = STATE(87),
    [sym__not_sym] = STATE(40),
    [sym__forall_sym] = STATE(41),
    [sym__exists_sym] = STATE(42),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(305),
    [sym__function_name] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(52),
    [anon_sym_E] = ACTIONS(54),
    [anon_sym_T] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(62),
    [anon_sym_2] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(66),
    [anon_sym_12] = ACTIONS(68),
  },
  [71] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_comment] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [72] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [73] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(312),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_4] = ACTIONS(314),
    [anon_sym__] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_v] = ACTIONS(314),
    [anon_sym_5] = ACTIONS(314),
    [anon_sym_DASH_GT] = ACTIONS(314),
    [anon_sym_EQ_GT] = ACTIONS(314),
    [anon_sym_6] = ACTIONS(314),
    [anon_sym_7] = ACTIONS(314),
    [anon_sym_LT_DASH_GT] = ACTIONS(314),
    [anon_sym_LT_EQ_GT] = ACTIONS(314),
    [anon_sym_8] = ACTIONS(314),
    [anon_sym_9] = ACTIONS(314),
    [anon_sym_10] = ACTIONS(314),
  },
  [74] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(316),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_v] = ACTIONS(318),
    [anon_sym_5] = ACTIONS(318),
    [anon_sym_DASH_GT] = ACTIONS(318),
    [anon_sym_EQ_GT] = ACTIONS(318),
    [anon_sym_6] = ACTIONS(318),
    [anon_sym_7] = ACTIONS(318),
    [anon_sym_LT_DASH_GT] = ACTIONS(318),
    [anon_sym_LT_EQ_GT] = ACTIONS(318),
    [anon_sym_8] = ACTIONS(318),
    [anon_sym_9] = ACTIONS(318),
    [anon_sym_10] = ACTIONS(318),
  },
  [75] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(320),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(322),
    [anon_sym_LT_EQ_GT] = ACTIONS(322),
    [anon_sym_8] = ACTIONS(322),
    [anon_sym_9] = ACTIONS(322),
    [anon_sym_10] = ACTIONS(322),
  },
  [76] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(324),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(106),
    [anon_sym_LT_EQ_GT] = ACTIONS(106),
    [anon_sym_8] = ACTIONS(106),
    [anon_sym_9] = ACTIONS(106),
    [anon_sym_10] = ACTIONS(106),
  },
  [77] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [78] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(328),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_4] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_v] = ACTIONS(330),
    [anon_sym_5] = ACTIONS(330),
    [anon_sym_DASH_GT] = ACTIONS(330),
    [anon_sym_EQ_GT] = ACTIONS(330),
    [anon_sym_6] = ACTIONS(330),
    [anon_sym_7] = ACTIONS(330),
    [anon_sym_LT_DASH_GT] = ACTIONS(330),
    [anon_sym_LT_EQ_GT] = ACTIONS(330),
    [anon_sym_8] = ACTIONS(330),
    [anon_sym_9] = ACTIONS(330),
    [anon_sym_10] = ACTIONS(330),
  },
  [79] = {
    [sym__and_sym] = STATE(47),
    [sym__or_sym] = STATE(48),
    [sym__implies_sym] = STATE(49),
    [sym__iff_sym] = STATE(50),
    [anon_sym_LF] = ACTIONS(332),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(334),
    [anon_sym_4] = ACTIONS(334),
    [anon_sym__] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(334),
    [anon_sym_v] = ACTIONS(334),
    [anon_sym_5] = ACTIONS(334),
    [anon_sym_DASH_GT] = ACTIONS(334),
    [anon_sym_EQ_GT] = ACTIONS(334),
    [anon_sym_6] = ACTIONS(334),
    [anon_sym_7] = ACTIONS(334),
    [anon_sym_LT_DASH_GT] = ACTIONS(334),
    [anon_sym_LT_EQ_GT] = ACTIONS(334),
    [anon_sym_8] = ACTIONS(334),
    [anon_sym_9] = ACTIONS(334),
    [anon_sym_10] = ACTIONS(334),
  },
  [80] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
    [anon_sym_4] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_v] = ACTIONS(289),
    [anon_sym_5] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_EQ_GT] = ACTIONS(289),
    [anon_sym_6] = ACTIONS(289),
    [anon_sym_7] = ACTIONS(289),
    [anon_sym_LT_DASH_GT] = ACTIONS(289),
    [anon_sym_LT_EQ_GT] = ACTIONS(289),
    [anon_sym_8] = ACTIONS(289),
    [anon_sym_9] = ACTIONS(289),
    [anon_sym_10] = ACTIONS(289),
  },
  [81] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_4] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_v] = ACTIONS(312),
    [anon_sym_5] = ACTIONS(312),
    [anon_sym_DASH_GT] = ACTIONS(312),
    [anon_sym_EQ_GT] = ACTIONS(312),
    [anon_sym_6] = ACTIONS(312),
    [anon_sym_7] = ACTIONS(312),
    [anon_sym_LT_DASH_GT] = ACTIONS(312),
    [anon_sym_LT_EQ_GT] = ACTIONS(312),
    [anon_sym_8] = ACTIONS(312),
    [anon_sym_9] = ACTIONS(312),
    [anon_sym_10] = ACTIONS(312),
  },
  [82] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_v] = ACTIONS(316),
    [anon_sym_5] = ACTIONS(316),
    [anon_sym_DASH_GT] = ACTIONS(316),
    [anon_sym_EQ_GT] = ACTIONS(316),
    [anon_sym_6] = ACTIONS(316),
    [anon_sym_7] = ACTIONS(316),
    [anon_sym_LT_DASH_GT] = ACTIONS(316),
    [anon_sym_LT_EQ_GT] = ACTIONS(316),
    [anon_sym_8] = ACTIONS(316),
    [anon_sym_9] = ACTIONS(316),
    [anon_sym_10] = ACTIONS(316),
  },
  [83] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(320),
    [anon_sym_LT_EQ_GT] = ACTIONS(320),
    [anon_sym_8] = ACTIONS(320),
    [anon_sym_9] = ACTIONS(320),
    [anon_sym_10] = ACTIONS(320),
  },
  [84] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [85] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_v] = ACTIONS(149),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
  },
  [86] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_4] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_v] = ACTIONS(328),
    [anon_sym_5] = ACTIONS(328),
    [anon_sym_DASH_GT] = ACTIONS(328),
    [anon_sym_EQ_GT] = ACTIONS(328),
    [anon_sym_6] = ACTIONS(328),
    [anon_sym_7] = ACTIONS(328),
    [anon_sym_LT_DASH_GT] = ACTIONS(328),
    [anon_sym_LT_EQ_GT] = ACTIONS(328),
    [anon_sym_8] = ACTIONS(328),
    [anon_sym_9] = ACTIONS(328),
    [anon_sym_10] = ACTIONS(328),
  },
  [87] = {
    [sym__and_sym] = STATE(63),
    [sym__or_sym] = STATE(64),
    [sym__implies_sym] = STATE(65),
    [sym__iff_sym] = STATE(66),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_4] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_v] = ACTIONS(332),
    [anon_sym_5] = ACTIONS(332),
    [anon_sym_DASH_GT] = ACTIONS(332),
    [anon_sym_EQ_GT] = ACTIONS(332),
    [anon_sym_6] = ACTIONS(332),
    [anon_sym_7] = ACTIONS(332),
    [anon_sym_LT_DASH_GT] = ACTIONS(332),
    [anon_sym_LT_EQ_GT] = ACTIONS(332),
    [anon_sym_8] = ACTIONS(332),
    [anon_sym_9] = ACTIONS(332),
    [anon_sym_10] = ACTIONS(332),
  },
  [88] = {
    [sym_expression] = STATE(26),
    [sym__term] = STATE(17),
    [sym_function] = STATE(17),
    [sym_not] = STATE(17),
    [sym_and] = STATE(17),
    [sym_or] = STATE(17),
    [sym_implies] = STATE(17),
    [sym_iff] = STATE(17),
    [sym_forall] = STATE(17),
    [sym_exists] = STATE(17),
    [sym__group] = STATE(17),
    [sym__universal_group] = STATE(17),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [aux_sym_block_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_comment] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(15),
    [sym__function_name] = ACTIONS(17),
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_E] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_F] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [anon_sym_11] = ACTIONS(33),
    [anon_sym_12] = ACTIONS(35),
  },
  [89] = {
    [anon_sym_LF] = ACTIONS(340),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(342),
    [anon_sym_4] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_v] = ACTIONS(342),
    [anon_sym_5] = ACTIONS(342),
    [anon_sym_DASH_GT] = ACTIONS(342),
    [anon_sym_EQ_GT] = ACTIONS(342),
    [anon_sym_6] = ACTIONS(342),
    [anon_sym_7] = ACTIONS(342),
    [anon_sym_LT_DASH_GT] = ACTIONS(342),
    [anon_sym_LT_EQ_GT] = ACTIONS(342),
    [anon_sym_8] = ACTIONS(342),
    [anon_sym_9] = ACTIONS(342),
    [anon_sym_10] = ACTIONS(342),
  },
  [90] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_4] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_v] = ACTIONS(340),
    [anon_sym_5] = ACTIONS(340),
    [anon_sym_DASH_GT] = ACTIONS(340),
    [anon_sym_EQ_GT] = ACTIONS(340),
    [anon_sym_6] = ACTIONS(340),
    [anon_sym_7] = ACTIONS(340),
    [anon_sym_LT_DASH_GT] = ACTIONS(340),
    [anon_sym_LT_EQ_GT] = ACTIONS(340),
    [anon_sym_8] = ACTIONS(340),
    [anon_sym_9] = ACTIONS(340),
    [anon_sym_10] = ACTIONS(340),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(17),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, SHIFT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, SHIFT(25),
  [41] = {.count = 2, .reusable = true}, SHIFT(27), SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true}, SHIFT(28),
  [46] = {.count = 1, .reusable = true}, SHIFT(29),
  [48] = {.count = 1, .reusable = true}, SHIFT(37),
  [50] = {.count = 1, .reusable = false}, SHIFT(30),
  [52] = {.count = 1, .reusable = false}, SHIFT(31),
  [54] = {.count = 1, .reusable = false}, SHIFT(32),
  [56] = {.count = 1, .reusable = false}, SHIFT(33),
  [58] = {.count = 1, .reusable = false}, SHIFT(34),
  [60] = {.count = 1, .reusable = true}, SHIFT(35),
  [62] = {.count = 1, .reusable = true}, SHIFT(36),
  [64] = {.count = 1, .reusable = true}, SHIFT(40),
  [66] = {.count = 1, .reusable = true}, SHIFT(41),
  [68] = {.count = 1, .reusable = true}, SHIFT(42),
  [70] = {.count = 1, .reusable = true}, SHIFT(43),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [74] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym__forall_sym, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym__exists_sym, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [92] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [94] = {.count = 1, .reusable = true}, SHIFT(44),
  [96] = {.count = 1, .reusable = true}, SHIFT(46),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [100] = {.count = 1, .reusable = false}, SHIFT(47),
  [102] = {.count = 1, .reusable = false}, SHIFT(48),
  [104] = {.count = 1, .reusable = false}, SHIFT(49),
  [106] = {.count = 1, .reusable = false}, SHIFT(50),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [110] = {.count = 1, .reusable = false}, SHIFT(51),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(51),
  [116] = {.count = 1, .reusable = true}, SHIFT(52),
  [118] = {.count = 1, .reusable = true}, SHIFT(53),
  [120] = {.count = 1, .reusable = true}, SHIFT(54),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 2),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 2),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true}, SHIFT(57),
  [132] = {.count = 1, .reusable = true}, SHIFT(58),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [136] = {.count = 2, .reusable = true}, SHIFT(59), SHIFT_EXTRA(),
  [139] = {.count = 1, .reusable = true}, SHIFT(60),
  [141] = {.count = 1, .reusable = true}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [145] = {.count = 1, .reusable = true}, SHIFT(62),
  [147] = {.count = 1, .reusable = true}, SHIFT(63),
  [149] = {.count = 1, .reusable = true}, SHIFT(64),
  [151] = {.count = 1, .reusable = true}, SHIFT(65),
  [153] = {.count = 1, .reusable = true}, SHIFT(66),
  [155] = {.count = 1, .reusable = true}, SHIFT(67),
  [157] = {.count = 1, .reusable = true}, SHIFT(68),
  [159] = {.count = 1, .reusable = true}, SHIFT(69),
  [161] = {.count = 1, .reusable = true}, SHIFT(70),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [165] = {.count = 2, .reusable = true}, SHIFT(71), SHIFT_EXTRA(),
  [168] = {.count = 1, .reusable = true}, SHIFT(72),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(73),
  [176] = {.count = 1, .reusable = true}, SHIFT(74),
  [178] = {.count = 1, .reusable = true}, SHIFT(75),
  [180] = {.count = 1, .reusable = true}, SHIFT(76),
  [182] = {.count = 1, .reusable = true}, SHIFT(77),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(78),
  [190] = {.count = 1, .reusable = true}, SHIFT(79),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(4),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(5),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(17),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(6),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(7),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(8),
  [210] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(9),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(10),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(11),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(12),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(20),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(21),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(22),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(aux_sym_guard_repeat1, 2),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_guard_repeat1, 2), SHIFT_REPEAT(57),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [242] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2),
  [244] = {.count = 3, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59), SHIFT_EXTRA(),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [287] = {.count = 1, .reusable = true}, SHIFT(80),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [293] = {.count = 1, .reusable = true}, SHIFT(81),
  [295] = {.count = 1, .reusable = true}, SHIFT(82),
  [297] = {.count = 1, .reusable = true}, SHIFT(83),
  [299] = {.count = 1, .reusable = true}, SHIFT(84),
  [301] = {.count = 1, .reusable = true}, SHIFT(85),
  [303] = {.count = 1, .reusable = true}, SHIFT(86),
  [305] = {.count = 1, .reusable = true}, SHIFT(87),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [309] = {.count = 2, .reusable = true}, SHIFT(88), SHIFT_EXTRA(),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [326] = {.count = 1, .reusable = true}, SHIFT(89),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [336] = {.count = 1, .reusable = true}, SHIFT(90),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
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

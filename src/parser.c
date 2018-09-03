#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 97
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COMMA = 4,
  sym__hypothesis_end = 5,
  sym_comment = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOT = 9,
  sym_variable = 10,
  sym__function_name = 11,
  anon_sym_A = 12,
  anon_sym_E = 13,
  anon_sym_T = 14,
  anon_sym_F = 15,
  anon_sym_1 = 16,
  anon_sym_ = 17,
  anon_sym_0 = 18,
  anon_sym_2 = 19,
  anon_sym_DASH = 20,
  anon_sym_BANG = 21,
  anon_sym_TILDE = 22,
  anon_sym_3 = 23,
  anon_sym_CARET = 24,
  anon_sym_AMP = 25,
  anon_sym_4 = 26,
  anon_sym__ = 27,
  anon_sym_PIPE = 28,
  anon_sym_v = 29,
  anon_sym_5 = 30,
  anon_sym_DASH_GT = 31,
  anon_sym_EQ_GT = 32,
  anon_sym_6 = 33,
  anon_sym_7 = 34,
  anon_sym_LT_DASH_GT = 35,
  anon_sym_LT_EQ_GT = 36,
  anon_sym_8 = 37,
  anon_sym_9 = 38,
  anon_sym_10 = 39,
  anon_sym_11 = 40,
  anon_sym_12 = 41,
  sym_block = 42,
  sym_guard = 43,
  sym_vars = 44,
  sym_hypothesis = 45,
  sym_expression = 46,
  sym__term = 47,
  sym_function = 48,
  sym_not = 49,
  sym_and = 50,
  sym_or = 51,
  sym_implies = 52,
  sym_iff = 53,
  sym_forall = 54,
  sym_exists = 55,
  sym__group = 56,
  sym__universal_group = 57,
  sym_function_name = 58,
  sym__TF_func_name = 59,
  sym_true = 60,
  sym_false = 61,
  sym__not_sym = 62,
  sym__and_sym = 63,
  sym__or_sym = 64,
  sym__implies_sym = 65,
  sym__iff_sym = 66,
  sym__forall_sym = 67,
  sym__exists_sym = 68,
  aux_sym_block_repeat1 = 69,
  aux_sym_vars_repeat1 = 70,
  aux_sym_hypothesis_repeat1 = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
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
  [sym_vars] = "vars",
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
  [aux_sym_vars_repeat1] = "vars_repeat1",
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
  [anon_sym_COMMA] = {
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
  [sym_vars] = {
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
  [aux_sym_vars_repeat1] = {
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
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '1')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(32);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == 172)
        ADVANCE(38);
      if (lookahead == 8594)
        ADVANCE(39);
      if (lookahead == 8596)
        ADVANCE(40);
      if (lookahead == 8658)
        ADVANCE(41);
      if (lookahead == 8660)
        ADVANCE(42);
      if (lookahead == 8704)
        ADVANCE(43);
      if (lookahead == 8707)
        ADVANCE(44);
      if (lookahead == 8743)
        ADVANCE(45);
      if (lookahead == 8744)
        ADVANCE(46);
      if (lookahead == 8801)
        ADVANCE(47);
      if (lookahead == 8868)
        ADVANCE(48);
      if (lookahead == 8869)
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 17:
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 20:
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 22:
      if (lookahead == '>')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '_')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__hypothesis_end);
      if (lookahead == '_')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 50:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(51);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '1')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == 172)
        ADVANCE(38);
      if (lookahead == 8704)
        ADVANCE(43);
      if (lookahead == 8707)
        ADVANCE(44);
      if (lookahead == 8868)
        ADVANCE(48);
      if (lookahead == 8869)
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      if (lookahead == '_')
        ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        ADVANCE(55);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(57);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == 8594)
        ADVANCE(39);
      if (lookahead == 8596)
        ADVANCE(40);
      if (lookahead == 8658)
        ADVANCE(41);
      if (lookahead == 8660)
        ADVANCE(42);
      if (lookahead == 8743)
        ADVANCE(45);
      if (lookahead == 8744)
        ADVANCE(46);
      if (lookahead == 8801)
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 56:
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(51);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '1')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(37);
      if (lookahead == 172)
        ADVANCE(38);
      if (lookahead == 8704)
        ADVANCE(43);
      if (lookahead == 8707)
        ADVANCE(44);
      if (lookahead == 8868)
        ADVANCE(48);
      if (lookahead == 8869)
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(57);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == 8594)
        ADVANCE(39);
      if (lookahead == 8596)
        ADVANCE(40);
      if (lookahead == 8658)
        ADVANCE(41);
      if (lookahead == 8660)
        ADVANCE(42);
      if (lookahead == 8743)
        ADVANCE(45);
      if (lookahead == 8744)
        ADVANCE(46);
      if (lookahead == 8801)
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 60},
  [61] = {.lex_state = 60},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 50},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 50},
  [73] = {.lex_state = 60},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 54},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 59},
  [85] = {.lex_state = 61},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 61},
  [89] = {.lex_state = 61},
  [90] = {.lex_state = 61},
  [91] = {.lex_state = 61},
  [92] = {.lex_state = 61},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 54},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 61},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_vars] = STATE(26),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(39),
  },
  [3] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(28),
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
    [sym__term] = STATE(38),
    [sym_function] = STATE(38),
    [sym_not] = STATE(38),
    [sym_and] = STATE(38),
    [sym_or] = STATE(38),
    [sym_implies] = STATE(38),
    [sym_iff] = STATE(38),
    [sym_forall] = STATE(38),
    [sym_exists] = STATE(38),
    [sym__group] = STATE(38),
    [sym__universal_group] = STATE(38),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(38),
    [sym_false] = STATE(38),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
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
    [sym__term] = STATE(44),
    [sym_function] = STATE(44),
    [sym_not] = STATE(44),
    [sym_and] = STATE(44),
    [sym_or] = STATE(44),
    [sym_implies] = STATE(44),
    [sym_iff] = STATE(44),
    [sym_forall] = STATE(44),
    [sym_exists] = STATE(44),
    [sym__group] = STATE(44),
    [sym__universal_group] = STATE(44),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(44),
    [sym_false] = STATE(44),
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
    [sym_hypothesis] = STATE(46),
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
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
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
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(53),
    [sym_false] = STATE(53),
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
    [aux_sym_hypothesis_repeat1] = STATE(56),
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
    [aux_sym_vars_repeat1] = STATE(58),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(130),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [anon_sym_RBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_LF] = ACTIONS(134),
    [sym_comment] = ACTIONS(74),
  },
  [28] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_comment] = ACTIONS(138),
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
  [29] = {
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
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
    [sym__term] = STATE(63),
    [sym_function] = STATE(63),
    [sym_not] = STATE(63),
    [sym_and] = STATE(63),
    [sym_or] = STATE(63),
    [sym_implies] = STATE(63),
    [sym_iff] = STATE(63),
    [sym_forall] = STATE(63),
    [sym_exists] = STATE(63),
    [sym__group] = STATE(63),
    [sym__universal_group] = STATE(63),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(63),
    [sym_false] = STATE(63),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(143),
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
  [31] = {
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
  [32] = {
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
  [33] = {
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
  [34] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(145),
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
  [35] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(145),
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
  [36] = {
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
  [37] = {
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
  [38] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [39] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(157),
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
  [40] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [41] = {
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(159),
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
  [42] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(161),
  },
  [43] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(163),
  },
  [44] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(165),
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
  [45] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(167),
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
  [46] = {
    [sym__hypothesis_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__hypothesis_end] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [sym_variable] = ACTIONS(172),
    [sym__function_name] = ACTIONS(174),
    [anon_sym_A] = ACTIONS(174),
    [anon_sym_E] = ACTIONS(174),
    [anon_sym_T] = ACTIONS(174),
    [anon_sym_F] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(172),
    [anon_sym_] = ACTIONS(172),
    [anon_sym_0] = ACTIONS(172),
    [anon_sym_2] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_3] = ACTIONS(172),
    [anon_sym_11] = ACTIONS(172),
    [anon_sym_12] = ACTIONS(172),
  },
  [48] = {
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
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(77),
    [sym_false] = STATE(77),
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
    [sym_variable] = ACTIONS(182),
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
  [52] = {
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(79),
    [sym_false] = STATE(79),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(184),
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
  [53] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(186),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_4] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_v] = ACTIONS(188),
    [anon_sym_5] = ACTIONS(188),
    [anon_sym_DASH_GT] = ACTIONS(188),
    [anon_sym_EQ_GT] = ACTIONS(188),
    [anon_sym_6] = ACTIONS(188),
    [anon_sym_7] = ACTIONS(188),
    [anon_sym_LT_DASH_GT] = ACTIONS(188),
    [anon_sym_LT_EQ_GT] = ACTIONS(188),
    [anon_sym_8] = ACTIONS(188),
    [anon_sym_9] = ACTIONS(188),
    [anon_sym_10] = ACTIONS(188),
  },
  [54] = {
    [sym__term] = STATE(80),
    [sym_function] = STATE(80),
    [sym_not] = STATE(80),
    [sym_and] = STATE(80),
    [sym_or] = STATE(80),
    [sym_implies] = STATE(80),
    [sym_iff] = STATE(80),
    [sym_forall] = STATE(80),
    [sym_exists] = STATE(80),
    [sym__group] = STATE(80),
    [sym__universal_group] = STATE(80),
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(80),
    [sym_false] = STATE(80),
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
    [sym_function_name] = STATE(18),
    [sym__TF_func_name] = STATE(19),
    [sym_true] = STATE(81),
    [sym_false] = STATE(81),
    [sym__not_sym] = STATE(20),
    [sym__forall_sym] = STATE(21),
    [sym__exists_sym] = STATE(22),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_variable] = ACTIONS(192),
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
  [56] = {
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
    [aux_sym_hypothesis_repeat1] = STATE(56),
    [sym__hypothesis_end] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(197),
    [sym_variable] = ACTIONS(200),
    [sym__function_name] = ACTIONS(203),
    [anon_sym_A] = ACTIONS(206),
    [anon_sym_E] = ACTIONS(209),
    [anon_sym_T] = ACTIONS(212),
    [anon_sym_F] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(221),
    [anon_sym_2] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_3] = ACTIONS(224),
    [anon_sym_11] = ACTIONS(227),
    [anon_sym_12] = ACTIONS(230),
  },
  [57] = {
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(235),
  },
  [58] = {
    [aux_sym_vars_repeat1] = STATE(84),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(237),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [sym__hypothesis_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_variable] = ACTIONS(239),
    [sym__function_name] = ACTIONS(241),
    [anon_sym_A] = ACTIONS(241),
    [anon_sym_E] = ACTIONS(241),
    [anon_sym_T] = ACTIONS(241),
    [anon_sym_F] = ACTIONS(241),
    [anon_sym_1] = ACTIONS(239),
    [anon_sym_] = ACTIONS(239),
    [anon_sym_0] = ACTIONS(239),
    [anon_sym_2] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_3] = ACTIONS(239),
    [anon_sym_11] = ACTIONS(239),
    [anon_sym_12] = ACTIONS(239),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_variable] = ACTIONS(243),
    [sym__function_name] = ACTIONS(245),
    [anon_sym_A] = ACTIONS(245),
    [anon_sym_E] = ACTIONS(245),
    [anon_sym_T] = ACTIONS(245),
    [anon_sym_F] = ACTIONS(245),
    [anon_sym_1] = ACTIONS(243),
    [anon_sym_] = ACTIONS(243),
    [anon_sym_0] = ACTIONS(243),
    [anon_sym_2] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_BANG] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_3] = ACTIONS(243),
    [anon_sym_11] = ACTIONS(243),
    [anon_sym_12] = ACTIONS(243),
  },
  [61] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(254),
    [sym_variable] = ACTIONS(257),
    [sym__function_name] = ACTIONS(260),
    [anon_sym_A] = ACTIONS(263),
    [anon_sym_E] = ACTIONS(266),
    [anon_sym_T] = ACTIONS(269),
    [anon_sym_F] = ACTIONS(272),
    [anon_sym_1] = ACTIONS(275),
    [anon_sym_] = ACTIONS(275),
    [anon_sym_0] = ACTIONS(278),
    [anon_sym_2] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_BANG] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_3] = ACTIONS(281),
    [anon_sym_11] = ACTIONS(284),
    [anon_sym_12] = ACTIONS(287),
  },
  [62] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [63] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [64] = {
    [anon_sym_LF] = ACTIONS(292),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_4] = ACTIONS(294),
    [anon_sym__] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_v] = ACTIONS(294),
    [anon_sym_5] = ACTIONS(294),
    [anon_sym_DASH_GT] = ACTIONS(294),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_6] = ACTIONS(294),
    [anon_sym_7] = ACTIONS(294),
    [anon_sym_LT_DASH_GT] = ACTIONS(294),
    [anon_sym_LT_EQ_GT] = ACTIONS(294),
    [anon_sym_8] = ACTIONS(294),
    [anon_sym_9] = ACTIONS(294),
    [anon_sym_10] = ACTIONS(294),
  },
  [65] = {
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(296),
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
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(87),
    [sym_false] = STATE(87),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(298),
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
    [sym__term] = STATE(88),
    [sym_function] = STATE(88),
    [sym_not] = STATE(88),
    [sym_and] = STATE(88),
    [sym_or] = STATE(88),
    [sym_implies] = STATE(88),
    [sym_iff] = STATE(88),
    [sym_forall] = STATE(88),
    [sym_exists] = STATE(88),
    [sym__group] = STATE(88),
    [sym__universal_group] = STATE(88),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(88),
    [sym_false] = STATE(88),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(300),
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
    [sym__term] = STATE(89),
    [sym_function] = STATE(89),
    [sym_not] = STATE(89),
    [sym_and] = STATE(89),
    [sym_or] = STATE(89),
    [sym_implies] = STATE(89),
    [sym_iff] = STATE(89),
    [sym_forall] = STATE(89),
    [sym_exists] = STATE(89),
    [sym__group] = STATE(89),
    [sym__universal_group] = STATE(89),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(89),
    [sym_false] = STATE(89),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(302),
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
  [69] = {
    [sym__term] = STATE(90),
    [sym_function] = STATE(90),
    [sym_not] = STATE(90),
    [sym_and] = STATE(90),
    [sym_or] = STATE(90),
    [sym_implies] = STATE(90),
    [sym_iff] = STATE(90),
    [sym_forall] = STATE(90),
    [sym_exists] = STATE(90),
    [sym__group] = STATE(90),
    [sym__universal_group] = STATE(90),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(304),
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
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(186),
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
  [71] = {
    [sym__term] = STATE(91),
    [sym_function] = STATE(91),
    [sym_not] = STATE(91),
    [sym_and] = STATE(91),
    [sym_or] = STATE(91),
    [sym_implies] = STATE(91),
    [sym_iff] = STATE(91),
    [sym_forall] = STATE(91),
    [sym_exists] = STATE(91),
    [sym__group] = STATE(91),
    [sym__universal_group] = STATE(91),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(91),
    [sym_false] = STATE(91),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(306),
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
  [72] = {
    [sym__term] = STATE(92),
    [sym_function] = STATE(92),
    [sym_not] = STATE(92),
    [sym_and] = STATE(92),
    [sym_or] = STATE(92),
    [sym_implies] = STATE(92),
    [sym_iff] = STATE(92),
    [sym_forall] = STATE(92),
    [sym_exists] = STATE(92),
    [sym__group] = STATE(92),
    [sym__universal_group] = STATE(92),
    [sym_function_name] = STATE(39),
    [sym__TF_func_name] = STATE(40),
    [sym_true] = STATE(92),
    [sym_false] = STATE(92),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_variable] = ACTIONS(308),
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
  [73] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_comment] = ACTIONS(138),
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
  [74] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(312),
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
  [75] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(315),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_4] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_v] = ACTIONS(317),
    [anon_sym_5] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_EQ_GT] = ACTIONS(317),
    [anon_sym_6] = ACTIONS(317),
    [anon_sym_7] = ACTIONS(317),
    [anon_sym_LT_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_EQ_GT] = ACTIONS(317),
    [anon_sym_8] = ACTIONS(317),
    [anon_sym_9] = ACTIONS(317),
    [anon_sym_10] = ACTIONS(317),
  },
  [76] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(319),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_v] = ACTIONS(321),
    [anon_sym_5] = ACTIONS(321),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(321),
    [anon_sym_6] = ACTIONS(321),
    [anon_sym_7] = ACTIONS(321),
    [anon_sym_LT_DASH_GT] = ACTIONS(321),
    [anon_sym_LT_EQ_GT] = ACTIONS(321),
    [anon_sym_8] = ACTIONS(321),
    [anon_sym_9] = ACTIONS(321),
    [anon_sym_10] = ACTIONS(321),
  },
  [77] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(323),
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
    [anon_sym_LT_DASH_GT] = ACTIONS(325),
    [anon_sym_LT_EQ_GT] = ACTIONS(325),
    [anon_sym_8] = ACTIONS(325),
    [anon_sym_9] = ACTIONS(325),
    [anon_sym_10] = ACTIONS(325),
  },
  [78] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(327),
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
  [79] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [80] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(331),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_4] = ACTIONS(333),
    [anon_sym__] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_v] = ACTIONS(333),
    [anon_sym_5] = ACTIONS(333),
    [anon_sym_DASH_GT] = ACTIONS(333),
    [anon_sym_EQ_GT] = ACTIONS(333),
    [anon_sym_6] = ACTIONS(333),
    [anon_sym_7] = ACTIONS(333),
    [anon_sym_LT_DASH_GT] = ACTIONS(333),
    [anon_sym_LT_EQ_GT] = ACTIONS(333),
    [anon_sym_8] = ACTIONS(333),
    [anon_sym_9] = ACTIONS(333),
    [anon_sym_10] = ACTIONS(333),
  },
  [81] = {
    [sym__and_sym] = STATE(48),
    [sym__or_sym] = STATE(49),
    [sym__implies_sym] = STATE(50),
    [sym__iff_sym] = STATE(51),
    [anon_sym_LF] = ACTIONS(335),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(337),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_4] = ACTIONS(337),
    [anon_sym__] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_v] = ACTIONS(337),
    [anon_sym_5] = ACTIONS(337),
    [anon_sym_DASH_GT] = ACTIONS(337),
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_6] = ACTIONS(337),
    [anon_sym_7] = ACTIONS(337),
    [anon_sym_LT_DASH_GT] = ACTIONS(337),
    [anon_sym_LT_EQ_GT] = ACTIONS(337),
    [anon_sym_8] = ACTIONS(337),
    [anon_sym_9] = ACTIONS(337),
    [anon_sym_10] = ACTIONS(337),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(235),
  },
  [84] = {
    [aux_sym_vars_repeat1] = STATE(84),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(343),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_4] = ACTIONS(292),
    [anon_sym__] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_v] = ACTIONS(292),
    [anon_sym_5] = ACTIONS(292),
    [anon_sym_DASH_GT] = ACTIONS(292),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_6] = ACTIONS(292),
    [anon_sym_7] = ACTIONS(292),
    [anon_sym_LT_DASH_GT] = ACTIONS(292),
    [anon_sym_LT_EQ_GT] = ACTIONS(292),
    [anon_sym_8] = ACTIONS(292),
    [anon_sym_9] = ACTIONS(292),
    [anon_sym_10] = ACTIONS(292),
  },
  [86] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_4] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_v] = ACTIONS(315),
    [anon_sym_5] = ACTIONS(315),
    [anon_sym_DASH_GT] = ACTIONS(315),
    [anon_sym_EQ_GT] = ACTIONS(315),
    [anon_sym_6] = ACTIONS(315),
    [anon_sym_7] = ACTIONS(315),
    [anon_sym_LT_DASH_GT] = ACTIONS(315),
    [anon_sym_LT_EQ_GT] = ACTIONS(315),
    [anon_sym_8] = ACTIONS(315),
    [anon_sym_9] = ACTIONS(315),
    [anon_sym_10] = ACTIONS(315),
  },
  [87] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_v] = ACTIONS(319),
    [anon_sym_5] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_EQ_GT] = ACTIONS(319),
    [anon_sym_6] = ACTIONS(319),
    [anon_sym_7] = ACTIONS(319),
    [anon_sym_LT_DASH_GT] = ACTIONS(319),
    [anon_sym_LT_EQ_GT] = ACTIONS(319),
    [anon_sym_8] = ACTIONS(319),
    [anon_sym_9] = ACTIONS(319),
    [anon_sym_10] = ACTIONS(319),
  },
  [88] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(323),
    [anon_sym_LT_EQ_GT] = ACTIONS(323),
    [anon_sym_8] = ACTIONS(323),
    [anon_sym_9] = ACTIONS(323),
    [anon_sym_10] = ACTIONS(323),
  },
  [89] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [90] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(155),
    [anon_sym_LT_EQ_GT] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(155),
  },
  [91] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(331),
    [anon_sym_4] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_v] = ACTIONS(331),
    [anon_sym_5] = ACTIONS(331),
    [anon_sym_DASH_GT] = ACTIONS(331),
    [anon_sym_EQ_GT] = ACTIONS(331),
    [anon_sym_6] = ACTIONS(331),
    [anon_sym_7] = ACTIONS(331),
    [anon_sym_LT_DASH_GT] = ACTIONS(331),
    [anon_sym_LT_EQ_GT] = ACTIONS(331),
    [anon_sym_8] = ACTIONS(331),
    [anon_sym_9] = ACTIONS(331),
    [anon_sym_10] = ACTIONS(331),
  },
  [92] = {
    [sym__and_sym] = STATE(65),
    [sym__or_sym] = STATE(66),
    [sym__implies_sym] = STATE(67),
    [sym__iff_sym] = STATE(68),
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
    [anon_sym_4] = ACTIONS(335),
    [anon_sym__] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_v] = ACTIONS(335),
    [anon_sym_5] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(335),
    [anon_sym_EQ_GT] = ACTIONS(335),
    [anon_sym_6] = ACTIONS(335),
    [anon_sym_7] = ACTIONS(335),
    [anon_sym_LT_DASH_GT] = ACTIONS(335),
    [anon_sym_LT_EQ_GT] = ACTIONS(335),
    [anon_sym_8] = ACTIONS(335),
    [anon_sym_9] = ACTIONS(335),
    [anon_sym_10] = ACTIONS(335),
  },
  [93] = {
    [sym_expression] = STATE(27),
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
    [aux_sym_block_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_comment] = ACTIONS(138),
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
  [94] = {
    [anon_sym_LF] = ACTIONS(350),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(352),
    [anon_sym_4] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_v] = ACTIONS(352),
    [anon_sym_5] = ACTIONS(352),
    [anon_sym_DASH_GT] = ACTIONS(352),
    [anon_sym_EQ_GT] = ACTIONS(352),
    [anon_sym_6] = ACTIONS(352),
    [anon_sym_7] = ACTIONS(352),
    [anon_sym_LT_DASH_GT] = ACTIONS(352),
    [anon_sym_LT_EQ_GT] = ACTIONS(352),
    [anon_sym_8] = ACTIONS(352),
    [anon_sym_9] = ACTIONS(352),
    [anon_sym_10] = ACTIONS(352),
  },
  [95] = {
    [sym_comment] = ACTIONS(9),
    [sym_variable] = ACTIONS(235),
  },
  [96] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_4] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_v] = ACTIONS(350),
    [anon_sym_5] = ACTIONS(350),
    [anon_sym_DASH_GT] = ACTIONS(350),
    [anon_sym_EQ_GT] = ACTIONS(350),
    [anon_sym_6] = ACTIONS(350),
    [anon_sym_7] = ACTIONS(350),
    [anon_sym_LT_DASH_GT] = ACTIONS(350),
    [anon_sym_LT_EQ_GT] = ACTIONS(350),
    [anon_sym_8] = ACTIONS(350),
    [anon_sym_9] = ACTIONS(350),
    [anon_sym_10] = ACTIONS(350),
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
  [41] = {.count = 2, .reusable = true}, SHIFT(28), SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true}, SHIFT(29),
  [46] = {.count = 1, .reusable = true}, SHIFT(30),
  [48] = {.count = 1, .reusable = true}, SHIFT(38),
  [50] = {.count = 1, .reusable = false}, SHIFT(31),
  [52] = {.count = 1, .reusable = false}, SHIFT(32),
  [54] = {.count = 1, .reusable = false}, SHIFT(33),
  [56] = {.count = 1, .reusable = false}, SHIFT(34),
  [58] = {.count = 1, .reusable = false}, SHIFT(35),
  [60] = {.count = 1, .reusable = true}, SHIFT(36),
  [62] = {.count = 1, .reusable = true}, SHIFT(37),
  [64] = {.count = 1, .reusable = true}, SHIFT(41),
  [66] = {.count = 1, .reusable = true}, SHIFT(42),
  [68] = {.count = 1, .reusable = true}, SHIFT(43),
  [70] = {.count = 1, .reusable = true}, SHIFT(44),
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
  [94] = {.count = 1, .reusable = true}, SHIFT(45),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [100] = {.count = 1, .reusable = false}, SHIFT(48),
  [102] = {.count = 1, .reusable = false}, SHIFT(49),
  [104] = {.count = 1, .reusable = false}, SHIFT(50),
  [106] = {.count = 1, .reusable = false}, SHIFT(51),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [110] = {.count = 1, .reusable = false}, SHIFT(52),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(52),
  [116] = {.count = 1, .reusable = true}, SHIFT(53),
  [118] = {.count = 1, .reusable = true}, SHIFT(54),
  [120] = {.count = 1, .reusable = true}, SHIFT(55),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 2),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 1),
  [130] = {.count = 1, .reusable = true}, SHIFT(57),
  [132] = {.count = 1, .reusable = true}, SHIFT(59),
  [134] = {.count = 1, .reusable = true}, SHIFT(60),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [138] = {.count = 2, .reusable = true}, SHIFT(61), SHIFT_EXTRA(),
  [141] = {.count = 1, .reusable = true}, SHIFT(62),
  [143] = {.count = 1, .reusable = true}, SHIFT(63),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [147] = {.count = 1, .reusable = true}, SHIFT(64),
  [149] = {.count = 1, .reusable = true}, SHIFT(65),
  [151] = {.count = 1, .reusable = true}, SHIFT(66),
  [153] = {.count = 1, .reusable = true}, SHIFT(67),
  [155] = {.count = 1, .reusable = true}, SHIFT(68),
  [157] = {.count = 1, .reusable = true}, SHIFT(69),
  [159] = {.count = 1, .reusable = true}, SHIFT(70),
  [161] = {.count = 1, .reusable = true}, SHIFT(71),
  [163] = {.count = 1, .reusable = true}, SHIFT(72),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [167] = {.count = 2, .reusable = true}, SHIFT(73), SHIFT_EXTRA(),
  [170] = {.count = 1, .reusable = true}, SHIFT(74),
  [172] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [174] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [176] = {.count = 1, .reusable = true}, SHIFT(75),
  [178] = {.count = 1, .reusable = true}, SHIFT(76),
  [180] = {.count = 1, .reusable = true}, SHIFT(77),
  [182] = {.count = 1, .reusable = true}, SHIFT(78),
  [184] = {.count = 1, .reusable = true}, SHIFT(79),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(80),
  [192] = {.count = 1, .reusable = true}, SHIFT(81),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(4),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(5),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(17),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(6),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(7),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(8),
  [212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(9),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(10),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(11),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(12),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(20),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(21),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(22),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(82),
  [237] = {.count = 1, .reusable = true}, SHIFT(83),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2),
  [247] = {.count = 3, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61), SHIFT_EXTRA(),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [290] = {.count = 1, .reusable = true}, SHIFT(85),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [296] = {.count = 1, .reusable = true}, SHIFT(86),
  [298] = {.count = 1, .reusable = true}, SHIFT(87),
  [300] = {.count = 1, .reusable = true}, SHIFT(88),
  [302] = {.count = 1, .reusable = true}, SHIFT(89),
  [304] = {.count = 1, .reusable = true}, SHIFT(90),
  [306] = {.count = 1, .reusable = true}, SHIFT(91),
  [308] = {.count = 1, .reusable = true}, SHIFT(92),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [312] = {.count = 2, .reusable = true}, SHIFT(93), SHIFT_EXTRA(),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [329] = {.count = 1, .reusable = true}, SHIFT(94),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 3),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2), SHIFT_REPEAT(95),
  [346] = {.count = 1, .reusable = true}, SHIFT(96),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
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

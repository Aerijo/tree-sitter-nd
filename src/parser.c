#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 153
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_AT = 4,
  aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH = 5,
  anon_sym_LT = 6,
  aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH = 7,
  anon_sym_GT = 8,
  anon_sym_COMMA = 9,
  anon_sym_COMMA_LF = 10,
  sym__hypothesis_end = 11,
  sym_comment = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DOT = 17,
  sym_variable = 18,
  sym__function_name = 19,
  anon_sym_A = 20,
  anon_sym_E = 21,
  anon_sym_T = 22,
  anon_sym_F = 23,
  anon_sym_1 = 24,
  anon_sym_ = 25,
  anon_sym_0 = 26,
  anon_sym_2 = 27,
  anon_sym_DASH = 28,
  anon_sym_BANG = 29,
  anon_sym_TILDE = 30,
  anon_sym_3 = 31,
  anon_sym_CARET = 32,
  anon_sym_AMP = 33,
  anon_sym_4 = 34,
  anon_sym__ = 35,
  anon_sym_PIPE = 36,
  anon_sym_v = 37,
  anon_sym_5 = 38,
  anon_sym_DASH_GT = 39,
  anon_sym_EQ_GT = 40,
  anon_sym_6 = 41,
  anon_sym_7 = 42,
  anon_sym_LT_DASH_GT = 43,
  anon_sym_LT_EQ_GT = 44,
  anon_sym_8 = 45,
  anon_sym_9 = 46,
  anon_sym_10 = 47,
  anon_sym_11 = 48,
  anon_sym_12 = 49,
  sym_block = 50,
  sym_guard = 51,
  sym_annotation = 52,
  sym_vars = 53,
  sym_hypothesis = 54,
  sym__nested_block = 55,
  sym_expression = 56,
  sym__term = 57,
  sym_function = 58,
  sym_not = 59,
  sym_and = 60,
  sym_or = 61,
  sym_implies = 62,
  sym_iff = 63,
  sym_forall = 64,
  sym_exists = 65,
  sym__group = 66,
  sym__universal_group = 67,
  sym_function_name = 68,
  sym__TF_func_name = 69,
  sym_true = 70,
  sym_false = 71,
  sym__not_sym = 72,
  sym__and_sym = 73,
  sym__or_sym = 74,
  sym__implies_sym = 75,
  sym__iff_sym = 76,
  sym__forall_sym = 77,
  sym__exists_sym = 78,
  aux_sym_block_repeat1 = 79,
  aux_sym_annotation_repeat1 = 80,
  aux_sym_vars_repeat1 = 81,
  aux_sym_hypothesis_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = "/[^<#\\n]+/",
  [anon_sym_LT] = "<",
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = "/[^>]*/",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_LF] = ",\n",
  [sym__hypothesis_end] = "_hypothesis_end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_annotation] = "annotation",
  [sym_vars] = "vars",
  [sym_hypothesis] = "hypothesis",
  [sym__nested_block] = "_nested_block",
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
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_LF] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_annotation] = {
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
  [sym__nested_block] = {
    .visible = false,
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
  [aux_sym_annotation_repeat1] = {
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
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
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
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(38);
      if (lookahead == 172)
        ADVANCE(39);
      if (lookahead == 8594)
        ADVANCE(40);
      if (lookahead == 8596)
        ADVANCE(41);
      if (lookahead == 8658)
        ADVANCE(42);
      if (lookahead == 8660)
        ADVANCE(43);
      if (lookahead == 8704)
        ADVANCE(44);
      if (lookahead == 8707)
        ADVANCE(45);
      if (lookahead == 8743)
        ADVANCE(46);
      if (lookahead == 8744)
        ADVANCE(47);
      if (lookahead == 8801)
        ADVANCE(48);
      if (lookahead == 8868)
        ADVANCE(49);
      if (lookahead == 8869)
        ADVANCE(50);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      if (lookahead == '>')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 51:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(17);
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
        ADVANCE(53);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(38);
      if (lookahead == 172)
        ADVANCE(39);
      if (lookahead == 8704)
        ADVANCE(44);
      if (lookahead == 8707)
        ADVANCE(45);
      if (lookahead == 8868)
        ADVANCE(49);
      if (lookahead == 8869)
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      if (lookahead == '_')
        ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(55);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(29);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        ADVANCE(57);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == 8594)
        ADVANCE(40);
      if (lookahead == 8596)
        ADVANCE(41);
      if (lookahead == 8658)
        ADVANCE(42);
      if (lookahead == 8660)
        ADVANCE(43);
      if (lookahead == 8743)
        ADVANCE(46);
      if (lookahead == 8744)
        ADVANCE(47);
      if (lookahead == 8801)
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 58:
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 62:
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(17);
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
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(38);
      if (lookahead == 172)
        ADVANCE(39);
      if (lookahead == 8704)
        ADVANCE(44);
      if (lookahead == 8707)
        ADVANCE(45);
      if (lookahead == 8868)
        ADVANCE(49);
      if (lookahead == 8869)
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(17);
      if (lookahead == 'A')
        ADVANCE(23);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(26);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead == '_')
        ADVANCE(53);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(38);
      if (lookahead == 172)
        ADVANCE(39);
      if (lookahead == 8704)
        ADVANCE(44);
      if (lookahead == 8707)
        ADVANCE(45);
      if (lookahead == 8868)
        ADVANCE(49);
      if (lookahead == 8869)
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(30);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == 8594)
        ADVANCE(40);
      if (lookahead == 8596)
        ADVANCE(41);
      if (lookahead == 8658)
        ADVANCE(42);
      if (lookahead == 8660)
        ADVANCE(43);
      if (lookahead == 8743)
        ADVANCE(46);
      if (lookahead == 8744)
        ADVANCE(47);
      if (lookahead == 8801)
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == '\n')
        ADVANCE(57);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(72);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(74);
      if (lookahead == '/')
        ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == ',')
        ADVANCE(70);
      if (lookahead == '/')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '1')
        ADVANCE(17);
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
      if (lookahead == '{')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(38);
      if (lookahead == 172)
        ADVANCE(39);
      if (lookahead == 8704)
        ADVANCE(44);
      if (lookahead == 8707)
        ADVANCE(45);
      if (lookahead == 8868)
        ADVANCE(49);
      if (lookahead == 8869)
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == '\n')
        ADVANCE(57);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(72);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '/')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '>')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(84);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(84);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '>')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
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
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 51},
  [24] = {.lex_state = 66},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 51},
  [34] = {.lex_state = 66},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 51},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 51},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 68},
  [45] = {.lex_state = 68},
  [46] = {.lex_state = 68},
  [47] = {.lex_state = 68},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 56},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 56},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 56},
  [70] = {.lex_state = 51},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 54},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 56},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 51},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 56},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 51},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 67},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 56},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 51},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 51},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 51},
  [105] = {.lex_state = 51},
  [106] = {.lex_state = 56},
  [107] = {.lex_state = 56},
  [108] = {.lex_state = 56},
  [109] = {.lex_state = 79},
  [110] = {.lex_state = 69},
  [111] = {.lex_state = 56},
  [112] = {.lex_state = 56},
  [113] = {.lex_state = 56},
  [114] = {.lex_state = 56},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 56},
  [117] = {.lex_state = 56},
  [118] = {.lex_state = 54},
  [119] = {.lex_state = 54},
  [120] = {.lex_state = 54},
  [121] = {.lex_state = 79},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 56},
  [124] = {.lex_state = 56},
  [125] = {.lex_state = 56},
  [126] = {.lex_state = 56},
  [127] = {.lex_state = 56},
  [128] = {.lex_state = 56},
  [129] = {.lex_state = 67},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 68},
  [134] = {.lex_state = 68},
  [135] = {.lex_state = 68},
  [136] = {.lex_state = 68},
  [137] = {.lex_state = 68},
  [138] = {.lex_state = 68},
  [139] = {.lex_state = 66},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 56},
  [145] = {.lex_state = 51},
  [146] = {.lex_state = 86},
  [147] = {.lex_state = 77},
  [148] = {.lex_state = 67},
  [149] = {.lex_state = 68},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 69},
  [152] = {.lex_state = 77},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_COMMA_LF] = ACTIONS(1),
    [sym__hypothesis_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(14),
    [sym_guard] = STATE(15),
    [sym_hypothesis] = STATE(16),
    [sym__nested_block] = STATE(24),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym_forall] = STATE(18),
    [sym_exists] = STATE(18),
    [sym__group] = STATE(18),
    [sym__universal_group] = STATE(18),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [aux_sym_block_repeat1] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__hypothesis_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(18),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [2] = {
    [sym_vars] = STATE(27),
    [anon_sym_RBRACK] = ACTIONS(40),
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(44),
  },
  [3] = {
    [sym__nested_block] = STATE(34),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(34),
    [sym_comment] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [4] = {
    [sym_block] = STATE(36),
    [sym_guard] = STATE(37),
    [sym_hypothesis] = STATE(38),
    [sym__nested_block] = STATE(39),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym_forall] = STATE(18),
    [sym_exists] = STATE(18),
    [sym__group] = STATE(18),
    [sym__universal_group] = STATE(18),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [aux_sym_block_repeat1] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym__hypothesis_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(18),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [5] = {
    [sym__term] = STATE(49),
    [sym_function] = STATE(49),
    [sym_not] = STATE(49),
    [sym_and] = STATE(49),
    [sym_or] = STATE(49),
    [sym_implies] = STATE(49),
    [sym_iff] = STATE(49),
    [sym_forall] = STATE(49),
    [sym_exists] = STATE(49),
    [sym__group] = STATE(49),
    [sym__universal_group] = STATE(49),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(49),
    [sym_false] = STATE(49),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(68),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [6] = {
    [sym__term] = STATE(55),
    [sym_function] = STATE(55),
    [sym_not] = STATE(55),
    [sym_and] = STATE(55),
    [sym_or] = STATE(55),
    [sym_implies] = STATE(55),
    [sym_iff] = STATE(55),
    [sym_forall] = STATE(55),
    [sym_exists] = STATE(55),
    [sym__group] = STATE(55),
    [sym__universal_group] = STATE(55),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(55),
    [sym_false] = STATE(55),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(90),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_COMMA_LF] = ACTIONS(94),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_5] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_6] = ACTIONS(94),
    [anon_sym_7] = ACTIONS(94),
    [anon_sym_LT_DASH_GT] = ACTIONS(94),
    [anon_sym_LT_EQ_GT] = ACTIONS(94),
    [anon_sym_8] = ACTIONS(94),
    [anon_sym_9] = ACTIONS(94),
    [anon_sym_10] = ACTIONS(94),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_COMMA_LF] = ACTIONS(94),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym_variable] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_5] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_6] = ACTIONS(94),
    [anon_sym_7] = ACTIONS(94),
    [anon_sym_LT_DASH_GT] = ACTIONS(94),
    [anon_sym_LT_EQ_GT] = ACTIONS(94),
    [anon_sym_8] = ACTIONS(94),
    [anon_sym_9] = ACTIONS(94),
    [anon_sym_10] = ACTIONS(94),
  },
  [9] = {
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_COMMA_LF] = ACTIONS(94),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym_variable] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_5] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_6] = ACTIONS(94),
    [anon_sym_7] = ACTIONS(94),
    [anon_sym_LT_DASH_GT] = ACTIONS(94),
    [anon_sym_LT_EQ_GT] = ACTIONS(94),
    [anon_sym_8] = ACTIONS(94),
    [anon_sym_9] = ACTIONS(94),
    [anon_sym_10] = ACTIONS(94),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_COMMA_LF] = ACTIONS(104),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_4] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_v] = ACTIONS(104),
    [anon_sym_5] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(104),
    [anon_sym_LT_EQ_GT] = ACTIONS(104),
    [anon_sym_8] = ACTIONS(104),
    [anon_sym_9] = ACTIONS(104),
    [anon_sym_10] = ACTIONS(104),
  },
  [11] = {
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COMMA_LF] = ACTIONS(110),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_v] = ACTIONS(110),
    [anon_sym_5] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_6] = ACTIONS(110),
    [anon_sym_7] = ACTIONS(110),
    [anon_sym_LT_DASH_GT] = ACTIONS(110),
    [anon_sym_LT_EQ_GT] = ACTIONS(110),
    [anon_sym_8] = ACTIONS(110),
    [anon_sym_9] = ACTIONS(110),
    [anon_sym_10] = ACTIONS(110),
  },
  [12] = {
    [anon_sym_LF] = ACTIONS(102),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_COMMA_LF] = ACTIONS(104),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_4] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_v] = ACTIONS(104),
    [anon_sym_5] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_EQ_GT] = ACTIONS(104),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_LT_DASH_GT] = ACTIONS(104),
    [anon_sym_LT_EQ_GT] = ACTIONS(104),
    [anon_sym_8] = ACTIONS(104),
    [anon_sym_9] = ACTIONS(104),
    [anon_sym_10] = ACTIONS(104),
  },
  [13] = {
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COMMA_LF] = ACTIONS(110),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_v] = ACTIONS(110),
    [anon_sym_5] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_6] = ACTIONS(110),
    [anon_sym_7] = ACTIONS(110),
    [anon_sym_LT_DASH_GT] = ACTIONS(110),
    [anon_sym_LT_EQ_GT] = ACTIONS(110),
    [anon_sym_8] = ACTIONS(110),
    [anon_sym_9] = ACTIONS(110),
    [anon_sym_10] = ACTIONS(110),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(42),
  },
  [15] = {
    [sym_hypothesis] = STATE(57),
    [sym__nested_block] = STATE(34),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym_forall] = STATE(18),
    [sym_exists] = STATE(18),
    [sym__group] = STATE(18),
    [sym__universal_group] = STATE(18),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [aux_sym_block_repeat1] = STATE(34),
    [sym__hypothesis_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(18),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [16] = {
    [sym__nested_block] = STATE(34),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(34),
    [sym__hypothesis_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [17] = {
    [aux_sym_hypothesis_repeat1] = STATE(61),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_COMMA_LF] = ACTIONS(120),
    [sym_comment] = ACTIONS(96),
  },
  [18] = {
    [sym_annotation] = STATE(63),
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_COMMA_LF] = ACTIONS(126),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym__] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_v] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_6] = ACTIONS(132),
    [anon_sym_7] = ACTIONS(132),
    [anon_sym_LT_DASH_GT] = ACTIONS(134),
    [anon_sym_LT_EQ_GT] = ACTIONS(134),
    [anon_sym_8] = ACTIONS(134),
    [anon_sym_9] = ACTIONS(134),
    [anon_sym_10] = ACTIONS(134),
  },
  [19] = {
    [anon_sym_LF] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_COMMA_LF] = ACTIONS(138),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_4] = ACTIONS(138),
    [anon_sym__] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_v] = ACTIONS(138),
    [anon_sym_5] = ACTIONS(138),
    [anon_sym_DASH_GT] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_6] = ACTIONS(138),
    [anon_sym_7] = ACTIONS(138),
    [anon_sym_LT_DASH_GT] = ACTIONS(138),
    [anon_sym_LT_EQ_GT] = ACTIONS(138),
    [anon_sym_8] = ACTIONS(138),
    [anon_sym_9] = ACTIONS(138),
    [anon_sym_10] = ACTIONS(138),
  },
  [20] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(142),
  },
  [21] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(69),
    [sym_false] = STATE(69),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(144),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [22] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(146),
  },
  [23] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(148),
  },
  [24] = {
    [sym__nested_block] = STATE(72),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [25] = {
    [sym__hypothesis_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [sym_variable] = ACTIONS(155),
    [sym__function_name] = ACTIONS(157),
    [anon_sym_A] = ACTIONS(157),
    [anon_sym_E] = ACTIONS(157),
    [anon_sym_T] = ACTIONS(157),
    [anon_sym_F] = ACTIONS(157),
    [anon_sym_1] = ACTIONS(155),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_0] = ACTIONS(155),
    [anon_sym_2] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_3] = ACTIONS(155),
    [anon_sym_11] = ACTIONS(155),
    [anon_sym_12] = ACTIONS(155),
  },
  [26] = {
    [aux_sym_vars_repeat1] = STATE(74),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym_comment] = ACTIONS(42),
  },
  [27] = {
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym_comment] = ACTIONS(42),
  },
  [28] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(76),
    [sym_false] = STATE(76),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(165),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(167),
    [sym_comment] = ACTIONS(96),
  },
  [30] = {
    [sym_annotation] = STATE(63),
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_v] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(175),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_LT_DASH_GT] = ACTIONS(177),
    [anon_sym_LT_EQ_GT] = ACTIONS(177),
    [anon_sym_8] = ACTIONS(177),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(177),
  },
  [31] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(83),
    [sym_false] = STATE(83),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(179),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [32] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(181),
  },
  [33] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(183),
  },
  [34] = {
    [sym__nested_block] = STATE(72),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [35] = {
    [sym__nested_block] = STATE(86),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(86),
    [sym_comment] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [36] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(190),
  },
  [37] = {
    [sym_hypothesis] = STATE(89),
    [sym__nested_block] = STATE(86),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym_forall] = STATE(18),
    [sym_exists] = STATE(18),
    [sym__group] = STATE(18),
    [sym__universal_group] = STATE(18),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [aux_sym_block_repeat1] = STATE(86),
    [sym__hypothesis_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(18),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [38] = {
    [sym__nested_block] = STATE(86),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(86),
    [sym__hypothesis_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [39] = {
    [sym__nested_block] = STATE(90),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [40] = {
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
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(91),
    [sym_false] = STATE(91),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(197),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [41] = {
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
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(92),
    [sym_false] = STATE(92),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(199),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [42] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_4] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(92),
    [anon_sym_5] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(92),
    [anon_sym_6] = ACTIONS(92),
    [anon_sym_7] = ACTIONS(92),
    [anon_sym_LT_DASH_GT] = ACTIONS(92),
    [anon_sym_LT_EQ_GT] = ACTIONS(92),
    [anon_sym_8] = ACTIONS(92),
    [anon_sym_9] = ACTIONS(92),
    [anon_sym_10] = ACTIONS(92),
  },
  [43] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [sym_variable] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_4] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_5] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(92),
    [anon_sym_6] = ACTIONS(92),
    [anon_sym_7] = ACTIONS(92),
    [anon_sym_LT_DASH_GT] = ACTIONS(92),
    [anon_sym_LT_EQ_GT] = ACTIONS(92),
    [anon_sym_8] = ACTIONS(92),
    [anon_sym_9] = ACTIONS(92),
    [anon_sym_10] = ACTIONS(92),
  },
  [44] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [sym_variable] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_4] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_5] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(92),
    [anon_sym_6] = ACTIONS(92),
    [anon_sym_7] = ACTIONS(92),
    [anon_sym_LT_DASH_GT] = ACTIONS(92),
    [anon_sym_LT_EQ_GT] = ACTIONS(92),
    [anon_sym_8] = ACTIONS(92),
    [anon_sym_9] = ACTIONS(92),
    [anon_sym_10] = ACTIONS(92),
  },
  [45] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_4] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [anon_sym_EQ_GT] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(102),
    [anon_sym_LT_DASH_GT] = ACTIONS(102),
    [anon_sym_LT_EQ_GT] = ACTIONS(102),
    [anon_sym_8] = ACTIONS(102),
    [anon_sym_9] = ACTIONS(102),
    [anon_sym_10] = ACTIONS(102),
  },
  [46] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(201),
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
  [47] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_4] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [anon_sym_EQ_GT] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(102),
    [anon_sym_LT_DASH_GT] = ACTIONS(102),
    [anon_sym_LT_EQ_GT] = ACTIONS(102),
    [anon_sym_8] = ACTIONS(102),
    [anon_sym_9] = ACTIONS(102),
    [anon_sym_10] = ACTIONS(102),
  },
  [48] = {
    [sym_comment] = ACTIONS(42),
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
  [49] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [50] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_4] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_v] = ACTIONS(136),
    [anon_sym_5] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_6] = ACTIONS(136),
    [anon_sym_7] = ACTIONS(136),
    [anon_sym_LT_DASH_GT] = ACTIONS(136),
    [anon_sym_LT_EQ_GT] = ACTIONS(136),
    [anon_sym_8] = ACTIONS(136),
    [anon_sym_9] = ACTIONS(136),
    [anon_sym_10] = ACTIONS(136),
  },
  [51] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(213),
  },
  [52] = {
    [sym__term] = STATE(99),
    [sym_function] = STATE(99),
    [sym_not] = STATE(99),
    [sym_and] = STATE(99),
    [sym_or] = STATE(99),
    [sym_implies] = STATE(99),
    [sym_iff] = STATE(99),
    [sym_forall] = STATE(99),
    [sym_exists] = STATE(99),
    [sym__group] = STATE(99),
    [sym__universal_group] = STATE(99),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(99),
    [sym_false] = STATE(99),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(215),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [53] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(217),
  },
  [54] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(219),
  },
  [55] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_COMMA_LF] = ACTIONS(223),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym__] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_v] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_6] = ACTIONS(132),
    [anon_sym_7] = ACTIONS(132),
    [anon_sym_LT_DASH_GT] = ACTIONS(134),
    [anon_sym_LT_EQ_GT] = ACTIONS(134),
    [anon_sym_8] = ACTIONS(134),
    [anon_sym_9] = ACTIONS(134),
    [anon_sym_10] = ACTIONS(134),
  },
  [56] = {
    [sym__nested_block] = STATE(102),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [57] = {
    [sym__nested_block] = STATE(102),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(102),
    [sym__hypothesis_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym__hypothesis_end] = ACTIONS(232),
    [sym_comment] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [sym_variable] = ACTIONS(230),
    [sym__function_name] = ACTIONS(237),
    [anon_sym_A] = ACTIONS(237),
    [anon_sym_E] = ACTIONS(237),
    [anon_sym_T] = ACTIONS(237),
    [anon_sym_F] = ACTIONS(237),
    [anon_sym_1] = ACTIONS(230),
    [anon_sym_] = ACTIONS(230),
    [anon_sym_0] = ACTIONS(230),
    [anon_sym_2] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_3] = ACTIONS(230),
    [anon_sym_11] = ACTIONS(230),
    [anon_sym_12] = ACTIONS(230),
  },
  [59] = {
    [anon_sym_LF] = ACTIONS(239),
    [sym_comment] = ACTIONS(96),
  },
  [60] = {
    [sym_expression] = STATE(106),
    [sym__term] = STATE(18),
    [sym_function] = STATE(18),
    [sym_not] = STATE(18),
    [sym_and] = STATE(18),
    [sym_or] = STATE(18),
    [sym_implies] = STATE(18),
    [sym_iff] = STATE(18),
    [sym_forall] = STATE(18),
    [sym_exists] = STATE(18),
    [sym__group] = STATE(18),
    [sym__universal_group] = STATE(18),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(18),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [61] = {
    [aux_sym_hypothesis_repeat1] = STATE(108),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_COMMA_LF] = ACTIONS(120),
    [sym_comment] = ACTIONS(96),
  },
  [62] = {
    [aux_sym_annotation_repeat1] = STATE(110),
    [anon_sym_LF] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COMMA_LF] = ACTIONS(243),
    [sym_comment] = ACTIONS(96),
  },
  [63] = {
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_COMMA_LF] = ACTIONS(251),
    [sym_comment] = ACTIONS(96),
  },
  [64] = {
    [sym__term] = STATE(111),
    [sym_function] = STATE(111),
    [sym_not] = STATE(111),
    [sym_and] = STATE(111),
    [sym_or] = STATE(111),
    [sym_implies] = STATE(111),
    [sym_iff] = STATE(111),
    [sym_forall] = STATE(111),
    [sym_exists] = STATE(111),
    [sym__group] = STATE(111),
    [sym__universal_group] = STATE(111),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(111),
    [sym_false] = STATE(111),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(253),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [65] = {
    [sym__term] = STATE(112),
    [sym_function] = STATE(112),
    [sym_not] = STATE(112),
    [sym_and] = STATE(112),
    [sym_or] = STATE(112),
    [sym_implies] = STATE(112),
    [sym_iff] = STATE(112),
    [sym_forall] = STATE(112),
    [sym_exists] = STATE(112),
    [sym__group] = STATE(112),
    [sym__universal_group] = STATE(112),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(112),
    [sym_false] = STATE(112),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(255),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [66] = {
    [sym__term] = STATE(113),
    [sym_function] = STATE(113),
    [sym_not] = STATE(113),
    [sym_and] = STATE(113),
    [sym_or] = STATE(113),
    [sym_implies] = STATE(113),
    [sym_iff] = STATE(113),
    [sym_forall] = STATE(113),
    [sym_exists] = STATE(113),
    [sym__group] = STATE(113),
    [sym__universal_group] = STATE(113),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(113),
    [sym_false] = STATE(113),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(257),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [67] = {
    [sym__term] = STATE(114),
    [sym_function] = STATE(114),
    [sym_not] = STATE(114),
    [sym_and] = STATE(114),
    [sym_or] = STATE(114),
    [sym_implies] = STATE(114),
    [sym_iff] = STATE(114),
    [sym_forall] = STATE(114),
    [sym_exists] = STATE(114),
    [sym__group] = STATE(114),
    [sym__universal_group] = STATE(114),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(114),
    [sym_false] = STATE(114),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(259),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [68] = {
    [sym__term] = STATE(115),
    [sym_function] = STATE(115),
    [sym_not] = STATE(115),
    [sym_and] = STATE(115),
    [sym_or] = STATE(115),
    [sym_implies] = STATE(115),
    [sym_iff] = STATE(115),
    [sym_forall] = STATE(115),
    [sym_exists] = STATE(115),
    [sym__group] = STATE(115),
    [sym__universal_group] = STATE(115),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(115),
    [sym_false] = STATE(115),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(261),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [69] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_COMMA_LF] = ACTIONS(265),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_4] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_v] = ACTIONS(265),
    [anon_sym_5] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_EQ_GT] = ACTIONS(265),
    [anon_sym_6] = ACTIONS(265),
    [anon_sym_7] = ACTIONS(265),
    [anon_sym_LT_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_GT] = ACTIONS(265),
    [anon_sym_8] = ACTIONS(265),
    [anon_sym_9] = ACTIONS(265),
    [anon_sym_10] = ACTIONS(265),
  },
  [70] = {
    [sym__term] = STATE(116),
    [sym_function] = STATE(116),
    [sym_not] = STATE(116),
    [sym_and] = STATE(116),
    [sym_or] = STATE(116),
    [sym_implies] = STATE(116),
    [sym_iff] = STATE(116),
    [sym_forall] = STATE(116),
    [sym_exists] = STATE(116),
    [sym__group] = STATE(116),
    [sym__universal_group] = STATE(116),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(116),
    [sym_false] = STATE(116),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(267),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [71] = {
    [sym__term] = STATE(117),
    [sym_function] = STATE(117),
    [sym_not] = STATE(117),
    [sym_and] = STATE(117),
    [sym_or] = STATE(117),
    [sym_implies] = STATE(117),
    [sym_iff] = STATE(117),
    [sym_forall] = STATE(117),
    [sym_exists] = STATE(117),
    [sym__group] = STATE(117),
    [sym__universal_group] = STATE(117),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(117),
    [sym_false] = STATE(117),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(16),
    [sym_variable] = ACTIONS(269),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_3] = ACTIONS(34),
    [anon_sym_11] = ACTIONS(36),
    [anon_sym_12] = ACTIONS(38),
  },
  [72] = {
    [sym__nested_block] = STATE(72),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_comment] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(281),
    [sym_variable] = ACTIONS(284),
    [sym__function_name] = ACTIONS(287),
    [anon_sym_A] = ACTIONS(290),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(296),
    [anon_sym_F] = ACTIONS(299),
    [anon_sym_1] = ACTIONS(302),
    [anon_sym_] = ACTIONS(302),
    [anon_sym_0] = ACTIONS(305),
    [anon_sym_2] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_3] = ACTIONS(308),
    [anon_sym_11] = ACTIONS(311),
    [anon_sym_12] = ACTIONS(314),
  },
  [73] = {
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(319),
  },
  [74] = {
    [aux_sym_vars_repeat1] = STATE(120),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym_comment] = ACTIONS(42),
  },
  [75] = {
    [sym__hypothesis_end] = ACTIONS(323),
    [sym_comment] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_variable] = ACTIONS(323),
    [sym__function_name] = ACTIONS(325),
    [anon_sym_A] = ACTIONS(325),
    [anon_sym_E] = ACTIONS(325),
    [anon_sym_T] = ACTIONS(325),
    [anon_sym_F] = ACTIONS(325),
    [anon_sym_1] = ACTIONS(323),
    [anon_sym_] = ACTIONS(323),
    [anon_sym_0] = ACTIONS(323),
    [anon_sym_2] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_3] = ACTIONS(323),
    [anon_sym_11] = ACTIONS(323),
    [anon_sym_12] = ACTIONS(323),
  },
  [76] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(223),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_v] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(175),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_LT_DASH_GT] = ACTIONS(177),
    [anon_sym_LT_EQ_GT] = ACTIONS(177),
    [anon_sym_8] = ACTIONS(177),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(177),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_comment] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [sym_variable] = ACTIONS(230),
    [sym__function_name] = ACTIONS(237),
    [anon_sym_A] = ACTIONS(237),
    [anon_sym_E] = ACTIONS(237),
    [anon_sym_T] = ACTIONS(237),
    [anon_sym_F] = ACTIONS(237),
    [anon_sym_1] = ACTIONS(230),
    [anon_sym_] = ACTIONS(230),
    [anon_sym_0] = ACTIONS(230),
    [anon_sym_2] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_3] = ACTIONS(230),
    [anon_sym_11] = ACTIONS(230),
    [anon_sym_12] = ACTIONS(230),
  },
  [78] = {
    [aux_sym_annotation_repeat1] = STATE(122),
    [anon_sym_LF] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [sym_comment] = ACTIONS(96),
  },
  [79] = {
    [sym__term] = STATE(123),
    [sym_function] = STATE(123),
    [sym_not] = STATE(123),
    [sym_and] = STATE(123),
    [sym_or] = STATE(123),
    [sym_implies] = STATE(123),
    [sym_iff] = STATE(123),
    [sym_forall] = STATE(123),
    [sym_exists] = STATE(123),
    [sym__group] = STATE(123),
    [sym__universal_group] = STATE(123),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(123),
    [sym_false] = STATE(123),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(331),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [80] = {
    [sym__term] = STATE(124),
    [sym_function] = STATE(124),
    [sym_not] = STATE(124),
    [sym_and] = STATE(124),
    [sym_or] = STATE(124),
    [sym_implies] = STATE(124),
    [sym_iff] = STATE(124),
    [sym_forall] = STATE(124),
    [sym_exists] = STATE(124),
    [sym__group] = STATE(124),
    [sym__universal_group] = STATE(124),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(124),
    [sym_false] = STATE(124),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(333),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [81] = {
    [sym__term] = STATE(125),
    [sym_function] = STATE(125),
    [sym_not] = STATE(125),
    [sym_and] = STATE(125),
    [sym_or] = STATE(125),
    [sym_implies] = STATE(125),
    [sym_iff] = STATE(125),
    [sym_forall] = STATE(125),
    [sym_exists] = STATE(125),
    [sym__group] = STATE(125),
    [sym__universal_group] = STATE(125),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(125),
    [sym_false] = STATE(125),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(335),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [82] = {
    [sym__term] = STATE(126),
    [sym_function] = STATE(126),
    [sym_not] = STATE(126),
    [sym_and] = STATE(126),
    [sym_or] = STATE(126),
    [sym_implies] = STATE(126),
    [sym_iff] = STATE(126),
    [sym_forall] = STATE(126),
    [sym_exists] = STATE(126),
    [sym__group] = STATE(126),
    [sym__universal_group] = STATE(126),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(126),
    [sym_false] = STATE(126),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(337),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [83] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(265),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_4] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_v] = ACTIONS(265),
    [anon_sym_5] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_EQ_GT] = ACTIONS(265),
    [anon_sym_6] = ACTIONS(265),
    [anon_sym_7] = ACTIONS(265),
    [anon_sym_LT_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_EQ_GT] = ACTIONS(265),
    [anon_sym_8] = ACTIONS(265),
    [anon_sym_9] = ACTIONS(265),
    [anon_sym_10] = ACTIONS(265),
  },
  [84] = {
    [sym__term] = STATE(127),
    [sym_function] = STATE(127),
    [sym_not] = STATE(127),
    [sym_and] = STATE(127),
    [sym_or] = STATE(127),
    [sym_implies] = STATE(127),
    [sym_iff] = STATE(127),
    [sym_forall] = STATE(127),
    [sym_exists] = STATE(127),
    [sym__group] = STATE(127),
    [sym__universal_group] = STATE(127),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(127),
    [sym_false] = STATE(127),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(339),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [85] = {
    [sym__term] = STATE(128),
    [sym_function] = STATE(128),
    [sym_not] = STATE(128),
    [sym_and] = STATE(128),
    [sym_or] = STATE(128),
    [sym_implies] = STATE(128),
    [sym_iff] = STATE(128),
    [sym_forall] = STATE(128),
    [sym_exists] = STATE(128),
    [sym__group] = STATE(128),
    [sym__universal_group] = STATE(128),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(128),
    [sym_false] = STATE(128),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(341),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [86] = {
    [sym__nested_block] = STATE(90),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_comment] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_variable] = ACTIONS(343),
    [sym__function_name] = ACTIONS(345),
    [anon_sym_A] = ACTIONS(345),
    [anon_sym_E] = ACTIONS(345),
    [anon_sym_T] = ACTIONS(345),
    [anon_sym_F] = ACTIONS(345),
    [anon_sym_1] = ACTIONS(343),
    [anon_sym_] = ACTIONS(343),
    [anon_sym_0] = ACTIONS(343),
    [anon_sym_2] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [anon_sym_BANG] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_3] = ACTIONS(343),
    [anon_sym_11] = ACTIONS(343),
    [anon_sym_12] = ACTIONS(343),
  },
  [88] = {
    [sym__nested_block] = STATE(129),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(129),
    [sym_comment] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [89] = {
    [sym__nested_block] = STATE(129),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(129),
    [sym__hypothesis_end] = ACTIONS(350),
    [sym_comment] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [90] = {
    [sym__nested_block] = STATE(90),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(281),
    [sym_variable] = ACTIONS(284),
    [sym__function_name] = ACTIONS(287),
    [anon_sym_A] = ACTIONS(290),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(296),
    [anon_sym_F] = ACTIONS(299),
    [anon_sym_1] = ACTIONS(302),
    [anon_sym_] = ACTIONS(302),
    [anon_sym_0] = ACTIONS(305),
    [anon_sym_2] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_3] = ACTIONS(308),
    [anon_sym_11] = ACTIONS(311),
    [anon_sym_12] = ACTIONS(314),
  },
  [91] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [92] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [93] = {
    [anon_sym_LF] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_COMMA_LF] = ACTIONS(360),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(360),
    [anon_sym_AMP] = ACTIONS(360),
    [anon_sym_4] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_v] = ACTIONS(360),
    [anon_sym_5] = ACTIONS(360),
    [anon_sym_DASH_GT] = ACTIONS(360),
    [anon_sym_EQ_GT] = ACTIONS(360),
    [anon_sym_6] = ACTIONS(360),
    [anon_sym_7] = ACTIONS(360),
    [anon_sym_LT_DASH_GT] = ACTIONS(360),
    [anon_sym_LT_EQ_GT] = ACTIONS(360),
    [anon_sym_8] = ACTIONS(360),
    [anon_sym_9] = ACTIONS(360),
    [anon_sym_10] = ACTIONS(360),
  },
  [94] = {
    [sym__term] = STATE(132),
    [sym_function] = STATE(132),
    [sym_not] = STATE(132),
    [sym_and] = STATE(132),
    [sym_or] = STATE(132),
    [sym_implies] = STATE(132),
    [sym_iff] = STATE(132),
    [sym_forall] = STATE(132),
    [sym_exists] = STATE(132),
    [sym__group] = STATE(132),
    [sym__universal_group] = STATE(132),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(132),
    [sym_false] = STATE(132),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(362),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [95] = {
    [sym__term] = STATE(133),
    [sym_function] = STATE(133),
    [sym_not] = STATE(133),
    [sym_and] = STATE(133),
    [sym_or] = STATE(133),
    [sym_implies] = STATE(133),
    [sym_iff] = STATE(133),
    [sym_forall] = STATE(133),
    [sym_exists] = STATE(133),
    [sym__group] = STATE(133),
    [sym__universal_group] = STATE(133),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(133),
    [sym_false] = STATE(133),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(364),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [96] = {
    [sym__term] = STATE(134),
    [sym_function] = STATE(134),
    [sym_not] = STATE(134),
    [sym_and] = STATE(134),
    [sym_or] = STATE(134),
    [sym_implies] = STATE(134),
    [sym_iff] = STATE(134),
    [sym_forall] = STATE(134),
    [sym_exists] = STATE(134),
    [sym__group] = STATE(134),
    [sym__universal_group] = STATE(134),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(134),
    [sym_false] = STATE(134),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(366),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [97] = {
    [sym__term] = STATE(135),
    [sym_function] = STATE(135),
    [sym_not] = STATE(135),
    [sym_and] = STATE(135),
    [sym_or] = STATE(135),
    [sym_implies] = STATE(135),
    [sym_iff] = STATE(135),
    [sym_forall] = STATE(135),
    [sym_exists] = STATE(135),
    [sym__group] = STATE(135),
    [sym__universal_group] = STATE(135),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(135),
    [sym_false] = STATE(135),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(368),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [98] = {
    [sym__term] = STATE(136),
    [sym_function] = STATE(136),
    [sym_not] = STATE(136),
    [sym_and] = STATE(136),
    [sym_or] = STATE(136),
    [sym_implies] = STATE(136),
    [sym_iff] = STATE(136),
    [sym_forall] = STATE(136),
    [sym_exists] = STATE(136),
    [sym__group] = STATE(136),
    [sym__universal_group] = STATE(136),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(136),
    [sym_false] = STATE(136),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(370),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [99] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_CARET] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(263),
    [anon_sym_4] = ACTIONS(263),
    [anon_sym__] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_v] = ACTIONS(263),
    [anon_sym_5] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(263),
    [anon_sym_EQ_GT] = ACTIONS(263),
    [anon_sym_6] = ACTIONS(263),
    [anon_sym_7] = ACTIONS(263),
    [anon_sym_LT_DASH_GT] = ACTIONS(263),
    [anon_sym_LT_EQ_GT] = ACTIONS(263),
    [anon_sym_8] = ACTIONS(263),
    [anon_sym_9] = ACTIONS(263),
    [anon_sym_10] = ACTIONS(263),
  },
  [100] = {
    [sym__term] = STATE(137),
    [sym_function] = STATE(137),
    [sym_not] = STATE(137),
    [sym_and] = STATE(137),
    [sym_or] = STATE(137),
    [sym_implies] = STATE(137),
    [sym_iff] = STATE(137),
    [sym_forall] = STATE(137),
    [sym_exists] = STATE(137),
    [sym__group] = STATE(137),
    [sym__universal_group] = STATE(137),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(137),
    [sym_false] = STATE(137),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(372),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [101] = {
    [sym__term] = STATE(138),
    [sym_function] = STATE(138),
    [sym_not] = STATE(138),
    [sym_and] = STATE(138),
    [sym_or] = STATE(138),
    [sym_implies] = STATE(138),
    [sym_iff] = STATE(138),
    [sym_forall] = STATE(138),
    [sym_exists] = STATE(138),
    [sym__group] = STATE(138),
    [sym__universal_group] = STATE(138),
    [sym_function_name] = STATE(50),
    [sym__TF_func_name] = STATE(51),
    [sym_true] = STATE(138),
    [sym_false] = STATE(138),
    [sym__not_sym] = STATE(52),
    [sym__forall_sym] = STATE(53),
    [sym__exists_sym] = STATE(54),
    [sym_comment] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [sym_variable] = ACTIONS(374),
    [sym__function_name] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(72),
    [anon_sym_E] = ACTIONS(74),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(86),
    [anon_sym_12] = ACTIONS(88),
  },
  [102] = {
    [sym__nested_block] = STATE(72),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_comment] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [103] = {
    [sym__nested_block] = STATE(139),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(139),
    [sym_comment] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [104] = {
    [sym__hypothesis_end] = ACTIONS(381),
    [sym_comment] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_variable] = ACTIONS(381),
    [sym__function_name] = ACTIONS(383),
    [anon_sym_A] = ACTIONS(383),
    [anon_sym_E] = ACTIONS(383),
    [anon_sym_T] = ACTIONS(383),
    [anon_sym_F] = ACTIONS(383),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_] = ACTIONS(381),
    [anon_sym_0] = ACTIONS(381),
    [anon_sym_2] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_3] = ACTIONS(381),
    [anon_sym_11] = ACTIONS(381),
    [anon_sym_12] = ACTIONS(381),
  },
  [105] = {
    [sym__hypothesis_end] = ACTIONS(385),
    [sym_comment] = ACTIONS(42),
  },
  [106] = {
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_COMMA_LF] = ACTIONS(389),
    [sym_comment] = ACTIONS(96),
  },
  [107] = {
    [anon_sym_LF] = ACTIONS(391),
    [sym_comment] = ACTIONS(96),
  },
  [108] = {
    [aux_sym_hypothesis_repeat1] = STATE(108),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_COMMA_LF] = ACTIONS(393),
    [sym_comment] = ACTIONS(96),
  },
  [109] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(396),
    [sym_comment] = ACTIONS(96),
  },
  [110] = {
    [aux_sym_annotation_repeat1] = STATE(143),
    [anon_sym_LF] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_COMMA_LF] = ACTIONS(398),
    [sym_comment] = ACTIONS(96),
  },
  [111] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(402),
    [anon_sym_AT] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_COMMA_LF] = ACTIONS(404),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(404),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_4] = ACTIONS(404),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(404),
    [anon_sym_EQ_GT] = ACTIONS(404),
    [anon_sym_6] = ACTIONS(404),
    [anon_sym_7] = ACTIONS(404),
    [anon_sym_LT_DASH_GT] = ACTIONS(404),
    [anon_sym_LT_EQ_GT] = ACTIONS(404),
    [anon_sym_8] = ACTIONS(404),
    [anon_sym_9] = ACTIONS(404),
    [anon_sym_10] = ACTIONS(404),
  },
  [112] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(406),
    [anon_sym_AT] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_COMMA_LF] = ACTIONS(408),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym__] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_v] = ACTIONS(408),
    [anon_sym_5] = ACTIONS(408),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [anon_sym_EQ_GT] = ACTIONS(408),
    [anon_sym_6] = ACTIONS(408),
    [anon_sym_7] = ACTIONS(408),
    [anon_sym_LT_DASH_GT] = ACTIONS(408),
    [anon_sym_LT_EQ_GT] = ACTIONS(408),
    [anon_sym_8] = ACTIONS(408),
    [anon_sym_9] = ACTIONS(408),
    [anon_sym_10] = ACTIONS(408),
  },
  [113] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_COMMA_LF] = ACTIONS(412),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym__] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_v] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_6] = ACTIONS(132),
    [anon_sym_7] = ACTIONS(132),
    [anon_sym_LT_DASH_GT] = ACTIONS(412),
    [anon_sym_LT_EQ_GT] = ACTIONS(412),
    [anon_sym_8] = ACTIONS(412),
    [anon_sym_9] = ACTIONS(412),
    [anon_sym_10] = ACTIONS(412),
  },
  [114] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(414),
    [anon_sym_AT] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_COMMA_LF] = ACTIONS(416),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym__] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_v] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_6] = ACTIONS(132),
    [anon_sym_7] = ACTIONS(132),
    [anon_sym_LT_DASH_GT] = ACTIONS(134),
    [anon_sym_LT_EQ_GT] = ACTIONS(134),
    [anon_sym_8] = ACTIONS(134),
    [anon_sym_9] = ACTIONS(134),
    [anon_sym_10] = ACTIONS(134),
  },
  [115] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [116] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_COMMA_LF] = ACTIONS(422),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(422),
    [anon_sym_AMP] = ACTIONS(422),
    [anon_sym_4] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_v] = ACTIONS(422),
    [anon_sym_5] = ACTIONS(422),
    [anon_sym_DASH_GT] = ACTIONS(422),
    [anon_sym_EQ_GT] = ACTIONS(422),
    [anon_sym_6] = ACTIONS(422),
    [anon_sym_7] = ACTIONS(422),
    [anon_sym_LT_DASH_GT] = ACTIONS(422),
    [anon_sym_LT_EQ_GT] = ACTIONS(422),
    [anon_sym_8] = ACTIONS(422),
    [anon_sym_9] = ACTIONS(422),
    [anon_sym_10] = ACTIONS(422),
  },
  [117] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_COMMA_LF] = ACTIONS(426),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_AMP] = ACTIONS(426),
    [anon_sym_4] = ACTIONS(426),
    [anon_sym__] = ACTIONS(426),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_v] = ACTIONS(426),
    [anon_sym_5] = ACTIONS(426),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [anon_sym_EQ_GT] = ACTIONS(426),
    [anon_sym_6] = ACTIONS(426),
    [anon_sym_7] = ACTIONS(426),
    [anon_sym_LT_DASH_GT] = ACTIONS(426),
    [anon_sym_LT_EQ_GT] = ACTIONS(426),
    [anon_sym_8] = ACTIONS(426),
    [anon_sym_9] = ACTIONS(426),
    [anon_sym_10] = ACTIONS(426),
  },
  [118] = {
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(42),
  },
  [119] = {
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(319),
  },
  [120] = {
    [aux_sym_vars_repeat1] = STATE(120),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(432),
    [sym_comment] = ACTIONS(42),
  },
  [121] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(435),
    [sym_comment] = ACTIONS(96),
  },
  [122] = {
    [aux_sym_annotation_repeat1] = STATE(147),
    [anon_sym_LF] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(329),
    [sym_comment] = ACTIONS(96),
  },
  [123] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(402),
    [anon_sym_AT] = ACTIONS(404),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(404),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_4] = ACTIONS(404),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(404),
    [anon_sym_EQ_GT] = ACTIONS(404),
    [anon_sym_6] = ACTIONS(404),
    [anon_sym_7] = ACTIONS(404),
    [anon_sym_LT_DASH_GT] = ACTIONS(404),
    [anon_sym_LT_EQ_GT] = ACTIONS(404),
    [anon_sym_8] = ACTIONS(404),
    [anon_sym_9] = ACTIONS(404),
    [anon_sym_10] = ACTIONS(404),
  },
  [124] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(406),
    [anon_sym_AT] = ACTIONS(408),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym__] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_v] = ACTIONS(408),
    [anon_sym_5] = ACTIONS(408),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [anon_sym_EQ_GT] = ACTIONS(408),
    [anon_sym_6] = ACTIONS(408),
    [anon_sym_7] = ACTIONS(408),
    [anon_sym_LT_DASH_GT] = ACTIONS(408),
    [anon_sym_LT_EQ_GT] = ACTIONS(408),
    [anon_sym_8] = ACTIONS(408),
    [anon_sym_9] = ACTIONS(408),
    [anon_sym_10] = ACTIONS(408),
  },
  [125] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(412),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_v] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(175),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_LT_DASH_GT] = ACTIONS(412),
    [anon_sym_LT_EQ_GT] = ACTIONS(412),
    [anon_sym_8] = ACTIONS(412),
    [anon_sym_9] = ACTIONS(412),
    [anon_sym_10] = ACTIONS(412),
  },
  [126] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(414),
    [anon_sym_AT] = ACTIONS(416),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_v] = ACTIONS(173),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(175),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [anon_sym_6] = ACTIONS(175),
    [anon_sym_7] = ACTIONS(175),
    [anon_sym_LT_DASH_GT] = ACTIONS(177),
    [anon_sym_LT_EQ_GT] = ACTIONS(177),
    [anon_sym_8] = ACTIONS(177),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(177),
  },
  [127] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(422),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(422),
    [anon_sym_AMP] = ACTIONS(422),
    [anon_sym_4] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_v] = ACTIONS(422),
    [anon_sym_5] = ACTIONS(422),
    [anon_sym_DASH_GT] = ACTIONS(422),
    [anon_sym_EQ_GT] = ACTIONS(422),
    [anon_sym_6] = ACTIONS(422),
    [anon_sym_7] = ACTIONS(422),
    [anon_sym_LT_DASH_GT] = ACTIONS(422),
    [anon_sym_LT_EQ_GT] = ACTIONS(422),
    [anon_sym_8] = ACTIONS(422),
    [anon_sym_9] = ACTIONS(422),
    [anon_sym_10] = ACTIONS(422),
  },
  [128] = {
    [sym__and_sym] = STATE(79),
    [sym__or_sym] = STATE(80),
    [sym__implies_sym] = STATE(81),
    [sym__iff_sym] = STATE(82),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(426),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_AMP] = ACTIONS(426),
    [anon_sym_4] = ACTIONS(426),
    [anon_sym__] = ACTIONS(426),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_v] = ACTIONS(426),
    [anon_sym_5] = ACTIONS(426),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [anon_sym_EQ_GT] = ACTIONS(426),
    [anon_sym_6] = ACTIONS(426),
    [anon_sym_7] = ACTIONS(426),
    [anon_sym_LT_DASH_GT] = ACTIONS(426),
    [anon_sym_LT_EQ_GT] = ACTIONS(426),
    [anon_sym_8] = ACTIONS(426),
    [anon_sym_9] = ACTIONS(426),
    [anon_sym_10] = ACTIONS(426),
  },
  [129] = {
    [sym__nested_block] = STATE(90),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [130] = {
    [sym__nested_block] = STATE(148),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(148),
    [sym_comment] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [131] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_4] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_v] = ACTIONS(358),
    [anon_sym_5] = ACTIONS(358),
    [anon_sym_DASH_GT] = ACTIONS(358),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_6] = ACTIONS(358),
    [anon_sym_7] = ACTIONS(358),
    [anon_sym_LT_DASH_GT] = ACTIONS(358),
    [anon_sym_LT_EQ_GT] = ACTIONS(358),
    [anon_sym_8] = ACTIONS(358),
    [anon_sym_9] = ACTIONS(358),
    [anon_sym_10] = ACTIONS(358),
  },
  [132] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_v] = ACTIONS(402),
    [anon_sym_5] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(402),
    [anon_sym_EQ_GT] = ACTIONS(402),
    [anon_sym_6] = ACTIONS(402),
    [anon_sym_7] = ACTIONS(402),
    [anon_sym_LT_DASH_GT] = ACTIONS(402),
    [anon_sym_LT_EQ_GT] = ACTIONS(402),
    [anon_sym_8] = ACTIONS(402),
    [anon_sym_9] = ACTIONS(402),
    [anon_sym_10] = ACTIONS(402),
  },
  [133] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(406),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_v] = ACTIONS(406),
    [anon_sym_5] = ACTIONS(406),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_6] = ACTIONS(406),
    [anon_sym_7] = ACTIONS(406),
    [anon_sym_LT_DASH_GT] = ACTIONS(406),
    [anon_sym_LT_EQ_GT] = ACTIONS(406),
    [anon_sym_8] = ACTIONS(406),
    [anon_sym_9] = ACTIONS(406),
    [anon_sym_10] = ACTIONS(406),
  },
  [134] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(410),
    [anon_sym_LT_EQ_GT] = ACTIONS(410),
    [anon_sym_8] = ACTIONS(410),
    [anon_sym_9] = ACTIONS(410),
    [anon_sym_10] = ACTIONS(410),
  },
  [135] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [136] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_4] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_v] = ACTIONS(207),
    [anon_sym_5] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(209),
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_6] = ACTIONS(209),
    [anon_sym_7] = ACTIONS(209),
    [anon_sym_LT_DASH_GT] = ACTIONS(211),
    [anon_sym_LT_EQ_GT] = ACTIONS(211),
    [anon_sym_8] = ACTIONS(211),
    [anon_sym_9] = ACTIONS(211),
    [anon_sym_10] = ACTIONS(211),
  },
  [137] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_CARET] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_4] = ACTIONS(420),
    [anon_sym__] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_v] = ACTIONS(420),
    [anon_sym_5] = ACTIONS(420),
    [anon_sym_DASH_GT] = ACTIONS(420),
    [anon_sym_EQ_GT] = ACTIONS(420),
    [anon_sym_6] = ACTIONS(420),
    [anon_sym_7] = ACTIONS(420),
    [anon_sym_LT_DASH_GT] = ACTIONS(420),
    [anon_sym_LT_EQ_GT] = ACTIONS(420),
    [anon_sym_8] = ACTIONS(420),
    [anon_sym_9] = ACTIONS(420),
    [anon_sym_10] = ACTIONS(420),
  },
  [138] = {
    [sym__and_sym] = STATE(94),
    [sym__or_sym] = STATE(95),
    [sym__implies_sym] = STATE(96),
    [sym__iff_sym] = STATE(97),
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_CARET] = ACTIONS(424),
    [anon_sym_AMP] = ACTIONS(424),
    [anon_sym_4] = ACTIONS(424),
    [anon_sym__] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_v] = ACTIONS(424),
    [anon_sym_5] = ACTIONS(424),
    [anon_sym_DASH_GT] = ACTIONS(424),
    [anon_sym_EQ_GT] = ACTIONS(424),
    [anon_sym_6] = ACTIONS(424),
    [anon_sym_7] = ACTIONS(424),
    [anon_sym_LT_DASH_GT] = ACTIONS(424),
    [anon_sym_LT_EQ_GT] = ACTIONS(424),
    [anon_sym_8] = ACTIONS(424),
    [anon_sym_9] = ACTIONS(424),
    [anon_sym_10] = ACTIONS(424),
  },
  [139] = {
    [sym__nested_block] = STATE(72),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [140] = {
    [sym__hypothesis_end] = ACTIONS(446),
    [sym_comment] = ACTIONS(446),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [sym_variable] = ACTIONS(446),
    [sym__function_name] = ACTIONS(448),
    [anon_sym_A] = ACTIONS(448),
    [anon_sym_E] = ACTIONS(448),
    [anon_sym_T] = ACTIONS(448),
    [anon_sym_F] = ACTIONS(448),
    [anon_sym_1] = ACTIONS(446),
    [anon_sym_] = ACTIONS(446),
    [anon_sym_0] = ACTIONS(446),
    [anon_sym_2] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_BANG] = ACTIONS(446),
    [anon_sym_TILDE] = ACTIONS(446),
    [anon_sym_3] = ACTIONS(446),
    [anon_sym_11] = ACTIONS(446),
    [anon_sym_12] = ACTIONS(446),
  },
  [141] = {
    [sym__hypothesis_end] = ACTIONS(450),
    [sym_comment] = ACTIONS(42),
  },
  [142] = {
    [anon_sym_GT] = ACTIONS(452),
    [sym_comment] = ACTIONS(42),
  },
  [143] = {
    [aux_sym_annotation_repeat1] = STATE(143),
    [anon_sym_LF] = ACTIONS(454),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_COMMA_LF] = ACTIONS(454),
    [sym_comment] = ACTIONS(96),
  },
  [144] = {
    [anon_sym_LF] = ACTIONS(462),
    [anon_sym_AT] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_COMMA_LF] = ACTIONS(464),
    [sym_comment] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(464),
    [anon_sym_AMP] = ACTIONS(464),
    [anon_sym_4] = ACTIONS(464),
    [anon_sym__] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_v] = ACTIONS(464),
    [anon_sym_5] = ACTIONS(464),
    [anon_sym_DASH_GT] = ACTIONS(464),
    [anon_sym_EQ_GT] = ACTIONS(464),
    [anon_sym_6] = ACTIONS(464),
    [anon_sym_7] = ACTIONS(464),
    [anon_sym_LT_DASH_GT] = ACTIONS(464),
    [anon_sym_LT_EQ_GT] = ACTIONS(464),
    [anon_sym_8] = ACTIONS(464),
    [anon_sym_9] = ACTIONS(464),
    [anon_sym_10] = ACTIONS(464),
  },
  [145] = {
    [sym_comment] = ACTIONS(42),
    [sym_variable] = ACTIONS(319),
  },
  [146] = {
    [anon_sym_GT] = ACTIONS(466),
    [sym_comment] = ACTIONS(42),
  },
  [147] = {
    [aux_sym_annotation_repeat1] = STATE(147),
    [anon_sym_LF] = ACTIONS(454),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(471),
    [sym_comment] = ACTIONS(96),
  },
  [148] = {
    [sym__nested_block] = STATE(90),
    [sym_expression] = STATE(29),
    [sym__term] = STATE(30),
    [sym_function] = STATE(30),
    [sym_not] = STATE(30),
    [sym_and] = STATE(30),
    [sym_or] = STATE(30),
    [sym_implies] = STATE(30),
    [sym_iff] = STATE(30),
    [sym_forall] = STATE(30),
    [sym_exists] = STATE(30),
    [sym__group] = STATE(30),
    [sym__universal_group] = STATE(30),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym__not_sym] = STATE(31),
    [sym__forall_sym] = STATE(32),
    [sym__exists_sym] = STATE(33),
    [aux_sym_block_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(49),
    [sym_variable] = ACTIONS(51),
    [sym__function_name] = ACTIONS(20),
    [anon_sym_A] = ACTIONS(22),
    [anon_sym_E] = ACTIONS(24),
    [anon_sym_T] = ACTIONS(26),
    [anon_sym_F] = ACTIONS(28),
    [anon_sym_1] = ACTIONS(30),
    [anon_sym_] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(32),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym_11] = ACTIONS(55),
    [anon_sym_12] = ACTIONS(57),
  },
  [149] = {
    [sym_comment] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_CARET] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_4] = ACTIONS(462),
    [anon_sym__] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_v] = ACTIONS(462),
    [anon_sym_5] = ACTIONS(462),
    [anon_sym_DASH_GT] = ACTIONS(462),
    [anon_sym_EQ_GT] = ACTIONS(462),
    [anon_sym_6] = ACTIONS(462),
    [anon_sym_7] = ACTIONS(462),
    [anon_sym_LT_DASH_GT] = ACTIONS(462),
    [anon_sym_LT_EQ_GT] = ACTIONS(462),
    [anon_sym_8] = ACTIONS(462),
    [anon_sym_9] = ACTIONS(462),
    [anon_sym_10] = ACTIONS(462),
  },
  [150] = {
    [sym__hypothesis_end] = ACTIONS(474),
    [sym_comment] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [sym_variable] = ACTIONS(474),
    [sym__function_name] = ACTIONS(476),
    [anon_sym_A] = ACTIONS(476),
    [anon_sym_E] = ACTIONS(476),
    [anon_sym_T] = ACTIONS(476),
    [anon_sym_F] = ACTIONS(476),
    [anon_sym_1] = ACTIONS(474),
    [anon_sym_] = ACTIONS(474),
    [anon_sym_0] = ACTIONS(474),
    [anon_sym_2] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_BANG] = ACTIONS(474),
    [anon_sym_TILDE] = ACTIONS(474),
    [anon_sym_3] = ACTIONS(474),
    [anon_sym_11] = ACTIONS(474),
    [anon_sym_12] = ACTIONS(474),
  },
  [151] = {
    [anon_sym_LF] = ACTIONS(478),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_COMMA_LF] = ACTIONS(478),
    [sym_comment] = ACTIONS(96),
  },
  [152] = {
    [anon_sym_LF] = ACTIONS(478),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(478),
    [sym_comment] = ACTIONS(96),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 2, .reusable = true}, SHIFT(24), SHIFT_EXTRA(),
  [12] = {.count = 1, .reusable = true}, SHIFT(4),
  [14] = {.count = 1, .reusable = true}, SHIFT(5),
  [16] = {.count = 1, .reusable = true}, SHIFT(6),
  [18] = {.count = 1, .reusable = true}, SHIFT(18),
  [20] = {.count = 1, .reusable = false}, SHIFT(7),
  [22] = {.count = 1, .reusable = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = false}, SHIFT(9),
  [26] = {.count = 1, .reusable = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = false}, SHIFT(11),
  [30] = {.count = 1, .reusable = true}, SHIFT(12),
  [32] = {.count = 1, .reusable = true}, SHIFT(13),
  [34] = {.count = 1, .reusable = true}, SHIFT(21),
  [36] = {.count = 1, .reusable = true}, SHIFT(22),
  [38] = {.count = 1, .reusable = true}, SHIFT(23),
  [40] = {.count = 1, .reusable = true}, SHIFT(25),
  [42] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true}, SHIFT(26),
  [46] = {.count = 2, .reusable = true}, SHIFT(34), SHIFT_EXTRA(),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(35),
  [61] = {.count = 2, .reusable = true}, SHIFT(39), SHIFT_EXTRA(),
  [64] = {.count = 1, .reusable = true}, SHIFT(40),
  [66] = {.count = 1, .reusable = true}, SHIFT(41),
  [68] = {.count = 1, .reusable = true}, SHIFT(49),
  [70] = {.count = 1, .reusable = false}, SHIFT(42),
  [72] = {.count = 1, .reusable = false}, SHIFT(43),
  [74] = {.count = 1, .reusable = false}, SHIFT(44),
  [76] = {.count = 1, .reusable = false}, SHIFT(45),
  [78] = {.count = 1, .reusable = false}, SHIFT(46),
  [80] = {.count = 1, .reusable = true}, SHIFT(47),
  [82] = {.count = 1, .reusable = true}, SHIFT(48),
  [84] = {.count = 1, .reusable = true}, SHIFT(52),
  [86] = {.count = 1, .reusable = true}, SHIFT(53),
  [88] = {.count = 1, .reusable = true}, SHIFT(54),
  [90] = {.count = 1, .reusable = true}, SHIFT(55),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [96] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym__forall_sym, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym__exists_sym, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [112] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [114] = {.count = 1, .reusable = true}, SHIFT(56),
  [116] = {.count = 1, .reusable = true}, SHIFT(58),
  [118] = {.count = 1, .reusable = false}, SHIFT(59),
  [120] = {.count = 1, .reusable = false}, SHIFT(60),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [124] = {.count = 1, .reusable = false}, SHIFT(62),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [128] = {.count = 1, .reusable = false}, SHIFT(64),
  [130] = {.count = 1, .reusable = false}, SHIFT(65),
  [132] = {.count = 1, .reusable = false}, SHIFT(66),
  [134] = {.count = 1, .reusable = false}, SHIFT(67),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [140] = {.count = 1, .reusable = false}, SHIFT(68),
  [142] = {.count = 1, .reusable = true}, SHIFT(68),
  [144] = {.count = 1, .reusable = true}, SHIFT(69),
  [146] = {.count = 1, .reusable = true}, SHIFT(70),
  [148] = {.count = 1, .reusable = true}, SHIFT(71),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [152] = {.count = 2, .reusable = true}, SHIFT(72), SHIFT_EXTRA(),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(73),
  [163] = {.count = 1, .reusable = true}, SHIFT(75),
  [165] = {.count = 1, .reusable = true}, SHIFT(76),
  [167] = {.count = 1, .reusable = true}, SHIFT(77),
  [169] = {.count = 1, .reusable = false}, SHIFT(78),
  [171] = {.count = 1, .reusable = false}, SHIFT(79),
  [173] = {.count = 1, .reusable = false}, SHIFT(80),
  [175] = {.count = 1, .reusable = false}, SHIFT(81),
  [177] = {.count = 1, .reusable = false}, SHIFT(82),
  [179] = {.count = 1, .reusable = true}, SHIFT(83),
  [181] = {.count = 1, .reusable = true}, SHIFT(84),
  [183] = {.count = 1, .reusable = true}, SHIFT(85),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [187] = {.count = 2, .reusable = true}, SHIFT(86), SHIFT_EXTRA(),
  [190] = {.count = 1, .reusable = true}, SHIFT(87),
  [192] = {.count = 1, .reusable = true}, SHIFT(88),
  [194] = {.count = 2, .reusable = true}, SHIFT(90), SHIFT_EXTRA(),
  [197] = {.count = 1, .reusable = true}, SHIFT(91),
  [199] = {.count = 1, .reusable = true}, SHIFT(92),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [203] = {.count = 1, .reusable = true}, SHIFT(93),
  [205] = {.count = 1, .reusable = true}, SHIFT(94),
  [207] = {.count = 1, .reusable = true}, SHIFT(95),
  [209] = {.count = 1, .reusable = true}, SHIFT(96),
  [211] = {.count = 1, .reusable = true}, SHIFT(97),
  [213] = {.count = 1, .reusable = true}, SHIFT(98),
  [215] = {.count = 1, .reusable = true}, SHIFT(99),
  [217] = {.count = 1, .reusable = true}, SHIFT(100),
  [219] = {.count = 1, .reusable = true}, SHIFT(101),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__universal_group, 2),
  [225] = {.count = 2, .reusable = true}, SHIFT(102), SHIFT_EXTRA(),
  [228] = {.count = 1, .reusable = true}, SHIFT(103),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(104),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_EXTRA(),
  [237] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2),
  [239] = {.count = 1, .reusable = true}, SHIFT(105),
  [241] = {.count = 1, .reusable = false}, SHIFT(107),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 1),
  [245] = {.count = 1, .reusable = false}, SHIFT(110),
  [247] = {.count = 1, .reusable = false}, SHIFT(109),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(111),
  [255] = {.count = 1, .reusable = true}, SHIFT(112),
  [257] = {.count = 1, .reusable = true}, SHIFT(113),
  [259] = {.count = 1, .reusable = true}, SHIFT(114),
  [261] = {.count = 1, .reusable = true}, SHIFT(115),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(116),
  [269] = {.count = 1, .reusable = true}, SHIFT(117),
  [271] = {.count = 3, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72), SHIFT_EXTRA(),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [293] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(118),
  [321] = {.count = 1, .reusable = true}, SHIFT(119),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 3),
  [327] = {.count = 1, .reusable = false}, SHIFT(122),
  [329] = {.count = 1, .reusable = false}, SHIFT(121),
  [331] = {.count = 1, .reusable = true}, SHIFT(123),
  [333] = {.count = 1, .reusable = true}, SHIFT(124),
  [335] = {.count = 1, .reusable = true}, SHIFT(125),
  [337] = {.count = 1, .reusable = true}, SHIFT(126),
  [339] = {.count = 1, .reusable = true}, SHIFT(127),
  [341] = {.count = 1, .reusable = true}, SHIFT(128),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__nested_block, 3),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym__nested_block, 3),
  [347] = {.count = 2, .reusable = true}, SHIFT(129), SHIFT_EXTRA(),
  [350] = {.count = 1, .reusable = true}, SHIFT(130),
  [352] = {.count = 3, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90), SHIFT_EXTRA(),
  [356] = {.count = 1, .reusable = true}, SHIFT(131),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [362] = {.count = 1, .reusable = true}, SHIFT(132),
  [364] = {.count = 1, .reusable = true}, SHIFT(133),
  [366] = {.count = 1, .reusable = true}, SHIFT(134),
  [368] = {.count = 1, .reusable = true}, SHIFT(135),
  [370] = {.count = 1, .reusable = true}, SHIFT(136),
  [372] = {.count = 1, .reusable = true}, SHIFT(137),
  [374] = {.count = 1, .reusable = true}, SHIFT(138),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [378] = {.count = 2, .reusable = true}, SHIFT(139), SHIFT_EXTRA(),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 3),
  [385] = {.count = 1, .reusable = true}, SHIFT(140),
  [387] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [389] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [391] = {.count = 1, .reusable = true}, SHIFT(141),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(60),
  [396] = {.count = 1, .reusable = false}, SHIFT(142),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [400] = {.count = 1, .reusable = false}, SHIFT(143),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_iff, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(144),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 3),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2), SHIFT_REPEAT(145),
  [435] = {.count = 1, .reusable = false}, SHIFT(146),
  [437] = {.count = 1, .reusable = false}, SHIFT(147),
  [439] = {.count = 2, .reusable = true}, SHIFT(148), SHIFT_EXTRA(),
  [442] = {.count = 1, .reusable = true}, SHIFT(149),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 4),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 4),
  [450] = {.count = 1, .reusable = true}, SHIFT(150),
  [452] = {.count = 1, .reusable = true}, SHIFT(151),
  [454] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(143),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(109),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [466] = {.count = 1, .reusable = true}, SHIFT(152),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(147),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(121),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 5),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 5),
  [478] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 3),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 234
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  anon_sym_DOLLAR = 50,
  sym_proof = 51,
  sym_block = 52,
  sym_guard = 53,
  sym_annotation = 54,
  sym_vars = 55,
  sym_hypothesis = 56,
  sym__nested_block = 57,
  sym_expression = 58,
  sym__term = 59,
  sym_function = 60,
  sym_not = 61,
  sym_and = 62,
  sym_or = 63,
  sym_implies = 64,
  sym_iff = 65,
  sym_forall = 66,
  sym_exists = 67,
  sym__group = 68,
  sym__universal_group = 69,
  sym_function_name = 70,
  sym__TF_func_name = 71,
  sym_true = 72,
  sym_false = 73,
  sym__not_sym = 74,
  sym__and_sym = 75,
  sym__or_sym = 76,
  sym__implies_sym = 77,
  sym__iff_sym = 78,
  sym__forall_sym = 79,
  sym__exists_sym = 80,
  aux_sym_block_repeat1 = 81,
  aux_sym_block_repeat2 = 82,
  aux_sym_annotation_repeat1 = 83,
  aux_sym_vars_repeat1 = 84,
  aux_sym_hypothesis_repeat1 = 85,
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
  [anon_sym_DOLLAR] = "$",
  [sym_proof] = "proof",
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
  [aux_sym_block_repeat2] = "block_repeat2",
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_proof] = {
    .visible = true,
    .named = true,
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
  [aux_sym_block_repeat2] = {
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
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
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
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8594)
        ADVANCE(41);
      if (lookahead == 8596)
        ADVANCE(42);
      if (lookahead == 8658)
        ADVANCE(43);
      if (lookahead == 8660)
        ADVANCE(44);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8743)
        ADVANCE(47);
      if (lookahead == 8744)
        ADVANCE(48);
      if (lookahead == 8801)
        ADVANCE(49);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
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
        ADVANCE(54);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      if (lookahead == '_')
        ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8594)
        ADVANCE(41);
      if (lookahead == 8596)
        ADVANCE(42);
      if (lookahead == 8658)
        ADVANCE(43);
      if (lookahead == 8660)
        ADVANCE(44);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8743)
        ADVANCE(47);
      if (lookahead == 8744)
        ADVANCE(48);
      if (lookahead == 8801)
        ADVANCE(49);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
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
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
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
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8594)
        ADVANCE(41);
      if (lookahead == 8596)
        ADVANCE(42);
      if (lookahead == 8658)
        ADVANCE(43);
      if (lookahead == 8660)
        ADVANCE(44);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8743)
        ADVANCE(47);
      if (lookahead == 8744)
        ADVANCE(48);
      if (lookahead == 8801)
        ADVANCE(49);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
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
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
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
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8594)
        ADVANCE(41);
      if (lookahead == 8596)
        ADVANCE(42);
      if (lookahead == 8658)
        ADVANCE(43);
      if (lookahead == 8660)
        ADVANCE(44);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8743)
        ADVANCE(47);
      if (lookahead == 8744)
        ADVANCE(48);
      if (lookahead == 8801)
        ADVANCE(49);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(24);
      if (lookahead == 'E')
        ADVANCE(26);
      if (lookahead == 'F')
        ADVANCE(27);
      if (lookahead == 'T')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(54);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == 'v')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(37);
      if (lookahead == 8594)
        ADVANCE(41);
      if (lookahead == 8596)
        ADVANCE(42);
      if (lookahead == 8658)
        ADVANCE(43);
      if (lookahead == 8660)
        ADVANCE(44);
      if (lookahead == 8743)
        ADVANCE(47);
      if (lookahead == 8744)
        ADVANCE(48);
      if (lookahead == 8801)
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(83);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(83);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(17);
      if (lookahead == '1')
        ADVANCE(18);
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
      if (lookahead == '{')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(39);
      if (lookahead == 172)
        ADVANCE(40);
      if (lookahead == 8704)
        ADVANCE(45);
      if (lookahead == 8707)
        ADVANCE(46);
      if (lookahead == 8868)
        ADVANCE(50);
      if (lookahead == 8869)
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 101:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(102);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      ADVANCE(76);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(102);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(76);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '>')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(111);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '>')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(114);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(76);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '!')
        ADVANCE(75);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '-')
        ADVANCE(79);
      if (lookahead == '.')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '0')
        ADVANCE(84);
      if (lookahead == '1')
        ADVANCE(85);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'E')
        ADVANCE(88);
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'T')
        ADVANCE(90);
      if (lookahead == 'v')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '~')
        ADVANCE(93);
      if (lookahead == 172)
        ADVANCE(94);
      if (lookahead == 8704)
        ADVANCE(95);
      if (lookahead == 8707)
        ADVANCE(96);
      if (lookahead == 8868)
        ADVANCE(97);
      if (lookahead == 8869)
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(114);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(76);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == ',')
        ADVANCE(78);
      if (lookahead == '/')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
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
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 66},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 71},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 52},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 52},
  [76] = {.lex_state = 52},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 70},
  [84] = {.lex_state = 100},
  [85] = {.lex_state = 101},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 52},
  [88] = {.lex_state = 52},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 52},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 52},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 52},
  [96] = {.lex_state = 52},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 71},
  [99] = {.lex_state = 57},
  [100] = {.lex_state = 100},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 103},
  [103] = {.lex_state = 52},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 52},
  [109] = {.lex_state = 52},
  [110] = {.lex_state = 52},
  [111] = {.lex_state = 71},
  [112] = {.lex_state = 72},
  [113] = {.lex_state = 72},
  [114] = {.lex_state = 57},
  [115] = {.lex_state = 52},
  [116] = {.lex_state = 52},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 52},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 72},
  [121] = {.lex_state = 52},
  [122] = {.lex_state = 52},
  [123] = {.lex_state = 68},
  [124] = {.lex_state = 52},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 52},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 52},
  [134] = {.lex_state = 52},
  [135] = {.lex_state = 52},
  [136] = {.lex_state = 57},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 74},
  [140] = {.lex_state = 67},
  [141] = {.lex_state = 67},
  [142] = {.lex_state = 67},
  [143] = {.lex_state = 67},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 67},
  [146] = {.lex_state = 67},
  [147] = {.lex_state = 52},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 55},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 106},
  [152] = {.lex_state = 101},
  [153] = {.lex_state = 70},
  [154] = {.lex_state = 70},
  [155] = {.lex_state = 70},
  [156] = {.lex_state = 70},
  [157] = {.lex_state = 70},
  [158] = {.lex_state = 70},
  [159] = {.lex_state = 57},
  [160] = {.lex_state = 113},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 52},
  [163] = {.lex_state = 52},
  [164] = {.lex_state = 52},
  [165] = {.lex_state = 57},
  [166] = {.lex_state = 52},
  [167] = {.lex_state = 52},
  [168] = {.lex_state = 71},
  [169] = {.lex_state = 106},
  [170] = {.lex_state = 103},
  [171] = {.lex_state = 57},
  [172] = {.lex_state = 57},
  [173] = {.lex_state = 57},
  [174] = {.lex_state = 57},
  [175] = {.lex_state = 57},
  [176] = {.lex_state = 57},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 72},
  [179] = {.lex_state = 72},
  [180] = {.lex_state = 72},
  [181] = {.lex_state = 72},
  [182] = {.lex_state = 72},
  [183] = {.lex_state = 72},
  [184] = {.lex_state = 72},
  [185] = {.lex_state = 72},
  [186] = {.lex_state = 52},
  [187] = {.lex_state = 57},
  [188] = {.lex_state = 115},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 52},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 52},
  [193] = {.lex_state = 57},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 52},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 117},
  [198] = {.lex_state = 74},
  [199] = {.lex_state = 57},
  [200] = {.lex_state = 68},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 117},
  [203] = {.lex_state = 101},
  [204] = {.lex_state = 106},
  [205] = {.lex_state = 113},
  [206] = {.lex_state = 57},
  [207] = {.lex_state = 57},
  [208] = {.lex_state = 57},
  [209] = {.lex_state = 57},
  [210] = {.lex_state = 57},
  [211] = {.lex_state = 57},
  [212] = {.lex_state = 117},
  [213] = {.lex_state = 103},
  [214] = {.lex_state = 71},
  [215] = {.lex_state = 72},
  [216] = {.lex_state = 106},
  [217] = {.lex_state = 115},
  [218] = {.lex_state = 57},
  [219] = {.lex_state = 57},
  [220] = {.lex_state = 57},
  [221] = {.lex_state = 57},
  [222] = {.lex_state = 57},
  [223] = {.lex_state = 57},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 74},
  [226] = {.lex_state = 101},
  [227] = {.lex_state = 117},
  [228] = {.lex_state = 113},
  [229] = {.lex_state = 103},
  [230] = {.lex_state = 117},
  [231] = {.lex_state = 115},
  [232] = {.lex_state = 113},
  [233] = {.lex_state = 115},
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
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_proof] = STATE(14),
    [sym_block] = STATE(15),
    [sym_guard] = STATE(24),
    [sym_hypothesis] = STATE(16),
    [sym__nested_block] = STATE(25),
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
    [aux_sym_block_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [2] = {
    [sym_vars] = STATE(28),
    [anon_sym_RBRACK] = ACTIONS(41),
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(43),
  },
  [3] = {
    [sym__nested_block] = STATE(35),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [4] = {
    [sym_block] = STATE(38),
    [sym_guard] = STATE(44),
    [sym_hypothesis] = STATE(39),
    [sym__nested_block] = STATE(45),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(40),
    [sym_function] = STATE(40),
    [sym_not] = STATE(40),
    [sym_and] = STATE(40),
    [sym_or] = STATE(40),
    [sym_implies] = STATE(40),
    [sym_iff] = STATE(40),
    [sym_forall] = STATE(40),
    [sym_exists] = STATE(40),
    [sym__group] = STATE(40),
    [sym__universal_group] = STATE(40),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(40),
    [sym_false] = STATE(40),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [aux_sym_block_repeat1] = STATE(44),
    [aux_sym_block_repeat2] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [5] = {
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
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(55),
    [sym_false] = STATE(55),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(71),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [6] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(61),
    [sym_false] = STATE(61),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(93),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_variable] = ACTIONS(97),
    [sym__function_name] = ACTIONS(97),
    [anon_sym_A] = ACTIONS(97),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(97),
    [anon_sym_F] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_] = ACTIONS(97),
    [anon_sym_0] = ACTIONS(97),
    [anon_sym_2] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_3] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_4] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(97),
    [anon_sym_5] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
    [anon_sym_9] = ACTIONS(97),
    [anon_sym_10] = ACTIONS(97),
    [anon_sym_11] = ACTIONS(97),
    [anon_sym_12] = ACTIONS(97),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_variable] = ACTIONS(101),
    [sym__function_name] = ACTIONS(97),
    [anon_sym_A] = ACTIONS(97),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(97),
    [anon_sym_F] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_] = ACTIONS(97),
    [anon_sym_0] = ACTIONS(97),
    [anon_sym_2] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_3] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_4] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(97),
    [anon_sym_5] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
    [anon_sym_9] = ACTIONS(97),
    [anon_sym_10] = ACTIONS(97),
    [anon_sym_11] = ACTIONS(97),
    [anon_sym_12] = ACTIONS(97),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_variable] = ACTIONS(104),
    [sym__function_name] = ACTIONS(97),
    [anon_sym_A] = ACTIONS(97),
    [anon_sym_E] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(97),
    [anon_sym_F] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_] = ACTIONS(97),
    [anon_sym_0] = ACTIONS(97),
    [anon_sym_2] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_3] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_4] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(97),
    [anon_sym_5] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
    [anon_sym_9] = ACTIONS(97),
    [anon_sym_10] = ACTIONS(97),
    [anon_sym_11] = ACTIONS(97),
    [anon_sym_12] = ACTIONS(97),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_COMMA_LF] = ACTIONS(109),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_variable] = ACTIONS(109),
    [sym__function_name] = ACTIONS(109),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_E] = ACTIONS(109),
    [anon_sym_T] = ACTIONS(109),
    [anon_sym_F] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_] = ACTIONS(109),
    [anon_sym_0] = ACTIONS(109),
    [anon_sym_2] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_3] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_4] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_v] = ACTIONS(109),
    [anon_sym_5] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_EQ_GT] = ACTIONS(109),
    [anon_sym_6] = ACTIONS(109),
    [anon_sym_7] = ACTIONS(109),
    [anon_sym_LT_DASH_GT] = ACTIONS(109),
    [anon_sym_LT_EQ_GT] = ACTIONS(109),
    [anon_sym_8] = ACTIONS(109),
    [anon_sym_9] = ACTIONS(109),
    [anon_sym_10] = ACTIONS(109),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(109),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COMMA_LF] = ACTIONS(116),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_variable] = ACTIONS(116),
    [sym__function_name] = ACTIONS(116),
    [anon_sym_A] = ACTIONS(116),
    [anon_sym_E] = ACTIONS(116),
    [anon_sym_T] = ACTIONS(116),
    [anon_sym_F] = ACTIONS(116),
    [anon_sym_1] = ACTIONS(116),
    [anon_sym_] = ACTIONS(116),
    [anon_sym_0] = ACTIONS(116),
    [anon_sym_2] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_3] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_4] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_v] = ACTIONS(116),
    [anon_sym_5] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_6] = ACTIONS(116),
    [anon_sym_7] = ACTIONS(116),
    [anon_sym_LT_DASH_GT] = ACTIONS(116),
    [anon_sym_LT_EQ_GT] = ACTIONS(116),
    [anon_sym_8] = ACTIONS(116),
    [anon_sym_9] = ACTIONS(116),
    [anon_sym_10] = ACTIONS(116),
    [anon_sym_11] = ACTIONS(116),
    [anon_sym_12] = ACTIONS(116),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_COMMA_LF] = ACTIONS(109),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_variable] = ACTIONS(109),
    [sym__function_name] = ACTIONS(109),
    [anon_sym_A] = ACTIONS(109),
    [anon_sym_E] = ACTIONS(109),
    [anon_sym_T] = ACTIONS(109),
    [anon_sym_F] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_] = ACTIONS(109),
    [anon_sym_0] = ACTIONS(109),
    [anon_sym_2] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_3] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_4] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_v] = ACTIONS(109),
    [anon_sym_5] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_EQ_GT] = ACTIONS(109),
    [anon_sym_6] = ACTIONS(109),
    [anon_sym_7] = ACTIONS(109),
    [anon_sym_LT_DASH_GT] = ACTIONS(109),
    [anon_sym_LT_EQ_GT] = ACTIONS(109),
    [anon_sym_8] = ACTIONS(109),
    [anon_sym_9] = ACTIONS(109),
    [anon_sym_10] = ACTIONS(109),
    [anon_sym_11] = ACTIONS(109),
    [anon_sym_12] = ACTIONS(109),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COMMA_LF] = ACTIONS(116),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [sym_variable] = ACTIONS(116),
    [sym__function_name] = ACTIONS(116),
    [anon_sym_A] = ACTIONS(116),
    [anon_sym_E] = ACTIONS(116),
    [anon_sym_T] = ACTIONS(116),
    [anon_sym_F] = ACTIONS(116),
    [anon_sym_1] = ACTIONS(116),
    [anon_sym_] = ACTIONS(116),
    [anon_sym_0] = ACTIONS(116),
    [anon_sym_2] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_3] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_4] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_v] = ACTIONS(116),
    [anon_sym_5] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_6] = ACTIONS(116),
    [anon_sym_7] = ACTIONS(116),
    [anon_sym_LT_DASH_GT] = ACTIONS(116),
    [anon_sym_LT_EQ_GT] = ACTIONS(116),
    [anon_sym_8] = ACTIONS(116),
    [anon_sym_9] = ACTIONS(116),
    [anon_sym_10] = ACTIONS(116),
    [anon_sym_11] = ACTIONS(116),
    [anon_sym_12] = ACTIONS(116),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(11),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(11),
  },
  [16] = {
    [sym__nested_block] = STATE(35),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(35),
    [sym__hypothesis_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [17] = {
    [aux_sym_hypothesis_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COMMA_LF] = ACTIONS(133),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [sym_variable] = ACTIONS(135),
    [sym__function_name] = ACTIONS(135),
    [anon_sym_A] = ACTIONS(135),
    [anon_sym_E] = ACTIONS(135),
    [anon_sym_T] = ACTIONS(135),
    [anon_sym_F] = ACTIONS(135),
    [anon_sym_1] = ACTIONS(135),
    [anon_sym_] = ACTIONS(135),
    [anon_sym_0] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_3] = ACTIONS(135),
    [anon_sym_11] = ACTIONS(135),
    [anon_sym_12] = ACTIONS(135),
  },
  [18] = {
    [sym_annotation] = STATE(68),
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_COMMA_LF] = ACTIONS(141),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(141),
    [anon_sym_A] = ACTIONS(141),
    [anon_sym_E] = ACTIONS(141),
    [anon_sym_T] = ACTIONS(141),
    [anon_sym_F] = ACTIONS(141),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_v] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_LT_DASH_GT] = ACTIONS(149),
    [anon_sym_LT_EQ_GT] = ACTIONS(149),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(141),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_COMMA_LF] = ACTIONS(153),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(153),
    [sym_variable] = ACTIONS(153),
    [sym__function_name] = ACTIONS(153),
    [anon_sym_A] = ACTIONS(153),
    [anon_sym_E] = ACTIONS(153),
    [anon_sym_T] = ACTIONS(153),
    [anon_sym_F] = ACTIONS(153),
    [anon_sym_1] = ACTIONS(153),
    [anon_sym_] = ACTIONS(153),
    [anon_sym_0] = ACTIONS(153),
    [anon_sym_2] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_3] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(153),
    [anon_sym_4] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_v] = ACTIONS(153),
    [anon_sym_5] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_LT_DASH_GT] = ACTIONS(153),
    [anon_sym_LT_EQ_GT] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(153),
    [anon_sym_11] = ACTIONS(153),
    [anon_sym_12] = ACTIONS(153),
  },
  [20] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [21] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(159),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [22] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(161),
  },
  [23] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(163),
  },
  [24] = {
    [sym_guard] = STATE(78),
    [sym_hypothesis] = STATE(77),
    [sym__nested_block] = STATE(35),
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
    [aux_sym_block_repeat1] = STATE(78),
    [aux_sym_block_repeat2] = STATE(35),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [25] = {
    [sym__nested_block] = STATE(79),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [26] = {
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym__hypothesis_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [sym_variable] = ACTIONS(167),
    [sym__function_name] = ACTIONS(169),
    [anon_sym_A] = ACTIONS(169),
    [anon_sym_E] = ACTIONS(169),
    [anon_sym_T] = ACTIONS(169),
    [anon_sym_F] = ACTIONS(169),
    [anon_sym_1] = ACTIONS(167),
    [anon_sym_] = ACTIONS(167),
    [anon_sym_0] = ACTIONS(167),
    [anon_sym_2] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_3] = ACTIONS(167),
    [anon_sym_11] = ACTIONS(167),
    [anon_sym_12] = ACTIONS(167),
  },
  [27] = {
    [aux_sym_vars_repeat1] = STATE(81),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(173),
    [sym_comment] = ACTIONS(11),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_comment] = ACTIONS(11),
  },
  [29] = {
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
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(177),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(179),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [sym_variable] = ACTIONS(135),
    [sym__function_name] = ACTIONS(135),
    [anon_sym_A] = ACTIONS(135),
    [anon_sym_E] = ACTIONS(135),
    [anon_sym_T] = ACTIONS(135),
    [anon_sym_F] = ACTIONS(135),
    [anon_sym_1] = ACTIONS(135),
    [anon_sym_] = ACTIONS(135),
    [anon_sym_0] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_3] = ACTIONS(135),
    [anon_sym_11] = ACTIONS(135),
    [anon_sym_12] = ACTIONS(135),
  },
  [31] = {
    [sym_annotation] = STATE(68),
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(181),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(141),
    [anon_sym_A] = ACTIONS(141),
    [anon_sym_E] = ACTIONS(141),
    [anon_sym_T] = ACTIONS(141),
    [anon_sym_F] = ACTIONS(141),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_v] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_EQ_GT] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_LT_DASH_GT] = ACTIONS(189),
    [anon_sym_LT_EQ_GT] = ACTIONS(189),
    [anon_sym_8] = ACTIONS(189),
    [anon_sym_9] = ACTIONS(189),
    [anon_sym_10] = ACTIONS(189),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(141),
  },
  [32] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(191),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [33] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(193),
  },
  [34] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(195),
  },
  [35] = {
    [sym__nested_block] = STATE(79),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [36] = {
    [sym__nested_block] = STATE(98),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(98),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [37] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(99),
    [sym_false] = STATE(99),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(209),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [38] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(211),
  },
  [39] = {
    [sym__nested_block] = STATE(98),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(98),
    [sym__hypothesis_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [40] = {
    [sym_annotation] = STATE(68),
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_COMMA_LF] = ACTIONS(141),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(141),
    [anon_sym_A] = ACTIONS(141),
    [anon_sym_E] = ACTIONS(141),
    [anon_sym_T] = ACTIONS(141),
    [anon_sym_F] = ACTIONS(141),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(217),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_v] = ACTIONS(219),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(221),
    [anon_sym_EQ_GT] = ACTIONS(221),
    [anon_sym_6] = ACTIONS(221),
    [anon_sym_7] = ACTIONS(221),
    [anon_sym_LT_DASH_GT] = ACTIONS(223),
    [anon_sym_LT_EQ_GT] = ACTIONS(223),
    [anon_sym_8] = ACTIONS(223),
    [anon_sym_9] = ACTIONS(223),
    [anon_sym_10] = ACTIONS(223),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(141),
  },
  [41] = {
    [sym__term] = STATE(107),
    [sym_function] = STATE(107),
    [sym_not] = STATE(107),
    [sym_and] = STATE(107),
    [sym_or] = STATE(107),
    [sym_implies] = STATE(107),
    [sym_iff] = STATE(107),
    [sym_forall] = STATE(107),
    [sym_exists] = STATE(107),
    [sym__group] = STATE(107),
    [sym__universal_group] = STATE(107),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(107),
    [sym_false] = STATE(107),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(225),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [42] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(227),
  },
  [43] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(229),
  },
  [44] = {
    [sym_guard] = STATE(78),
    [sym_hypothesis] = STATE(110),
    [sym__nested_block] = STATE(98),
    [sym_expression] = STATE(17),
    [sym__term] = STATE(40),
    [sym_function] = STATE(40),
    [sym_not] = STATE(40),
    [sym_and] = STATE(40),
    [sym_or] = STATE(40),
    [sym_implies] = STATE(40),
    [sym_iff] = STATE(40),
    [sym_forall] = STATE(40),
    [sym_exists] = STATE(40),
    [sym__group] = STATE(40),
    [sym__universal_group] = STATE(40),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(40),
    [sym_false] = STATE(40),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [aux_sym_block_repeat1] = STATE(78),
    [aux_sym_block_repeat2] = STATE(98),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(59),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [45] = {
    [sym__nested_block] = STATE(111),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [46] = {
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
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(112),
    [sym_false] = STATE(112),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(231),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [47] = {
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
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(113),
    [sym_false] = STATE(113),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(233),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [48] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_v] = ACTIONS(95),
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
  [49] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_variable] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_v] = ACTIONS(97),
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
  [50] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_variable] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_4] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_v] = ACTIONS(97),
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
  [51] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_4] = ACTIONS(107),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_v] = ACTIONS(107),
    [anon_sym_5] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_6] = ACTIONS(107),
    [anon_sym_7] = ACTIONS(107),
    [anon_sym_LT_DASH_GT] = ACTIONS(107),
    [anon_sym_LT_EQ_GT] = ACTIONS(107),
    [anon_sym_8] = ACTIONS(107),
    [anon_sym_9] = ACTIONS(107),
    [anon_sym_10] = ACTIONS(107),
  },
  [52] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_4] = ACTIONS(114),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_v] = ACTIONS(114),
    [anon_sym_5] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(114),
    [anon_sym_6] = ACTIONS(114),
    [anon_sym_7] = ACTIONS(114),
    [anon_sym_LT_DASH_GT] = ACTIONS(114),
    [anon_sym_LT_EQ_GT] = ACTIONS(114),
    [anon_sym_8] = ACTIONS(114),
    [anon_sym_9] = ACTIONS(114),
    [anon_sym_10] = ACTIONS(114),
  },
  [53] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_4] = ACTIONS(107),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_v] = ACTIONS(107),
    [anon_sym_5] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_6] = ACTIONS(107),
    [anon_sym_7] = ACTIONS(107),
    [anon_sym_LT_DASH_GT] = ACTIONS(107),
    [anon_sym_LT_EQ_GT] = ACTIONS(107),
    [anon_sym_8] = ACTIONS(107),
    [anon_sym_9] = ACTIONS(107),
    [anon_sym_10] = ACTIONS(107),
  },
  [54] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_4] = ACTIONS(114),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_v] = ACTIONS(114),
    [anon_sym_5] = ACTIONS(114),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(114),
    [anon_sym_6] = ACTIONS(114),
    [anon_sym_7] = ACTIONS(114),
    [anon_sym_LT_DASH_GT] = ACTIONS(114),
    [anon_sym_LT_EQ_GT] = ACTIONS(114),
    [anon_sym_8] = ACTIONS(114),
    [anon_sym_9] = ACTIONS(114),
    [anon_sym_10] = ACTIONS(114),
  },
  [55] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [56] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_CARET] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(151),
    [anon_sym_4] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_v] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(151),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_LT_DASH_GT] = ACTIONS(151),
    [anon_sym_LT_EQ_GT] = ACTIONS(151),
    [anon_sym_8] = ACTIONS(151),
    [anon_sym_9] = ACTIONS(151),
    [anon_sym_10] = ACTIONS(151),
  },
  [57] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(251),
  },
  [58] = {
    [sym__term] = STATE(120),
    [sym_function] = STATE(120),
    [sym_not] = STATE(120),
    [sym_and] = STATE(120),
    [sym_or] = STATE(120),
    [sym_implies] = STATE(120),
    [sym_iff] = STATE(120),
    [sym_forall] = STATE(120),
    [sym_exists] = STATE(120),
    [sym__group] = STATE(120),
    [sym__universal_group] = STATE(120),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(120),
    [sym_false] = STATE(120),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(253),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [59] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(255),
  },
  [60] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(257),
  },
  [61] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_LF] = ACTIONS(261),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym_variable] = ACTIONS(261),
    [sym__function_name] = ACTIONS(261),
    [anon_sym_A] = ACTIONS(261),
    [anon_sym_E] = ACTIONS(261),
    [anon_sym_T] = ACTIONS(261),
    [anon_sym_F] = ACTIONS(261),
    [anon_sym_1] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_0] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_v] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_LT_DASH_GT] = ACTIONS(149),
    [anon_sym_LT_EQ_GT] = ACTIONS(149),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(261),
    [anon_sym_12] = ACTIONS(261),
  },
  [62] = {
    [sym__nested_block] = STATE(123),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(123),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__hypothesis_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [sym_variable] = ACTIONS(263),
    [sym__function_name] = ACTIONS(267),
    [anon_sym_A] = ACTIONS(267),
    [anon_sym_E] = ACTIONS(267),
    [anon_sym_T] = ACTIONS(267),
    [anon_sym_F] = ACTIONS(267),
    [anon_sym_1] = ACTIONS(263),
    [anon_sym_] = ACTIONS(263),
    [anon_sym_0] = ACTIONS(263),
    [anon_sym_2] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_11] = ACTIONS(263),
    [anon_sym_12] = ACTIONS(263),
  },
  [64] = {
    [anon_sym_LF] = ACTIONS(269),
    [sym_comment] = ACTIONS(99),
  },
  [65] = {
    [sym_expression] = STATE(131),
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(132),
    [sym_false] = STATE(132),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(273),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [66] = {
    [aux_sym_hypothesis_repeat1] = STATE(137),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_COMMA_LF] = ACTIONS(133),
    [sym_comment] = ACTIONS(99),
  },
  [67] = {
    [aux_sym_annotation_repeat1] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_COMMA_LF] = ACTIONS(293),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_variable] = ACTIONS(293),
    [sym__function_name] = ACTIONS(293),
    [anon_sym_A] = ACTIONS(293),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(293),
    [anon_sym_F] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_0] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_12] = ACTIONS(293),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_COMMA_LF] = ACTIONS(301),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(301),
    [sym_variable] = ACTIONS(301),
    [sym__function_name] = ACTIONS(301),
    [anon_sym_A] = ACTIONS(301),
    [anon_sym_E] = ACTIONS(301),
    [anon_sym_T] = ACTIONS(301),
    [anon_sym_F] = ACTIONS(301),
    [anon_sym_1] = ACTIONS(301),
    [anon_sym_] = ACTIONS(301),
    [anon_sym_0] = ACTIONS(301),
    [anon_sym_2] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_BANG] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_3] = ACTIONS(301),
    [anon_sym_11] = ACTIONS(301),
    [anon_sym_12] = ACTIONS(301),
  },
  [69] = {
    [sym__term] = STATE(140),
    [sym_function] = STATE(140),
    [sym_not] = STATE(140),
    [sym_and] = STATE(140),
    [sym_or] = STATE(140),
    [sym_implies] = STATE(140),
    [sym_iff] = STATE(140),
    [sym_forall] = STATE(140),
    [sym_exists] = STATE(140),
    [sym__group] = STATE(140),
    [sym__universal_group] = STATE(140),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(140),
    [sym_false] = STATE(140),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(303),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [70] = {
    [sym__term] = STATE(141),
    [sym_function] = STATE(141),
    [sym_not] = STATE(141),
    [sym_and] = STATE(141),
    [sym_or] = STATE(141),
    [sym_implies] = STATE(141),
    [sym_iff] = STATE(141),
    [sym_forall] = STATE(141),
    [sym_exists] = STATE(141),
    [sym__group] = STATE(141),
    [sym__universal_group] = STATE(141),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(141),
    [sym_false] = STATE(141),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(305),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [71] = {
    [sym__term] = STATE(142),
    [sym_function] = STATE(142),
    [sym_not] = STATE(142),
    [sym_and] = STATE(142),
    [sym_or] = STATE(142),
    [sym_implies] = STATE(142),
    [sym_iff] = STATE(142),
    [sym_forall] = STATE(142),
    [sym_exists] = STATE(142),
    [sym__group] = STATE(142),
    [sym__universal_group] = STATE(142),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(142),
    [sym_false] = STATE(142),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(307),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [72] = {
    [sym__term] = STATE(143),
    [sym_function] = STATE(143),
    [sym_not] = STATE(143),
    [sym_and] = STATE(143),
    [sym_or] = STATE(143),
    [sym_implies] = STATE(143),
    [sym_iff] = STATE(143),
    [sym_forall] = STATE(143),
    [sym_exists] = STATE(143),
    [sym__group] = STATE(143),
    [sym__universal_group] = STATE(143),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(143),
    [sym_false] = STATE(143),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(309),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [73] = {
    [sym__term] = STATE(144),
    [sym_function] = STATE(144),
    [sym_not] = STATE(144),
    [sym_and] = STATE(144),
    [sym_or] = STATE(144),
    [sym_implies] = STATE(144),
    [sym_iff] = STATE(144),
    [sym_forall] = STATE(144),
    [sym_exists] = STATE(144),
    [sym__group] = STATE(144),
    [sym__universal_group] = STATE(144),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(144),
    [sym_false] = STATE(144),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(311),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [74] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COMMA_LF] = ACTIONS(315),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [sym__function_name] = ACTIONS(315),
    [anon_sym_A] = ACTIONS(315),
    [anon_sym_E] = ACTIONS(315),
    [anon_sym_T] = ACTIONS(315),
    [anon_sym_F] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_0] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
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
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_12] = ACTIONS(315),
  },
  [75] = {
    [sym__term] = STATE(145),
    [sym_function] = STATE(145),
    [sym_not] = STATE(145),
    [sym_and] = STATE(145),
    [sym_or] = STATE(145),
    [sym_implies] = STATE(145),
    [sym_iff] = STATE(145),
    [sym_forall] = STATE(145),
    [sym_exists] = STATE(145),
    [sym__group] = STATE(145),
    [sym__universal_group] = STATE(145),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(145),
    [sym_false] = STATE(145),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(317),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [76] = {
    [sym__term] = STATE(146),
    [sym_function] = STATE(146),
    [sym_not] = STATE(146),
    [sym_and] = STATE(146),
    [sym_or] = STATE(146),
    [sym_implies] = STATE(146),
    [sym_iff] = STATE(146),
    [sym_forall] = STATE(146),
    [sym_exists] = STATE(146),
    [sym__group] = STATE(146),
    [sym__universal_group] = STATE(146),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(146),
    [sym_false] = STATE(146),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(319),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_3] = ACTIONS(35),
    [anon_sym_11] = ACTIONS(37),
    [anon_sym_12] = ACTIONS(39),
  },
  [77] = {
    [sym__nested_block] = STATE(123),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(123),
    [sym__hypothesis_end] = ACTIONS(321),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [78] = {
    [sym_guard] = STATE(78),
    [aux_sym_block_repeat1] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym__hypothesis_end] = ACTIONS(326),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [sym_variable] = ACTIONS(326),
    [sym__function_name] = ACTIONS(328),
    [anon_sym_A] = ACTIONS(328),
    [anon_sym_E] = ACTIONS(328),
    [anon_sym_T] = ACTIONS(328),
    [anon_sym_F] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(326),
    [anon_sym_] = ACTIONS(326),
    [anon_sym_0] = ACTIONS(326),
    [anon_sym_2] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_3] = ACTIONS(326),
    [anon_sym_11] = ACTIONS(326),
    [anon_sym_12] = ACTIONS(326),
  },
  [79] = {
    [sym__nested_block] = STATE(79),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_variable] = ACTIONS(339),
    [sym__function_name] = ACTIONS(342),
    [anon_sym_A] = ACTIONS(345),
    [anon_sym_E] = ACTIONS(348),
    [anon_sym_T] = ACTIONS(351),
    [anon_sym_F] = ACTIONS(354),
    [anon_sym_1] = ACTIONS(357),
    [anon_sym_] = ACTIONS(357),
    [anon_sym_0] = ACTIONS(360),
    [anon_sym_2] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_BANG] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(363),
    [anon_sym_3] = ACTIONS(363),
    [anon_sym_11] = ACTIONS(366),
    [anon_sym_12] = ACTIONS(369),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(374),
  },
  [81] = {
    [aux_sym_vars_repeat1] = STATE(150),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(376),
    [sym_comment] = ACTIONS(11),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(378),
    [sym__hypothesis_end] = ACTIONS(378),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [sym_variable] = ACTIONS(378),
    [sym__function_name] = ACTIONS(380),
    [anon_sym_A] = ACTIONS(380),
    [anon_sym_E] = ACTIONS(380),
    [anon_sym_T] = ACTIONS(380),
    [anon_sym_F] = ACTIONS(380),
    [anon_sym_1] = ACTIONS(378),
    [anon_sym_] = ACTIONS(378),
    [anon_sym_0] = ACTIONS(378),
    [anon_sym_2] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_BANG] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_3] = ACTIONS(378),
    [anon_sym_11] = ACTIONS(378),
    [anon_sym_12] = ACTIONS(378),
  },
  [83] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(261),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym_variable] = ACTIONS(261),
    [sym__function_name] = ACTIONS(261),
    [anon_sym_A] = ACTIONS(261),
    [anon_sym_E] = ACTIONS(261),
    [anon_sym_T] = ACTIONS(261),
    [anon_sym_F] = ACTIONS(261),
    [anon_sym_1] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_0] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_v] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_EQ_GT] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_LT_DASH_GT] = ACTIONS(189),
    [anon_sym_LT_EQ_GT] = ACTIONS(189),
    [anon_sym_8] = ACTIONS(189),
    [anon_sym_9] = ACTIONS(189),
    [anon_sym_10] = ACTIONS(189),
    [anon_sym_11] = ACTIONS(261),
    [anon_sym_12] = ACTIONS(261),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [sym_variable] = ACTIONS(263),
    [sym__function_name] = ACTIONS(267),
    [anon_sym_A] = ACTIONS(267),
    [anon_sym_E] = ACTIONS(267),
    [anon_sym_T] = ACTIONS(267),
    [anon_sym_F] = ACTIONS(267),
    [anon_sym_1] = ACTIONS(263),
    [anon_sym_] = ACTIONS(263),
    [anon_sym_0] = ACTIONS(263),
    [anon_sym_2] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_3] = ACTIONS(263),
    [anon_sym_11] = ACTIONS(263),
    [anon_sym_12] = ACTIONS(263),
  },
  [85] = {
    [aux_sym_annotation_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(384),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_variable] = ACTIONS(293),
    [sym__function_name] = ACTIONS(293),
    [anon_sym_A] = ACTIONS(293),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(293),
    [anon_sym_F] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_0] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_12] = ACTIONS(293),
  },
  [86] = {
    [sym__term] = STATE(153),
    [sym_function] = STATE(153),
    [sym_not] = STATE(153),
    [sym_and] = STATE(153),
    [sym_or] = STATE(153),
    [sym_implies] = STATE(153),
    [sym_iff] = STATE(153),
    [sym_forall] = STATE(153),
    [sym_exists] = STATE(153),
    [sym__group] = STATE(153),
    [sym__universal_group] = STATE(153),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(153),
    [sym_false] = STATE(153),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(386),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [87] = {
    [sym__term] = STATE(154),
    [sym_function] = STATE(154),
    [sym_not] = STATE(154),
    [sym_and] = STATE(154),
    [sym_or] = STATE(154),
    [sym_implies] = STATE(154),
    [sym_iff] = STATE(154),
    [sym_forall] = STATE(154),
    [sym_exists] = STATE(154),
    [sym__group] = STATE(154),
    [sym__universal_group] = STATE(154),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(154),
    [sym_false] = STATE(154),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(388),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [88] = {
    [sym__term] = STATE(155),
    [sym_function] = STATE(155),
    [sym_not] = STATE(155),
    [sym_and] = STATE(155),
    [sym_or] = STATE(155),
    [sym_implies] = STATE(155),
    [sym_iff] = STATE(155),
    [sym_forall] = STATE(155),
    [sym_exists] = STATE(155),
    [sym__group] = STATE(155),
    [sym__universal_group] = STATE(155),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(155),
    [sym_false] = STATE(155),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(390),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [89] = {
    [sym__term] = STATE(156),
    [sym_function] = STATE(156),
    [sym_not] = STATE(156),
    [sym_and] = STATE(156),
    [sym_or] = STATE(156),
    [sym_implies] = STATE(156),
    [sym_iff] = STATE(156),
    [sym_forall] = STATE(156),
    [sym_exists] = STATE(156),
    [sym__group] = STATE(156),
    [sym__universal_group] = STATE(156),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(156),
    [sym_false] = STATE(156),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(392),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [90] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [sym__function_name] = ACTIONS(315),
    [anon_sym_A] = ACTIONS(315),
    [anon_sym_E] = ACTIONS(315),
    [anon_sym_T] = ACTIONS(315),
    [anon_sym_F] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_0] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
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
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_12] = ACTIONS(315),
  },
  [91] = {
    [sym__term] = STATE(157),
    [sym_function] = STATE(157),
    [sym_not] = STATE(157),
    [sym_and] = STATE(157),
    [sym_or] = STATE(157),
    [sym_implies] = STATE(157),
    [sym_iff] = STATE(157),
    [sym_forall] = STATE(157),
    [sym_exists] = STATE(157),
    [sym__group] = STATE(157),
    [sym__universal_group] = STATE(157),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(157),
    [sym_false] = STATE(157),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(394),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [92] = {
    [sym__term] = STATE(158),
    [sym_function] = STATE(158),
    [sym_not] = STATE(158),
    [sym_and] = STATE(158),
    [sym_or] = STATE(158),
    [sym_implies] = STATE(158),
    [sym_iff] = STATE(158),
    [sym_forall] = STATE(158),
    [sym_exists] = STATE(158),
    [sym__group] = STATE(158),
    [sym__universal_group] = STATE(158),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(158),
    [sym_false] = STATE(158),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(396),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [93] = {
    [sym__term] = STATE(159),
    [sym_function] = STATE(159),
    [sym_not] = STATE(159),
    [sym_and] = STATE(159),
    [sym_or] = STATE(159),
    [sym_implies] = STATE(159),
    [sym_iff] = STATE(159),
    [sym_forall] = STATE(159),
    [sym_exists] = STATE(159),
    [sym__group] = STATE(159),
    [sym__universal_group] = STATE(159),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(159),
    [sym_false] = STATE(159),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(398),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [94] = {
    [sym_annotation] = STATE(68),
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(400),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [sym_variable] = ACTIONS(141),
    [sym__function_name] = ACTIONS(141),
    [anon_sym_A] = ACTIONS(141),
    [anon_sym_E] = ACTIONS(141),
    [anon_sym_T] = ACTIONS(141),
    [anon_sym_F] = ACTIONS(141),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_6] = ACTIONS(406),
    [anon_sym_7] = ACTIONS(406),
    [anon_sym_LT_DASH_GT] = ACTIONS(408),
    [anon_sym_LT_EQ_GT] = ACTIONS(408),
    [anon_sym_8] = ACTIONS(408),
    [anon_sym_9] = ACTIONS(408),
    [anon_sym_10] = ACTIONS(408),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(141),
  },
  [95] = {
    [sym__term] = STATE(165),
    [sym_function] = STATE(165),
    [sym_not] = STATE(165),
    [sym_and] = STATE(165),
    [sym_or] = STATE(165),
    [sym_implies] = STATE(165),
    [sym_iff] = STATE(165),
    [sym_forall] = STATE(165),
    [sym_exists] = STATE(165),
    [sym__group] = STATE(165),
    [sym__universal_group] = STATE(165),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(165),
    [sym_false] = STATE(165),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(410),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [96] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(412),
  },
  [97] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(414),
  },
  [98] = {
    [sym__nested_block] = STATE(111),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [99] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_LF] = ACTIONS(261),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym_variable] = ACTIONS(261),
    [sym__function_name] = ACTIONS(261),
    [anon_sym_A] = ACTIONS(261),
    [anon_sym_E] = ACTIONS(261),
    [anon_sym_T] = ACTIONS(261),
    [anon_sym_F] = ACTIONS(261),
    [anon_sym_1] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_0] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(217),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_v] = ACTIONS(219),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(221),
    [anon_sym_EQ_GT] = ACTIONS(221),
    [anon_sym_6] = ACTIONS(221),
    [anon_sym_7] = ACTIONS(221),
    [anon_sym_LT_DASH_GT] = ACTIONS(223),
    [anon_sym_LT_EQ_GT] = ACTIONS(223),
    [anon_sym_8] = ACTIONS(223),
    [anon_sym_9] = ACTIONS(223),
    [anon_sym_10] = ACTIONS(223),
    [anon_sym_11] = ACTIONS(261),
    [anon_sym_12] = ACTIONS(261),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_variable] = ACTIONS(416),
    [sym__function_name] = ACTIONS(418),
    [anon_sym_A] = ACTIONS(418),
    [anon_sym_E] = ACTIONS(418),
    [anon_sym_T] = ACTIONS(418),
    [anon_sym_F] = ACTIONS(418),
    [anon_sym_1] = ACTIONS(416),
    [anon_sym_] = ACTIONS(416),
    [anon_sym_0] = ACTIONS(416),
    [anon_sym_2] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_BANG] = ACTIONS(416),
    [anon_sym_TILDE] = ACTIONS(416),
    [anon_sym_3] = ACTIONS(416),
    [anon_sym_11] = ACTIONS(416),
    [anon_sym_12] = ACTIONS(416),
  },
  [101] = {
    [sym__nested_block] = STATE(168),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(168),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [102] = {
    [aux_sym_annotation_repeat1] = STATE(170),
    [anon_sym_LF] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_COMMA_LF] = ACTIONS(293),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_variable] = ACTIONS(293),
    [sym__function_name] = ACTIONS(293),
    [anon_sym_A] = ACTIONS(293),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(293),
    [anon_sym_F] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_0] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_12] = ACTIONS(293),
  },
  [103] = {
    [sym__term] = STATE(171),
    [sym_function] = STATE(171),
    [sym_not] = STATE(171),
    [sym_and] = STATE(171),
    [sym_or] = STATE(171),
    [sym_implies] = STATE(171),
    [sym_iff] = STATE(171),
    [sym_forall] = STATE(171),
    [sym_exists] = STATE(171),
    [sym__group] = STATE(171),
    [sym__universal_group] = STATE(171),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(171),
    [sym_false] = STATE(171),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(424),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [104] = {
    [sym__term] = STATE(172),
    [sym_function] = STATE(172),
    [sym_not] = STATE(172),
    [sym_and] = STATE(172),
    [sym_or] = STATE(172),
    [sym_implies] = STATE(172),
    [sym_iff] = STATE(172),
    [sym_forall] = STATE(172),
    [sym_exists] = STATE(172),
    [sym__group] = STATE(172),
    [sym__universal_group] = STATE(172),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(172),
    [sym_false] = STATE(172),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(426),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [105] = {
    [sym__term] = STATE(173),
    [sym_function] = STATE(173),
    [sym_not] = STATE(173),
    [sym_and] = STATE(173),
    [sym_or] = STATE(173),
    [sym_implies] = STATE(173),
    [sym_iff] = STATE(173),
    [sym_forall] = STATE(173),
    [sym_exists] = STATE(173),
    [sym__group] = STATE(173),
    [sym__universal_group] = STATE(173),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(173),
    [sym_false] = STATE(173),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(428),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [106] = {
    [sym__term] = STATE(174),
    [sym_function] = STATE(174),
    [sym_not] = STATE(174),
    [sym_and] = STATE(174),
    [sym_or] = STATE(174),
    [sym_implies] = STATE(174),
    [sym_iff] = STATE(174),
    [sym_forall] = STATE(174),
    [sym_exists] = STATE(174),
    [sym__group] = STATE(174),
    [sym__universal_group] = STATE(174),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(174),
    [sym_false] = STATE(174),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(430),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [107] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COMMA_LF] = ACTIONS(315),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [sym__function_name] = ACTIONS(315),
    [anon_sym_A] = ACTIONS(315),
    [anon_sym_E] = ACTIONS(315),
    [anon_sym_T] = ACTIONS(315),
    [anon_sym_F] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_0] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
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
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_12] = ACTIONS(315),
  },
  [108] = {
    [sym__term] = STATE(175),
    [sym_function] = STATE(175),
    [sym_not] = STATE(175),
    [sym_and] = STATE(175),
    [sym_or] = STATE(175),
    [sym_implies] = STATE(175),
    [sym_iff] = STATE(175),
    [sym_forall] = STATE(175),
    [sym_exists] = STATE(175),
    [sym__group] = STATE(175),
    [sym__universal_group] = STATE(175),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(175),
    [sym_false] = STATE(175),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(432),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [109] = {
    [sym__term] = STATE(176),
    [sym_function] = STATE(176),
    [sym_not] = STATE(176),
    [sym_and] = STATE(176),
    [sym_or] = STATE(176),
    [sym_implies] = STATE(176),
    [sym_iff] = STATE(176),
    [sym_forall] = STATE(176),
    [sym_exists] = STATE(176),
    [sym__group] = STATE(176),
    [sym__universal_group] = STATE(176),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(176),
    [sym_false] = STATE(176),
    [sym__not_sym] = STATE(41),
    [sym__forall_sym] = STATE(42),
    [sym__exists_sym] = STATE(43),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_variable] = ACTIONS(434),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
  },
  [110] = {
    [sym__nested_block] = STATE(168),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(168),
    [sym__hypothesis_end] = ACTIONS(436),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [111] = {
    [sym__nested_block] = STATE(111),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(438),
    [sym_variable] = ACTIONS(441),
    [sym__function_name] = ACTIONS(342),
    [anon_sym_A] = ACTIONS(345),
    [anon_sym_E] = ACTIONS(348),
    [anon_sym_T] = ACTIONS(351),
    [anon_sym_F] = ACTIONS(354),
    [anon_sym_1] = ACTIONS(357),
    [anon_sym_] = ACTIONS(357),
    [anon_sym_0] = ACTIONS(360),
    [anon_sym_2] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_BANG] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_3] = ACTIONS(444),
    [anon_sym_11] = ACTIONS(447),
    [anon_sym_12] = ACTIONS(450),
  },
  [112] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [113] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_COMMA_LF] = ACTIONS(457),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
    [sym_variable] = ACTIONS(457),
    [sym__function_name] = ACTIONS(457),
    [anon_sym_A] = ACTIONS(457),
    [anon_sym_E] = ACTIONS(457),
    [anon_sym_T] = ACTIONS(457),
    [anon_sym_F] = ACTIONS(457),
    [anon_sym_1] = ACTIONS(457),
    [anon_sym_] = ACTIONS(457),
    [anon_sym_0] = ACTIONS(457),
    [anon_sym_2] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_3] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_4] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_v] = ACTIONS(457),
    [anon_sym_5] = ACTIONS(457),
    [anon_sym_DASH_GT] = ACTIONS(457),
    [anon_sym_EQ_GT] = ACTIONS(457),
    [anon_sym_6] = ACTIONS(457),
    [anon_sym_7] = ACTIONS(457),
    [anon_sym_LT_DASH_GT] = ACTIONS(457),
    [anon_sym_LT_EQ_GT] = ACTIONS(457),
    [anon_sym_8] = ACTIONS(457),
    [anon_sym_9] = ACTIONS(457),
    [anon_sym_10] = ACTIONS(457),
    [anon_sym_11] = ACTIONS(457),
    [anon_sym_12] = ACTIONS(457),
  },
  [115] = {
    [sym__term] = STATE(179),
    [sym_function] = STATE(179),
    [sym_not] = STATE(179),
    [sym_and] = STATE(179),
    [sym_or] = STATE(179),
    [sym_implies] = STATE(179),
    [sym_iff] = STATE(179),
    [sym_forall] = STATE(179),
    [sym_exists] = STATE(179),
    [sym__group] = STATE(179),
    [sym__universal_group] = STATE(179),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(179),
    [sym_false] = STATE(179),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(459),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [116] = {
    [sym__term] = STATE(180),
    [sym_function] = STATE(180),
    [sym_not] = STATE(180),
    [sym_and] = STATE(180),
    [sym_or] = STATE(180),
    [sym_implies] = STATE(180),
    [sym_iff] = STATE(180),
    [sym_forall] = STATE(180),
    [sym_exists] = STATE(180),
    [sym__group] = STATE(180),
    [sym__universal_group] = STATE(180),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(180),
    [sym_false] = STATE(180),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(461),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [117] = {
    [sym__term] = STATE(181),
    [sym_function] = STATE(181),
    [sym_not] = STATE(181),
    [sym_and] = STATE(181),
    [sym_or] = STATE(181),
    [sym_implies] = STATE(181),
    [sym_iff] = STATE(181),
    [sym_forall] = STATE(181),
    [sym_exists] = STATE(181),
    [sym__group] = STATE(181),
    [sym__universal_group] = STATE(181),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(181),
    [sym_false] = STATE(181),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(463),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [118] = {
    [sym__term] = STATE(182),
    [sym_function] = STATE(182),
    [sym_not] = STATE(182),
    [sym_and] = STATE(182),
    [sym_or] = STATE(182),
    [sym_implies] = STATE(182),
    [sym_iff] = STATE(182),
    [sym_forall] = STATE(182),
    [sym_exists] = STATE(182),
    [sym__group] = STATE(182),
    [sym__universal_group] = STATE(182),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(182),
    [sym_false] = STATE(182),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(465),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [119] = {
    [sym__term] = STATE(183),
    [sym_function] = STATE(183),
    [sym_not] = STATE(183),
    [sym_and] = STATE(183),
    [sym_or] = STATE(183),
    [sym_implies] = STATE(183),
    [sym_iff] = STATE(183),
    [sym_forall] = STATE(183),
    [sym_exists] = STATE(183),
    [sym__group] = STATE(183),
    [sym__universal_group] = STATE(183),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(183),
    [sym_false] = STATE(183),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(467),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [120] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_4] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_v] = ACTIONS(313),
    [anon_sym_5] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_EQ_GT] = ACTIONS(313),
    [anon_sym_6] = ACTIONS(313),
    [anon_sym_7] = ACTIONS(313),
    [anon_sym_LT_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_EQ_GT] = ACTIONS(313),
    [anon_sym_8] = ACTIONS(313),
    [anon_sym_9] = ACTIONS(313),
    [anon_sym_10] = ACTIONS(313),
  },
  [121] = {
    [sym__term] = STATE(184),
    [sym_function] = STATE(184),
    [sym_not] = STATE(184),
    [sym_and] = STATE(184),
    [sym_or] = STATE(184),
    [sym_implies] = STATE(184),
    [sym_iff] = STATE(184),
    [sym_forall] = STATE(184),
    [sym_exists] = STATE(184),
    [sym__group] = STATE(184),
    [sym__universal_group] = STATE(184),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(184),
    [sym_false] = STATE(184),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(469),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [122] = {
    [sym__term] = STATE(185),
    [sym_function] = STATE(185),
    [sym_not] = STATE(185),
    [sym_and] = STATE(185),
    [sym_or] = STATE(185),
    [sym_implies] = STATE(185),
    [sym_iff] = STATE(185),
    [sym_forall] = STATE(185),
    [sym_exists] = STATE(185),
    [sym__group] = STATE(185),
    [sym__universal_group] = STATE(185),
    [sym_function_name] = STATE(56),
    [sym__TF_func_name] = STATE(57),
    [sym_true] = STATE(185),
    [sym_false] = STATE(185),
    [sym__not_sym] = STATE(58),
    [sym__forall_sym] = STATE(59),
    [sym__exists_sym] = STATE(60),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_variable] = ACTIONS(471),
    [sym__function_name] = ACTIONS(73),
    [anon_sym_A] = ACTIONS(75),
    [anon_sym_E] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_F] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [anon_sym_11] = ACTIONS(89),
    [anon_sym_12] = ACTIONS(91),
  },
  [123] = {
    [sym__nested_block] = STATE(79),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(473),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [124] = {
    [sym__hypothesis_end] = ACTIONS(475),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_DOT] = ACTIONS(475),
    [sym_variable] = ACTIONS(475),
    [sym__function_name] = ACTIONS(477),
    [anon_sym_A] = ACTIONS(477),
    [anon_sym_E] = ACTIONS(477),
    [anon_sym_T] = ACTIONS(477),
    [anon_sym_F] = ACTIONS(477),
    [anon_sym_1] = ACTIONS(475),
    [anon_sym_] = ACTIONS(475),
    [anon_sym_0] = ACTIONS(475),
    [anon_sym_2] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_3] = ACTIONS(475),
    [anon_sym_11] = ACTIONS(475),
    [anon_sym_12] = ACTIONS(475),
  },
  [125] = {
    [sym__hypothesis_end] = ACTIONS(479),
    [sym_comment] = ACTIONS(11),
  },
  [126] = {
    [sym__term] = STATE(187),
    [sym_function] = STATE(187),
    [sym_not] = STATE(187),
    [sym_and] = STATE(187),
    [sym_or] = STATE(187),
    [sym_implies] = STATE(187),
    [sym_iff] = STATE(187),
    [sym_forall] = STATE(187),
    [sym_exists] = STATE(187),
    [sym__group] = STATE(187),
    [sym__universal_group] = STATE(187),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(187),
    [sym_false] = STATE(187),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(481),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [127] = {
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_variable] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_4] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(97),
    [anon_sym_5] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
    [anon_sym_9] = ACTIONS(97),
    [anon_sym_10] = ACTIONS(97),
  },
  [128] = {
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [sym_variable] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_4] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_v] = ACTIONS(97),
    [anon_sym_5] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_6] = ACTIONS(97),
    [anon_sym_7] = ACTIONS(97),
    [anon_sym_LT_DASH_GT] = ACTIONS(97),
    [anon_sym_LT_EQ_GT] = ACTIONS(97),
    [anon_sym_8] = ACTIONS(97),
    [anon_sym_9] = ACTIONS(97),
    [anon_sym_10] = ACTIONS(97),
  },
  [129] = {
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_COMMA_LF] = ACTIONS(109),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_4] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_v] = ACTIONS(109),
    [anon_sym_5] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_EQ_GT] = ACTIONS(109),
    [anon_sym_6] = ACTIONS(109),
    [anon_sym_7] = ACTIONS(109),
    [anon_sym_LT_DASH_GT] = ACTIONS(109),
    [anon_sym_LT_EQ_GT] = ACTIONS(109),
    [anon_sym_8] = ACTIONS(109),
    [anon_sym_9] = ACTIONS(109),
    [anon_sym_10] = ACTIONS(109),
  },
  [130] = {
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COMMA_LF] = ACTIONS(116),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_4] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_v] = ACTIONS(116),
    [anon_sym_5] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_6] = ACTIONS(116),
    [anon_sym_7] = ACTIONS(116),
    [anon_sym_LT_DASH_GT] = ACTIONS(116),
    [anon_sym_LT_EQ_GT] = ACTIONS(116),
    [anon_sym_8] = ACTIONS(116),
    [anon_sym_9] = ACTIONS(116),
    [anon_sym_10] = ACTIONS(116),
  },
  [131] = {
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_COMMA_LF] = ACTIONS(487),
    [sym_comment] = ACTIONS(99),
  },
  [132] = {
    [sym_annotation] = STATE(68),
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_COMMA_LF] = ACTIONS(141),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_4] = ACTIONS(491),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_v] = ACTIONS(493),
    [anon_sym_5] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_6] = ACTIONS(495),
    [anon_sym_7] = ACTIONS(495),
    [anon_sym_LT_DASH_GT] = ACTIONS(497),
    [anon_sym_LT_EQ_GT] = ACTIONS(497),
    [anon_sym_8] = ACTIONS(497),
    [anon_sym_9] = ACTIONS(497),
    [anon_sym_10] = ACTIONS(497),
  },
  [133] = {
    [sym__term] = STATE(193),
    [sym_function] = STATE(193),
    [sym_not] = STATE(193),
    [sym_and] = STATE(193),
    [sym_or] = STATE(193),
    [sym_implies] = STATE(193),
    [sym_iff] = STATE(193),
    [sym_forall] = STATE(193),
    [sym_exists] = STATE(193),
    [sym__group] = STATE(193),
    [sym__universal_group] = STATE(193),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(193),
    [sym_false] = STATE(193),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(499),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [134] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(501),
  },
  [135] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(503),
  },
  [136] = {
    [anon_sym_LF] = ACTIONS(505),
    [sym_comment] = ACTIONS(99),
  },
  [137] = {
    [aux_sym_hypothesis_repeat1] = STATE(137),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_COMMA_LF] = ACTIONS(507),
    [sym_comment] = ACTIONS(99),
  },
  [138] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(510),
    [sym_comment] = ACTIONS(99),
  },
  [139] = {
    [aux_sym_annotation_repeat1] = STATE(198),
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_LF] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_COMMA_LF] = ACTIONS(514),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [sym_variable] = ACTIONS(514),
    [sym__function_name] = ACTIONS(514),
    [anon_sym_A] = ACTIONS(514),
    [anon_sym_E] = ACTIONS(514),
    [anon_sym_T] = ACTIONS(514),
    [anon_sym_F] = ACTIONS(514),
    [anon_sym_1] = ACTIONS(514),
    [anon_sym_] = ACTIONS(514),
    [anon_sym_0] = ACTIONS(514),
    [anon_sym_2] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_BANG] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_3] = ACTIONS(514),
    [anon_sym_11] = ACTIONS(514),
    [anon_sym_12] = ACTIONS(514),
  },
  [140] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_COMMA_LF] = ACTIONS(520),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [sym_variable] = ACTIONS(520),
    [sym__function_name] = ACTIONS(520),
    [anon_sym_A] = ACTIONS(520),
    [anon_sym_E] = ACTIONS(520),
    [anon_sym_T] = ACTIONS(520),
    [anon_sym_F] = ACTIONS(520),
    [anon_sym_1] = ACTIONS(520),
    [anon_sym_] = ACTIONS(520),
    [anon_sym_0] = ACTIONS(520),
    [anon_sym_2] = ACTIONS(520),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_3] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_4] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_v] = ACTIONS(520),
    [anon_sym_5] = ACTIONS(520),
    [anon_sym_DASH_GT] = ACTIONS(520),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_6] = ACTIONS(520),
    [anon_sym_7] = ACTIONS(520),
    [anon_sym_LT_DASH_GT] = ACTIONS(520),
    [anon_sym_LT_EQ_GT] = ACTIONS(520),
    [anon_sym_8] = ACTIONS(520),
    [anon_sym_9] = ACTIONS(520),
    [anon_sym_10] = ACTIONS(520),
    [anon_sym_11] = ACTIONS(520),
    [anon_sym_12] = ACTIONS(520),
  },
  [141] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(522),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_COMMA_LF] = ACTIONS(524),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [sym_variable] = ACTIONS(524),
    [sym__function_name] = ACTIONS(524),
    [anon_sym_A] = ACTIONS(524),
    [anon_sym_E] = ACTIONS(524),
    [anon_sym_T] = ACTIONS(524),
    [anon_sym_F] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(524),
    [anon_sym_] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(524),
    [anon_sym_2] = ACTIONS(524),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_BANG] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_3] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_v] = ACTIONS(524),
    [anon_sym_5] = ACTIONS(524),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(524),
    [anon_sym_6] = ACTIONS(524),
    [anon_sym_7] = ACTIONS(524),
    [anon_sym_LT_DASH_GT] = ACTIONS(524),
    [anon_sym_LT_EQ_GT] = ACTIONS(524),
    [anon_sym_8] = ACTIONS(524),
    [anon_sym_9] = ACTIONS(524),
    [anon_sym_10] = ACTIONS(524),
    [anon_sym_11] = ACTIONS(524),
    [anon_sym_12] = ACTIONS(524),
  },
  [142] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_LF] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_COMMA_LF] = ACTIONS(528),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_variable] = ACTIONS(528),
    [sym__function_name] = ACTIONS(528),
    [anon_sym_A] = ACTIONS(528),
    [anon_sym_E] = ACTIONS(528),
    [anon_sym_T] = ACTIONS(528),
    [anon_sym_F] = ACTIONS(528),
    [anon_sym_1] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_0] = ACTIONS(528),
    [anon_sym_2] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_v] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_LT_DASH_GT] = ACTIONS(528),
    [anon_sym_LT_EQ_GT] = ACTIONS(528),
    [anon_sym_8] = ACTIONS(528),
    [anon_sym_9] = ACTIONS(528),
    [anon_sym_10] = ACTIONS(528),
    [anon_sym_11] = ACTIONS(528),
    [anon_sym_12] = ACTIONS(528),
  },
  [143] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(532),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_COMMA_LF] = ACTIONS(532),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [sym_variable] = ACTIONS(532),
    [sym__function_name] = ACTIONS(532),
    [anon_sym_A] = ACTIONS(532),
    [anon_sym_E] = ACTIONS(532),
    [anon_sym_T] = ACTIONS(532),
    [anon_sym_F] = ACTIONS(532),
    [anon_sym_1] = ACTIONS(532),
    [anon_sym_] = ACTIONS(532),
    [anon_sym_0] = ACTIONS(532),
    [anon_sym_2] = ACTIONS(532),
    [anon_sym_DASH] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_TILDE] = ACTIONS(532),
    [anon_sym_3] = ACTIONS(532),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_v] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(147),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_LT_DASH_GT] = ACTIONS(149),
    [anon_sym_LT_EQ_GT] = ACTIONS(149),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(532),
    [anon_sym_12] = ACTIONS(532),
  },
  [144] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [145] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_COMMA_LF] = ACTIONS(538),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [sym_variable] = ACTIONS(538),
    [sym__function_name] = ACTIONS(538),
    [anon_sym_A] = ACTIONS(538),
    [anon_sym_E] = ACTIONS(538),
    [anon_sym_T] = ACTIONS(538),
    [anon_sym_F] = ACTIONS(538),
    [anon_sym_1] = ACTIONS(538),
    [anon_sym_] = ACTIONS(538),
    [anon_sym_0] = ACTIONS(538),
    [anon_sym_2] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_3] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_4] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_v] = ACTIONS(538),
    [anon_sym_5] = ACTIONS(538),
    [anon_sym_DASH_GT] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(538),
    [anon_sym_6] = ACTIONS(538),
    [anon_sym_7] = ACTIONS(538),
    [anon_sym_LT_DASH_GT] = ACTIONS(538),
    [anon_sym_LT_EQ_GT] = ACTIONS(538),
    [anon_sym_8] = ACTIONS(538),
    [anon_sym_9] = ACTIONS(538),
    [anon_sym_10] = ACTIONS(538),
    [anon_sym_11] = ACTIONS(538),
    [anon_sym_12] = ACTIONS(538),
  },
  [146] = {
    [sym__and_sym] = STATE(69),
    [sym__or_sym] = STATE(70),
    [sym__implies_sym] = STATE(71),
    [sym__iff_sym] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_COMMA_LF] = ACTIONS(542),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym_variable] = ACTIONS(542),
    [sym__function_name] = ACTIONS(542),
    [anon_sym_A] = ACTIONS(542),
    [anon_sym_E] = ACTIONS(542),
    [anon_sym_T] = ACTIONS(542),
    [anon_sym_F] = ACTIONS(542),
    [anon_sym_1] = ACTIONS(542),
    [anon_sym_] = ACTIONS(542),
    [anon_sym_0] = ACTIONS(542),
    [anon_sym_2] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(542),
    [anon_sym_BANG] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_3] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_4] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_v] = ACTIONS(542),
    [anon_sym_5] = ACTIONS(542),
    [anon_sym_DASH_GT] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [anon_sym_6] = ACTIONS(542),
    [anon_sym_7] = ACTIONS(542),
    [anon_sym_LT_DASH_GT] = ACTIONS(542),
    [anon_sym_LT_EQ_GT] = ACTIONS(542),
    [anon_sym_8] = ACTIONS(542),
    [anon_sym_9] = ACTIONS(542),
    [anon_sym_10] = ACTIONS(542),
    [anon_sym_11] = ACTIONS(542),
    [anon_sym_12] = ACTIONS(542),
  },
  [147] = {
    [sym__nested_block] = STATE(200),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(200),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [148] = {
    [anon_sym_RBRACK] = ACTIONS(544),
    [anon_sym_COMMA] = ACTIONS(544),
    [sym_comment] = ACTIONS(11),
  },
  [149] = {
    [anon_sym_RBRACK] = ACTIONS(546),
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(374),
  },
  [150] = {
    [aux_sym_vars_repeat1] = STATE(150),
    [anon_sym_RBRACK] = ACTIONS(544),
    [anon_sym_COMMA] = ACTIONS(548),
    [sym_comment] = ACTIONS(11),
  },
  [151] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(99),
  },
  [152] = {
    [aux_sym_annotation_repeat1] = STATE(203),
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_LF] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(384),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [sym_variable] = ACTIONS(514),
    [sym__function_name] = ACTIONS(514),
    [anon_sym_A] = ACTIONS(514),
    [anon_sym_E] = ACTIONS(514),
    [anon_sym_T] = ACTIONS(514),
    [anon_sym_F] = ACTIONS(514),
    [anon_sym_1] = ACTIONS(514),
    [anon_sym_] = ACTIONS(514),
    [anon_sym_0] = ACTIONS(514),
    [anon_sym_2] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_BANG] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_3] = ACTIONS(514),
    [anon_sym_11] = ACTIONS(514),
    [anon_sym_12] = ACTIONS(514),
  },
  [153] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LF] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [sym_variable] = ACTIONS(520),
    [sym__function_name] = ACTIONS(520),
    [anon_sym_A] = ACTIONS(520),
    [anon_sym_E] = ACTIONS(520),
    [anon_sym_T] = ACTIONS(520),
    [anon_sym_F] = ACTIONS(520),
    [anon_sym_1] = ACTIONS(520),
    [anon_sym_] = ACTIONS(520),
    [anon_sym_0] = ACTIONS(520),
    [anon_sym_2] = ACTIONS(520),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_3] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_4] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_v] = ACTIONS(520),
    [anon_sym_5] = ACTIONS(520),
    [anon_sym_DASH_GT] = ACTIONS(520),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_6] = ACTIONS(520),
    [anon_sym_7] = ACTIONS(520),
    [anon_sym_LT_DASH_GT] = ACTIONS(520),
    [anon_sym_LT_EQ_GT] = ACTIONS(520),
    [anon_sym_8] = ACTIONS(520),
    [anon_sym_9] = ACTIONS(520),
    [anon_sym_10] = ACTIONS(520),
    [anon_sym_11] = ACTIONS(520),
    [anon_sym_12] = ACTIONS(520),
  },
  [154] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(522),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [sym_variable] = ACTIONS(524),
    [sym__function_name] = ACTIONS(524),
    [anon_sym_A] = ACTIONS(524),
    [anon_sym_E] = ACTIONS(524),
    [anon_sym_T] = ACTIONS(524),
    [anon_sym_F] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(524),
    [anon_sym_] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(524),
    [anon_sym_2] = ACTIONS(524),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_BANG] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_3] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_v] = ACTIONS(524),
    [anon_sym_5] = ACTIONS(524),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(524),
    [anon_sym_6] = ACTIONS(524),
    [anon_sym_7] = ACTIONS(524),
    [anon_sym_LT_DASH_GT] = ACTIONS(524),
    [anon_sym_LT_EQ_GT] = ACTIONS(524),
    [anon_sym_8] = ACTIONS(524),
    [anon_sym_9] = ACTIONS(524),
    [anon_sym_10] = ACTIONS(524),
    [anon_sym_11] = ACTIONS(524),
    [anon_sym_12] = ACTIONS(524),
  },
  [155] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_LF] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_variable] = ACTIONS(528),
    [sym__function_name] = ACTIONS(528),
    [anon_sym_A] = ACTIONS(528),
    [anon_sym_E] = ACTIONS(528),
    [anon_sym_T] = ACTIONS(528),
    [anon_sym_F] = ACTIONS(528),
    [anon_sym_1] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_0] = ACTIONS(528),
    [anon_sym_2] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_v] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_EQ_GT] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_LT_DASH_GT] = ACTIONS(528),
    [anon_sym_LT_EQ_GT] = ACTIONS(528),
    [anon_sym_8] = ACTIONS(528),
    [anon_sym_9] = ACTIONS(528),
    [anon_sym_10] = ACTIONS(528),
    [anon_sym_11] = ACTIONS(528),
    [anon_sym_12] = ACTIONS(528),
  },
  [156] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(532),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [sym_variable] = ACTIONS(532),
    [sym__function_name] = ACTIONS(532),
    [anon_sym_A] = ACTIONS(532),
    [anon_sym_E] = ACTIONS(532),
    [anon_sym_T] = ACTIONS(532),
    [anon_sym_F] = ACTIONS(532),
    [anon_sym_1] = ACTIONS(532),
    [anon_sym_] = ACTIONS(532),
    [anon_sym_0] = ACTIONS(532),
    [anon_sym_2] = ACTIONS(532),
    [anon_sym_DASH] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_TILDE] = ACTIONS(532),
    [anon_sym_3] = ACTIONS(532),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_4] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_v] = ACTIONS(185),
    [anon_sym_5] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_EQ_GT] = ACTIONS(187),
    [anon_sym_6] = ACTIONS(187),
    [anon_sym_7] = ACTIONS(187),
    [anon_sym_LT_DASH_GT] = ACTIONS(189),
    [anon_sym_LT_EQ_GT] = ACTIONS(189),
    [anon_sym_8] = ACTIONS(189),
    [anon_sym_9] = ACTIONS(189),
    [anon_sym_10] = ACTIONS(189),
    [anon_sym_11] = ACTIONS(532),
    [anon_sym_12] = ACTIONS(532),
  },
  [157] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [sym_variable] = ACTIONS(538),
    [sym__function_name] = ACTIONS(538),
    [anon_sym_A] = ACTIONS(538),
    [anon_sym_E] = ACTIONS(538),
    [anon_sym_T] = ACTIONS(538),
    [anon_sym_F] = ACTIONS(538),
    [anon_sym_1] = ACTIONS(538),
    [anon_sym_] = ACTIONS(538),
    [anon_sym_0] = ACTIONS(538),
    [anon_sym_2] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_3] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_4] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_v] = ACTIONS(538),
    [anon_sym_5] = ACTIONS(538),
    [anon_sym_DASH_GT] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(538),
    [anon_sym_6] = ACTIONS(538),
    [anon_sym_7] = ACTIONS(538),
    [anon_sym_LT_DASH_GT] = ACTIONS(538),
    [anon_sym_LT_EQ_GT] = ACTIONS(538),
    [anon_sym_8] = ACTIONS(538),
    [anon_sym_9] = ACTIONS(538),
    [anon_sym_10] = ACTIONS(538),
    [anon_sym_11] = ACTIONS(538),
    [anon_sym_12] = ACTIONS(538),
  },
  [158] = {
    [sym__and_sym] = STATE(86),
    [sym__or_sym] = STATE(87),
    [sym__implies_sym] = STATE(88),
    [sym__iff_sym] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym_variable] = ACTIONS(542),
    [sym__function_name] = ACTIONS(542),
    [anon_sym_A] = ACTIONS(542),
    [anon_sym_E] = ACTIONS(542),
    [anon_sym_T] = ACTIONS(542),
    [anon_sym_F] = ACTIONS(542),
    [anon_sym_1] = ACTIONS(542),
    [anon_sym_] = ACTIONS(542),
    [anon_sym_0] = ACTIONS(542),
    [anon_sym_2] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(542),
    [anon_sym_BANG] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_3] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_4] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_v] = ACTIONS(542),
    [anon_sym_5] = ACTIONS(542),
    [anon_sym_DASH_GT] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [anon_sym_6] = ACTIONS(542),
    [anon_sym_7] = ACTIONS(542),
    [anon_sym_LT_DASH_GT] = ACTIONS(542),
    [anon_sym_LT_EQ_GT] = ACTIONS(542),
    [anon_sym_8] = ACTIONS(542),
    [anon_sym_9] = ACTIONS(542),
    [anon_sym_10] = ACTIONS(542),
    [anon_sym_11] = ACTIONS(542),
    [anon_sym_12] = ACTIONS(542),
  },
  [159] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(261),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym_variable] = ACTIONS(261),
    [sym__function_name] = ACTIONS(261),
    [anon_sym_A] = ACTIONS(261),
    [anon_sym_E] = ACTIONS(261),
    [anon_sym_T] = ACTIONS(261),
    [anon_sym_F] = ACTIONS(261),
    [anon_sym_1] = ACTIONS(261),
    [anon_sym_] = ACTIONS(261),
    [anon_sym_0] = ACTIONS(261),
    [anon_sym_2] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_3] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_6] = ACTIONS(406),
    [anon_sym_7] = ACTIONS(406),
    [anon_sym_LT_DASH_GT] = ACTIONS(408),
    [anon_sym_LT_EQ_GT] = ACTIONS(408),
    [anon_sym_8] = ACTIONS(408),
    [anon_sym_9] = ACTIONS(408),
    [anon_sym_10] = ACTIONS(408),
    [anon_sym_11] = ACTIONS(261),
    [anon_sym_12] = ACTIONS(261),
  },
  [160] = {
    [aux_sym_annotation_repeat1] = STATE(205),
    [anon_sym_LF] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(555),
    [anon_sym_LT] = ACTIONS(557),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_variable] = ACTIONS(293),
    [sym__function_name] = ACTIONS(293),
    [anon_sym_A] = ACTIONS(293),
    [anon_sym_E] = ACTIONS(293),
    [anon_sym_T] = ACTIONS(293),
    [anon_sym_F] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_0] = ACTIONS(293),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_12] = ACTIONS(293),
  },
  [161] = {
    [sym__term] = STATE(206),
    [sym_function] = STATE(206),
    [sym_not] = STATE(206),
    [sym_and] = STATE(206),
    [sym_or] = STATE(206),
    [sym_implies] = STATE(206),
    [sym_iff] = STATE(206),
    [sym_forall] = STATE(206),
    [sym_exists] = STATE(206),
    [sym__group] = STATE(206),
    [sym__universal_group] = STATE(206),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(206),
    [sym_false] = STATE(206),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(559),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [162] = {
    [sym__term] = STATE(207),
    [sym_function] = STATE(207),
    [sym_not] = STATE(207),
    [sym_and] = STATE(207),
    [sym_or] = STATE(207),
    [sym_implies] = STATE(207),
    [sym_iff] = STATE(207),
    [sym_forall] = STATE(207),
    [sym_exists] = STATE(207),
    [sym__group] = STATE(207),
    [sym__universal_group] = STATE(207),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(207),
    [sym_false] = STATE(207),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(561),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [163] = {
    [sym__term] = STATE(208),
    [sym_function] = STATE(208),
    [sym_not] = STATE(208),
    [sym_and] = STATE(208),
    [sym_or] = STATE(208),
    [sym_implies] = STATE(208),
    [sym_iff] = STATE(208),
    [sym_forall] = STATE(208),
    [sym_exists] = STATE(208),
    [sym__group] = STATE(208),
    [sym__universal_group] = STATE(208),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(208),
    [sym_false] = STATE(208),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(563),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [164] = {
    [sym__term] = STATE(209),
    [sym_function] = STATE(209),
    [sym_not] = STATE(209),
    [sym_and] = STATE(209),
    [sym_or] = STATE(209),
    [sym_implies] = STATE(209),
    [sym_iff] = STATE(209),
    [sym_forall] = STATE(209),
    [sym_exists] = STATE(209),
    [sym__group] = STATE(209),
    [sym__universal_group] = STATE(209),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(209),
    [sym_false] = STATE(209),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(565),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [165] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [sym__function_name] = ACTIONS(315),
    [anon_sym_A] = ACTIONS(315),
    [anon_sym_E] = ACTIONS(315),
    [anon_sym_T] = ACTIONS(315),
    [anon_sym_F] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_] = ACTIONS(315),
    [anon_sym_0] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(315),
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
    [anon_sym_11] = ACTIONS(315),
    [anon_sym_12] = ACTIONS(315),
  },
  [166] = {
    [sym__term] = STATE(210),
    [sym_function] = STATE(210),
    [sym_not] = STATE(210),
    [sym_and] = STATE(210),
    [sym_or] = STATE(210),
    [sym_implies] = STATE(210),
    [sym_iff] = STATE(210),
    [sym_forall] = STATE(210),
    [sym_exists] = STATE(210),
    [sym__group] = STATE(210),
    [sym__universal_group] = STATE(210),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(210),
    [sym_false] = STATE(210),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(567),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [167] = {
    [sym__term] = STATE(211),
    [sym_function] = STATE(211),
    [sym_not] = STATE(211),
    [sym_and] = STATE(211),
    [sym_or] = STATE(211),
    [sym_implies] = STATE(211),
    [sym_iff] = STATE(211),
    [sym_forall] = STATE(211),
    [sym_exists] = STATE(211),
    [sym__group] = STATE(211),
    [sym__universal_group] = STATE(211),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(211),
    [sym_false] = STATE(211),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(569),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [168] = {
    [sym__nested_block] = STATE(111),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [169] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(571),
    [sym_comment] = ACTIONS(99),
  },
  [170] = {
    [aux_sym_annotation_repeat1] = STATE(213),
    [anon_sym_LF] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_COMMA_LF] = ACTIONS(514),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [sym_variable] = ACTIONS(514),
    [sym__function_name] = ACTIONS(514),
    [anon_sym_A] = ACTIONS(514),
    [anon_sym_E] = ACTIONS(514),
    [anon_sym_T] = ACTIONS(514),
    [anon_sym_F] = ACTIONS(514),
    [anon_sym_1] = ACTIONS(514),
    [anon_sym_] = ACTIONS(514),
    [anon_sym_0] = ACTIONS(514),
    [anon_sym_2] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_BANG] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_3] = ACTIONS(514),
    [anon_sym_11] = ACTIONS(514),
    [anon_sym_12] = ACTIONS(514),
  },
  [171] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_COMMA_LF] = ACTIONS(520),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [sym_variable] = ACTIONS(520),
    [sym__function_name] = ACTIONS(520),
    [anon_sym_A] = ACTIONS(520),
    [anon_sym_E] = ACTIONS(520),
    [anon_sym_T] = ACTIONS(520),
    [anon_sym_F] = ACTIONS(520),
    [anon_sym_1] = ACTIONS(520),
    [anon_sym_] = ACTIONS(520),
    [anon_sym_0] = ACTIONS(520),
    [anon_sym_2] = ACTIONS(520),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_3] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_4] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_v] = ACTIONS(520),
    [anon_sym_5] = ACTIONS(520),
    [anon_sym_DASH_GT] = ACTIONS(520),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_6] = ACTIONS(520),
    [anon_sym_7] = ACTIONS(520),
    [anon_sym_LT_DASH_GT] = ACTIONS(520),
    [anon_sym_LT_EQ_GT] = ACTIONS(520),
    [anon_sym_8] = ACTIONS(520),
    [anon_sym_9] = ACTIONS(520),
    [anon_sym_10] = ACTIONS(520),
    [anon_sym_11] = ACTIONS(520),
    [anon_sym_12] = ACTIONS(520),
  },
  [172] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_COMMA_LF] = ACTIONS(524),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [sym_variable] = ACTIONS(524),
    [sym__function_name] = ACTIONS(524),
    [anon_sym_A] = ACTIONS(524),
    [anon_sym_E] = ACTIONS(524),
    [anon_sym_T] = ACTIONS(524),
    [anon_sym_F] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(524),
    [anon_sym_] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(524),
    [anon_sym_2] = ACTIONS(524),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_BANG] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_3] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(217),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_v] = ACTIONS(524),
    [anon_sym_5] = ACTIONS(524),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(524),
    [anon_sym_6] = ACTIONS(524),
    [anon_sym_7] = ACTIONS(524),
    [anon_sym_LT_DASH_GT] = ACTIONS(524),
    [anon_sym_LT_EQ_GT] = ACTIONS(524),
    [anon_sym_8] = ACTIONS(524),
    [anon_sym_9] = ACTIONS(524),
    [anon_sym_10] = ACTIONS(524),
    [anon_sym_11] = ACTIONS(524),
    [anon_sym_12] = ACTIONS(524),
  },
  [173] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_COMMA_LF] = ACTIONS(528),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_variable] = ACTIONS(528),
    [sym__function_name] = ACTIONS(528),
    [anon_sym_A] = ACTIONS(528),
    [anon_sym_E] = ACTIONS(528),
    [anon_sym_T] = ACTIONS(528),
    [anon_sym_F] = ACTIONS(528),
    [anon_sym_1] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_0] = ACTIONS(528),
    [anon_sym_2] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(217),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_v] = ACTIONS(219),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(221),
    [anon_sym_EQ_GT] = ACTIONS(221),
    [anon_sym_6] = ACTIONS(221),
    [anon_sym_7] = ACTIONS(221),
    [anon_sym_LT_DASH_GT] = ACTIONS(528),
    [anon_sym_LT_EQ_GT] = ACTIONS(528),
    [anon_sym_8] = ACTIONS(528),
    [anon_sym_9] = ACTIONS(528),
    [anon_sym_10] = ACTIONS(528),
    [anon_sym_11] = ACTIONS(528),
    [anon_sym_12] = ACTIONS(528),
  },
  [174] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(532),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_COMMA_LF] = ACTIONS(532),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [sym_variable] = ACTIONS(532),
    [sym__function_name] = ACTIONS(532),
    [anon_sym_A] = ACTIONS(532),
    [anon_sym_E] = ACTIONS(532),
    [anon_sym_T] = ACTIONS(532),
    [anon_sym_F] = ACTIONS(532),
    [anon_sym_1] = ACTIONS(532),
    [anon_sym_] = ACTIONS(532),
    [anon_sym_0] = ACTIONS(532),
    [anon_sym_2] = ACTIONS(532),
    [anon_sym_DASH] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_TILDE] = ACTIONS(532),
    [anon_sym_3] = ACTIONS(532),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_4] = ACTIONS(217),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_v] = ACTIONS(219),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(221),
    [anon_sym_EQ_GT] = ACTIONS(221),
    [anon_sym_6] = ACTIONS(221),
    [anon_sym_7] = ACTIONS(221),
    [anon_sym_LT_DASH_GT] = ACTIONS(223),
    [anon_sym_LT_EQ_GT] = ACTIONS(223),
    [anon_sym_8] = ACTIONS(223),
    [anon_sym_9] = ACTIONS(223),
    [anon_sym_10] = ACTIONS(223),
    [anon_sym_11] = ACTIONS(532),
    [anon_sym_12] = ACTIONS(532),
  },
  [175] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_COMMA_LF] = ACTIONS(538),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [sym_variable] = ACTIONS(538),
    [sym__function_name] = ACTIONS(538),
    [anon_sym_A] = ACTIONS(538),
    [anon_sym_E] = ACTIONS(538),
    [anon_sym_T] = ACTIONS(538),
    [anon_sym_F] = ACTIONS(538),
    [anon_sym_1] = ACTIONS(538),
    [anon_sym_] = ACTIONS(538),
    [anon_sym_0] = ACTIONS(538),
    [anon_sym_2] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_3] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_4] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_v] = ACTIONS(538),
    [anon_sym_5] = ACTIONS(538),
    [anon_sym_DASH_GT] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(538),
    [anon_sym_6] = ACTIONS(538),
    [anon_sym_7] = ACTIONS(538),
    [anon_sym_LT_DASH_GT] = ACTIONS(538),
    [anon_sym_LT_EQ_GT] = ACTIONS(538),
    [anon_sym_8] = ACTIONS(538),
    [anon_sym_9] = ACTIONS(538),
    [anon_sym_10] = ACTIONS(538),
    [anon_sym_11] = ACTIONS(538),
    [anon_sym_12] = ACTIONS(538),
  },
  [176] = {
    [sym__and_sym] = STATE(103),
    [sym__or_sym] = STATE(104),
    [sym__implies_sym] = STATE(105),
    [sym__iff_sym] = STATE(106),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_COMMA_LF] = ACTIONS(542),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym_variable] = ACTIONS(542),
    [sym__function_name] = ACTIONS(542),
    [anon_sym_A] = ACTIONS(542),
    [anon_sym_E] = ACTIONS(542),
    [anon_sym_T] = ACTIONS(542),
    [anon_sym_F] = ACTIONS(542),
    [anon_sym_1] = ACTIONS(542),
    [anon_sym_] = ACTIONS(542),
    [anon_sym_0] = ACTIONS(542),
    [anon_sym_2] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(542),
    [anon_sym_BANG] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_3] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_4] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_v] = ACTIONS(542),
    [anon_sym_5] = ACTIONS(542),
    [anon_sym_DASH_GT] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [anon_sym_6] = ACTIONS(542),
    [anon_sym_7] = ACTIONS(542),
    [anon_sym_LT_DASH_GT] = ACTIONS(542),
    [anon_sym_LT_EQ_GT] = ACTIONS(542),
    [anon_sym_8] = ACTIONS(542),
    [anon_sym_9] = ACTIONS(542),
    [anon_sym_10] = ACTIONS(542),
    [anon_sym_11] = ACTIONS(542),
    [anon_sym_12] = ACTIONS(542),
  },
  [177] = {
    [sym__nested_block] = STATE(214),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(214),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [178] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_4] = ACTIONS(455),
    [anon_sym__] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_v] = ACTIONS(455),
    [anon_sym_5] = ACTIONS(455),
    [anon_sym_DASH_GT] = ACTIONS(455),
    [anon_sym_EQ_GT] = ACTIONS(455),
    [anon_sym_6] = ACTIONS(455),
    [anon_sym_7] = ACTIONS(455),
    [anon_sym_LT_DASH_GT] = ACTIONS(455),
    [anon_sym_LT_EQ_GT] = ACTIONS(455),
    [anon_sym_8] = ACTIONS(455),
    [anon_sym_9] = ACTIONS(455),
    [anon_sym_10] = ACTIONS(455),
  },
  [179] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_4] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_v] = ACTIONS(518),
    [anon_sym_5] = ACTIONS(518),
    [anon_sym_DASH_GT] = ACTIONS(518),
    [anon_sym_EQ_GT] = ACTIONS(518),
    [anon_sym_6] = ACTIONS(518),
    [anon_sym_7] = ACTIONS(518),
    [anon_sym_LT_DASH_GT] = ACTIONS(518),
    [anon_sym_LT_EQ_GT] = ACTIONS(518),
    [anon_sym_8] = ACTIONS(518),
    [anon_sym_9] = ACTIONS(518),
    [anon_sym_10] = ACTIONS(518),
  },
  [180] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_v] = ACTIONS(522),
    [anon_sym_5] = ACTIONS(522),
    [anon_sym_DASH_GT] = ACTIONS(522),
    [anon_sym_EQ_GT] = ACTIONS(522),
    [anon_sym_6] = ACTIONS(522),
    [anon_sym_7] = ACTIONS(522),
    [anon_sym_LT_DASH_GT] = ACTIONS(522),
    [anon_sym_LT_EQ_GT] = ACTIONS(522),
    [anon_sym_8] = ACTIONS(522),
    [anon_sym_9] = ACTIONS(522),
    [anon_sym_10] = ACTIONS(522),
  },
  [181] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(526),
    [anon_sym_LT_EQ_GT] = ACTIONS(526),
    [anon_sym_8] = ACTIONS(526),
    [anon_sym_9] = ACTIONS(526),
    [anon_sym_10] = ACTIONS(526),
  },
  [182] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [183] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_v] = ACTIONS(245),
    [anon_sym_5] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_6] = ACTIONS(247),
    [anon_sym_7] = ACTIONS(247),
    [anon_sym_LT_DASH_GT] = ACTIONS(249),
    [anon_sym_LT_EQ_GT] = ACTIONS(249),
    [anon_sym_8] = ACTIONS(249),
    [anon_sym_9] = ACTIONS(249),
    [anon_sym_10] = ACTIONS(249),
  },
  [184] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(536),
    [anon_sym_CARET] = ACTIONS(536),
    [anon_sym_AMP] = ACTIONS(536),
    [anon_sym_4] = ACTIONS(536),
    [anon_sym__] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(536),
    [anon_sym_v] = ACTIONS(536),
    [anon_sym_5] = ACTIONS(536),
    [anon_sym_DASH_GT] = ACTIONS(536),
    [anon_sym_EQ_GT] = ACTIONS(536),
    [anon_sym_6] = ACTIONS(536),
    [anon_sym_7] = ACTIONS(536),
    [anon_sym_LT_DASH_GT] = ACTIONS(536),
    [anon_sym_LT_EQ_GT] = ACTIONS(536),
    [anon_sym_8] = ACTIONS(536),
    [anon_sym_9] = ACTIONS(536),
    [anon_sym_10] = ACTIONS(536),
  },
  [185] = {
    [sym__and_sym] = STATE(115),
    [sym__or_sym] = STATE(116),
    [sym__implies_sym] = STATE(117),
    [sym__iff_sym] = STATE(118),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_CARET] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(540),
    [anon_sym_4] = ACTIONS(540),
    [anon_sym__] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(540),
    [anon_sym_v] = ACTIONS(540),
    [anon_sym_5] = ACTIONS(540),
    [anon_sym_DASH_GT] = ACTIONS(540),
    [anon_sym_EQ_GT] = ACTIONS(540),
    [anon_sym_6] = ACTIONS(540),
    [anon_sym_7] = ACTIONS(540),
    [anon_sym_LT_DASH_GT] = ACTIONS(540),
    [anon_sym_LT_EQ_GT] = ACTIONS(540),
    [anon_sym_8] = ACTIONS(540),
    [anon_sym_9] = ACTIONS(540),
    [anon_sym_10] = ACTIONS(540),
  },
  [186] = {
    [sym__hypothesis_end] = ACTIONS(577),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_DOT] = ACTIONS(577),
    [sym_variable] = ACTIONS(577),
    [sym__function_name] = ACTIONS(579),
    [anon_sym_A] = ACTIONS(579),
    [anon_sym_E] = ACTIONS(579),
    [anon_sym_T] = ACTIONS(579),
    [anon_sym_F] = ACTIONS(579),
    [anon_sym_1] = ACTIONS(577),
    [anon_sym_] = ACTIONS(577),
    [anon_sym_0] = ACTIONS(577),
    [anon_sym_2] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(577),
    [anon_sym_BANG] = ACTIONS(577),
    [anon_sym_TILDE] = ACTIONS(577),
    [anon_sym_3] = ACTIONS(577),
    [anon_sym_11] = ACTIONS(577),
    [anon_sym_12] = ACTIONS(577),
  },
  [187] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_LF] = ACTIONS(261),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_4] = ACTIONS(491),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_v] = ACTIONS(493),
    [anon_sym_5] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_6] = ACTIONS(495),
    [anon_sym_7] = ACTIONS(495),
    [anon_sym_LT_DASH_GT] = ACTIONS(497),
    [anon_sym_LT_EQ_GT] = ACTIONS(497),
    [anon_sym_8] = ACTIONS(497),
    [anon_sym_9] = ACTIONS(497),
    [anon_sym_10] = ACTIONS(497),
  },
  [188] = {
    [aux_sym_annotation_repeat1] = STATE(217),
    [anon_sym_LF] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_COMMA_LF] = ACTIONS(293),
    [sym_comment] = ACTIONS(99),
  },
  [189] = {
    [sym__term] = STATE(218),
    [sym_function] = STATE(218),
    [sym_not] = STATE(218),
    [sym_and] = STATE(218),
    [sym_or] = STATE(218),
    [sym_implies] = STATE(218),
    [sym_iff] = STATE(218),
    [sym_forall] = STATE(218),
    [sym_exists] = STATE(218),
    [sym__group] = STATE(218),
    [sym__universal_group] = STATE(218),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(218),
    [sym_false] = STATE(218),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(585),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [190] = {
    [sym__term] = STATE(219),
    [sym_function] = STATE(219),
    [sym_not] = STATE(219),
    [sym_and] = STATE(219),
    [sym_or] = STATE(219),
    [sym_implies] = STATE(219),
    [sym_iff] = STATE(219),
    [sym_forall] = STATE(219),
    [sym_exists] = STATE(219),
    [sym__group] = STATE(219),
    [sym__universal_group] = STATE(219),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(219),
    [sym_false] = STATE(219),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(587),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [191] = {
    [sym__term] = STATE(220),
    [sym_function] = STATE(220),
    [sym_not] = STATE(220),
    [sym_and] = STATE(220),
    [sym_or] = STATE(220),
    [sym_implies] = STATE(220),
    [sym_iff] = STATE(220),
    [sym_forall] = STATE(220),
    [sym_exists] = STATE(220),
    [sym__group] = STATE(220),
    [sym__universal_group] = STATE(220),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(220),
    [sym_false] = STATE(220),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(589),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [192] = {
    [sym__term] = STATE(221),
    [sym_function] = STATE(221),
    [sym_not] = STATE(221),
    [sym_and] = STATE(221),
    [sym_or] = STATE(221),
    [sym_implies] = STATE(221),
    [sym_iff] = STATE(221),
    [sym_forall] = STATE(221),
    [sym_exists] = STATE(221),
    [sym__group] = STATE(221),
    [sym__universal_group] = STATE(221),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(221),
    [sym_false] = STATE(221),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(591),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [193] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_COMMA_LF] = ACTIONS(315),
    [sym_comment] = ACTIONS(99),
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
  [194] = {
    [sym__term] = STATE(222),
    [sym_function] = STATE(222),
    [sym_not] = STATE(222),
    [sym_and] = STATE(222),
    [sym_or] = STATE(222),
    [sym_implies] = STATE(222),
    [sym_iff] = STATE(222),
    [sym_forall] = STATE(222),
    [sym_exists] = STATE(222),
    [sym__group] = STATE(222),
    [sym__universal_group] = STATE(222),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(222),
    [sym_false] = STATE(222),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(593),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [195] = {
    [sym__term] = STATE(223),
    [sym_function] = STATE(223),
    [sym_not] = STATE(223),
    [sym_and] = STATE(223),
    [sym_or] = STATE(223),
    [sym_implies] = STATE(223),
    [sym_iff] = STATE(223),
    [sym_forall] = STATE(223),
    [sym_exists] = STATE(223),
    [sym__group] = STATE(223),
    [sym__universal_group] = STATE(223),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(223),
    [sym_false] = STATE(223),
    [sym__not_sym] = STATE(133),
    [sym__forall_sym] = STATE(134),
    [sym__exists_sym] = STATE(135),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_variable] = ACTIONS(595),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(275),
    [anon_sym_E] = ACTIONS(277),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(281),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_12] = ACTIONS(287),
  },
  [196] = {
    [sym__hypothesis_end] = ACTIONS(597),
    [sym_comment] = ACTIONS(11),
  },
  [197] = {
    [anon_sym_GT] = ACTIONS(599),
    [sym_comment] = ACTIONS(11),
  },
  [198] = {
    [aux_sym_annotation_repeat1] = STATE(198),
    [ts_builtin_sym_end] = ACTIONS(601),
    [anon_sym_LF] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(605),
    [anon_sym_LT] = ACTIONS(608),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_COMMA_LF] = ACTIONS(603),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym_variable] = ACTIONS(603),
    [sym__function_name] = ACTIONS(603),
    [anon_sym_A] = ACTIONS(603),
    [anon_sym_E] = ACTIONS(603),
    [anon_sym_T] = ACTIONS(603),
    [anon_sym_F] = ACTIONS(603),
    [anon_sym_1] = ACTIONS(603),
    [anon_sym_] = ACTIONS(603),
    [anon_sym_0] = ACTIONS(603),
    [anon_sym_2] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_3] = ACTIONS(603),
    [anon_sym_11] = ACTIONS(603),
    [anon_sym_12] = ACTIONS(603),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(613),
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_COMMA_LF] = ACTIONS(613),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_variable] = ACTIONS(613),
    [sym__function_name] = ACTIONS(613),
    [anon_sym_A] = ACTIONS(613),
    [anon_sym_E] = ACTIONS(613),
    [anon_sym_T] = ACTIONS(613),
    [anon_sym_F] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_] = ACTIONS(613),
    [anon_sym_0] = ACTIONS(613),
    [anon_sym_2] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_TILDE] = ACTIONS(613),
    [anon_sym_3] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_4] = ACTIONS(613),
    [anon_sym__] = ACTIONS(613),
    [anon_sym_PIPE] = ACTIONS(613),
    [anon_sym_v] = ACTIONS(613),
    [anon_sym_5] = ACTIONS(613),
    [anon_sym_DASH_GT] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(613),
    [anon_sym_6] = ACTIONS(613),
    [anon_sym_7] = ACTIONS(613),
    [anon_sym_LT_DASH_GT] = ACTIONS(613),
    [anon_sym_LT_EQ_GT] = ACTIONS(613),
    [anon_sym_8] = ACTIONS(613),
    [anon_sym_9] = ACTIONS(613),
    [anon_sym_10] = ACTIONS(613),
    [anon_sym_11] = ACTIONS(613),
    [anon_sym_12] = ACTIONS(613),
  },
  [200] = {
    [sym__nested_block] = STATE(79),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(31),
    [sym_function] = STATE(31),
    [sym_not] = STATE(31),
    [sym_and] = STATE(31),
    [sym_or] = STATE(31),
    [sym_implies] = STATE(31),
    [sym_iff] = STATE(31),
    [sym_forall] = STATE(31),
    [sym_exists] = STATE(31),
    [sym__group] = STATE(31),
    [sym__universal_group] = STATE(31),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [aux_sym_block_repeat2] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(615),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(49),
    [anon_sym_11] = ACTIONS(51),
    [anon_sym_12] = ACTIONS(53),
  },
  [201] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(374),
  },
  [202] = {
    [anon_sym_GT] = ACTIONS(617),
    [sym_comment] = ACTIONS(11),
  },
  [203] = {
    [aux_sym_annotation_repeat1] = STATE(203),
    [ts_builtin_sym_end] = ACTIONS(601),
    [anon_sym_LF] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(622),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym_variable] = ACTIONS(603),
    [sym__function_name] = ACTIONS(603),
    [anon_sym_A] = ACTIONS(603),
    [anon_sym_E] = ACTIONS(603),
    [anon_sym_T] = ACTIONS(603),
    [anon_sym_F] = ACTIONS(603),
    [anon_sym_1] = ACTIONS(603),
    [anon_sym_] = ACTIONS(603),
    [anon_sym_0] = ACTIONS(603),
    [anon_sym_2] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_3] = ACTIONS(603),
    [anon_sym_11] = ACTIONS(603),
    [anon_sym_12] = ACTIONS(603),
  },
  [204] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(625),
    [sym_comment] = ACTIONS(99),
  },
  [205] = {
    [aux_sym_annotation_repeat1] = STATE(228),
    [anon_sym_LF] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(627),
    [anon_sym_LT] = ACTIONS(557),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [sym_variable] = ACTIONS(514),
    [sym__function_name] = ACTIONS(514),
    [anon_sym_A] = ACTIONS(514),
    [anon_sym_E] = ACTIONS(514),
    [anon_sym_T] = ACTIONS(514),
    [anon_sym_F] = ACTIONS(514),
    [anon_sym_1] = ACTIONS(514),
    [anon_sym_] = ACTIONS(514),
    [anon_sym_0] = ACTIONS(514),
    [anon_sym_2] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_BANG] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_3] = ACTIONS(514),
    [anon_sym_11] = ACTIONS(514),
    [anon_sym_12] = ACTIONS(514),
  },
  [206] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [sym_variable] = ACTIONS(520),
    [sym__function_name] = ACTIONS(520),
    [anon_sym_A] = ACTIONS(520),
    [anon_sym_E] = ACTIONS(520),
    [anon_sym_T] = ACTIONS(520),
    [anon_sym_F] = ACTIONS(520),
    [anon_sym_1] = ACTIONS(520),
    [anon_sym_] = ACTIONS(520),
    [anon_sym_0] = ACTIONS(520),
    [anon_sym_2] = ACTIONS(520),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_3] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_4] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_v] = ACTIONS(520),
    [anon_sym_5] = ACTIONS(520),
    [anon_sym_DASH_GT] = ACTIONS(520),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_6] = ACTIONS(520),
    [anon_sym_7] = ACTIONS(520),
    [anon_sym_LT_DASH_GT] = ACTIONS(520),
    [anon_sym_LT_EQ_GT] = ACTIONS(520),
    [anon_sym_8] = ACTIONS(520),
    [anon_sym_9] = ACTIONS(520),
    [anon_sym_10] = ACTIONS(520),
    [anon_sym_11] = ACTIONS(520),
    [anon_sym_12] = ACTIONS(520),
  },
  [207] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [sym_variable] = ACTIONS(524),
    [sym__function_name] = ACTIONS(524),
    [anon_sym_A] = ACTIONS(524),
    [anon_sym_E] = ACTIONS(524),
    [anon_sym_T] = ACTIONS(524),
    [anon_sym_F] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(524),
    [anon_sym_] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(524),
    [anon_sym_2] = ACTIONS(524),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_BANG] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_3] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_v] = ACTIONS(524),
    [anon_sym_5] = ACTIONS(524),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(524),
    [anon_sym_6] = ACTIONS(524),
    [anon_sym_7] = ACTIONS(524),
    [anon_sym_LT_DASH_GT] = ACTIONS(524),
    [anon_sym_LT_EQ_GT] = ACTIONS(524),
    [anon_sym_8] = ACTIONS(524),
    [anon_sym_9] = ACTIONS(524),
    [anon_sym_10] = ACTIONS(524),
    [anon_sym_11] = ACTIONS(524),
    [anon_sym_12] = ACTIONS(524),
  },
  [208] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [sym_variable] = ACTIONS(528),
    [sym__function_name] = ACTIONS(528),
    [anon_sym_A] = ACTIONS(528),
    [anon_sym_E] = ACTIONS(528),
    [anon_sym_T] = ACTIONS(528),
    [anon_sym_F] = ACTIONS(528),
    [anon_sym_1] = ACTIONS(528),
    [anon_sym_] = ACTIONS(528),
    [anon_sym_0] = ACTIONS(528),
    [anon_sym_2] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_3] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_6] = ACTIONS(406),
    [anon_sym_7] = ACTIONS(406),
    [anon_sym_LT_DASH_GT] = ACTIONS(528),
    [anon_sym_LT_EQ_GT] = ACTIONS(528),
    [anon_sym_8] = ACTIONS(528),
    [anon_sym_9] = ACTIONS(528),
    [anon_sym_10] = ACTIONS(528),
    [anon_sym_11] = ACTIONS(528),
    [anon_sym_12] = ACTIONS(528),
  },
  [209] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(532),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [sym_variable] = ACTIONS(532),
    [sym__function_name] = ACTIONS(532),
    [anon_sym_A] = ACTIONS(532),
    [anon_sym_E] = ACTIONS(532),
    [anon_sym_T] = ACTIONS(532),
    [anon_sym_F] = ACTIONS(532),
    [anon_sym_1] = ACTIONS(532),
    [anon_sym_] = ACTIONS(532),
    [anon_sym_0] = ACTIONS(532),
    [anon_sym_2] = ACTIONS(532),
    [anon_sym_DASH] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_TILDE] = ACTIONS(532),
    [anon_sym_3] = ACTIONS(532),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_v] = ACTIONS(404),
    [anon_sym_5] = ACTIONS(404),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_6] = ACTIONS(406),
    [anon_sym_7] = ACTIONS(406),
    [anon_sym_LT_DASH_GT] = ACTIONS(408),
    [anon_sym_LT_EQ_GT] = ACTIONS(408),
    [anon_sym_8] = ACTIONS(408),
    [anon_sym_9] = ACTIONS(408),
    [anon_sym_10] = ACTIONS(408),
    [anon_sym_11] = ACTIONS(532),
    [anon_sym_12] = ACTIONS(532),
  },
  [210] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [sym_variable] = ACTIONS(538),
    [sym__function_name] = ACTIONS(538),
    [anon_sym_A] = ACTIONS(538),
    [anon_sym_E] = ACTIONS(538),
    [anon_sym_T] = ACTIONS(538),
    [anon_sym_F] = ACTIONS(538),
    [anon_sym_1] = ACTIONS(538),
    [anon_sym_] = ACTIONS(538),
    [anon_sym_0] = ACTIONS(538),
    [anon_sym_2] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_3] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_4] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_v] = ACTIONS(538),
    [anon_sym_5] = ACTIONS(538),
    [anon_sym_DASH_GT] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(538),
    [anon_sym_6] = ACTIONS(538),
    [anon_sym_7] = ACTIONS(538),
    [anon_sym_LT_DASH_GT] = ACTIONS(538),
    [anon_sym_LT_EQ_GT] = ACTIONS(538),
    [anon_sym_8] = ACTIONS(538),
    [anon_sym_9] = ACTIONS(538),
    [anon_sym_10] = ACTIONS(538),
    [anon_sym_11] = ACTIONS(538),
    [anon_sym_12] = ACTIONS(538),
  },
  [211] = {
    [sym__and_sym] = STATE(161),
    [sym__or_sym] = STATE(162),
    [sym__implies_sym] = STATE(163),
    [sym__iff_sym] = STATE(164),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym_variable] = ACTIONS(542),
    [sym__function_name] = ACTIONS(542),
    [anon_sym_A] = ACTIONS(542),
    [anon_sym_E] = ACTIONS(542),
    [anon_sym_T] = ACTIONS(542),
    [anon_sym_F] = ACTIONS(542),
    [anon_sym_1] = ACTIONS(542),
    [anon_sym_] = ACTIONS(542),
    [anon_sym_0] = ACTIONS(542),
    [anon_sym_2] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(542),
    [anon_sym_BANG] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_3] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_4] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_v] = ACTIONS(542),
    [anon_sym_5] = ACTIONS(542),
    [anon_sym_DASH_GT] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [anon_sym_6] = ACTIONS(542),
    [anon_sym_7] = ACTIONS(542),
    [anon_sym_LT_DASH_GT] = ACTIONS(542),
    [anon_sym_LT_EQ_GT] = ACTIONS(542),
    [anon_sym_8] = ACTIONS(542),
    [anon_sym_9] = ACTIONS(542),
    [anon_sym_10] = ACTIONS(542),
    [anon_sym_11] = ACTIONS(542),
    [anon_sym_12] = ACTIONS(542),
  },
  [212] = {
    [anon_sym_GT] = ACTIONS(629),
    [sym_comment] = ACTIONS(11),
  },
  [213] = {
    [aux_sym_annotation_repeat1] = STATE(213),
    [anon_sym_LF] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_COMMA_LF] = ACTIONS(603),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym_variable] = ACTIONS(603),
    [sym__function_name] = ACTIONS(603),
    [anon_sym_A] = ACTIONS(603),
    [anon_sym_E] = ACTIONS(603),
    [anon_sym_T] = ACTIONS(603),
    [anon_sym_F] = ACTIONS(603),
    [anon_sym_1] = ACTIONS(603),
    [anon_sym_] = ACTIONS(603),
    [anon_sym_0] = ACTIONS(603),
    [anon_sym_2] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_3] = ACTIONS(603),
    [anon_sym_11] = ACTIONS(603),
    [anon_sym_12] = ACTIONS(603),
  },
  [214] = {
    [sym__nested_block] = STATE(111),
    [sym_expression] = STATE(30),
    [sym__term] = STATE(94),
    [sym_function] = STATE(94),
    [sym_not] = STATE(94),
    [sym_and] = STATE(94),
    [sym_or] = STATE(94),
    [sym_implies] = STATE(94),
    [sym_iff] = STATE(94),
    [sym_forall] = STATE(94),
    [sym_exists] = STATE(94),
    [sym__group] = STATE(94),
    [sym__universal_group] = STATE(94),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(95),
    [sym__forall_sym] = STATE(96),
    [sym__exists_sym] = STATE(97),
    [aux_sym_block_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_F] = ACTIONS(29),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_3] = ACTIONS(203),
    [anon_sym_11] = ACTIONS(205),
    [anon_sym_12] = ACTIONS(207),
  },
  [215] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_CARET] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
    [anon_sym_4] = ACTIONS(611),
    [anon_sym__] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_v] = ACTIONS(611),
    [anon_sym_5] = ACTIONS(611),
    [anon_sym_DASH_GT] = ACTIONS(611),
    [anon_sym_EQ_GT] = ACTIONS(611),
    [anon_sym_6] = ACTIONS(611),
    [anon_sym_7] = ACTIONS(611),
    [anon_sym_LT_DASH_GT] = ACTIONS(611),
    [anon_sym_LT_EQ_GT] = ACTIONS(611),
    [anon_sym_8] = ACTIONS(611),
    [anon_sym_9] = ACTIONS(611),
    [anon_sym_10] = ACTIONS(611),
  },
  [216] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(637),
    [sym_comment] = ACTIONS(99),
  },
  [217] = {
    [aux_sym_annotation_repeat1] = STATE(231),
    [anon_sym_LF] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_COMMA_LF] = ACTIONS(514),
    [sym_comment] = ACTIONS(99),
  },
  [218] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_COMMA_LF] = ACTIONS(520),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_4] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_v] = ACTIONS(520),
    [anon_sym_5] = ACTIONS(520),
    [anon_sym_DASH_GT] = ACTIONS(520),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_6] = ACTIONS(520),
    [anon_sym_7] = ACTIONS(520),
    [anon_sym_LT_DASH_GT] = ACTIONS(520),
    [anon_sym_LT_EQ_GT] = ACTIONS(520),
    [anon_sym_8] = ACTIONS(520),
    [anon_sym_9] = ACTIONS(520),
    [anon_sym_10] = ACTIONS(520),
  },
  [219] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_COMMA_LF] = ACTIONS(524),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_4] = ACTIONS(491),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_v] = ACTIONS(524),
    [anon_sym_5] = ACTIONS(524),
    [anon_sym_DASH_GT] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(524),
    [anon_sym_6] = ACTIONS(524),
    [anon_sym_7] = ACTIONS(524),
    [anon_sym_LT_DASH_GT] = ACTIONS(524),
    [anon_sym_LT_EQ_GT] = ACTIONS(524),
    [anon_sym_8] = ACTIONS(524),
    [anon_sym_9] = ACTIONS(524),
    [anon_sym_10] = ACTIONS(524),
  },
  [220] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_COMMA_LF] = ACTIONS(528),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_4] = ACTIONS(491),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_v] = ACTIONS(493),
    [anon_sym_5] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_6] = ACTIONS(495),
    [anon_sym_7] = ACTIONS(495),
    [anon_sym_LT_DASH_GT] = ACTIONS(528),
    [anon_sym_LT_EQ_GT] = ACTIONS(528),
    [anon_sym_8] = ACTIONS(528),
    [anon_sym_9] = ACTIONS(528),
    [anon_sym_10] = ACTIONS(528),
  },
  [221] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(532),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_COMMA_LF] = ACTIONS(532),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_4] = ACTIONS(491),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_v] = ACTIONS(493),
    [anon_sym_5] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_6] = ACTIONS(495),
    [anon_sym_7] = ACTIONS(495),
    [anon_sym_LT_DASH_GT] = ACTIONS(497),
    [anon_sym_LT_EQ_GT] = ACTIONS(497),
    [anon_sym_8] = ACTIONS(497),
    [anon_sym_9] = ACTIONS(497),
    [anon_sym_10] = ACTIONS(497),
  },
  [222] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_COMMA_LF] = ACTIONS(538),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_4] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_v] = ACTIONS(538),
    [anon_sym_5] = ACTIONS(538),
    [anon_sym_DASH_GT] = ACTIONS(538),
    [anon_sym_EQ_GT] = ACTIONS(538),
    [anon_sym_6] = ACTIONS(538),
    [anon_sym_7] = ACTIONS(538),
    [anon_sym_LT_DASH_GT] = ACTIONS(538),
    [anon_sym_LT_EQ_GT] = ACTIONS(538),
    [anon_sym_8] = ACTIONS(538),
    [anon_sym_9] = ACTIONS(538),
    [anon_sym_10] = ACTIONS(538),
  },
  [223] = {
    [sym__and_sym] = STATE(189),
    [sym__or_sym] = STATE(190),
    [sym__implies_sym] = STATE(191),
    [sym__iff_sym] = STATE(192),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_COMMA_LF] = ACTIONS(542),
    [sym_comment] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_4] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_v] = ACTIONS(542),
    [anon_sym_5] = ACTIONS(542),
    [anon_sym_DASH_GT] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [anon_sym_6] = ACTIONS(542),
    [anon_sym_7] = ACTIONS(542),
    [anon_sym_LT_DASH_GT] = ACTIONS(542),
    [anon_sym_LT_EQ_GT] = ACTIONS(542),
    [anon_sym_8] = ACTIONS(542),
    [anon_sym_9] = ACTIONS(542),
    [anon_sym_10] = ACTIONS(542),
  },
  [224] = {
    [sym__hypothesis_end] = ACTIONS(641),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(641),
    [sym_variable] = ACTIONS(641),
    [sym__function_name] = ACTIONS(643),
    [anon_sym_A] = ACTIONS(643),
    [anon_sym_E] = ACTIONS(643),
    [anon_sym_T] = ACTIONS(643),
    [anon_sym_F] = ACTIONS(643),
    [anon_sym_1] = ACTIONS(641),
    [anon_sym_] = ACTIONS(641),
    [anon_sym_0] = ACTIONS(641),
    [anon_sym_2] = ACTIONS(641),
    [anon_sym_DASH] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(641),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_3] = ACTIONS(641),
    [anon_sym_11] = ACTIONS(641),
    [anon_sym_12] = ACTIONS(641),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(647),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_COMMA_LF] = ACTIONS(647),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(647),
    [sym_variable] = ACTIONS(647),
    [sym__function_name] = ACTIONS(647),
    [anon_sym_A] = ACTIONS(647),
    [anon_sym_E] = ACTIONS(647),
    [anon_sym_T] = ACTIONS(647),
    [anon_sym_F] = ACTIONS(647),
    [anon_sym_1] = ACTIONS(647),
    [anon_sym_] = ACTIONS(647),
    [anon_sym_0] = ACTIONS(647),
    [anon_sym_2] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [anon_sym_BANG] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_3] = ACTIONS(647),
    [anon_sym_11] = ACTIONS(647),
    [anon_sym_12] = ACTIONS(647),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(647),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(647),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(647),
    [sym_variable] = ACTIONS(647),
    [sym__function_name] = ACTIONS(647),
    [anon_sym_A] = ACTIONS(647),
    [anon_sym_E] = ACTIONS(647),
    [anon_sym_T] = ACTIONS(647),
    [anon_sym_F] = ACTIONS(647),
    [anon_sym_1] = ACTIONS(647),
    [anon_sym_] = ACTIONS(647),
    [anon_sym_0] = ACTIONS(647),
    [anon_sym_2] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [anon_sym_BANG] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_3] = ACTIONS(647),
    [anon_sym_11] = ACTIONS(647),
    [anon_sym_12] = ACTIONS(647),
  },
  [227] = {
    [anon_sym_GT] = ACTIONS(649),
    [sym_comment] = ACTIONS(11),
  },
  [228] = {
    [aux_sym_annotation_repeat1] = STATE(228),
    [anon_sym_LF] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(651),
    [anon_sym_LT] = ACTIONS(654),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym_variable] = ACTIONS(603),
    [sym__function_name] = ACTIONS(603),
    [anon_sym_A] = ACTIONS(603),
    [anon_sym_E] = ACTIONS(603),
    [anon_sym_T] = ACTIONS(603),
    [anon_sym_F] = ACTIONS(603),
    [anon_sym_1] = ACTIONS(603),
    [anon_sym_] = ACTIONS(603),
    [anon_sym_0] = ACTIONS(603),
    [anon_sym_2] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_3] = ACTIONS(603),
    [anon_sym_11] = ACTIONS(603),
    [anon_sym_12] = ACTIONS(603),
  },
  [229] = {
    [anon_sym_LF] = ACTIONS(647),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_COMMA_LF] = ACTIONS(647),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(647),
    [sym_variable] = ACTIONS(647),
    [sym__function_name] = ACTIONS(647),
    [anon_sym_A] = ACTIONS(647),
    [anon_sym_E] = ACTIONS(647),
    [anon_sym_T] = ACTIONS(647),
    [anon_sym_F] = ACTIONS(647),
    [anon_sym_1] = ACTIONS(647),
    [anon_sym_] = ACTIONS(647),
    [anon_sym_0] = ACTIONS(647),
    [anon_sym_2] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [anon_sym_BANG] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_3] = ACTIONS(647),
    [anon_sym_11] = ACTIONS(647),
    [anon_sym_12] = ACTIONS(647),
  },
  [230] = {
    [anon_sym_GT] = ACTIONS(657),
    [sym_comment] = ACTIONS(11),
  },
  [231] = {
    [aux_sym_annotation_repeat1] = STATE(231),
    [anon_sym_LF] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_COMMA_LF] = ACTIONS(603),
    [sym_comment] = ACTIONS(99),
  },
  [232] = {
    [anon_sym_LF] = ACTIONS(647),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(647),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(647),
    [sym_variable] = ACTIONS(647),
    [sym__function_name] = ACTIONS(647),
    [anon_sym_A] = ACTIONS(647),
    [anon_sym_E] = ACTIONS(647),
    [anon_sym_T] = ACTIONS(647),
    [anon_sym_F] = ACTIONS(647),
    [anon_sym_1] = ACTIONS(647),
    [anon_sym_] = ACTIONS(647),
    [anon_sym_0] = ACTIONS(647),
    [anon_sym_2] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [anon_sym_BANG] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_3] = ACTIONS(647),
    [anon_sym_11] = ACTIONS(647),
    [anon_sym_12] = ACTIONS(647),
  },
  [233] = {
    [anon_sym_LF] = ACTIONS(647),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_COMMA_LF] = ACTIONS(647),
    [sym_comment] = ACTIONS(99),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_proof, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(18),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, SHIFT(27),
  [45] = {.count = 1, .reusable = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = true}, SHIFT(31),
  [49] = {.count = 1, .reusable = true}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, SHIFT(33),
  [53] = {.count = 1, .reusable = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true}, SHIFT(37),
  [59] = {.count = 1, .reusable = true}, SHIFT(40),
  [61] = {.count = 1, .reusable = true}, SHIFT(41),
  [63] = {.count = 1, .reusable = true}, SHIFT(42),
  [65] = {.count = 1, .reusable = true}, SHIFT(43),
  [67] = {.count = 1, .reusable = true}, SHIFT(46),
  [69] = {.count = 1, .reusable = true}, SHIFT(47),
  [71] = {.count = 1, .reusable = true}, SHIFT(55),
  [73] = {.count = 1, .reusable = false}, SHIFT(48),
  [75] = {.count = 1, .reusable = false}, SHIFT(49),
  [77] = {.count = 1, .reusable = false}, SHIFT(50),
  [79] = {.count = 1, .reusable = false}, SHIFT(51),
  [81] = {.count = 1, .reusable = false}, SHIFT(52),
  [83] = {.count = 1, .reusable = true}, SHIFT(53),
  [85] = {.count = 1, .reusable = true}, SHIFT(54),
  [87] = {.count = 1, .reusable = true}, SHIFT(58),
  [89] = {.count = 1, .reusable = true}, SHIFT(59),
  [91] = {.count = 1, .reusable = true}, SHIFT(60),
  [93] = {.count = 1, .reusable = true}, SHIFT(61),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [101] = {.count = 2, .reusable = false}, REDUCE(sym_function_name, 1), REDUCE(sym__forall_sym, 1),
  [104] = {.count = 2, .reusable = false}, REDUCE(sym_function_name, 1), REDUCE(sym__exists_sym, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [111] = {.count = 2, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12), REDUCE(sym_true, 1),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [118] = {.count = 2, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12), REDUCE(sym_false, 1),
  [121] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_proof, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(62),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat2, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(63),
  [131] = {.count = 1, .reusable = false}, SHIFT(64),
  [133] = {.count = 1, .reusable = false}, SHIFT(65),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat2, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [139] = {.count = 1, .reusable = false}, SHIFT(67),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [143] = {.count = 1, .reusable = false}, SHIFT(69),
  [145] = {.count = 1, .reusable = false}, SHIFT(70),
  [147] = {.count = 1, .reusable = false}, SHIFT(71),
  [149] = {.count = 1, .reusable = false}, SHIFT(72),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [155] = {.count = 1, .reusable = false}, SHIFT(73),
  [157] = {.count = 1, .reusable = true}, SHIFT(73),
  [159] = {.count = 1, .reusable = true}, SHIFT(74),
  [161] = {.count = 1, .reusable = true}, SHIFT(75),
  [163] = {.count = 1, .reusable = true}, SHIFT(76),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 1),
  [173] = {.count = 1, .reusable = true}, SHIFT(80),
  [175] = {.count = 1, .reusable = true}, SHIFT(82),
  [177] = {.count = 1, .reusable = true}, SHIFT(83),
  [179] = {.count = 1, .reusable = true}, SHIFT(84),
  [181] = {.count = 1, .reusable = false}, SHIFT(85),
  [183] = {.count = 1, .reusable = false}, SHIFT(86),
  [185] = {.count = 1, .reusable = false}, SHIFT(87),
  [187] = {.count = 1, .reusable = false}, SHIFT(88),
  [189] = {.count = 1, .reusable = false}, SHIFT(89),
  [191] = {.count = 1, .reusable = true}, SHIFT(90),
  [193] = {.count = 1, .reusable = true}, SHIFT(91),
  [195] = {.count = 1, .reusable = true}, SHIFT(92),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(93),
  [201] = {.count = 1, .reusable = true}, SHIFT(94),
  [203] = {.count = 1, .reusable = true}, SHIFT(95),
  [205] = {.count = 1, .reusable = true}, SHIFT(96),
  [207] = {.count = 1, .reusable = true}, SHIFT(97),
  [209] = {.count = 1, .reusable = true}, SHIFT(99),
  [211] = {.count = 1, .reusable = true}, SHIFT(100),
  [213] = {.count = 1, .reusable = true}, SHIFT(101),
  [215] = {.count = 1, .reusable = false}, SHIFT(102),
  [217] = {.count = 1, .reusable = false}, SHIFT(103),
  [219] = {.count = 1, .reusable = false}, SHIFT(104),
  [221] = {.count = 1, .reusable = false}, SHIFT(105),
  [223] = {.count = 1, .reusable = false}, SHIFT(106),
  [225] = {.count = 1, .reusable = true}, SHIFT(107),
  [227] = {.count = 1, .reusable = true}, SHIFT(108),
  [229] = {.count = 1, .reusable = true}, SHIFT(109),
  [231] = {.count = 1, .reusable = true}, SHIFT(112),
  [233] = {.count = 1, .reusable = true}, SHIFT(113),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__forall_sym, 1),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__exists_sym, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [241] = {.count = 1, .reusable = true}, SHIFT(114),
  [243] = {.count = 1, .reusable = true}, SHIFT(115),
  [245] = {.count = 1, .reusable = true}, SHIFT(116),
  [247] = {.count = 1, .reusable = true}, SHIFT(117),
  [249] = {.count = 1, .reusable = true}, SHIFT(118),
  [251] = {.count = 1, .reusable = true}, SHIFT(119),
  [253] = {.count = 1, .reusable = true}, SHIFT(120),
  [255] = {.count = 1, .reusable = true}, SHIFT(121),
  [257] = {.count = 1, .reusable = true}, SHIFT(122),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym__universal_group, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(124),
  [267] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2),
  [269] = {.count = 1, .reusable = true}, SHIFT(125),
  [271] = {.count = 1, .reusable = true}, SHIFT(126),
  [273] = {.count = 1, .reusable = true}, SHIFT(132),
  [275] = {.count = 1, .reusable = false}, SHIFT(127),
  [277] = {.count = 1, .reusable = false}, SHIFT(128),
  [279] = {.count = 1, .reusable = false}, SHIFT(129),
  [281] = {.count = 1, .reusable = false}, SHIFT(130),
  [283] = {.count = 1, .reusable = true}, SHIFT(133),
  [285] = {.count = 1, .reusable = true}, SHIFT(134),
  [287] = {.count = 1, .reusable = true}, SHIFT(135),
  [289] = {.count = 1, .reusable = false}, SHIFT(136),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 1),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 1),
  [295] = {.count = 1, .reusable = false}, SHIFT(139),
  [297] = {.count = 1, .reusable = false}, SHIFT(138),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(140),
  [305] = {.count = 1, .reusable = true}, SHIFT(141),
  [307] = {.count = 1, .reusable = true}, SHIFT(142),
  [309] = {.count = 1, .reusable = true}, SHIFT(143),
  [311] = {.count = 1, .reusable = true}, SHIFT(144),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [317] = {.count = 1, .reusable = true}, SHIFT(145),
  [319] = {.count = 1, .reusable = true}, SHIFT(146),
  [321] = {.count = 1, .reusable = true}, SHIFT(147),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [326] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [328] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(4),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(5),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(29),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(7),
  [345] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(8),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(9),
  [351] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(10),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(11),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(12),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(13),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(32),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(33),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(34),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 2),
  [374] = {.count = 1, .reusable = true}, SHIFT(148),
  [376] = {.count = 1, .reusable = true}, SHIFT(149),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 3),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 3),
  [382] = {.count = 1, .reusable = false}, SHIFT(152),
  [384] = {.count = 1, .reusable = false}, SHIFT(151),
  [386] = {.count = 1, .reusable = true}, SHIFT(153),
  [388] = {.count = 1, .reusable = true}, SHIFT(154),
  [390] = {.count = 1, .reusable = true}, SHIFT(155),
  [392] = {.count = 1, .reusable = true}, SHIFT(156),
  [394] = {.count = 1, .reusable = true}, SHIFT(157),
  [396] = {.count = 1, .reusable = true}, SHIFT(158),
  [398] = {.count = 1, .reusable = true}, SHIFT(159),
  [400] = {.count = 1, .reusable = false}, SHIFT(160),
  [402] = {.count = 1, .reusable = false}, SHIFT(161),
  [404] = {.count = 1, .reusable = false}, SHIFT(162),
  [406] = {.count = 1, .reusable = false}, SHIFT(163),
  [408] = {.count = 1, .reusable = false}, SHIFT(164),
  [410] = {.count = 1, .reusable = true}, SHIFT(165),
  [412] = {.count = 1, .reusable = true}, SHIFT(166),
  [414] = {.count = 1, .reusable = true}, SHIFT(167),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym__nested_block, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym__nested_block, 3),
  [420] = {.count = 1, .reusable = false}, SHIFT(170),
  [422] = {.count = 1, .reusable = false}, SHIFT(169),
  [424] = {.count = 1, .reusable = true}, SHIFT(171),
  [426] = {.count = 1, .reusable = true}, SHIFT(172),
  [428] = {.count = 1, .reusable = true}, SHIFT(173),
  [430] = {.count = 1, .reusable = true}, SHIFT(174),
  [432] = {.count = 1, .reusable = true}, SHIFT(175),
  [434] = {.count = 1, .reusable = true}, SHIFT(176),
  [436] = {.count = 1, .reusable = true}, SHIFT(177),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(93),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(94),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(95),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(96),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(97),
  [453] = {.count = 1, .reusable = true}, SHIFT(178),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [459] = {.count = 1, .reusable = true}, SHIFT(179),
  [461] = {.count = 1, .reusable = true}, SHIFT(180),
  [463] = {.count = 1, .reusable = true}, SHIFT(181),
  [465] = {.count = 1, .reusable = true}, SHIFT(182),
  [467] = {.count = 1, .reusable = true}, SHIFT(183),
  [469] = {.count = 1, .reusable = true}, SHIFT(184),
  [471] = {.count = 1, .reusable = true}, SHIFT(185),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(186),
  [481] = {.count = 1, .reusable = true}, SHIFT(187),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [485] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(188),
  [491] = {.count = 1, .reusable = false}, SHIFT(189),
  [493] = {.count = 1, .reusable = false}, SHIFT(190),
  [495] = {.count = 1, .reusable = false}, SHIFT(191),
  [497] = {.count = 1, .reusable = false}, SHIFT(192),
  [499] = {.count = 1, .reusable = true}, SHIFT(193),
  [501] = {.count = 1, .reusable = true}, SHIFT(194),
  [503] = {.count = 1, .reusable = true}, SHIFT(195),
  [505] = {.count = 1, .reusable = true}, SHIFT(196),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(65),
  [510] = {.count = 1, .reusable = false}, SHIFT(197),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [516] = {.count = 1, .reusable = false}, SHIFT(198),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_iff, 3),
  [534] = {.count = 1, .reusable = true}, SHIFT(199),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 3),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2), SHIFT_REPEAT(201),
  [551] = {.count = 1, .reusable = false}, SHIFT(202),
  [553] = {.count = 1, .reusable = false}, SHIFT(203),
  [555] = {.count = 1, .reusable = false}, SHIFT(205),
  [557] = {.count = 1, .reusable = false}, SHIFT(204),
  [559] = {.count = 1, .reusable = true}, SHIFT(206),
  [561] = {.count = 1, .reusable = true}, SHIFT(207),
  [563] = {.count = 1, .reusable = true}, SHIFT(208),
  [565] = {.count = 1, .reusable = true}, SHIFT(209),
  [567] = {.count = 1, .reusable = true}, SHIFT(210),
  [569] = {.count = 1, .reusable = true}, SHIFT(211),
  [571] = {.count = 1, .reusable = false}, SHIFT(212),
  [573] = {.count = 1, .reusable = false}, SHIFT(213),
  [575] = {.count = 1, .reusable = true}, SHIFT(215),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 4),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 4),
  [581] = {.count = 1, .reusable = false}, SHIFT(217),
  [583] = {.count = 1, .reusable = false}, SHIFT(216),
  [585] = {.count = 1, .reusable = true}, SHIFT(218),
  [587] = {.count = 1, .reusable = true}, SHIFT(219),
  [589] = {.count = 1, .reusable = true}, SHIFT(220),
  [591] = {.count = 1, .reusable = true}, SHIFT(221),
  [593] = {.count = 1, .reusable = true}, SHIFT(222),
  [595] = {.count = 1, .reusable = true}, SHIFT(223),
  [597] = {.count = 1, .reusable = true}, SHIFT(224),
  [599] = {.count = 1, .reusable = true}, SHIFT(225),
  [601] = {.count = 1, .reusable = true}, REDUCE(aux_sym_annotation_repeat1, 2),
  [603] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [605] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(198),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(138),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [617] = {.count = 1, .reusable = true}, SHIFT(226),
  [619] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(203),
  [622] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(151),
  [625] = {.count = 1, .reusable = false}, SHIFT(227),
  [627] = {.count = 1, .reusable = false}, SHIFT(228),
  [629] = {.count = 1, .reusable = true}, SHIFT(229),
  [631] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(213),
  [634] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(169),
  [637] = {.count = 1, .reusable = false}, SHIFT(230),
  [639] = {.count = 1, .reusable = false}, SHIFT(231),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 5),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 5),
  [645] = {.count = 1, .reusable = true}, REDUCE(aux_sym_annotation_repeat1, 3),
  [647] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 3),
  [649] = {.count = 1, .reusable = true}, SHIFT(232),
  [651] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(228),
  [654] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(204),
  [657] = {.count = 1, .reusable = true}, SHIFT(233),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(231),
  [662] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(216),
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

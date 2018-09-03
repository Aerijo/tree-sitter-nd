#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 155
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
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(65);
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
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 59:
      if (lookahead == '>')
        ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == '-')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 63:
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 66:
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
        SKIP(66);
      END_STATE();
    case 67:
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
        SKIP(68);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(65);
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
        SKIP(69);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(71);
      if (lookahead == '/')
        ADVANCE(73);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(75);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(72);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == ',')
        ADVANCE(71);
      if (lookahead == '/')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(72);
      END_STATE();
    case 77:
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
        SKIP(77);
      if (('B' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == '\n')
        ADVANCE(58);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(73);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '/')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<')
        ADVANCE(72);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(81);
      if (lookahead == '/')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(82);
      if (lookahead == '>')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(85);
      if (lookahead == '>')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(85);
      if (lookahead == '/')
        ADVANCE(82);
      if (lookahead == '>')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(81);
      if (lookahead == '/')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(82);
      END_STATE();
    case 87:
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
        SKIP(87);
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
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 68},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 69},
  [51] = {.lex_state = 69},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 68},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 57},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 52},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 55},
  [76] = {.lex_state = 55},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 78},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 52},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 52},
  [88] = {.lex_state = 68},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 52},
  [91] = {.lex_state = 52},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 69},
  [94] = {.lex_state = 69},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 52},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 52},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 69},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 52},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 57},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 70},
  [112] = {.lex_state = 57},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 57},
  [115] = {.lex_state = 57},
  [116] = {.lex_state = 69},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 55},
  [121] = {.lex_state = 55},
  [122] = {.lex_state = 55},
  [123] = {.lex_state = 80},
  [124] = {.lex_state = 78},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 69},
  [138] = {.lex_state = 69},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 52},
  [142] = {.lex_state = 52},
  [143] = {.lex_state = 87},
  [144] = {.lex_state = 70},
  [145] = {.lex_state = 57},
  [146] = {.lex_state = 67},
  [147] = {.lex_state = 52},
  [148] = {.lex_state = 87},
  [149] = {.lex_state = 78},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 69},
  [152] = {.lex_state = 52},
  [153] = {.lex_state = 70},
  [154] = {.lex_state = 78},
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
    [sym_block] = STATE(37),
    [sym_guard] = STATE(39),
    [sym_hypothesis] = STATE(38),
    [sym__nested_block] = STATE(40),
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
    [aux_sym_block_repeat2] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(55),
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
  [5] = {
    [sym__term] = STATE(50),
    [sym_function] = STATE(50),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_implies] = STATE(50),
    [sym_iff] = STATE(50),
    [sym_forall] = STATE(50),
    [sym_exists] = STATE(50),
    [sym__group] = STATE(50),
    [sym__universal_group] = STATE(50),
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(50),
    [sym_false] = STATE(50),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(61),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [6] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(83),
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
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COMMA_LF] = ACTIONS(87),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_5] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_6] = ACTIONS(87),
    [anon_sym_7] = ACTIONS(87),
    [anon_sym_LT_DASH_GT] = ACTIONS(87),
    [anon_sym_LT_EQ_GT] = ACTIONS(87),
    [anon_sym_8] = ACTIONS(87),
    [anon_sym_9] = ACTIONS(87),
    [anon_sym_10] = ACTIONS(87),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COMMA_LF] = ACTIONS(87),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [sym_variable] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_5] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_6] = ACTIONS(87),
    [anon_sym_7] = ACTIONS(87),
    [anon_sym_LT_DASH_GT] = ACTIONS(87),
    [anon_sym_LT_EQ_GT] = ACTIONS(87),
    [anon_sym_8] = ACTIONS(87),
    [anon_sym_9] = ACTIONS(87),
    [anon_sym_10] = ACTIONS(87),
  },
  [9] = {
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COMMA_LF] = ACTIONS(87),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [sym_variable] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_4] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_5] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_6] = ACTIONS(87),
    [anon_sym_7] = ACTIONS(87),
    [anon_sym_LT_DASH_GT] = ACTIONS(87),
    [anon_sym_LT_EQ_GT] = ACTIONS(87),
    [anon_sym_8] = ACTIONS(87),
    [anon_sym_9] = ACTIONS(87),
    [anon_sym_10] = ACTIONS(87),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(99),
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
  [11] = {
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_COMMA_LF] = ACTIONS(103),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_4] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_v] = ACTIONS(103),
    [anon_sym_5] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_6] = ACTIONS(103),
    [anon_sym_7] = ACTIONS(103),
    [anon_sym_LT_DASH_GT] = ACTIONS(103),
    [anon_sym_LT_EQ_GT] = ACTIONS(103),
    [anon_sym_8] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(103),
    [anon_sym_10] = ACTIONS(103),
  },
  [12] = {
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COMMA_LF] = ACTIONS(97),
    [sym_comment] = ACTIONS(89),
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
  [13] = {
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_COMMA_LF] = ACTIONS(103),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_4] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_v] = ACTIONS(103),
    [anon_sym_5] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_6] = ACTIONS(103),
    [anon_sym_7] = ACTIONS(103),
    [anon_sym_LT_DASH_GT] = ACTIONS(103),
    [anon_sym_LT_EQ_GT] = ACTIONS(103),
    [anon_sym_8] = ACTIONS(103),
    [anon_sym_9] = ACTIONS(103),
    [anon_sym_10] = ACTIONS(103),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(11),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [sym__hypothesis_end] = ACTIONS(109),
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
    [aux_sym_hypothesis_repeat1] = STATE(61),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_COMMA_LF] = ACTIONS(115),
    [sym_comment] = ACTIONS(89),
  },
  [18] = {
    [sym_annotation] = STATE(63),
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_COMMA_LF] = ACTIONS(121),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_v] = ACTIONS(125),
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
  [19] = {
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_COMMA_LF] = ACTIONS(133),
    [sym_comment] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_4] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_v] = ACTIONS(133),
    [anon_sym_5] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(133),
    [anon_sym_EQ_GT] = ACTIONS(133),
    [anon_sym_6] = ACTIONS(133),
    [anon_sym_7] = ACTIONS(133),
    [anon_sym_LT_DASH_GT] = ACTIONS(133),
    [anon_sym_LT_EQ_GT] = ACTIONS(133),
    [anon_sym_8] = ACTIONS(133),
    [anon_sym_9] = ACTIONS(133),
    [anon_sym_10] = ACTIONS(133),
  },
  [20] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(137),
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
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(139),
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
    [sym_variable] = ACTIONS(141),
  },
  [23] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(143),
  },
  [24] = {
    [sym_guard] = STATE(73),
    [sym_hypothesis] = STATE(72),
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
    [aux_sym_block_repeat1] = STATE(73),
    [aux_sym_block_repeat2] = STATE(35),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(109),
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
    [sym__nested_block] = STATE(74),
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
    [aux_sym_block_repeat2] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(145),
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
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym__hypothesis_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [sym__function_name] = ACTIONS(149),
    [anon_sym_A] = ACTIONS(149),
    [anon_sym_E] = ACTIONS(149),
    [anon_sym_T] = ACTIONS(149),
    [anon_sym_F] = ACTIONS(149),
    [anon_sym_1] = ACTIONS(147),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_0] = ACTIONS(147),
    [anon_sym_2] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_12] = ACTIONS(147),
  },
  [27] = {
    [aux_sym_vars_repeat1] = STATE(76),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(153),
    [sym_comment] = ACTIONS(11),
  },
  [28] = {
    [anon_sym_RBRACK] = ACTIONS(155),
    [sym_comment] = ACTIONS(11),
  },
  [29] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(78),
    [sym_false] = STATE(78),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(157),
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
    [anon_sym_LF] = ACTIONS(159),
    [sym_comment] = ACTIONS(89),
  },
  [31] = {
    [sym_annotation] = STATE(63),
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(161),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_v] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_EQ_GT] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_LT_DASH_GT] = ACTIONS(169),
    [anon_sym_LT_EQ_GT] = ACTIONS(169),
    [anon_sym_8] = ACTIONS(169),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(169),
  },
  [32] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(85),
    [sym_false] = STATE(85),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(171),
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
    [sym_variable] = ACTIONS(173),
  },
  [34] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(175),
  },
  [35] = {
    [sym__nested_block] = STATE(74),
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
    [aux_sym_block_repeat2] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(177),
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
    [sym__nested_block] = STATE(88),
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
    [aux_sym_block_repeat2] = STATE(88),
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
  [37] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(179),
  },
  [38] = {
    [sym__nested_block] = STATE(88),
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
    [aux_sym_block_repeat2] = STATE(88),
    [sym__hypothesis_end] = ACTIONS(181),
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
  [39] = {
    [sym_guard] = STATE(73),
    [sym_hypothesis] = STATE(91),
    [sym__nested_block] = STATE(88),
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
    [aux_sym_block_repeat1] = STATE(73),
    [aux_sym_block_repeat2] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__hypothesis_end] = ACTIONS(181),
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
  [40] = {
    [sym__nested_block] = STATE(92),
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
    [aux_sym_block_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(145),
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
  [41] = {
    [sym__term] = STATE(93),
    [sym_function] = STATE(93),
    [sym_not] = STATE(93),
    [sym_and] = STATE(93),
    [sym_or] = STATE(93),
    [sym_implies] = STATE(93),
    [sym_iff] = STATE(93),
    [sym_forall] = STATE(93),
    [sym_exists] = STATE(93),
    [sym__group] = STATE(93),
    [sym__universal_group] = STATE(93),
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(93),
    [sym_false] = STATE(93),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(183),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [42] = {
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(185),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [43] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_4] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_v] = ACTIONS(85),
    [anon_sym_5] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_6] = ACTIONS(85),
    [anon_sym_7] = ACTIONS(85),
    [anon_sym_LT_DASH_GT] = ACTIONS(85),
    [anon_sym_LT_EQ_GT] = ACTIONS(85),
    [anon_sym_8] = ACTIONS(85),
    [anon_sym_9] = ACTIONS(85),
    [anon_sym_10] = ACTIONS(85),
  },
  [44] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_variable] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_4] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_5] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_6] = ACTIONS(85),
    [anon_sym_7] = ACTIONS(85),
    [anon_sym_LT_DASH_GT] = ACTIONS(85),
    [anon_sym_LT_EQ_GT] = ACTIONS(85),
    [anon_sym_8] = ACTIONS(85),
    [anon_sym_9] = ACTIONS(85),
    [anon_sym_10] = ACTIONS(85),
  },
  [45] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_variable] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_4] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_5] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_6] = ACTIONS(85),
    [anon_sym_7] = ACTIONS(85),
    [anon_sym_LT_DASH_GT] = ACTIONS(85),
    [anon_sym_LT_EQ_GT] = ACTIONS(85),
    [anon_sym_8] = ACTIONS(85),
    [anon_sym_9] = ACTIONS(85),
    [anon_sym_10] = ACTIONS(85),
  },
  [46] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(187),
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
  [47] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_4] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_v] = ACTIONS(101),
    [anon_sym_5] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_6] = ACTIONS(101),
    [anon_sym_7] = ACTIONS(101),
    [anon_sym_LT_DASH_GT] = ACTIONS(101),
    [anon_sym_LT_EQ_GT] = ACTIONS(101),
    [anon_sym_8] = ACTIONS(101),
    [anon_sym_9] = ACTIONS(101),
    [anon_sym_10] = ACTIONS(101),
  },
  [48] = {
    [sym_comment] = ACTIONS(11),
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
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_4] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_v] = ACTIONS(101),
    [anon_sym_5] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_6] = ACTIONS(101),
    [anon_sym_7] = ACTIONS(101),
    [anon_sym_LT_DASH_GT] = ACTIONS(101),
    [anon_sym_LT_EQ_GT] = ACTIONS(101),
    [anon_sym_8] = ACTIONS(101),
    [anon_sym_9] = ACTIONS(101),
    [anon_sym_10] = ACTIONS(101),
  },
  [50] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [51] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_4] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_v] = ACTIONS(131),
    [anon_sym_5] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_EQ_GT] = ACTIONS(131),
    [anon_sym_6] = ACTIONS(131),
    [anon_sym_7] = ACTIONS(131),
    [anon_sym_LT_DASH_GT] = ACTIONS(131),
    [anon_sym_LT_EQ_GT] = ACTIONS(131),
    [anon_sym_8] = ACTIONS(131),
    [anon_sym_9] = ACTIONS(131),
    [anon_sym_10] = ACTIONS(131),
  },
  [52] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [53] = {
    [sym__term] = STATE(101),
    [sym_function] = STATE(101),
    [sym_not] = STATE(101),
    [sym_and] = STATE(101),
    [sym_or] = STATE(101),
    [sym_implies] = STATE(101),
    [sym_iff] = STATE(101),
    [sym_forall] = STATE(101),
    [sym_exists] = STATE(101),
    [sym__group] = STATE(101),
    [sym__universal_group] = STATE(101),
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(101),
    [sym_false] = STATE(101),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(201),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [54] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(203),
  },
  [55] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(205),
  },
  [56] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_COMMA_LF] = ACTIONS(209),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_v] = ACTIONS(125),
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
  [57] = {
    [sym__nested_block] = STATE(104),
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
    [aux_sym_block_repeat2] = STATE(104),
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
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym__hypothesis_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_variable] = ACTIONS(211),
    [sym__function_name] = ACTIONS(215),
    [anon_sym_A] = ACTIONS(215),
    [anon_sym_E] = ACTIONS(215),
    [anon_sym_T] = ACTIONS(215),
    [anon_sym_F] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(211),
    [anon_sym_] = ACTIONS(211),
    [anon_sym_0] = ACTIONS(211),
    [anon_sym_2] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_3] = ACTIONS(211),
    [anon_sym_11] = ACTIONS(211),
    [anon_sym_12] = ACTIONS(211),
  },
  [59] = {
    [anon_sym_LF] = ACTIONS(217),
    [sym_comment] = ACTIONS(89),
  },
  [60] = {
    [sym_expression] = STATE(107),
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
    [sym_comment] = ACTIONS(11),
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
  [61] = {
    [aux_sym_hypothesis_repeat1] = STATE(109),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_COMMA_LF] = ACTIONS(115),
    [sym_comment] = ACTIONS(89),
  },
  [62] = {
    [aux_sym_annotation_repeat1] = STATE(111),
    [anon_sym_LF] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COMMA_LF] = ACTIONS(221),
    [sym_comment] = ACTIONS(89),
  },
  [63] = {
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_COMMA_LF] = ACTIONS(229),
    [sym_comment] = ACTIONS(89),
  },
  [64] = {
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
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(231),
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
  [65] = {
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
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(233),
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
  [66] = {
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
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(235),
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
  [67] = {
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
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(115),
    [sym_false] = STATE(115),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(237),
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
  [68] = {
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(116),
    [sym_false] = STATE(116),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(239),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [69] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COMMA_LF] = ACTIONS(243),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_v] = ACTIONS(243),
    [anon_sym_5] = ACTIONS(243),
    [anon_sym_DASH_GT] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_6] = ACTIONS(243),
    [anon_sym_7] = ACTIONS(243),
    [anon_sym_LT_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_EQ_GT] = ACTIONS(243),
    [anon_sym_8] = ACTIONS(243),
    [anon_sym_9] = ACTIONS(243),
    [anon_sym_10] = ACTIONS(243),
  },
  [70] = {
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
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(245),
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
    [sym__term] = STATE(118),
    [sym_function] = STATE(118),
    [sym_not] = STATE(118),
    [sym_and] = STATE(118),
    [sym_or] = STATE(118),
    [sym_implies] = STATE(118),
    [sym_iff] = STATE(118),
    [sym_forall] = STATE(118),
    [sym_exists] = STATE(118),
    [sym__group] = STATE(118),
    [sym__universal_group] = STATE(118),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(118),
    [sym_false] = STATE(118),
    [sym__not_sym] = STATE(21),
    [sym__forall_sym] = STATE(22),
    [sym__exists_sym] = STATE(23),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_variable] = ACTIONS(247),
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
    [sym__nested_block] = STATE(104),
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
    [aux_sym_block_repeat2] = STATE(104),
    [sym__hypothesis_end] = ACTIONS(249),
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
  [73] = {
    [sym_guard] = STATE(73),
    [aux_sym_block_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym__hypothesis_end] = ACTIONS(254),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [sym_variable] = ACTIONS(254),
    [sym__function_name] = ACTIONS(256),
    [anon_sym_A] = ACTIONS(256),
    [anon_sym_E] = ACTIONS(256),
    [anon_sym_T] = ACTIONS(256),
    [anon_sym_F] = ACTIONS(256),
    [anon_sym_1] = ACTIONS(254),
    [anon_sym_] = ACTIONS(254),
    [anon_sym_0] = ACTIONS(254),
    [anon_sym_2] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_TILDE] = ACTIONS(254),
    [anon_sym_3] = ACTIONS(254),
    [anon_sym_11] = ACTIONS(254),
    [anon_sym_12] = ACTIONS(254),
  },
  [74] = {
    [sym__nested_block] = STATE(74),
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
    [aux_sym_block_repeat2] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(264),
    [sym_variable] = ACTIONS(267),
    [sym__function_name] = ACTIONS(270),
    [anon_sym_A] = ACTIONS(273),
    [anon_sym_E] = ACTIONS(276),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(282),
    [anon_sym_1] = ACTIONS(285),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_0] = ACTIONS(288),
    [anon_sym_2] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_11] = ACTIONS(294),
    [anon_sym_12] = ACTIONS(297),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(300),
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(302),
  },
  [76] = {
    [aux_sym_vars_repeat1] = STATE(122),
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(11),
  },
  [77] = {
    [anon_sym_LBRACK] = ACTIONS(306),
    [sym__hypothesis_end] = ACTIONS(306),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [sym_variable] = ACTIONS(306),
    [sym__function_name] = ACTIONS(308),
    [anon_sym_A] = ACTIONS(308),
    [anon_sym_E] = ACTIONS(308),
    [anon_sym_T] = ACTIONS(308),
    [anon_sym_F] = ACTIONS(308),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_0] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [anon_sym_11] = ACTIONS(306),
    [anon_sym_12] = ACTIONS(306),
  },
  [78] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(209),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_v] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_EQ_GT] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_LT_DASH_GT] = ACTIONS(169),
    [anon_sym_LT_EQ_GT] = ACTIONS(169),
    [anon_sym_8] = ACTIONS(169),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(169),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_variable] = ACTIONS(211),
    [sym__function_name] = ACTIONS(215),
    [anon_sym_A] = ACTIONS(215),
    [anon_sym_E] = ACTIONS(215),
    [anon_sym_T] = ACTIONS(215),
    [anon_sym_F] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(211),
    [anon_sym_] = ACTIONS(211),
    [anon_sym_0] = ACTIONS(211),
    [anon_sym_2] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_3] = ACTIONS(211),
    [anon_sym_11] = ACTIONS(211),
    [anon_sym_12] = ACTIONS(211),
  },
  [80] = {
    [aux_sym_annotation_repeat1] = STATE(124),
    [anon_sym_LF] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(312),
    [sym_comment] = ACTIONS(89),
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
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(314),
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
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(316),
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
  [83] = {
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
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(318),
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
  [84] = {
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
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(320),
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
  [85] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_4] = ACTIONS(243),
    [anon_sym__] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_v] = ACTIONS(243),
    [anon_sym_5] = ACTIONS(243),
    [anon_sym_DASH_GT] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_6] = ACTIONS(243),
    [anon_sym_7] = ACTIONS(243),
    [anon_sym_LT_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_EQ_GT] = ACTIONS(243),
    [anon_sym_8] = ACTIONS(243),
    [anon_sym_9] = ACTIONS(243),
    [anon_sym_10] = ACTIONS(243),
  },
  [86] = {
    [sym__term] = STATE(129),
    [sym_function] = STATE(129),
    [sym_not] = STATE(129),
    [sym_and] = STATE(129),
    [sym_or] = STATE(129),
    [sym_implies] = STATE(129),
    [sym_iff] = STATE(129),
    [sym_forall] = STATE(129),
    [sym_exists] = STATE(129),
    [sym__group] = STATE(129),
    [sym__universal_group] = STATE(129),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(129),
    [sym_false] = STATE(129),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(322),
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
    [sym__term] = STATE(130),
    [sym_function] = STATE(130),
    [sym_not] = STATE(130),
    [sym_and] = STATE(130),
    [sym_or] = STATE(130),
    [sym_implies] = STATE(130),
    [sym_iff] = STATE(130),
    [sym_forall] = STATE(130),
    [sym_exists] = STATE(130),
    [sym__group] = STATE(130),
    [sym__universal_group] = STATE(130),
    [sym_function_name] = STATE(19),
    [sym__TF_func_name] = STATE(20),
    [sym_true] = STATE(130),
    [sym_false] = STATE(130),
    [sym__not_sym] = STATE(32),
    [sym__forall_sym] = STATE(33),
    [sym__exists_sym] = STATE(34),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(45),
    [sym_variable] = ACTIONS(324),
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
    [sym__nested_block] = STATE(92),
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
    [aux_sym_block_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(177),
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
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
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
  [90] = {
    [sym__nested_block] = STATE(131),
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
    [aux_sym_block_repeat2] = STATE(131),
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
  [91] = {
    [sym__nested_block] = STATE(131),
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
    [aux_sym_block_repeat2] = STATE(131),
    [sym__hypothesis_end] = ACTIONS(330),
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
  [92] = {
    [sym__nested_block] = STATE(92),
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
    [aux_sym_block_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(264),
    [sym_variable] = ACTIONS(267),
    [sym__function_name] = ACTIONS(270),
    [anon_sym_A] = ACTIONS(273),
    [anon_sym_E] = ACTIONS(276),
    [anon_sym_T] = ACTIONS(279),
    [anon_sym_F] = ACTIONS(282),
    [anon_sym_1] = ACTIONS(285),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_0] = ACTIONS(288),
    [anon_sym_2] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(291),
    [anon_sym_11] = ACTIONS(294),
    [anon_sym_12] = ACTIONS(297),
  },
  [93] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [94] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [95] = {
    [anon_sym_LF] = ACTIONS(334),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_COMMA_LF] = ACTIONS(336),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_AMP] = ACTIONS(336),
    [anon_sym_4] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_v] = ACTIONS(336),
    [anon_sym_5] = ACTIONS(336),
    [anon_sym_DASH_GT] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(336),
    [anon_sym_6] = ACTIONS(336),
    [anon_sym_7] = ACTIONS(336),
    [anon_sym_LT_DASH_GT] = ACTIONS(336),
    [anon_sym_LT_EQ_GT] = ACTIONS(336),
    [anon_sym_8] = ACTIONS(336),
    [anon_sym_9] = ACTIONS(336),
    [anon_sym_10] = ACTIONS(336),
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(134),
    [sym_false] = STATE(134),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(338),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(135),
    [sym_false] = STATE(135),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(340),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(136),
    [sym_false] = STATE(136),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(342),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [99] = {
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(137),
    [sym_false] = STATE(137),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(344),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [100] = {
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(138),
    [sym_false] = STATE(138),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(346),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [101] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_4] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_v] = ACTIONS(241),
    [anon_sym_5] = ACTIONS(241),
    [anon_sym_DASH_GT] = ACTIONS(241),
    [anon_sym_EQ_GT] = ACTIONS(241),
    [anon_sym_6] = ACTIONS(241),
    [anon_sym_7] = ACTIONS(241),
    [anon_sym_LT_DASH_GT] = ACTIONS(241),
    [anon_sym_LT_EQ_GT] = ACTIONS(241),
    [anon_sym_8] = ACTIONS(241),
    [anon_sym_9] = ACTIONS(241),
    [anon_sym_10] = ACTIONS(241),
  },
  [102] = {
    [sym__term] = STATE(139),
    [sym_function] = STATE(139),
    [sym_not] = STATE(139),
    [sym_and] = STATE(139),
    [sym_or] = STATE(139),
    [sym_implies] = STATE(139),
    [sym_iff] = STATE(139),
    [sym_forall] = STATE(139),
    [sym_exists] = STATE(139),
    [sym__group] = STATE(139),
    [sym__universal_group] = STATE(139),
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(139),
    [sym_false] = STATE(139),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(348),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [103] = {
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
    [sym_function_name] = STATE(51),
    [sym__TF_func_name] = STATE(52),
    [sym_true] = STATE(140),
    [sym_false] = STATE(140),
    [sym__not_sym] = STATE(53),
    [sym__forall_sym] = STATE(54),
    [sym__exists_sym] = STATE(55),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_variable] = ACTIONS(350),
    [sym__function_name] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_E] = ACTIONS(67),
    [anon_sym_T] = ACTIONS(69),
    [anon_sym_F] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_12] = ACTIONS(81),
  },
  [104] = {
    [sym__nested_block] = STATE(74),
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
    [aux_sym_block_repeat2] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(352),
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
  [105] = {
    [sym__hypothesis_end] = ACTIONS(354),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [sym_variable] = ACTIONS(354),
    [sym__function_name] = ACTIONS(356),
    [anon_sym_A] = ACTIONS(356),
    [anon_sym_E] = ACTIONS(356),
    [anon_sym_T] = ACTIONS(356),
    [anon_sym_F] = ACTIONS(356),
    [anon_sym_1] = ACTIONS(354),
    [anon_sym_] = ACTIONS(354),
    [anon_sym_0] = ACTIONS(354),
    [anon_sym_2] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_3] = ACTIONS(354),
    [anon_sym_11] = ACTIONS(354),
    [anon_sym_12] = ACTIONS(354),
  },
  [106] = {
    [sym__hypothesis_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(11),
  },
  [107] = {
    [anon_sym_LF] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_COMMA_LF] = ACTIONS(362),
    [sym_comment] = ACTIONS(89),
  },
  [108] = {
    [anon_sym_LF] = ACTIONS(364),
    [sym_comment] = ACTIONS(89),
  },
  [109] = {
    [aux_sym_hypothesis_repeat1] = STATE(109),
    [anon_sym_LF] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_COMMA_LF] = ACTIONS(366),
    [sym_comment] = ACTIONS(89),
  },
  [110] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(369),
    [sym_comment] = ACTIONS(89),
  },
  [111] = {
    [aux_sym_annotation_repeat1] = STATE(144),
    [anon_sym_LF] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_COMMA_LF] = ACTIONS(371),
    [sym_comment] = ACTIONS(89),
  },
  [112] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_COMMA_LF] = ACTIONS(377),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_4] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_v] = ACTIONS(377),
    [anon_sym_5] = ACTIONS(377),
    [anon_sym_DASH_GT] = ACTIONS(377),
    [anon_sym_EQ_GT] = ACTIONS(377),
    [anon_sym_6] = ACTIONS(377),
    [anon_sym_7] = ACTIONS(377),
    [anon_sym_LT_DASH_GT] = ACTIONS(377),
    [anon_sym_LT_EQ_GT] = ACTIONS(377),
    [anon_sym_8] = ACTIONS(377),
    [anon_sym_9] = ACTIONS(377),
    [anon_sym_10] = ACTIONS(377),
  },
  [113] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_COMMA_LF] = ACTIONS(381),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_v] = ACTIONS(381),
    [anon_sym_5] = ACTIONS(381),
    [anon_sym_DASH_GT] = ACTIONS(381),
    [anon_sym_EQ_GT] = ACTIONS(381),
    [anon_sym_6] = ACTIONS(381),
    [anon_sym_7] = ACTIONS(381),
    [anon_sym_LT_DASH_GT] = ACTIONS(381),
    [anon_sym_LT_EQ_GT] = ACTIONS(381),
    [anon_sym_8] = ACTIONS(381),
    [anon_sym_9] = ACTIONS(381),
    [anon_sym_10] = ACTIONS(381),
  },
  [114] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_COMMA_LF] = ACTIONS(385),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_v] = ACTIONS(125),
    [anon_sym_5] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(127),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_LT_DASH_GT] = ACTIONS(385),
    [anon_sym_LT_EQ_GT] = ACTIONS(385),
    [anon_sym_8] = ACTIONS(385),
    [anon_sym_9] = ACTIONS(385),
    [anon_sym_10] = ACTIONS(385),
  },
  [115] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_COMMA_LF] = ACTIONS(389),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_v] = ACTIONS(125),
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
  [116] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [117] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_COMMA_LF] = ACTIONS(395),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_4] = ACTIONS(395),
    [anon_sym__] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_v] = ACTIONS(395),
    [anon_sym_5] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(395),
    [anon_sym_6] = ACTIONS(395),
    [anon_sym_7] = ACTIONS(395),
    [anon_sym_LT_DASH_GT] = ACTIONS(395),
    [anon_sym_LT_EQ_GT] = ACTIONS(395),
    [anon_sym_8] = ACTIONS(395),
    [anon_sym_9] = ACTIONS(395),
    [anon_sym_10] = ACTIONS(395),
  },
  [118] = {
    [sym__and_sym] = STATE(64),
    [sym__or_sym] = STATE(65),
    [sym__implies_sym] = STATE(66),
    [sym__iff_sym] = STATE(67),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_COMMA_LF] = ACTIONS(399),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_4] = ACTIONS(399),
    [anon_sym__] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_v] = ACTIONS(399),
    [anon_sym_5] = ACTIONS(399),
    [anon_sym_DASH_GT] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_6] = ACTIONS(399),
    [anon_sym_7] = ACTIONS(399),
    [anon_sym_LT_DASH_GT] = ACTIONS(399),
    [anon_sym_LT_EQ_GT] = ACTIONS(399),
    [anon_sym_8] = ACTIONS(399),
    [anon_sym_9] = ACTIONS(399),
    [anon_sym_10] = ACTIONS(399),
  },
  [119] = {
    [sym__nested_block] = STATE(146),
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
    [aux_sym_block_repeat2] = STATE(146),
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
  [120] = {
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(401),
    [sym_comment] = ACTIONS(11),
  },
  [121] = {
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(302),
  },
  [122] = {
    [aux_sym_vars_repeat1] = STATE(122),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(405),
    [sym_comment] = ACTIONS(11),
  },
  [123] = {
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_STAR_SLASH] = ACTIONS(408),
    [sym_comment] = ACTIONS(89),
  },
  [124] = {
    [aux_sym_annotation_repeat1] = STATE(149),
    [anon_sym_LF] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(312),
    [sym_comment] = ACTIONS(89),
  },
  [125] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(377),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_4] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_v] = ACTIONS(377),
    [anon_sym_5] = ACTIONS(377),
    [anon_sym_DASH_GT] = ACTIONS(377),
    [anon_sym_EQ_GT] = ACTIONS(377),
    [anon_sym_6] = ACTIONS(377),
    [anon_sym_7] = ACTIONS(377),
    [anon_sym_LT_DASH_GT] = ACTIONS(377),
    [anon_sym_LT_EQ_GT] = ACTIONS(377),
    [anon_sym_8] = ACTIONS(377),
    [anon_sym_9] = ACTIONS(377),
    [anon_sym_10] = ACTIONS(377),
  },
  [126] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(381),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_v] = ACTIONS(381),
    [anon_sym_5] = ACTIONS(381),
    [anon_sym_DASH_GT] = ACTIONS(381),
    [anon_sym_EQ_GT] = ACTIONS(381),
    [anon_sym_6] = ACTIONS(381),
    [anon_sym_7] = ACTIONS(381),
    [anon_sym_LT_DASH_GT] = ACTIONS(381),
    [anon_sym_LT_EQ_GT] = ACTIONS(381),
    [anon_sym_8] = ACTIONS(381),
    [anon_sym_9] = ACTIONS(381),
    [anon_sym_10] = ACTIONS(381),
  },
  [127] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(385),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_v] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_EQ_GT] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_LT_DASH_GT] = ACTIONS(385),
    [anon_sym_LT_EQ_GT] = ACTIONS(385),
    [anon_sym_8] = ACTIONS(385),
    [anon_sym_9] = ACTIONS(385),
    [anon_sym_10] = ACTIONS(385),
  },
  [128] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(389),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_v] = ACTIONS(165),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_EQ_GT] = ACTIONS(167),
    [anon_sym_6] = ACTIONS(167),
    [anon_sym_7] = ACTIONS(167),
    [anon_sym_LT_DASH_GT] = ACTIONS(169),
    [anon_sym_LT_EQ_GT] = ACTIONS(169),
    [anon_sym_8] = ACTIONS(169),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(169),
  },
  [129] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(395),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_4] = ACTIONS(395),
    [anon_sym__] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_v] = ACTIONS(395),
    [anon_sym_5] = ACTIONS(395),
    [anon_sym_DASH_GT] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(395),
    [anon_sym_6] = ACTIONS(395),
    [anon_sym_7] = ACTIONS(395),
    [anon_sym_LT_DASH_GT] = ACTIONS(395),
    [anon_sym_LT_EQ_GT] = ACTIONS(395),
    [anon_sym_8] = ACTIONS(395),
    [anon_sym_9] = ACTIONS(395),
    [anon_sym_10] = ACTIONS(395),
  },
  [130] = {
    [sym__and_sym] = STATE(81),
    [sym__or_sym] = STATE(82),
    [sym__implies_sym] = STATE(83),
    [sym__iff_sym] = STATE(84),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(399),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_4] = ACTIONS(399),
    [anon_sym__] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_v] = ACTIONS(399),
    [anon_sym_5] = ACTIONS(399),
    [anon_sym_DASH_GT] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_6] = ACTIONS(399),
    [anon_sym_7] = ACTIONS(399),
    [anon_sym_LT_DASH_GT] = ACTIONS(399),
    [anon_sym_LT_EQ_GT] = ACTIONS(399),
    [anon_sym_8] = ACTIONS(399),
    [anon_sym_9] = ACTIONS(399),
    [anon_sym_10] = ACTIONS(399),
  },
  [131] = {
    [sym__nested_block] = STATE(92),
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
    [aux_sym_block_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(352),
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
  [132] = {
    [sym__nested_block] = STATE(150),
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
    [aux_sym_block_repeat2] = STATE(150),
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
  [133] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(334),
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
  [134] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_4] = ACTIONS(375),
    [anon_sym__] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_v] = ACTIONS(375),
    [anon_sym_5] = ACTIONS(375),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_EQ_GT] = ACTIONS(375),
    [anon_sym_6] = ACTIONS(375),
    [anon_sym_7] = ACTIONS(375),
    [anon_sym_LT_DASH_GT] = ACTIONS(375),
    [anon_sym_LT_EQ_GT] = ACTIONS(375),
    [anon_sym_8] = ACTIONS(375),
    [anon_sym_9] = ACTIONS(375),
    [anon_sym_10] = ACTIONS(375),
  },
  [135] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_v] = ACTIONS(379),
    [anon_sym_5] = ACTIONS(379),
    [anon_sym_DASH_GT] = ACTIONS(379),
    [anon_sym_EQ_GT] = ACTIONS(379),
    [anon_sym_6] = ACTIONS(379),
    [anon_sym_7] = ACTIONS(379),
    [anon_sym_LT_DASH_GT] = ACTIONS(379),
    [anon_sym_LT_EQ_GT] = ACTIONS(379),
    [anon_sym_8] = ACTIONS(379),
    [anon_sym_9] = ACTIONS(379),
    [anon_sym_10] = ACTIONS(379),
  },
  [136] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(383),
    [anon_sym_LT_EQ_GT] = ACTIONS(383),
    [anon_sym_8] = ACTIONS(383),
    [anon_sym_9] = ACTIONS(383),
    [anon_sym_10] = ACTIONS(383),
  },
  [137] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [138] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_4] = ACTIONS(191),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_v] = ACTIONS(193),
    [anon_sym_5] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(195),
    [anon_sym_EQ_GT] = ACTIONS(195),
    [anon_sym_6] = ACTIONS(195),
    [anon_sym_7] = ACTIONS(195),
    [anon_sym_LT_DASH_GT] = ACTIONS(197),
    [anon_sym_LT_EQ_GT] = ACTIONS(197),
    [anon_sym_8] = ACTIONS(197),
    [anon_sym_9] = ACTIONS(197),
    [anon_sym_10] = ACTIONS(197),
  },
  [139] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_4] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_v] = ACTIONS(393),
    [anon_sym_5] = ACTIONS(393),
    [anon_sym_DASH_GT] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_6] = ACTIONS(393),
    [anon_sym_7] = ACTIONS(393),
    [anon_sym_LT_DASH_GT] = ACTIONS(393),
    [anon_sym_LT_EQ_GT] = ACTIONS(393),
    [anon_sym_8] = ACTIONS(393),
    [anon_sym_9] = ACTIONS(393),
    [anon_sym_10] = ACTIONS(393),
  },
  [140] = {
    [sym__and_sym] = STATE(96),
    [sym__or_sym] = STATE(97),
    [sym__implies_sym] = STATE(98),
    [sym__iff_sym] = STATE(99),
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_4] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_v] = ACTIONS(397),
    [anon_sym_5] = ACTIONS(397),
    [anon_sym_DASH_GT] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_6] = ACTIONS(397),
    [anon_sym_7] = ACTIONS(397),
    [anon_sym_LT_DASH_GT] = ACTIONS(397),
    [anon_sym_LT_EQ_GT] = ACTIONS(397),
    [anon_sym_8] = ACTIONS(397),
    [anon_sym_9] = ACTIONS(397),
    [anon_sym_10] = ACTIONS(397),
  },
  [141] = {
    [sym__hypothesis_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [sym_variable] = ACTIONS(414),
    [sym__function_name] = ACTIONS(416),
    [anon_sym_A] = ACTIONS(416),
    [anon_sym_E] = ACTIONS(416),
    [anon_sym_T] = ACTIONS(416),
    [anon_sym_F] = ACTIONS(416),
    [anon_sym_1] = ACTIONS(414),
    [anon_sym_] = ACTIONS(414),
    [anon_sym_0] = ACTIONS(414),
    [anon_sym_2] = ACTIONS(414),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_BANG] = ACTIONS(414),
    [anon_sym_TILDE] = ACTIONS(414),
    [anon_sym_3] = ACTIONS(414),
    [anon_sym_11] = ACTIONS(414),
    [anon_sym_12] = ACTIONS(414),
  },
  [142] = {
    [sym__hypothesis_end] = ACTIONS(418),
    [sym_comment] = ACTIONS(11),
  },
  [143] = {
    [anon_sym_GT] = ACTIONS(420),
    [sym_comment] = ACTIONS(11),
  },
  [144] = {
    [aux_sym_annotation_repeat1] = STATE(144),
    [anon_sym_LF] = ACTIONS(422),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_COMMA_LF] = ACTIONS(422),
    [sym_comment] = ACTIONS(89),
  },
  [145] = {
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_AT] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_COMMA_LF] = ACTIONS(432),
    [sym_comment] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_4] = ACTIONS(432),
    [anon_sym__] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_v] = ACTIONS(432),
    [anon_sym_5] = ACTIONS(432),
    [anon_sym_DASH_GT] = ACTIONS(432),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [anon_sym_6] = ACTIONS(432),
    [anon_sym_7] = ACTIONS(432),
    [anon_sym_LT_DASH_GT] = ACTIONS(432),
    [anon_sym_LT_EQ_GT] = ACTIONS(432),
    [anon_sym_8] = ACTIONS(432),
    [anon_sym_9] = ACTIONS(432),
    [anon_sym_10] = ACTIONS(432),
  },
  [146] = {
    [sym__nested_block] = STATE(74),
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
    [aux_sym_block_repeat2] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(434),
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
  [147] = {
    [sym_comment] = ACTIONS(11),
    [sym_variable] = ACTIONS(302),
  },
  [148] = {
    [anon_sym_GT] = ACTIONS(436),
    [sym_comment] = ACTIONS(11),
  },
  [149] = {
    [aux_sym_annotation_repeat1] = STATE(149),
    [anon_sym_LF] = ACTIONS(422),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(441),
    [sym_comment] = ACTIONS(89),
  },
  [150] = {
    [sym__nested_block] = STATE(92),
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
    [aux_sym_block_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(434),
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
  [151] = {
    [sym_comment] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_CARET] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(430),
    [anon_sym_4] = ACTIONS(430),
    [anon_sym__] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_v] = ACTIONS(430),
    [anon_sym_5] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(430),
    [anon_sym_6] = ACTIONS(430),
    [anon_sym_7] = ACTIONS(430),
    [anon_sym_LT_DASH_GT] = ACTIONS(430),
    [anon_sym_LT_EQ_GT] = ACTIONS(430),
    [anon_sym_8] = ACTIONS(430),
    [anon_sym_9] = ACTIONS(430),
    [anon_sym_10] = ACTIONS(430),
  },
  [152] = {
    [sym__hypothesis_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [sym_variable] = ACTIONS(444),
    [sym__function_name] = ACTIONS(446),
    [anon_sym_A] = ACTIONS(446),
    [anon_sym_E] = ACTIONS(446),
    [anon_sym_T] = ACTIONS(446),
    [anon_sym_F] = ACTIONS(446),
    [anon_sym_1] = ACTIONS(444),
    [anon_sym_] = ACTIONS(444),
    [anon_sym_0] = ACTIONS(444),
    [anon_sym_2] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_BANG] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_3] = ACTIONS(444),
    [anon_sym_11] = ACTIONS(444),
    [anon_sym_12] = ACTIONS(444),
  },
  [153] = {
    [anon_sym_LF] = ACTIONS(448),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(448),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_COMMA_LF] = ACTIONS(448),
    [sym_comment] = ACTIONS(89),
  },
  [154] = {
    [anon_sym_LF] = ACTIONS(448),
    [aux_sym_SLASH_LBRACK_CARET_LT_POUND_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(448),
    [anon_sym_LT] = ACTIONS(448),
    [sym_comment] = ACTIONS(89),
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
  [57] = {.count = 1, .reusable = true}, SHIFT(41),
  [59] = {.count = 1, .reusable = true}, SHIFT(42),
  [61] = {.count = 1, .reusable = true}, SHIFT(50),
  [63] = {.count = 1, .reusable = false}, SHIFT(43),
  [65] = {.count = 1, .reusable = false}, SHIFT(44),
  [67] = {.count = 1, .reusable = false}, SHIFT(45),
  [69] = {.count = 1, .reusable = false}, SHIFT(46),
  [71] = {.count = 1, .reusable = false}, SHIFT(47),
  [73] = {.count = 1, .reusable = true}, SHIFT(48),
  [75] = {.count = 1, .reusable = true}, SHIFT(49),
  [77] = {.count = 1, .reusable = true}, SHIFT(53),
  [79] = {.count = 1, .reusable = true}, SHIFT(54),
  [81] = {.count = 1, .reusable = true}, SHIFT(55),
  [83] = {.count = 1, .reusable = true}, SHIFT(56),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__forall_sym, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__exists_sym, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [105] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_proof, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(57),
  [111] = {.count = 1, .reusable = true}, SHIFT(58),
  [113] = {.count = 1, .reusable = false}, SHIFT(59),
  [115] = {.count = 1, .reusable = false}, SHIFT(60),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(62),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [123] = {.count = 1, .reusable = false}, SHIFT(64),
  [125] = {.count = 1, .reusable = false}, SHIFT(65),
  [127] = {.count = 1, .reusable = false}, SHIFT(66),
  [129] = {.count = 1, .reusable = false}, SHIFT(67),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_function, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_function, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(68),
  [137] = {.count = 1, .reusable = true}, SHIFT(68),
  [139] = {.count = 1, .reusable = true}, SHIFT(69),
  [141] = {.count = 1, .reusable = true}, SHIFT(70),
  [143] = {.count = 1, .reusable = true}, SHIFT(71),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(77),
  [157] = {.count = 1, .reusable = true}, SHIFT(78),
  [159] = {.count = 1, .reusable = true}, SHIFT(79),
  [161] = {.count = 1, .reusable = false}, SHIFT(80),
  [163] = {.count = 1, .reusable = false}, SHIFT(81),
  [165] = {.count = 1, .reusable = false}, SHIFT(82),
  [167] = {.count = 1, .reusable = false}, SHIFT(83),
  [169] = {.count = 1, .reusable = false}, SHIFT(84),
  [171] = {.count = 1, .reusable = true}, SHIFT(85),
  [173] = {.count = 1, .reusable = true}, SHIFT(86),
  [175] = {.count = 1, .reusable = true}, SHIFT(87),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(89),
  [181] = {.count = 1, .reusable = true}, SHIFT(90),
  [183] = {.count = 1, .reusable = true}, SHIFT(93),
  [185] = {.count = 1, .reusable = true}, SHIFT(94),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__TF_func_name, 1, .dynamic_precedence = 12),
  [189] = {.count = 1, .reusable = true}, SHIFT(95),
  [191] = {.count = 1, .reusable = true}, SHIFT(96),
  [193] = {.count = 1, .reusable = true}, SHIFT(97),
  [195] = {.count = 1, .reusable = true}, SHIFT(98),
  [197] = {.count = 1, .reusable = true}, SHIFT(99),
  [199] = {.count = 1, .reusable = true}, SHIFT(100),
  [201] = {.count = 1, .reusable = true}, SHIFT(101),
  [203] = {.count = 1, .reusable = true}, SHIFT(102),
  [205] = {.count = 1, .reusable = true}, SHIFT(103),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__universal_group, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym__universal_group, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(105),
  [215] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(106),
  [219] = {.count = 1, .reusable = false}, SHIFT(108),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 1),
  [223] = {.count = 1, .reusable = false}, SHIFT(111),
  [225] = {.count = 1, .reusable = false}, SHIFT(110),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(112),
  [233] = {.count = 1, .reusable = true}, SHIFT(113),
  [235] = {.count = 1, .reusable = true}, SHIFT(114),
  [237] = {.count = 1, .reusable = true}, SHIFT(115),
  [239] = {.count = 1, .reusable = true}, SHIFT(116),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [245] = {.count = 1, .reusable = true}, SHIFT(117),
  [247] = {.count = 1, .reusable = true}, SHIFT(118),
  [249] = {.count = 1, .reusable = true}, SHIFT(119),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [254] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(4),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(5),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(29),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(7),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(8),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(9),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(10),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(11),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(12),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(13),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(32),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(33),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(34),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 2),
  [302] = {.count = 1, .reusable = true}, SHIFT(120),
  [304] = {.count = 1, .reusable = true}, SHIFT(121),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_guard, 3),
  [310] = {.count = 1, .reusable = false}, SHIFT(124),
  [312] = {.count = 1, .reusable = false}, SHIFT(123),
  [314] = {.count = 1, .reusable = true}, SHIFT(125),
  [316] = {.count = 1, .reusable = true}, SHIFT(126),
  [318] = {.count = 1, .reusable = true}, SHIFT(127),
  [320] = {.count = 1, .reusable = true}, SHIFT(128),
  [322] = {.count = 1, .reusable = true}, SHIFT(129),
  [324] = {.count = 1, .reusable = true}, SHIFT(130),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__nested_block, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym__nested_block, 3),
  [330] = {.count = 1, .reusable = true}, SHIFT(132),
  [332] = {.count = 1, .reusable = true}, SHIFT(133),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__group, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym__group, 3),
  [338] = {.count = 1, .reusable = true}, SHIFT(134),
  [340] = {.count = 1, .reusable = true}, SHIFT(135),
  [342] = {.count = 1, .reusable = true}, SHIFT(136),
  [344] = {.count = 1, .reusable = true}, SHIFT(137),
  [346] = {.count = 1, .reusable = true}, SHIFT(138),
  [348] = {.count = 1, .reusable = true}, SHIFT(139),
  [350] = {.count = 1, .reusable = true}, SHIFT(140),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 3),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 3),
  [358] = {.count = 1, .reusable = true}, SHIFT(141),
  [360] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [362] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2),
  [364] = {.count = 1, .reusable = true}, SHIFT(142),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hypothesis_repeat1, 2), SHIFT_REPEAT(60),
  [369] = {.count = 1, .reusable = false}, SHIFT(143),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [373] = {.count = 1, .reusable = false}, SHIFT(144),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_and, 3),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_and, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_or, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_or, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_implies, 3),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_implies, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_iff, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_iff, 3),
  [391] = {.count = 1, .reusable = true}, SHIFT(145),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_forall, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_forall, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_exists, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_exists, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_vars, 3),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_vars_repeat1, 2), SHIFT_REPEAT(147),
  [408] = {.count = 1, .reusable = false}, SHIFT(148),
  [410] = {.count = 1, .reusable = false}, SHIFT(149),
  [412] = {.count = 1, .reusable = true}, SHIFT(151),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 4),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 4),
  [418] = {.count = 1, .reusable = true}, SHIFT(152),
  [420] = {.count = 1, .reusable = true}, SHIFT(153),
  [422] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(144),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(110),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [436] = {.count = 1, .reusable = true}, SHIFT(154),
  [438] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(149),
  [441] = {.count = 2, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(123),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_hypothesis, 5),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_hypothesis, 5),
  [448] = {.count = 1, .reusable = false}, REDUCE(aux_sym_annotation_repeat1, 3),
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

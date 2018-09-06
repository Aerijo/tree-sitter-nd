const PREC = {
  FUNCTION: 8,
  NOT: 7,
  FORALL: 6,
  EXISTS: 6,
  AND: 5,
  OR: 4,
  IMPLIES: 3,
  IFF: 2,
  UNIV_GROUP: 1,
  COMMENT: 0
};

module.exports = grammar({
  name: 'nd',

  extras: $ => [$.comment, /\s/],

  conflicts: $ => [
    [$.function_name, $._forall_sym],
    [$.function_name, $._exists_sym],
    [$._TF_func_name, $.true],
    [$._TF_func_name, $.false],
    [$.hypothesis, $.block]
  ],

  inline: $ => [
    $._reserved_function_name
  ],

  word: $ => $.variable,

  rules: {
    proof: $ => optional($.block),

    block: $ => prec.right(seq(
      repeat($.guard),
      optional($.hypothesis),
      optional($._hypothesis_end),
      repeat1(choice(
        seq($.expression, '\n'),
        $._nested_block,
        $.expression
      ))
    )),

    guard: $ => seq('[', optional($._vars), ']'),

    annotation: $ => seq('@', repeat(choice(
      /[^<#\n]+/,
      seq('<', /[^>]*/, '>')
    ))),

    _vars: $ => seq(
      $.variable,
      repeat(seq(',', $.variable)),
      optional(',')
    ),

    hypothesis: $ => seq(
      choice(
        seq($.expression, repeat1(seq(',\n', $.expression))),
        $.expression
      ),
      optional(','),
      '\n',
      $._hypothesis_end
  ),

    _hypothesis_end: $ => token(seq("___", repeat("_"))),

    // Comments (mostly) taken from tree-sitter-javascript
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('#', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))),

    _nested_block: $ => seq(
      '{',
      $.block,
      '}'
    ),

    expression: $ => seq($._term, optional($.annotation)),

    _term: $ => choice(
      $.variable,
      $.function,
      $.true,
      $.false,
      $.not,
      $.and,
      $.or,
      $.implies,
      $.iff,
      $.forall,
      $.exists,

      $._group,
      $._universal_group
    ),

    function: $ => prec.right(PREC.FUNCTION, choice(
      seq($.function_name, optional(seq('(', $._term, ')'))),
      seq(alias($._TF_func_name, $.function_name), '(', $._term, ')') // allow T & F if explicitly functions
    )),

    not: $ => prec.right(PREC.NOT,
      seq($._not_sym, $._term)
    ),

    and: $ => prec.left(PREC.AND,
      seq($._term, $._and_sym, $._term)
    ),

    or: $ => prec.left(PREC.OR,
      seq($._term, $._or_sym, $._term)
    ),

    implies: $ => prec.right(PREC.IMPLIES,
      seq($._term, $._implies_sym, $._term)
    ),

    iff: $ => prec.right(PREC.IFF,
      seq($._term, $._iff_sym, $._term)
    ),

    forall: $ => prec.left(PREC.FORALL,
      seq($._forall_sym, $.variable, $._term)
    ),

    exists: $ => prec.left(PREC.EXISTS,
      seq($._exists_sym, $.variable, $._term)
    ),

    _group: $ => seq('(', $._term, ')'),

    _universal_group: $ => prec.right(PREC.UNIV_GROUP, seq('.', $._term)),

    variable: $ => token(choice(/[a-uw-z]/, /[a-z]\w*/)),

    function_name: $ => choice($._function_name, $._reserved_function_name),

    _function_name: $ => token(/[A-Z]\w*/),

    /*
    To allow 'A' and 'E' as both function names and forall / exists: see
    https://github.com/tree-sitter/tree-sitter-cli/issues/41
    */
    _reserved_function_name: $ => choice('A', 'E'),

    /*
    To allow T and F as function names when used as T(x). Note a single T by
    itself will be parsed as $.true
    */
    _TF_func_name: $ => prec.dynamic(12, choice('T', 'F')),

    true: $ => choice('T', '1', '\u{22A4}'),

    false: $ => choice('F', '0', '\u{22A5}'),

    _not_sym: $ => choice('-', '!', '~', '\u{00AC}'),

    _and_sym: $ => choice('^', '&', '\u{2227}'),

    _or_sym: $ => choice('_', '|', 'v', '\u{2228}'),

    _implies_sym: $ => choice('->', '=>', '\u{2192}', '\u{21D2}'),

    _iff_sym: $ => choice('<->', '<=>', '\u{2194}', '\u{21D4}', '\u{2261}'),

    _forall_sym: $ => choice('A', '\u{2200}'),

    _exists_sym: $ => choice('E', '\u{2203}'),

    _universal_sep: $ => choice('.', '$') // good ol' Haskell

  }
});

const PREC = {
  FUNCTION: 7,
  NOT: 6,
  AND: 5,
  OR: 4,
  IMPLIES: 3,
  IFF: 2,
  FORALL: 1,
  EXISTS: 1
};

module.exports = grammar({
  name: 'nd',

  extras: $ => [$.comment, /\s/],

  conflicts: $ => [
    [$._reserved_function_name, $._forall_operator],
    [$._reserved_function_name, $._exists_operator]
  ],

  inline: $ => [
    $._reserved_function_name,
  ],

  word: $ => $.variable,

  rules: {
    block: $ => repeat($.expression),

    comment: $ => token(seq('#', /.*/)),

    expression: $ => seq($._term, '\n'),

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
      $.exists
    ),

    function: $ => prec.right(PREC.FUNCTION, choice(
      seq($.function_name, optional(seq('(', $._term, ')'))),
      seq(alias($._TF_func_name, $.function_name), '(', $._term, ')') // allow T & F if explicity functions
    )),

    not: $ => prec.right(PREC.NOT,
      seq($._not_operator, $._term)
    ),

    and: $ => prec.left(PREC.AND,
      seq($._term, $._and_operator, $._term)
    ),

    or: $ => prec.left(PREC.OR,
      seq($._term, $._or_operator, $._term)
    ),

    implies: $ => prec.right(PREC.IMPLIES,
      seq($._term, $._implies_operator, $._term)
    ),

    iff: $ => prec.right(PREC.IFF,
      seq($._term, $._iff_operator, $._term)
    ),

    forall: $ => prec.right(PREC.FORALL,
      seq($._forall_operator, $.variable, $._universal_sep, $._term)
    ),

    exists: $ => prec.right(PREC.EXISTS,
      seq($._exists_operator, $.variable, $._universal_sep, $._term)
    ),

    variable: $ => token(/[a-z]\w*/),

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
    _TF_func_name: $ => choice('T', 'F'),

    true: $ => choice('T', '1', '\u{22A4}'),

    false: $ => choice('F', '0', '\u{22A5}'),

    _not_operator: $ => choice('-', '!', '~', '\u{00AC}'),

    _and_operator: $ => choice('^', '&', '\u{2227}'),

    _or_operator: $ => choice('_', '|', '\u{2228}'),

    _implies_operator: $ => choice('->', '=>', '\u{2192}', '\u{21D2}'),

    _iff_operator: $ => choice('<->', '<=>', '\u{2194}', '\u{21D4}', '\u{2261}'),

    _forall_operator: $ => choice('A', '\u{2200}'),

    _exists_operator: $ => choice('E', '\u{2203}'),

    _universal_sep: $ => choice('.')

  }
});

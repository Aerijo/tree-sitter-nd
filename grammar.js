const PREC = {
  FUNCTION: 7,
  NOT: 6,
  AND: 5,
  OR: 4,
  IMPLIES: 3,
  IFF: 2,
  FORALL: 1,
  EXISTS: 0
};

module.exports = grammar({
  name: "nd",

  extras: $ => [$.comment, /\s+/],

  rules: {
    block: $ => repeat($.expression),

    comment: $ => token(seq("#", /.*/)),

    expression: $ => seq(repeat1($._term), "\n"),

    _term: $ => choice(
      $.variable,
      $.function,
      $.not,
      $.and,
      $.or,
      $.implies,
      $.iff
    ),

    function: $ => prec.right(PREC.FUNCTION,
      seq($.function_name, "(", $._term, ")")
    ),

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

    function_name: $ => /[A-Z]\w*/,

    _not_operator: $ => choice("-", "!", "~", "\u{00AC}"),

    _and_operator: $ => choice("^", "&", "\u{2227}"),

    _or_operator: $ => choice("_", "|", "\u{2228}"),

    _implies_operator: $ => choice("->", "=>", "\u{2192}", "\u{21D2}"),

    _iff_operator: $ => choice("<->", "<=>", "\u{2194}", "\u{21D4}", "\u{2261}"),

    variable: $ => /[a-z]\w*/
  }
});

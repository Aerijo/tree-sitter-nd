const PREC = {
    FUNCTION: 7,
    NOT: 6,
    AND: 5,
    OR: 4,
    IMPLIES: 3,
    FORALL: 2,
    EXISTS: 1
};

module.exports = grammar({
    name: "nd",

    extras: $ => [$.comment, /\s+/],

    rules: {
        block: $ => repeat($.expression),

        comment: $ => token(seq("#", /.*/)),

        expression: $ => seq(repeat1($.term), "\n"),

        term: $ => choice(
            "foo",
            $.and,
            $.or
        ),

        and: $ => prec.left(PREC.AND,
            seq($.term, $._and_operator, $.term)
        ),

        or: $ => prec.left(PREC.OR,
            seq($.term, $._or_operator, $.term)
        ),


        _and_operator: $ => choice("\u{2227}", "^", "&"),

        _or_operator: $ => choice("\u{2228}", "_", "|"),
    }
});

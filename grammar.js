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

    rules: {
        program: repeat(),

        comment: seq("#", /.*/),

        expression: choice(

        ),

        and: $ => prec.left(PREC.AND,
            seq($.expression, $._and_operator, $.expression)
        ),

        or: $ => prec.left(PREC.OR,
            seq($.expression, $._or_operator, $.expression)
        ),


        _and_operator: $ => choice("\u{2227}", "^", "&"),

        _or_operator: $ => choice("\u{2228}", "_", "|"),
    }
});

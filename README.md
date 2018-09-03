# Natural Deduction language syntax (Fitch style)

## About

This language is designed to be quickly typed and rearranged, while still being easy to read and understand. You can think of it like markdown, but for ND.

- It may be best to use side by side with a preview renderer. As the language is static (in that symbols don't change meaning) and all symbols are known, a preview should not be difficult.

- Justifications are optional, as this language is also designed to be used in a checker / compiler to LaTeX, which (hopefully) will infer the rule from context. Hard line numbers are completely omitted for this reason too.

- Disclaimer: I'm still learning ND, and I have no idea what problems I'll need to solve with it. The current syntax is focused on concrete proofs, but I may revise it to better support abstractions like dots for omitted lines. I would like this language to be flexible, but that is not a priority.

- Some precedence decisions are arbitrary, as there is no official standard to conform to. I've tried to be as explicit as possible about what the parse tree will look like, and have loads of examples, but please always use parentheses when dealing with potentially ambiguous (to the reader) expressions.


## Syntax

Here I go through the legal syntax. The tests in the `corpus` directory can be considered the definitive language spec. If something is legitimately ambiguous, I will try to patch it and/or add new tests to specify expected behaviour.

Note that most rules here have alternative syntax. This is to allow for personal preference, and typing ease. For example, you can use the unicode character `∧` for an _and_ expression, but `^` or `&` will do the same and is readily accessible on most keyboards. Whatever you pick, for the sake of yourself and others please be consistent. The accompanying linter (planned) will probably shout at you if you combine styles.

Whitespace between tokens is ignored. Consecutive word characters will be read as a single variable, but `x ^ y` is the same as `x^y`. Indentation is not syntactic, but highly recommended for readability.

In the following, an `expression` is one logical expression, e.g, `a -> b -> c` or `x ^ y _ z`. In most cases, only one expression is permitted per line. The `block` of an expression refers to a consecutive sequence of expressions of equal or deeper nesting than the chosen expression.

### Comments

#### Line

```nd
x ^ y _ z # this is a line comment
```

#### Block

```nd
a -> b
/*

This is a block comment

*/
b -> c
```


### Expressions

The following are listed in order of precedence, from highest to lowest. When a statement could be ambiguous, such as `a <-> b -> c`, we use precedence to determine it means `a <-> (b -> c)`. We also use associativity to parse `p -> q -> r` as `p -> (q -> r)` and `a ^ b ^ c` as `(a ^ b) ^ c`.

#### Variable

Any word starting with a lower case letter will be considered a variable, with the exception of `v`. This is because `v` is used to represent the `or` operator.

```nd
x
cat
```

#### Function

Any word starting with a capital letter will be considered a function. Arguments are optional, but are required if the function name is `T` or `F`.

```nd
Q(x)
Cat(b)
A(x)
E
T(x)
```

#### True & False

`T` and `F` are semi-reserved names for true and false. These names can be used as function names if arguments are given in parentheses.

```nd
T
1
⊤

F
0
⊥
```

#### Not

```nd
-x
!x
~x
¬x # \u{00AC}
```

#### And

```nd
x ^ y
x & y
x ∧ y # \u{2227}
```

#### Or

```nd
x _ y
x | y
x v y
x ∨ y # \u{2228}
```

#### Implies

```nd
x -> y
x => y
x → y # \u{2192}
x ⇒ y # \u{21D2}
```

#### If and only if (Iff)

```nd
x <-> y
x <=> y
x ↔ y # \u{2194}
x ⇔ y # \u{21D4}
x ≡ y # \u{2261}
```

#### Forall

There is technically only one syntax at work here, which is `<forall> <var> <term>`. However, this grammar treats `.` as a "universal" group, which grabs everything it can in it's scope (it's low precedence and right associative).

A pure `forall` term actually has a precedence between `and` and `not`, and is left associative. The associated parse trees for the following would all be rooted as forall.

```nd
A x . P(x) <-> Q(x)
A x (P(x) <-> Q(x))
A x P(x)
∀ x . P(x) # \u{2200}
```

#### Exists

Behaves identically to forall.

```nd
E x . P(x)
∃ x . P(x) # \u{2203}
```

#### Groups

There are two ways to group terms: using `()` / `[]`, or with `.`. Parentheses act as would be expected, and their types must match too (so `([)]` is not legal). The "universal group" `.` operator is a low precedence right associative operator that grabs everything remaining in the expression scope. It effectively acts like you placed a `(` at the dot, and a `)` is inserted before the next `)` or at the end of the expression. So `A x . x ^ y == A x . (x ^ y)` and `(A x . x) ^ y == (A x (x)) ^ y`

```nd
(x) ^ (y)
(p -> q) -> r
a ^ . b _ c # == a ^ (b _ c)
```

### Proof construction

#### Hypothesis

A colon is used to represent the end of the hypothesese in a block. Alternatively, two or more underscores can be used. Commas may be used to separate multiple expressions on a single line.

ALTERNATIVE: Use commas to represent multiple hypothesis expressions.

```nd
p
p -> q:
q
```

```nd
p, p -> q
_________
q
```

#### Block

Blocks are determined by curly bracket scoping. Blank lines are ignored.

```nd
P(a) -> Q(a)
-Q(a)
___
{
    /* inner block */
    P(a)
    ____
    Q(a)
    F
    /* end of inner block */
}
-P(a)
```


#### Multiline expressions

Expressions are broken by a newline character. To split one expression over several lines, the backslash `\` character may be used. Comments are not permitted following this backslash. Normal block indentation rules are ignored for line continuations.

These line continuations can be configured to be respected by the `nd-convert` tool.

```nd
a -> b -> c -> d -> e ^ f _ -g
```

```nd
a -> b -> c \
-> d -> e ^ \
    f _ -g
```


#### Guards

Guards are one of the more difficult constructs to express well. Currently, I think this will serve

```nd
A x . P(x) -> Q(x)
{[a]
    P(a)
    ___
    Q(a)
}
```

The guard lines up with the block it is local to. All guards must be declared at the top of their block. Multiple guards in a single block (if ever necessary) can be defined like so. No particular method is enforced, so this is a stylistic choice (for now).

```nd
A x . P(x) -> Q(x)
___
{
    # declare the arb. variables a, b, c, d, and e
    [a][b]
    [c]
    [d,e]
    P(a)
    ___
    Q(a)
}
```



## Examples

Here I provide examples of the language in practice. Currently, only one proof per file is planned. This may be revised.

### Precedence

How to interpret an expression without explicit grouping is ambiguous; there are no strict rules to follow. This grammar enforces it's own interpretation, which is used when converting to LaTeX with explicit parentheses and when checking a proof. Here are some examples of statements with and without parentheses. A more comprehensive set of tests can be found in the `corpus/precedence.txtt` test file.

#### And & Or
```
a ^ b _ c == (a ^ b) _ c

a _ b ^ c _ d == (a _ (b ^ c)) _ d
```

#### Or & Implies
```
a _ b -> c == (a _ b) -> c

a -> b _ c -> d == a -> ((b _ c) -> d)
```

#### Implies & Iff
```
a -> b <-> c -> d == (a -> b) <-> (c -> d)

a <-> b -> c <-> d == a <-> ((b -> c) <-> d)
```


#### Iff & Forall
```
a <-> A x . x == a <-> (A x (x))

A x . x <-> a == A x (x <-> a)

A x x ^ y <-> a == ((A x (x)) ^ y) <-> a
```

# Natural Deduction language syntax (Fitch style)

## About

This language is designed to be quickly typed and rearranged, while still being easy to read and understand. You can think of it like markdown, but for ND.

- It may be best to use side by side with a preview renderer. As the language is static (in that symbols don't change meaning) and all symbols are known, a preview should not be difficult.

- Justifications are optional, as this language is also designed to be used in a checker / compiler to LaTeX, which (hopefully) will infer the rule from context. Hard line numbers are completely omitted for this reason too.

- Disclaimer: I'm still learning ND, and I have no idea what problems I'll need to solve with it. The current syntax is focused on concrete proofs, but I may revise it to better support abstractions like dots for omitted lines. I would like this language to be flexible, but that is not a priority.


## Syntax

Here I go through the legal syntax. The tests in the `corpus` directory can be considered the definitive language spec. If something is legitimately ambiguous, I will try to patch it and add new tests to specify expected behaviour.

Note that most rules here have alternative syntax. This is to allow for personal preference, and typing ease. For example, you can use the unicode character `∧` for an _and_ expression, but `^` will do the same and is readily accessible on most keyboards. Whatever you pick, for the sake of yourself and others please be consistent. The accompanying linter (planned).

Whitespace between tokens is ignored. Consecutive word characters will be read as a single variable, but `x ^ y` is the same as `x^y`. Indentation is very important however, and is used to determine block scoping (like Python).

In the following, an `expression` is one logical expression, e.g, `a -> b -> c` or `x ^ y _ z`. In most cases, only one expression is permitted per line. The `block` of an expression refers to a consecutive sequence of expressions of equal or deeper nesting / indentation than the chosen expression.

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

The following are listed in order of precedence, from highest to lowest. When a statement could be ambiguous, such as `a <=> b => c`, we precedence to determine it means `a <=> (b => c)`.

#### Function

Any word starting with a capital letter will be considered a function.

```nd
Q(x)
Cat(b)
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
x ∨ y # \u{2228}
```

#### Implies

```nd
x -> y
x => y
x → y # \u{2192}
x ⇒ y # \u{21D2}
```

#### If and only if

```nd
x <-> y
x <=> y
x ↔ y # \u{2194}
x ⇔ y # \u{21D4}
x ≡ y # \u{2261}
```

#### Forall

```nd
A x . P(x)
```

#### Exists

```nd
E x . P(x)
```

### Multiline

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

Blocks are determined by indentation. The syntax is the same as Python.

```nd
P(a) -> Q(a)
-Q(a):
    /* inner block */
    P(a):
    Q(a)
    F
    /* end of inner block */
-P(a)
```


#### Multiline expressions

Expressions are broken by a newline character. To split one expression over several lines, the backslash `\` character may be used. Comments are not permitted following this backslash. Normal block indentation rules are ignored for line continuations.

These line continuations can be configured to be respected by the `nd-to-latex` tool.

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
    [a]
    P(a):
    Q(a)
```

The guard lines up with the block it is local to. All guards must be declared at the top of their block. Multiple guards in a single block (if ever necessary) can be defined like so. No particular method is enforced, so this is a stylistic choice (for now).

```nd
A x . P(x) -> Q(x)
    # declare the arb. variables a, b, c, d, and e
    [a][b]
    [c]
    [d,e]
    P(a):
    Q(a)
```



## Examples

Here I provide examples of the language in practice. Currently, only one proof per file is planned. This may be revised.

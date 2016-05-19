# ToyLisp language

This is an informal definition of the ToyLisp language.

ToyLisp is a lisp like dynamic language, which supports a read-eval-print-loop
paradigm.

The fundamental program building blocks are variables(identifiers), functions,
values(numerics, strings, collections etc..), symbols, keywords, special forms.
Programs can be composed of these building blocks in any way seems fit for the
task at hand.

These building blocks are represented in syntax as forms such as s-exps,
literals, special forms etc... These forms, when parsed and evaluated, result
in new objects at runtime, can cause side effects and produce values as
results. Each ToyLisp program is a sequence of such forms and it is the task of
the compiler/interpreter to parse and evaluate the forms.

## ToyLisp elements, their syntax and usage

0.  NIL         - Used as a sentinel value, usually to indicate false or
    absence of a value.
    `nil` special form produces the NIL value. e.g., (nil)
    
1.  Identifiers - Identifiers or ids are like variables, used to refer to other
    values. Identifier regex is [a-zA-Z][a-zA-Z\-]*
    An example id is 'valid-pair-Count2' (without quotes)

2.  Symbols     - Not supported at the moment.

3.  Keywords    - Keywords are used liked enums in other languages. They
    improve readability of programs. Keyword regex is :[a-zA-Z]+
    An example keyword is ':classic-gui-theme' (without quotes)

4.  Integers    - ToyLisp integers are 64 bit signed integers, following 2s
    compliment arithmetic. Integer regex is [+-]?[0-9]+ and tokens can be 
    arbitrarily long. Overflows can happen while evaluating integer tokens.
    Example integers are -6733124 and 13493433432290

5.  Floating    - ToyLisp floating point values adhere to the IEEE 754
    standard. Floating point regex is [-+]?<middle>(E<power>)?
    where <middle> is [0-9]+\.[0-9]+ | [0-9]+\. | \.[0-9]+
    <power> is [+-]?[0-9]+
    Example floating point value is "-1.23E-3" (without quotes)

6.  Strings     - ToyLisp strings are arbitrary sequence of characters enclosed
    in double quotes where standard escaping rules apply. e.g., double quotes
    must be enclosed within the string literal.
    String regex is DQ*DQ (where DQ stands for a literal double quote and 
    asterik can hold any arbitrary list of characters with standard escaping
    rules applying.)
    Example String is "awesome sauce" (with quotes)

7.  Vectors     - Vectors/Arrays are the standard array data structure found in
    many languages. They are mutable. Vector form grammar is '[' form* ']'
    where 'form*' stands for an arbitrary sequence of comma separated ToyLisp
    forms. Example vector form is [1, 2, 3, 4, "intrigued"]. ToyLisp vectors
    can hold values of any type.

8.  Booleans    - Booleans are 'True' and 'False'

9.  Special forms   - Special forms are the core of ToyLisp program evaluation.
    e.g., special forms are cond, def etc.. Their evaluation strategy is
    builtin to the compiler/interpreter.

10. Functions   - Function forms are function names and arguments enclosed in
    parentheses. An example function form is (print 12322) which is calling the
    print function with the argument 12322

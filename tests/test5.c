#include <stdio.h>

int main(void)
{
    int i, j, k;
    float f;

    printf("-9 / 7: %d\n", -9 / 7);

    // Showcases implicit type conversion
    i = 72.99f; // i is now 72
    f = 136;    // f is now 136.0

    // Unexpected results in chained assignments
    f = i = 33.3f;
    printf("i: %d\n", i); // i --> 33
    printf("j: %f\n", f); // f --> 33.0 (not 33.3!) [f = (i = 33.3f) --> f = (33) --> f = 33.0]

    // Embedded assignment (not a good idea) --> makes programs hard to read, source of subtle bugs etc.
    i = 1;
    k = 1 + (j = i);
    printf("i j k: %d %d %d\n", i, j, k); // 1 1 2

    // Using "pre-increment" operator
    i = 1;
    printf("i is %d\n", ++i); // i is 2 ---- Increments `i` and returns; as a side effect the incremented value
    printf("i is %d\n", i);   // i is 2

    // Using "post-increment" operator
    i = 1;
    printf("i is %d\n", i++); // i is 1 ---- Increments `i` before next statement is executed
    printf("i is %d\n", i);   // i is 2

    // Using "pre-decrement" operator
    i = 1;
    printf("i is %d\n", --i); // i is 0
    printf("i is %d\n", i);   // i is 0

    // Using "post-decrement" operator
    i = 1;
    printf("i is %d\n", i--); // i is 1
    printf("i is %d\n", i);   // i is 0

    // Embedded increment/decrement operators
    i = 1;
    j = 2;
    k = ++i + j++;          // i is incremented immediately, j is incremented after statement
    printf("i is %d\n", i); // i is 2
    printf("j is %d\n", j); // j is 3
    printf("k is %d\n", k); // k is 4

    // a = (a / b) * b + (a % b);

    /* Operators are the basic tools for building expressions
     *
     * Arithmetic operators:
     *      Unary --> + (unary plus), - (unary minus) [Require 1 operand]
     *      Binary --> + (addition), - (subtraction), * (multiplication), / (division), % (modulo / remainder) [Require 2 operands]
     * When `int` and `float` operands are mixed, the result has type `float`
     * The `/` and `%` operators require special care:
     *      `/` --> When both of it's operands are `int`s, the `/` operator "truncates" the result by dropping the decimal part. (1 / 2 is 0, not 0.5)
     *      `%` --> Requires `int` operands; if either operand is not an `int`, the program won't compile. (1 % 3 is 1)
     *      Using zero (0) as the right-side operand of either `/` or `%` causes undefined behaviour.
     * In C89, if either operand is negative, the result of the division can be rounded either up or down. (-9 / 7 can be either -1 or -2);
     * The result of (-9 % 7) could be either -2 or 5.
     *
     * In C99, on the other hand, the result of a division is always truncated toward zero (0) (-9 / 7 has the value -1);
     * The value of (i % j) has the same sign as i (hence, the value of -9 % 7 is -2)
     *
     * Assignment operators:
     *      Simple assignment (=) [Right associative]
     *          if lvalue and right operand don't have the same type, then RHS is converted to the type of LHS as the assignment takes place.
     *          ex: i = j = k = 0 --> i = (j = (k = 0))
     *
     *      Compound assignment: (+=, -=, *=, /=, %=, ...) [Right associative]
     *          Assignments that use the old value of a variable to compute it's new value are common in C;
     *          C's compound assignment operators allow us to shorten statements like these.
     *          Keep operator precedence in mind when use using these, in case of multiple operators in right operand
     *          ex:
     *              i = i + 2 --> i += 2
     *              j = j * 4 --> j *= 4
     *          i += j += k --> i += (j += k) [j will contain j + k, i will contain i + j ==> i will contain i + j + k]
     *
     *      Increment/Decrement operators: [Left associative]
     *          Two of the most common operations on a variable are "incrementing " (adding 1) and "decrementing" (subtracting 1)
     *          We can do it in 3 ways:
     *              i = i + 1 | j = j - 1 (Using simple assignment operator)
     *              i += 1 | j -= 1 (Using compound assignment operator)
     *              Using ++ (increment) and -- (decrement) operators
     *          ++ and -- can be used as prefix operators (++i and --j) or postfix operators (i++ and j--)
     *          Like the assignment operators, ++ and -- have side effects: they modify the values of their operands.
     *          Evaluating ++i yields i + 1 and ---- as a side effect, increments i.
     *
     */

    /* Implementation-Defined Behaviour
     *
     * The C standard deliberately leaves parts of the language unspecified, with the understanding that an "implementation"
     * (i.e. the software needed to compile, link and execute programs on a particular platform ---- will fill in the details)
     * As a result, the behaviour of the program may vary somewhat from one implementation to another.
     * The behaviour of / and % operators for negative operands in C89 is an example of implementation-defined behaviour.
     *
     * Leaving parts of the language unspecified may seem odd or dangerous, but it reflects C's philosophy.
     * One of the language's goals is efficiency, which often means matching the way hardware behaves.
     *
     * It's best to avoid writing programs that depend on implementation-defined behaviour.
     */

    /* Operator Precedence
     *
     * Highest: `++` (postfix)                      ---- left associativity
     *          `--` (postfix)                      ---- left ...
     *          `++` (prefix)                       ---- right ...
     *          `--` (prefix)                       ---- right ...
     *          `+` (unary)                         ---- right ...
     *          `-` (unary)                         ---- right ...
     *          `*` `/` `%`                         ---- left ...
     *          `+` `-` (binary)                    ---- left ...
     *          `=` `*=`, `/=`, `%=`, `+=`, `-=`    ---- right ...
     *
     * ex:
     *      i + j * k --> i + (j * k)
     *      -i * -j --> (-i) * (-j)
     *      +i + j / k --> (+i) + (j / k)
     *      a = b += c ++ - d --e / -f --> (a = (b += (((c++) - d) + ((--e) / (-f)))))
     *
     * For operators at the same level of precedence, the associativity of the operators come into play.
     * Left associative operators --> groups from left to right; ex: binary arithmetic operators (*, / , % +, -), increment/decrement operators (postfix)
     *      i - j - k --> (i - j) - k
     *      i * j / k --> (i * j) / k
     * Right associative operators --> groups from right to left; ex: unary arithmetic operators (+, -), simple/compound assignment operators (=, +=, ...), increment/decrement operators (prefix)
     *      - + i --> -(+i)
     */

    /* Side effects:
     *      We don't normally expect operators to modify their operands;
     *      writing i + j doesn't modify their operands; it simply computes the result of adding i and j.
     * Most C operators don't modify their operands, but some do.
     * We say that these operators have side effects.
     *
     * Example of an operator which has side effects: = (simple assignment operator)
     * Evaluating i = 0 produces the result 0 and assigns 0 to i (right to left) as a side effect
     */

    /* Lvalues:
     *      Most C operators allow their operands to be variables, constants or expressions.
     *      The assignment operator (=), however, requires a lvalue as it's left operand.
     *
     * Represents an object stored in computer memory, not a constant or the result of a computation.
     * Variables are lvalues. Others will be introduced in later chapters.
     *
     * "invalid lvalue in assignment":
     *      12 = i;    // WRONG
     *      i + j = 0; // WRONG
     *      -i = j;    // WRONG
     */
    return 0;
}

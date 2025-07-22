#include <stdio.h>

/* Macros for boolean values:
 * #define TRUE 1
 * #define FALSE 0
 * or:
 * #define BOOL int
 */


int main(void)
{
    int i, j, k;

    // _Bool flag; ---- Introduced in C99
    // if <stdbool.h> is included, we can write: bool flag;
    // it also supplies macros named true and false which stand for 1 and 0, respectively.
    // flag = 5; ---- flag is assigned 1

    // Shows that the boolean expression yields an `int`
    printf("%d\n", 1 < 2); // True (1)

    // Demonstrates `if` statements with a singular statement
    if (1 == 1)
        printf("Executed inside the loop!\n");

    printf("Executed outside the loop!\n");

    // To check whether `i` lies in the range [0, n)
    i = 1;
    if (0 <= i && i < 5)
        printf("%d lies in the range [0, 5)!\n", i);

    // To check whether `i` lies outside the range [0, 5)
    i = 1;
    if (i < 0 || i >= 5)
        printf("%d lies outside the range [0, 5)!\n", i);

    // `if` statements with multiple statements using compound statement ---- {statements}
    i = 1;
    if (i < 0)
    {
        printf("`i` is less than 0\n");
        printf("That means `i` is negative\n");
    }

    // `if` statements with an `else` clause
    i = 1, j = 2;
    if (i > j)
        printf("Max: `i` (%d)\n", i);
    else
        printf("Max: `j` (%d)\n", j);

    // Nested `if-else` statements
    i = 1, j = 2, k = 3;
    if (i > j)
    {
        if (i > k)
            printf("Max: `i` (%d)\n", i);
        else
            printf("Max: `k` (%d)\n", k);
    }
    else
    {
        if (j > k)
            printf("Max: `j` (%d)\n", j);
        else
            printf("Max: `k` (%d)\n", k);
    }

    // Cascaded "`if`-`else if`-`else`" statements
    i = 0;
    if (i < 0)
        printf("`i` is less than 0\n");
    else if (i == 0)
        printf("`i` is equal to 0\n");
    else
        printf("`i` is greater than 0\n");

    // The "Dangling `else`" problem
    // The indentation suggests that the `else` clause belongs to the outer `if` statement.
    // However, C follows the rule that an `else` clause belongs to the nearest `if` statement that hasn't already been paired with an `else`
    // We can fix this behaviour, by enclosing the inner `if` statement in braces {}
    i = 1, j = 0;
    if (i != 0)
        if (j != 0)
            printf("Result: %d\n", i / j);
    else
        printf("Error: j is equal to 0\n");

    /* Correctly indented version:
    if (i != 0)
        if (j != 0)
            printf("Result: %d\n", i / j);
        else
            printf("Error: y is equal to 0\n");
    */

    // Illustrates the conditional operator
    i = 1, j = 2;
    k = i > j ? i : j;        // k is now 2
    k = (i >= 0 ? i : 0) + j; // k is now 3

    /* Statements:
     *      Expression statements:
     *          ex: `int i = 0;`, `i++;` ...
     *      Selection statements / Conditionals:
     *          ex: "`if`-`else if`-`else`", `switch`
     *      Iteration statements / Loops:
     *          ex: `while`, `do-while`, `for`
     *      Jump statements:
     *          ex: `break`, `continue`, `goto`, `return`
     *      Compound statements / Block:
     *          ---- group several statements into a single statement
     *      Null statement: ";"
     *          ---- Performs no action
     */

    /* Relational operators: [Precedence lower than the arithmetic operators] [Left associative]
     *      `<` ---- less than
     *      `<=` ---- less than or equal to
     *      `>` ---- greater than
     *      `>=` ---- greater than or equal to
     *      Equality operators: [Lower precedence than other relational operators] [Left associative]
     *          `==` ---- equal to
     *          `!=` ---- not equal to
     * Logical operators: [Treats any non-zero operand as true and any zero operand as false]
     *      `!` ---- logical negation ("not") [Unary] [Same precedence as the unary plus and minus operators] [Right associative]
     *      `&&` ---- logical "and" [Binary] [Left associative]
     *      `||` ---- logical "or" [Binary] [Left associative]
     *          Precedence of `&&` and `||` is lower than that of the relational and equality operators.
     *              Both `&&` and `||` perform "short-circuit" evaluation of their operands.
     *              That is, these operators first evaluate the left operand, then the right operand.
     *              If the value of the expression can be deduced from the value of the left operand alone, then the right operand isn't evaluated.
     *              ex: (i != 0) && (j / i > 0)
     *                  If (i != 0) is false, then the entire expression must be false, so there is no need to evaluate the right operand.
     * Conditional operator: [requires 3 operands] [Ternary] [Precedence less than other operators, except the assignment operators]
     *      `? :` ---- condition ? expr_if_true : expr_if_false; [if condition is true then expr_if_true else expr_if_false] ---- Conditional expression
     *                 condition is evaluated first; if it's value is non-zero, then expr_if_true is evaluated;
     *                 and it's value is the value of the entire conditional expression
     *                 if the value of the condition is zero, then the value of expr_if_false is the value of the conditional expression.
     */

    // `i < j < k` --> `(i < j) < k` --> `(1 or 0) < k` ---- This expression does not test whether `j` lies b/w `i` and `k`!!
    // Correct would be: `i < j && j < k

    // Boolean expression in C yields an `int`: either 0 (false) or 1 (true)
    return 0;
}

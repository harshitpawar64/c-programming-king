#include <stdio.h>

int main(void)
{
    int a = 5, b, c;

    // Avoid writing expressions that access the value of a variable and also modify the variable elsewhere in the expression
    c = (b = a + 2) - (a = 1);
    printf("c is %d\n", c); // `c` may be 6 or 2

    /* Better would be:
    b = a + 2;
    a = 1;
    c = b - a; // `c` will always be 6
    */

    /* Undefined behaviour:
     *
     * According to the C standard, statements such as c = (b = a + 2) - (a = 1); j = i * i++;
     * cause "undefined behaviour". When a program ventures in the realm of "undefined behaviour", all bets are off.
     * Should be avoided at all costs.
     */

    /* Any expression can be used as a statement.
     * ex:
     * ++i; // `i` is first incremented, then the incremented value of `i` is fetched. However, it's discarded since `++i` isn't part of a larger expression.
     * Better would be: `i++;`
     */

    return 0;
}

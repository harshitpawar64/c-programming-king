/**********************************
 * Name: test2.c                  *
 * Purpose: Testing.              *
 * Author: Harshit Pawar          *
 * Date: 2025-07-05               *
 *********************************/

#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /* Conversion specifications / Format specifiers --> %d, %i, %f, %e, %g
     * %m.pX / %-m.pX; m,p -> integers (optional); X -> letter
     *    m -> minimum field width -> minimum number of characters to print
     *    If value to be printed requires less than m characters, the value is right-justified (extra spaces precede the value)
     *
     *    p -> precision -> depends on conversion specifier (X)
     *
     *    X -> conversion specifier
     *        d ---- Displays integer in base 10 (decimal); (DECIMAL INTEGER)
     *               p indicates minimum number of digits to display (extra 0s are added to beginning if necessary); default = 1
     *
     *        e ---- Displays floats in "exponential" format; (EXPONENTIAL FLOATING POINT NUMBER)
     *               p indicates how many digits should appear after the decimal point, if p = 0, decimal point is not displayed; default = 6
     *
     *        f ---- Displays floats in "fixed decimal" format, without an exponent; (FIXED DECIMAL FLOATING POINT NUMBER)
     *               p has the same meaning as for the "e" specifier
     *
     *        g ---- Displays floats in either "exponential" or "fixed decimal" format, depending on the number's size; (GENERAL FLOATING POINT NUMBER)
     *               p indicates the maximum number of "significant" digits to be displayed, won't show trailing 0s
     *               if value to be printed has no digits after the decimal point -> g doesn't display the decimal point; default = 6
     */
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    // m = 6, p = 2, X = f --> minimum chars to print = 6, total characters (40.00) = 5 ==> 1 space added (value is right-justified)
    printf("%6.2f\n", 40.0);

    // m = 4, p -> 1 (default), X = d --> minimum chars to print = 4, total characters (3) = 1 ==> 3 spaces added (value is right-justified)
    printf("%4d\n", 3);

    // same as above but (value is left-justified)
    printf("%-4d\n", 3);

    // m -> missing, p = 6 (default), X = e
    printf("%e\n", 0.0005);

    // m -> 5, p = 5, X = f
    printf("%5.5f\n", 0.0005);

    printf("%g\n", 0.00005); // %g -> Exponential format
    printf("%g\n", 0.5);     // %Fixed decimal format

    return 0;
}

/**********************************
 * Name: test4.c                  *
 * Purpose: Testing.              *
 * Author: Harshit Pawar          *
 * Date: 2025-07-06               *
 *********************************/

#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    // scanf("%d%d%f%f", &i, &j, &x, &y); // Tightly packed format strings; & -> address-of/reference operator, * -> dereference
    // printf("i: %d, j: %d\nx: %f, y: %f\n", i, j, x, y);

    scanf("%f /%f", &x, &y);
    printf("%f\n", x / y);

    printf("50%%\n"); // Prints 50%

    // Shouldn't confuse printf() with scanf()
    // printf("%d %d\n", &i, &j);
    // scanf("%d, %d", &i, &j);

    /* Bad idea to include \n in scanf()
     * To scanf(), a \n is equivalent to a space; both cause scanf() to advance to the next non-white-space char
     * scanf() will skip white-space, read an integer, then skip to the next non-white-space char
     * Essentially causing the program to "hang" until the user enters a non-white-space char
     *
     * scanf("%d\n", &i);
     * printf("i: %d\n", i);
     */

    /*
     * scanf() begins processing information in the string, starting from left.
     * For each conversion specification in the format string,
     * scanf() tries to locate an item of the appropriate type, skipping white-spaces if necessary
     * scanf() then reads the item, stopping when it encounters a char that can't belong to the item.
     * If the item was read successfully, scanf() continues processing, if any item is not read successfully,
     * scanf() immediately returns without looking at the rest of the string.
     *
     * When scanf() encounters a char that can't be part of the current item, the char is "put back" to be read again.
     * One white-space character in the format string will match any number of white-space chars including none
     *
     * white-space chars -> (spaces, tabs, \n etc.)
     *
     */
    /* %i vs %d:
     *
     * In printf() -> there's no difference b/w the two
     * In scanf() ->
     *      %d can only match an integer written in decimal (base 10) form
     *      %i can match an integer expressed in octal (base 8), decimal (base 10) or hexa-decimal (base 16) form
     *          If a number has a 0 prefix (as in 056), %i treats it as an octal number;
     *          if it has 0x or 0X prefix (as in 0x56), %i treats it as a hex number.
     */

    return 0;
}

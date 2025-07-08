/**********************************
 * Name: test3.c                  *
 * Purpose: Testing.              *
 * Author: Harshit Pawar          *
 * Date: 2025-07-05               *
 *********************************/

#include <stdio.h>

int main(void)
{
    /* Escape sequences --> enable strings to contain non-printing / control characters and characters that have special meaning such as " etc.
     *
     * Examples:
     * \a --> Alert (bell) (audible beep on most machines)
     * \b --> Backspace (moves cursor back 1 position)
     * \n --> New line (moves cursor to beginning of next line)
     * \t --> Horizontal tab (moves cursor to next tab stop)
     * \" --> Double quote (" character)
     * \\ --> Backslash (\ character)
     */

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("This is B\bC\n"); // This is C
    printf("\"Hello!\"\n");   // "Hello!"
    printf("\\\n\a");         // \

    return 0;
}

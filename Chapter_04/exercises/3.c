/* To compile this program for the C89 standard:
 *      cc 3.c -o 3 -std=c89
 */

#include <stdio.h>

int main(void)
{
    /* (a) */
    printf("8 / 5: %d\n", 8 / 5); /* 1 */

    /* (b) */
    printf("-8 / 5: %d\n", -8 / 5); /* -1 or -2 */

    /* (c) */
    printf("8 / -5: %d\n", 8 / -5); /* -1 or -2 */

    /* (d) */
    printf("-8 / -5: %d\n", -8 / -5); /* 1 */

    /* Return status code '0' */
    return 0;
}

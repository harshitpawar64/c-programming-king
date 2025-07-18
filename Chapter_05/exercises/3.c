#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 3, j = 4, k = 5;
    printf("(a) %d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    // (b)
    i = 7, j = 8, k = 9;
    printf("(b) %d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);

    // (c)
    i = 7, j = 8, k = 9;
    printf("(c) %d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    // (d)
    i = 1, j = 1, k = 1;
    printf("(d) %d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    // Return status code '0'
    return 0;
}

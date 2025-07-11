#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 1;
    printf("(a) %d ", i++ - 1);
    printf("%d\n", i);

    // (b)
    i = 10, j = 5;
    printf("(b) %d ", i++ - ++j);
    printf("%d %d\n", i, j);

    // (c)
    i = 7, j = 8;
    printf("(c) %d ", i++ - --j);
    printf("%d %d\n", i, j);

    // (d)
    i = 3, j = 4, k = 5;
    printf("(d) %d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    // Return status code '0'
    return 0;
}

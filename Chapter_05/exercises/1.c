#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 2, j = 3;
    k = i * j == 6;
    printf("(a) %d\n", k);

    // (b)
    i = 5, j = 10, k = 1;
    printf("(b) %d\n", k > i < j);

    // (c)
    i = 3, j = 2, k = 1;
    printf("(c) %d\n", i < j == j < k);

    // (d)
    i = 3, j = 4, k = 5;
    printf("(d) %d\n", i % j + i < k);

    // Return status code '0'
    return 0;
}
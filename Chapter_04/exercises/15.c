#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;

    // (a)
    i += j;
    printf("(a) %d %d\n", i, j);

    // (b)
    i--;
    printf("(b) %d %d\n", i, j);

    // (c)
    i *j / i;
    printf("(c) %d %d\n", i, j);

    // (d)
    i % ++j;
    printf("(d) %d %d\n", i, j);

    // Return status code '0'
    return 0;
}

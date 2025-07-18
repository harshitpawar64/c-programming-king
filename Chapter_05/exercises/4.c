#include <stdio.h>

int main(void)
{
    int i, j;

    // Evaluate value of expression depending on
    // whether `i` is less than, equal to, or greater than `j`
    i = 2, j = 3;
    printf("i < j: %d\n", (i > j) - (i < j));

    i = 2, j = 2;
    printf("i == j: %d\n", (i > j) - (i < j));

    i = 3, j = 2;
    printf("i > j: %d\n", (i > j) - (i < j));

    // Return status code '0'
    return 0;
}

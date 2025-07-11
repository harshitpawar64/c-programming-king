#include <stdio.h>

int main(void)
{
    int i;

    // ++i
    i = 1;
    printf("++i: %d\n", ++i); // 2

    // i++
    i = 1;
    printf("i++: %d\n", i++); // 1

    // (i += 1)
    i = 1;
    printf("i += 1: %d\n", (i += 1)); // 2

    // Return status code '0'
    return 0;
}

#include <stdio.h>

int main(void)
{
    // (a)
    printf("8 %% 5: %d\n", 8 % 5); // 3

    // (b)
    printf("-8 %% 5: %d\n", -8 % 5); // -3 or 2

    // (c)
    printf("8 %% -5: %d\n", 8 % -5); // 3 or -2

    // (d)
    printf("-8 %% -5: %d\n", -8 % -5); // 3

    // Return status code '0'
    return 0;
}

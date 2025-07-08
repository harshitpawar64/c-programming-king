#include <stdio.h>

int main(void)
{
    float x = 301.83123;

    // Output `x` in various formats
    printf("%-8.1e\n", x);
    printf("%10e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);

    // Return status code '0'
    return 0;
}

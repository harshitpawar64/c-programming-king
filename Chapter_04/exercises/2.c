#include <stdio.h>

int main(void)
{
    int i = 5, j = 2;

    // Print the values of (-i)/j and -(i/j) for comparison
    printf("(-i)/j: %d\n", (-i) / j);
    printf("-(i/j): %d\n", -(i / j));

    // Return status code '0'
    return 0;
}

#include <math.h> // -lm
#include <stdio.h>

int main(void)
{
    float x, result;

    // Asks user for value of x
    printf("x: ");
    scanf("%f", &x);

    // Computes value of polynomial, substituting value of x
    result = (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - (pow(x, 2)) + (7 * x) - 6;

    // Outputs computed result
    printf("Result: %.2f", result);

    // Return status code '0'
    return 0;
}

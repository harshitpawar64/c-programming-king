#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, numerator, denominator;

    // Asks user for 2 fractions
    printf("Fraction 1: ");
    scanf("%d /%d", &num1, &denom1);

    printf("Fraction 2: ");
    scanf("%d /%d", &num2, &denom2);

    // Calculate the numerator and denominator of the sum of fractions
    numerator = num1 * denom2 + num2 * denom1;
    denominator = denom1 * denom2;

    // Output the calculated sum
    printf("Sum: %d/%d\n", numerator, denominator);

    // Return status code '0'
    return 0;
}

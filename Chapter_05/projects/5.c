#include <stdio.h>

int main(void)
{
    float income, tax;

    // Asks user for taxable income
    printf("Taxable income: $");
    scanf("%f", &income);

    // Determine tax on taxable income
    if (income > 7000.0f)
        tax = 230.0f + (income - 7000.0f) * 0.06f;
    else if (income >= 5250.0f)
        tax = 142.5f + (income - 5250.0f) * 0.05f;
    else if (income >= 3750.0f)
        tax = 82.5f + (income - 3750.0f) * 0.04f;
    else if (income >= 2250.0f)
        tax = 37.5f + (income - 2250.0f) * 0.03f;
    else if (income >= 750.0f)
        tax = 7.5f + (income - 750.0f) * 0.02f;
    else
        tax = income * 0.01f;

    // Output the tax on taxable income
    printf("Tax due: $%.2f\n", tax);

    // Return status code '0'
    return 0;
}

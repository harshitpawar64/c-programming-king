#include <stdio.h>

// 5% tax
const float TAX = 0.05;

int main(void)
{
    float amount, total;

    // Asks user for amount
    printf("Amount: $");
    scanf("%f", &amount);

    // Calculate total amount after adding tax
    total = amount + (amount * TAX);

    // Output computed total amount
    printf("With tax added: $%.2f\n", total);

    // Return status code '0'
    return 0;
}

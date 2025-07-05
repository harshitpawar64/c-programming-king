#include <stdio.h>

int main(void)
{
    // Asks user for amount in dollars
    int amount;
    printf("Amount: $");
    scanf("%d", &amount);

    // Outputs the number of denominations it would take to pay that amount
    printf("$20 bills: %d\n", amount / 20);
    amount %= 20; // Update amount after taking out $20s

    printf("$10 bills: %d\n", amount / 10);
    amount %= 10; // Update amount after taking out $10s

    printf(" $5 bills: %d\n", amount / 5);
    amount %= 5; // Update amount after taking out $5s

    printf(" $1 bills: %d\n", amount);

    // Return status code '0'
    return 0;
}

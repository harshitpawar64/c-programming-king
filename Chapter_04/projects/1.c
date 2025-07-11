#include <stdio.h>

int main(void)
{
    int num;

    // Asks user for a two-digit number
    printf("Number: ");
    scanf("%2d", &num);

    // Break the number into 2 digits
    int n1 = num / 10;
    int n2 = num % 10;

    // Output the number with it's digits reversed
    printf("Reverse: %d%d\n", n2, n1);

    // Return status code '0'
    return 0;
}

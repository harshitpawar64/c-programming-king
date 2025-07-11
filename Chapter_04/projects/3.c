#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    // Asks user for a three-digit number
    printf("Number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    // Output the number with it's digits reversed
    printf("Reverse: %d%d%d\n", n3, n2, n1);

    // Return status code '0'
    return 0;
}

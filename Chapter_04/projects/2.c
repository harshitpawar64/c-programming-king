#include <stdio.h>

int main(void)
{
    int num, n1, n2, n3;

    // Asks user for a three-digit number
    printf("Number: ");
    scanf("%3d", &num);

    // Break the number into 3 digits
    n1 = num / 100;
    n2 = (num / 10) % 10;
    n3 = num % 10;

    // Output the number with it's digits reversed
    printf("Reverse: %d%d%d\n", n3, n2, n1);

    // Return status code '0'
    return 0;
}

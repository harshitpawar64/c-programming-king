#include <stdio.h>

int main(void)
{
    int num, digits;

    // Asks user for a number
    printf("Number: ");
    scanf("%d", &num);

    // Determines the number of digits in `num`
    if (num >= 1000)
        digits = 4;
    else if (num >= 100)
        digits = 3;
    else if (num >= 10)
        digits = 2;
    else
        digits = 1;

    // Output the number
    printf("%d has %d digits\n", num, digits);

    // Return status code '0'
    return 0;
}

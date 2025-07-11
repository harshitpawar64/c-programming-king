#include <stdio.h>

int main(void)
{
    int num, o1, o2, o3, o4, o5;

    // Asks user for a number in the range [0, 32767]
    printf("Number (Base 10): ");
    scanf("%d", &num);

    // Compute the digits of the octal conversion of the number
    o5 = num % 8;
    num /= 8;

    o4 = num % 8;
    num /= 8;

    o3 = num % 8;
    num /= 8;

    o2 = num % 8;
    num /= 8;

    o1 = num % 8;

    // Output the number in base 8
    printf("Number (Base 8): %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    // Return status code '0'
    return 0;
}

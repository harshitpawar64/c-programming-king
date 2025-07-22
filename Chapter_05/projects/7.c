#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;

    // Asks user for 4 integers
    printf("4 integers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    // Initialize `largest` and `smallest` with `num1`
    int largest = num1;
    int smallest = num1;

    // Compare with num2
    if (num2 > largest)
        largest = num2;
    if (num2 < smallest)
        smallest = num2;

    // Compare with num3
    if (num3 > largest)
        largest = num3;
    if (num3 < smallest)
        smallest = num3;

    // Compare with num4
    if (num4 > largest)
        largest = num4;
    if (num4 < smallest)
        smallest = num4;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    // Return status code '0'
    return 0;
}

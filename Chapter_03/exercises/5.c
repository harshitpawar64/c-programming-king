#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    // Asks user for x, i and y
    scanf("%f%d%f", &x, &i, &y);
    printf("x: %f\n", x);
    printf("i: %d\n", i);
    printf("y: %f\n", y);

    // Return status code '0'
    return 0;
}

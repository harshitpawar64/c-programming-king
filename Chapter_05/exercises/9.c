#include <stdio.h>

int main(void)
{
    int score = 99;

    // Check if both if statements are equivalent
    if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else
        printf("F\n");

    if (score < 60)
        printf("F\n");
    else if (score < 70)
        printf("D\n");
    else if (score < 80)
        printf("C\n");
    else if (score < 90)
        printf("B\n");
    else
        printf("A\n");

    // Return status code '0'
    return 0;
}

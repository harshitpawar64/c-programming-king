#include <stdio.h>

int main(void)
{
    int grade;

    // Asks user for numerical grade
    printf("Numerical grade: ");
    scanf("%d", &grade);

    // If grade is not in [0, 100], return output error message and status code '1'
    if (grade > 100 || grade < 0)
    {
        printf("Error: Invalid grade\n");
        return 1;
    }

    // Extract tens digit from grade
    int tens = grade / 10;

    // Output letter grade using the tens digit of numerical grade
    printf("Letter grade: ");
    switch (tens)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }

    // Return status code '0'
    return 0;
}

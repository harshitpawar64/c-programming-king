#include <stdio.h>

int main(void)
{
    int grade = 2;

    // Illustrates `switch` statements
    // `switch` statements are often faster than `if` statements, especially when there are many cases.
    // Since deliberately "falling through" from one case into the next is rare, it's a good idea to point out any deliberate omission of break;
    switch (grade) // Controlling expression --> grade
    {
    case 4:                    // Case labels containing a constant expression
        printf("Excellent\n"); // Statements
        break;                 // Without `break` (or some other jump statement), control will "fall through" from one case into next
    case 3:
        printf("Good\n");
        break;
    case 2:
        printf("Average\n");
        break;
    case 1:
        printf("Poor\n");
        break;
    case 0:
        printf("Failing\n");
        break;
    default:
        printf("Illegal grade\n");
        break;
    }

    return 0;
}

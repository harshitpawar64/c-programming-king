#include <stdio.h>

int main(void)
{
    int i = 1;

    switch (i % 3)
    {
    case 0:
        printf("zero");
    case 1:
        printf("one");
    case 2:
        printf("two");
    }

    // End program on a new line
    printf("\n");

    // Return status code '0'
    return 0;
}

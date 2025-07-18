#include <stdio.h>

int main(void)
{
    int i;

    // When `i` has the value `17`
    i = 17;
    printf("%d\n", i >= 0 ? i : -i);

    // When `i` has the value `-17`
    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    // Return status code '0'
    return 0;
}

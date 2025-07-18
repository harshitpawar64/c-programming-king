#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int age = 17;
    bool teenager;

    // Check if a person is a teenager
    teenager = (13 <= age && age <= 19);

    // Output boolean value
    printf("Teenager?: %s\n", teenager ? "True" : "False");

    // Return status code '0'
    return 0;
}

#include <stdio.h>
// asks the user for up to 10 numbers and adds them up
int main(void)
{
    int value;  // stores user input
    int total = 0; // accumulator

    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer (0 to stop): ");
        scanf("%i", &value);

        if (value == 0) {
            break; //another exit point
        } else {
            total += value;
        }
    }

    printf("Total = %i\n", total);

    return 0;
}
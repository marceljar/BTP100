#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int number;
    char name[16];

    printf("Enter a number: ");
    scanf("%i", &number);

    printf("Enter your name (no spaces): ");
    scanf("%s", name);

    printf("Value stored in number: %i\n", number);
    printf("Address of number: %x\n\n", &number);

    printf("Value stored in name: %s\n", name);
    printf("Address of name: %x\n\n", name);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int integerNumber;
    float floatNumber;
    char character;
    char string[50];
    char stringWithSpace[100];

    printf("Enter an integer: ");
    scanf("%d", &integerNumber);

    printf("Enter a float number: ");
    scanf("%f", &floatNumber);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a string (without spaces): ");
    scanf("%s", string);

    printf("Enter a string (may have spaces): ");
    scanf(" %[^\n]", stringWithSpace);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", integerNumber);
    printf("Float: %f\n", floatNumber);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
    printf("String: %s\n", stringWithSpace);

    return 0;
}

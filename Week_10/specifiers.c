#include <stdio.h>
//#pragma warning(disable:4996) For Visual Studio

int main() {
    int decimal;
    char character;
    float number;
    char word[32];

    printf("Enter an integer, a char, a float, and a word: ");
    scanf("%i%c%f%s", &decimal, &character, &number, word);

    printf("Decimal: %i\n", decimal);
    printf("Character: %c\n", character);
    printf("Float: %f\n", number);
    printf("Character: %s\n", word);

    return 0;
}
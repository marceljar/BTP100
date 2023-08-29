#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    character = getchar();
    printf("You entered: %c\n", character);

    while((getchar())!='\n'); //clear buffer
    
    printf("Enter another character: ");
    character = getchar();
    printf("You entered: %c\n", character);

    return 0;
}
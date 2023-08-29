#include <stdio.h>

int main() {
    int i, j;

    printf("Enter a number: ");
    scanf("%i",&i); // standard C version
    //scanf_s("%i",&i); //use this in Visual Studio
    
    
    while((getchar())!='\n'); //clear buffer

    printf("Enter another number: ");
    scanf("%i",&j); // standard C version
    //scanf_s("%i",&j); // use this in Visual Studio
    
    while((getchar())!='\n'); //clear buffer

    printf("%i + %i => %i\n", i, j, i + j);

    return 0;
}
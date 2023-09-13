#include <stdio.h>
https://github.com/marceljar/BTP100

int main() {
    int i, j;

    printf("Enter a number: ");
    scanf("%i",&i);
   
    while((getchar())!='\n'); //clear buffer

    printf("Enter another number: ");
    scanf("%i",&j); 
    
    while((getchar())!='\n'); //clear buffer

    printf("%i + %i => %i\n", i, j, i + j);

    return 0;
}

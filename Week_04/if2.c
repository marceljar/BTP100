#include <stdio.h>

int main() {
    int i;
    printf("Enter a number: ");
    scanf("%i", &i);
    
    if (i > 10) {
        printf("Your number is greater than 10!\n");
    }

    printf("Program finished.\n");    
    return 0;
}

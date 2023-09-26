#include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf

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

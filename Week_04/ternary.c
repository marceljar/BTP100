#include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf

int main() {
    int i;
    char c;

    printf("Enter a number: ");
    scanf("%i", &i);
    
    c = i > 10 ? 'y' : 'n';

    printf("Is the number greater than 10?\n");
    printf("%c\n", c);

    printf("Program finished.\n");    
    return 0;
}

#include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf

int main() {
    char weather, temp;

    printf("Enter (s) if sunny or (r) if rainy: ");
    scanf("%c", &weather);

    while((getchar())!='\n'); //clear buffer

    printf("Enter (h) if hot or (c) if cold: ");
    scanf("%c", &temp);

    while((getchar())!='\n'); //clear buffer
    
    if (weather == 'r') {
        printf("I am staying home!\n");
    } else if ((weather != 'r') && (temp == 'h')){//DON'T DO THIS!
        printf("I am going to the beach!\n");
    } else if ((weather != 'r') && (temp != 'h')){//DON'T DO THIS!
        printf("I am going to the park!\n");
    }

    printf("Program finished.\n");    
    return 0;
}

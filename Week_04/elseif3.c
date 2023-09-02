#include <stdio.h>

int main() {
    char weather, temp;

    printf("Enter (s) if sunny or (r) if rainy: ");
    scanf("%c", &weather);

    while((getchar())!='\n'); //clear buffer

    if (weather == 's') {
        printf("Enter (h) if hot or (c) if cold: ");
        scanf("%c", &temp);

        while((getchar())!='\n'); //clear buffer
    
        if (temp == 'h'){
            printf("I am going to the beach!\n");
        } else {
            printf("I am going to the park!\n");
        }
    } else {
            printf("I am staying home!\n");
    
    } 

    printf("Program finished.\n");    
    return 0;
}
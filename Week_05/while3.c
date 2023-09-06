#include <stdio.h>

int main() {
    char c = 'a';

    while (c != 'q') {
        printf("Press 'q' to quit!\n");
        scanf("%c", &c);
        while ((getchar()) != '\n'); //clear buffer
    }
    
    printf("Application terminated!\n");
    return 0;
}
#include <stdio.h>

int main() {

    char c;

    while (1) {
        printf("Should I ask this again? [y/n]!\n");
        scanf("%c",&c);
        
        while((getchar())!='\n'); //clear buffer
        if (c == 'y') {
            continue;
        }
        printf("Goodbye!\n"); //only printed when c != y
        break;
    }

    return 0;
}
#include <stdio.h>

void clear() {
    while (getchar() != '\n'); 
 }

int main(){
    int character;

    printf("Enter a sequence of characters: ");
    character = getchar();
    printf("First: %c\n", (char) character);
    //clear();
    character = getchar();
    printf("Second: %c\n", (char) character);
    
    return 0;
}
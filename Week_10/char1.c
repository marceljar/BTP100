#include <stdio.h>

void print(char name[]){
    for (int i = 0; name[i] != '\0'; i++){
        printf("%c", name[i]);
    }
    printf("\n");
}

int main() {
    char name[31] = "Marcel Jar"; 

    print(name);
    return 0;
}
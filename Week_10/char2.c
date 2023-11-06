#include <stdio.h>

void get_name(char name[]){
    printf("Enter user's name: ");
    scanf("%32[^\n]", name);
}

int main() {
    char name[32]; 

    get_name(name);
    printf("You entered: %s\n", name);

    return 0;
}
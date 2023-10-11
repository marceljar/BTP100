#include <stdio.h>
#define SIZE 64

int main() {

    char name[SIZE] = "Marcel Jar"; // or "Marcel Jar\0"
    char address[SIZE] = {'1', '0', 'B', 'a', 'y', 's', 't', '\0'};
    
    printf("Your name is %s.\n", name);
    printf("You address is %s.\n", address);

    return 0;
}
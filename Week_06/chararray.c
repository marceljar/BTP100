#include <stdio.h>
#define SIZE 64

int main() {

    char name[SIZE];
    char address[SIZE];

    printf("Enter your full name: ");
    int i = 0;
    do {
        name[i] = getchar();
        i++;
    } while (name[i-1] !='\n');
    name[i-1] = '\0';

    printf("Enter your full address: ");
    i = 0;
    do {
        address[i] = getchar();
        i++;
    } while (address[i-1] !='\n');
    address[i-1] = '\0';
    
    printf("You entered: %s as your name.\n", name);
    printf("You entered: %s as your address.\n", address);

    return 0;
}
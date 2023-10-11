#include <stdio.h>
#define SIZE 32
#pragma warning(disable:4996)

struct student {
    int id;
    char name[SIZE];
};

int main() {
    
    struct student john;

    printf("Enter the user's id: ");
    scanf("%i", &john.id);
    
    while ((getchar()) != '\n');

    printf("Enter the user name: ");
    scanf("%s", john.name);
    
    printf("id is: %i \n", john.id);
    printf("name is: %s \n", john.name);

    return 0;
}
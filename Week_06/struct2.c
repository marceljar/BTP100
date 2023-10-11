#include <stdio.h>
#include <string.h>
#define SIZE 32
#pragma warning(disable:4996)

struct student {
    int id;
    char name[SIZE];
};

int main() {
    
    struct student john, john_copy, john_copy2;

    printf("Enter the user's id: ");
    scanf("%i", &john.id);
    
    while ((getchar()) != '\n');

    printf("Enter the user name: ");
    scanf("%s", john.name);
    
    printf("id is: %i \n", john.id);
    printf("name is: %s \n", john.name);

    john_copy.id = john.id;
    strcpy(john_copy.name, john.name); //copying a char array

    printf("id is: %i \n", john_copy.id);
    printf("name is: %s \n", john_copy.name);

    john_copy2 = john; 

    printf("id is: %i \n", john_copy2.id);
    printf("name is: %s \n", john_copy2.name);

    return 0;
}
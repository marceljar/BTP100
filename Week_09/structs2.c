#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 16

struct patient {
    int age;
    char name[SIZE];
};

void print_info(struct patient *john_doe){
    printf("Name: %s\n", john_doe->name);
    printf("Age: %i\n", john_doe->age);
}

int main(){

    struct patient john_doe;
    
    printf("Enter the pacient's age:");
    scanf("%i", &john_doe.age);
    while ((getchar()) != '\n');
    printf("Enter the pacient's name:");
    scanf("%s", john_doe.name);
    
    print_info(&john_doe);

    return 0;
}
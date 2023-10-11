#include <stdio.h>
#define SIZE 3

int main() {

    int array[SIZE];

    for (int i = 0; i < SIZE; i++){
        printf ("Enter an integer: ");
        scanf("%i", &array[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < SIZE; i++){
        printf ("%i ", array[i]);
    }
    printf("\n");

    return 0;
}
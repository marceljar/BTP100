#include <stdio.h>
#define SIZE 5

int main() {

    int alpha_numbers[SIZE] = {1, 2, 3, 4, 5};
    char alpha_letters[SIZE] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < SIZE; i++){
        printf ("%i - %c\n", alpha_numbers[i], alpha_letters[i]);
    }

    return 0;
}
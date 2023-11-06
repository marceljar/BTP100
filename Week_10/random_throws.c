#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int seed;
    int count, i;

    printf("Enter a seed for the random number generator: ");
    scanf("%d", &seed);

    srand(seed);

    printf("How many random numbers do you want to generate? ");
    scanf("%d", &count);

    printf("Your dice throws are:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", (rand() % 6) + 1);
    }

    printf("\n");

    return 0;
}
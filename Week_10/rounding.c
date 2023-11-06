#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Round: %.2f\n", round(num)); 
    printf("Truncate: %.2f\n", trunc(num));
    printf("Ceil: %.2f\n", ceil(num)); 
    printf("Floor: %.2f\n", floor(num));

    return 0;
}

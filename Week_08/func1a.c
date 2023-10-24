#include<stdio.h>
#pragma warning(disable:4996)

int factorial(int);

int main() {

    int number, result;
    printf("Please, enter an integer smaller than 10: ");
    scanf("%i", &number);

    result = factorial(number);
    printf("%i! = %i\n", number, result);

    return 0;
}

int factorial(int input) {
    int output = 1;
    while (input > 1) {
        output = output*input;
        input--;
    }
    return output;
}
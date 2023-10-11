#include <stdio.h>

int calculate(int a, int b, char operation) {
    int result;

    if (operation == '+') {
        result = a + b;
        printf("The result is: %i\n", result);
    } else if (operation == '-') {
        result = a - b;
        printf("The result is: %i\n", result);
    } else {
        printf("Invalid operation\n");
        return 0; // Violation of SESE principle
    }

    return 1;
}

int main() {
    int a = 5, b = 3;
    char operation = '*'; //Invalid operation

    int status = calculate(a, b, operation);

    if (!status) {
        printf("Calculation failed.\n");
    }

    return 0;
}

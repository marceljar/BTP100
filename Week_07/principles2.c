#include <stdio.h>

int calculate(int a, int b, char operation) {
    int result, flag;

    if (operation == '+') {
        result = a + b;
        flag = 1;
        printf("The result is: %i\n", result);
    } else if (operation == '-') {
        result = a - b;
        flag = 1;
        printf("The result is: %i\n", result);
    } else {
        flag = 0;
        printf("Invalid operation\n");        
    }

    return flag;
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

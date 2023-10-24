#include <stdio.h>

//Function to compute the sum and product of two integers
int sumAndProduct(int a, int b, int* sum, int* prod) {
    int flag = 1;
    if (sum == NULL || prod == NULL) {
        flag = 0;
    }

    if (flag){
        *sum = a + b;
        *prod = a * b;
    } 
    
    return flag;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    int sum, product;
    int errorFlag = sumAndProduct(num1, num2, &sum, &product);

    if (errorFlag) {
        printf("Sum: %i\n", sum);
        printf("Product: %i\n", product);
    } else {
        printf("Error: Invalid pointers\n");
    }

    return 0;
}

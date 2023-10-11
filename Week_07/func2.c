#include <stdio.h>

int globalVar = 10;

void exampleFunction(int argVar) {
    int localVar = 5;
    argVar++;
    printf("Inside function:\n");
    printf("Local variable (localVar): %i\n", localVar);
    printf("Argument variable + 1 (argVar): %i\n", argVar);
    printf("Global variable (globalVar): %i\n", globalVar);
}

int main() {
    int localVar = 20;

    printf("Inside main function:\n");
    printf("Local variable (localVar): %i\n", localVar);
    printf("Global variable (globalVar): %i\n", globalVar);

    exampleFunction(localVar);

    printf("Back in main function:\n");
    printf("Local variable (localVar): %i\n", localVar);
    printf("Global variable (globalVar): %i\n", globalVar);

    return 0;
}

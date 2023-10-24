#include <stdio.h>

void passByValue(int argVar) {
    argVar++;
    printf("Argument variable + 1 (argVar): %i\n", argVar);
}

int main() {

    int var = 20;

    printf("var value: %i\n", var);

    passByValue(var);

    printf("var value (after function): %i\n", var);

    return 0;
}

#include <stdio.h>

void swap(int *a, int *b){
    int aux;
    printf("Local - original values: %i and %i\n", *a, *b);
    aux = *a;
    *a = *b;
    *b = aux;
    printf("Local - swapped values: %i and %i\n", *a, *b);
}

int main(){

    int a = 3, b = 1;
    printf("Main - original values are: %i and %i\n", a, b);
    swap(&a, &b);
    printf("Main - original values are: %i and %i\n", a, b);
    
    return 0;
}
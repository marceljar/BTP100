#include <stdio.h>
#define SIZE 5

void print_array(int *array, int size){
    printf("[");
    for (int i= 0; i < size - 1; i++){
        printf("%i, ", array[i]);
    }
    printf("%i]\n", array[size-1]);
}

int main(){

    int array[SIZE] = {10, 20, 30, 40, 50};
    int size = SIZE;
    print_array(array, size);

    return 0;
}
#include<stdio.h>

int main() {

    int list[3] = {10, 20, 30};
    //traversing an array using array notation
    for (int i = 0; i < 3; i++) {
        printf("%i ", list[i]);
    }
    printf("\n");
    //traversing an array using pointer arithmetic
    int *ptr = list;
    for (int i = 0; i < 3; i++) {
        printf("%i ", *ptr++);
    }
    printf("\n");
    
    return 0;
}
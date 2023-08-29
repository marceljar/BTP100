#include <stdio.h>

int main() {
    int i = 0, j = 1;

    printf(" %i AND %i => %i\n", i, i, i && i);
    printf(" %i OR %i => %i\n", i, j, i || i);
    printf(" !%i => %i\n", i, !i);
    
    return 0;
}
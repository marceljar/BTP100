#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int square(int a) {
    return a * a;
}

int add_squares(int a, int b){
    return add(square(a), square(b));
}

int main() {

  int i = 3, j = 4;

  printf("%i^2 + %i^2 = %i\n", i, j, add_squares(i,j));
  return 0;
}

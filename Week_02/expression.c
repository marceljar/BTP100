#include <stdio.h>

int main() {
  int i = 7, j = 2, k = 6, l = 1;

  printf(" %i + %i * %i =>%i\n", i, j, k, i + j * k );
  printf(" (%i + %i) * %i =>%i\n", i, j, k, (i + j) * k );
  printf(" %i + %i > %i + %i =>%i\n", i, j, k, l, i + j > k + l);
  printf(" %i > %i || %i < %i =>%i\n", i, j, k, l, i > j || k < l);

    return 0;
}
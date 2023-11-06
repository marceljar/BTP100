#include <stdio.h>
#include <string.h>

#define SIZE 16

int main() {
  char str1[SIZE] = "abcd", 
       str2[SIZE] = "efgh", str3[SIZE] = "abcdefgh";
  int result;

  printf("strcmp(str1, str1) = %d\n", strcmp(str1, str1));
  printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
  printf("strcmp(str2, str1) = %d\n", strcmp(str2, str1));
  printf("strcmp(str1, str3) = %d\n", strcmp(str1, str3));

  return 0;
}
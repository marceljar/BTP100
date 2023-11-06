#include <stdio.h>
#include <string.h>

#define SIZE 8

int main() {
  char str1[SIZE] = "BTP100", str2[SIZE];
  
  strcpy(str2, str1);

  printf("%s\n", str2);
  printf("%s\n", strcpy(str2, str1));
  
  return 0;
}
#include <stdio.h>
#include <string.h>

#define SIZE 32
int main() {

   char str1[SIZE] = "I love ", 
        str2[SIZE] = "to program ", str3[SIZE] = "in C!";

   strcat(str1, str2);
   strcat(str1, str3);
   
   //strcat(str1, strcat(str2, str3)); //using return
   printf("%s\n", str1);

   return 0;
}
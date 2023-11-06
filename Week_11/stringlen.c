#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 64

int main()
{
    char name[SIZE];

    printf("Enter your name: ");
    scanf("%64[^\n]", name);

    printf("your name has %i characters.\n", strlen(name));

    return 0;
}
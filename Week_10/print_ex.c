#include <stdio.h>
#include <math.h>

int main() {
    int decimal = 250;
    char char1 = 'a', char2 = 'b', char3 = 'c';
    float pi = 3.14159;
    long double plank = 6.62607015 * pow(10,-34);
    char greeting[32] = { "Hello \0 World!" };

    printf("Decimal (integer) number: %i\n", decimal);
    printf("Characters: %c - %c - %c\n", char1, char2, char3);
    printf("Pi with 4 decimal precision: %6.4f\n", pi);
    printf("Pi with 4 decimal precision: %8.4f\n", pi);
    printf("Address of Pi: %x\n", &pi);
    printf("Plank's constant: : %.3e\n", plank);
    printf("Greeting: : %s\n", greeting);

    return 0;
}
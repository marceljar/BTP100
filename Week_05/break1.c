#include <stdio.h>
int main() {
    int i = 0;

    while (1) {
        printf("All work and no play makes Jack a dull boy!\n");
        if (i >= 10) {
            break;
        }
        i++;
    }

    return 0;
}
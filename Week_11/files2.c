#include <stdio.h>

 int main()
 {
    FILE *fp = NULL;
    int number;
    float pi;

    fp = fopen("simple.txt","r");
    if (fp != NULL) {
        fscanf(fp, "%i,%f", &number, &pi);
        printf("number: %i,  pi = %.2f\n", number, pi); 
        fclose(fp);
    } else {
        printf("Failed to open file\n");
    }
    return 0;
 }
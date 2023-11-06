#include <stdio.h>

 int main()
 {
    FILE *fp = NULL;
    int number = 100;
    float pi = 3.14159;

    fp = fopen("simple.txt","w");
    if (fp != NULL) {
        fprintf(fp, "%i,%.2f\n", number, pi);
        fclose(fp);
    } else {
        printf("Failed to open file\n"); 
    }
 
    return 0;
 }
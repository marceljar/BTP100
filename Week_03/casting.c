 #include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf
 
 int main()
 {
    int minutes;
    float hours;

    printf("How many minutes? ");
    scanf("%d", &minutes);
    
    hours = (float) minutes / 60;
    printf("= %.2f hours\n", hours); 

    return 0;
 }

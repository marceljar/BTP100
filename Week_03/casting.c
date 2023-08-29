 #include <stdio.h>
 
 int main()
 {
    int minutes;
    float hours;

    printf("How many minutes? ");
    scanf("%d", &minutes); // standard C version
    //scanf_s("%d", &minutes); //use this in Visual Studio
    
    hours = (float) minutes / 60;
    printf("= %.2f hours\n", hours); 

    return 0;
 }

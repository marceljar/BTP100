 #include <stdio.h>
 
 int main()
 {
    int i;
    float f;

    printf("Enter a float? ");
    scanf("%f", &f);// standard C version
    //scanf_s("%f", &f);// Visual Studio
    
    
    i = (int) f;
    printf("float as an int: %d\n", i);
    
    f = (float) i;
    printf("float back as a float: %.2f\n", f);    

    return 0;
 }
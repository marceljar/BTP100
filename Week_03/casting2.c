 #include <stdio.h>
 #pragma warning(disable:4996)//allows standard scanf

 int main()
 {
    int i;
    float f;

    printf("Enter a float? ");
    scanf("%f", &f);
    
    
    i = (int) f;
    printf("float as an int: %d\n", i);
    
    f = (float) i;
    printf("float back as a float: %.2f\n", f);    

    return 0;
 }

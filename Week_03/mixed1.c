 #include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf
 
 int main()
 {
    int inum;
    float fnum;

    printf("Enter a floating point number: ");
    scanf("%f", &fnum);
    
    inum = fnum; // narrowing
    printf("converted to integer: %.2f \n", (float) inum);

    printf("Enter an odd integer: ");
    scanf("%i", &inum);
    
    fnum = inum; // promotion
    printf("half, converted to float: %.2f \n", fnum/2);
     
    return 0;
 }

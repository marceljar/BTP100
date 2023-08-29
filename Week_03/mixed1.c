 #include <stdio.h>
 
 int main()
 {
    int inum;
    float fnum;

    printf("Enter a floating point number: ");
    scanf("%f", &fnum); //standard C
    //scanf_s("%f", &fnum); //Visual Studio
    
    inum = fnum; // narrowing
    printf("converted to integer: %.2f \n", (float) inum);

    printf("Enter an odd integer: ");
    scanf("%i", &inum); //standard C
    //scanf_s("%i", &inum); // Visual Studio
    
    fnum = inum; // promotion
    printf("half, converted to float: %.2f \n", fnum/2);
     
    return 0;
 }
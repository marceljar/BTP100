#include <stdio.h>
#include <limits.h> //define limits for chars and ints
#include <float.h> //define limits for floats and doubles

int main()
{   
    printf("CHAR_MIN       = %+d\n", CHAR_MIN);
    printf("CHAR_MAX       = %+d\n", CHAR_MAX);
    
    printf("INT_MIN        = %+d\n", INT_MIN);
    printf("INT_MAX        = %+d\n", INT_MAX);
    printf("UINT_MAX       = %u\n\n", UINT_MAX);
 
    printf("LONG_MIN       = %+ld\n", LONG_MIN);
    printf("LONG_MAX       = %+ld\n", LONG_MAX);
    printf("ULONG_MAX      = %lu\n\n", ULONG_MAX);
 
    printf("FLT_MIN         = %e\n", FLT_MIN);
    printf("FLT_MAX         = %e\n", FLT_MAX);
    printf("DBL_MIN         = %e\n", DBL_MIN);
    printf("DBL_MAX         = %e\n", DBL_MAX);
    
    return 0;
}
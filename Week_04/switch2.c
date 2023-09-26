#include <stdio.h>
#pragma warning(disable:4996)//allows standard scanf

int main() {
    char rating;

    printf("Enter your maturity rating (e) for below 10, 
            (k) for 10+, (t) for 13+, (m) for 17+, 
            and (a) for 18+\n");
    scanf("%c", &rating);

    while((getchar())!='\n'); //clear buffer

    switch(rating)
    {
        case 'e':
            printf("Install Everyone's version of the game.\n");
            break;
        case 'k':
            printf("Install 10+'s version of the game.\n");
            break;
        case 't':
            printf("Install Teens's version of the game.\n");
            break;
        case 'm':
            printf("Install Mature's version of the game.\n");
            break;
        case 'a':
            printf("Install Adult's version of the game.\n");
            break;
        default:
            printf("Error! invalid character.\n");
    }

    return 0;
}

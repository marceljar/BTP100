#include <stdio.h>
#include <time.h>

int main() {
    time_t secondsTime;
    struct tm *structTime;

    secondsTime = time(NULL);
    structTime = localtime(&secondsTime);

   printf("Current time and date:\n");
    printf("Year: %d\n", structTime->tm_year + 1900);
    printf("Month: %d\n", structTime->tm_mon + 1);
    printf("Day: %d\n", structTime->tm_mday);
    printf("Time: %d:%d:%d\n", structTime->tm_hour, 
                    structTime->tm_min, structTime->tm_sec);

    return 0;
}
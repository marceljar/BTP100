#include <time.h>
#include <stdio.h>

int main()
{
    double x;
    time_t t0, t1;
    clock_t c0, c1;

    x = 1;
    t0 = time(NULL);
    c0 = clock();

    for (int i = 0; i < 500000000; i++)
    {
        x = x * 1.0000000001;
    }

    t1 = time(NULL);
    c1 = clock();
    printf("Elapsed time is %d secs\n", t1- t0);
    printf("Elapsed time is %.1lf secs\n", difftime(t1, t0));
    printf("Process time is %d ticks\n", (double)(c1-c0));
    printf("Process time is %.3lf secs\n", 
                             (double)(c1-c0)/CLOCKS_PER_SEC);

    return 0;
}
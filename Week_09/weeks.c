#include <stdio.h>

void weeks(int days, int *num_weeks, int *num_days) {
    *num_weeks = days / 7;
    *num_days = days % 7;
    
}

int main() {
    int days = 41, num_weeks = 0, num_days = 0;

    weeks(days, &num_weeks, &num_days);
    printf("%i days is equivalent to %i weeks and %i days\n", 
            days, num_weeks, num_days);

    return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int id;
    int courses;
    float gpa;

    int *pid, *pcourses;
    float* pgpa;

    printf("Enter id: ");
    scanf("%i", &id);

    printf("Enter number of courses: ");
    scanf("%i", &courses);

    printf("Enter gpa: ");
    scanf("%f", &gpa);

    pid = &id;
    pcourses = &courses;
    pgpa = &gpa;    

    printf("id: %i\n", *pid);
    printf("Number of courses: %i\n", *pcourses);
    printf("gpa: %.2f\n", *pgpa);
    
    return 0;
}
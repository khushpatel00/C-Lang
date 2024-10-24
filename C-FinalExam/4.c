#include <stdio.h>
void main()
{
    int mark;
    printf("Enter your marks: ");
    scanf("%d", &mark);
    // grading
    if (mark >= 90)
        printf("Grade: A");
    else if (mark >= 80)
        printf("Grade: B");
    else if (mark >= 70)
        printf("Grade: C");
    else if (mark >= 60)
        printf("Grade: D");
    else if (mark >= 40)
        printf("Grade: E");
    else if (mark < 0)
        printf("Invalid marks..");
    else
        printf("Grade: F");
}
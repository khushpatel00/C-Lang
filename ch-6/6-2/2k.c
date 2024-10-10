#include <stdio.h>
#include <conio.h>
main()
{
    int marks;
    printf("\n\nEnter your marks:");
    scanf("%d", &marks);
    if (marks >= 91 && marks <= 100)
    {
        printf("\nYour Grades are A1\n\n");
    }
    else if (marks >= 81 && marks <= 90)
    {
        printf("\nYour Grades are A2\n\n");
    }
    else if (marks >= 71 && marks <= 80)
    {
        printf("\nYour Grades are B1\n\n");
    }
    else if (marks >= 61 && marks <= 70)
    {
        printf("\nYour Grades are B2\n\n");
    }
    else if (marks >= 51 && marks <= 60)
    {
        printf("\nYour Grades are C1\n\n");
    }
    else if (marks >= 41 && marks <= 50)
    {
        printf("\nYour Grades are C2\n\n");
    }
    else if (marks >= 33 && marks <= 40)
    {
        printf("\nYour Grades are D1\n\n");
    }
    else
    {
        printf("\nYou are failed\n\n");
    }
    return 0;
}
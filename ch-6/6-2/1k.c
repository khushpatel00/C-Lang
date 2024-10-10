#include <stdio.h>
#include <conio.h>

main()
{

    char a;
    printf("Enter any Character:");
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        printf("\n%c is an Alphabet\n\n", a);
    }
    else if (a >= '0' && a <= '9')
    {
        printf("\n%c is a Digit\n\n", a);
    }
    else
    {
        printf("\n%c is a Special Character\n\n", a);
    }
    return 0;
}
#include <stdio.h>
#include "function.c"
void main()
{

    int n;
    do
    {

        printf("\nInput/Output:\n\n\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n\n");

        printf("Enter Your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1: // sum
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            sum();
            break;

        case 2: // minus
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            minus();
            break;
        case 3: // mul
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            mul();
            break;
        case 4: // divide
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            divide();
            break;
        case 5: // mod
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            mod();
            break;
        case 0: // exit
            goto back;
        }
    } while (n != 0);
back:
}

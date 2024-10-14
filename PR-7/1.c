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
            
            sum();
            break;

        case 2: // minus
        
            minus();
            break;
        case 3: // mul
        
            mul();
            break;
        case 4: // divide
            divide();
            break;
        case 5: // mod
            mod();
            break;
        case 0: // exit
            goto back;
        }
    } while (n != 0);
back:
}

#include <stdio.h>
#include <conio.h>

main(){
    int n, i = 1;
    int x;
    clrscr();

    printf("Enter any number to count its digit of no. : ");
    scanf("%d",&n);
    //logic    
     
    while(n!=0){
        n/=10;
        i++;

    }
    printf("Total no. of digits : %d",i);
    getch();    
    // return 0;
}

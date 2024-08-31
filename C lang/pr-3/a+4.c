#include <stdio.h>
#include <conio.h>

main(){
    char A;
    clrscr();

    A = 'a';

    do{
        printf("%c",&A);
        A+=4;

    }while(A<'a' && 'z'>A)
    getch();

}
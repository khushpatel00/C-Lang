#include <stdio.h>
#include <conio.h>
main(){
        int i,j,n = 10;
        // clrscr();
                for (i = n; i > 5; i--){
                        for (j = i; j <= n; j++){
                                printf("%d ",j * j);
                        }
                        printf("\n");
                }

        // getch();
}
#include <stdio.h>
#include <conio.h>
main(){
// 100
// 81 100
// 64 81 100
// 49 64 81 100
// 36 49 64 81 100
        int i,j,n = 10;
        clrscr();
                for (i = n; i > 5; i--){
                        for (j = i; j <= n; j++){
                                printf("%d ",j * j);
                        }
                        printf("\n");
                }

        getch();
}
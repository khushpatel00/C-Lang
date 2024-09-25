#include <stdio.h>
#include <conio.h>
main(){

// 01010
// 1010
// 010
// 10
// 1
        int i, j;
        clrscr();
                for(i=5;i>=1;i--){
                        for(j=i;j>=1;j--){
                                if(j%2==0) printf("1");
                               
                                else if(j==1 && i==1) printf("%d",j%2);
                                else printf("0");
                        }
                        printf("\n");
                }
         getch();
}
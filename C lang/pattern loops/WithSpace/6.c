#include <stdio.h>
#include <conio.h>
main(){
//     5
//    44
//   333
//  2222
// 11111
        int i,j,s;
        clrscr();
        for(i=5;i>=1;i--){
                for(s=1;s<i;s++){
                        printf(" ");
                }
                for(j=5;j>=i;j--){
                        printf("%d",i);
                }
                printf("\n");
        }
        getch();
} 
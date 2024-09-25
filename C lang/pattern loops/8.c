#include <stdio.h>
#include <conio.h>

main(){
        int i,j,s;

        clrscr();
// 1 2 3 4 5 
//   2 3 4 5 
//     3 4 5 
//       4 5 
//         5
        for(i=1;i<=5;i++){
                for(s=1;s<i;s++){
                        printf(" ");
                }
                for(j=i;j<=5;j++){
                        printf("%d",j);

                }
                printf("\n");
        }
        

        getch();
        
}
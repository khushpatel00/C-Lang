#include <stdio.h>
#include <conio.h>
main(){

// 1 B 3 D 5 
// B 3 D 5 
// 3 D 5 
// D 5 
// 5
        int i, j;
        char ch = 'A';

        clrscr();
                for(i=1;i<=5;i++)
                {
                        for(j=i;j<=5;j++)
                        {
                               
                        
                                if(j%2==0) 
                                {
                                        printf("%c ",ch+(char)j-1);
                                }
                                // else if(j==4) printf("D ");
                               
                                else  printf("%d ",j);
                        }
                        printf("\n");
                }
        getch(); 
} 
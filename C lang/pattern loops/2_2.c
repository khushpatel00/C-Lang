#include <stdio.h>
#include <conio.h>
main() {
// 1 2 3 4 5 
// A B C D 
// 1 2 3 
// A B 
// 1 
        int i, j, n=1;
        char ch='A';
        clrscr();
                for(i=5;i>=1;i--){
                        n=1;
                        for(j=1;j<=i;j++){
                                if(i%2==0)      // for character
                                {     
                                        for(ch='A';ch<='A'+i-1;ch++,n++){
                                                printf("%c ",ch);
                                                
                                        }
                                        
                                }

                                else printf("%d ",j);
                                if(n>i) break;
                        }
                        printf("\n");
                }
        getch();

}
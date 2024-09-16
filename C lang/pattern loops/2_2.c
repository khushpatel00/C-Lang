#include <stdio.h>
#include <conio.h>
main() {
        int i, j, n;
        char ch='A';
        for(i=5;i>=1;i--){
                for(j=1;j<=i;j++){
                        if(i%2==0){     // for character
                                for(ch='A';ch<=(64+i);ch++){
                                        printf("%c ",ch);
                                }
                        }

                        else printf("%d ",j);
                }
                printf("\n");
        }

}
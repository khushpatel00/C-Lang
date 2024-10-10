#include <stdio.h>

main(){
        int i, j, s;
   
                for(i=5;i>=1;i--){
                        for(s=5;s>i;s--){
                                printf(" ");
                        }
                        for(j=5;j>=i;j--){
                                if(j%2==1) printf("0");
                                else if(j%2==0) printf("1");
                                
                                
                        }
                        printf("\n");

                }
   
}
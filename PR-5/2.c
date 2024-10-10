#include <stdio.h>
main(){
        int row,col,i,j;
        printf("Enter the array's row size : ");
        scanf("%d",&row);

        printf("Enter the array's column size : ");
        scanf("%d",&col);

        int a[row][col];
        printf("\nEnter Array's Elements\n\n");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        printf("a[%d][%d] = ",i,j);
                       scanf("%d",&a[i][j]);
                }
                printf("\n");
        }
        int max;
        
        
        // lofic
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        if(a[i][j] > max){
                                max = a[i][j];
                        }
                }
        }
        
        printf("The largest Element is %d",max);
}

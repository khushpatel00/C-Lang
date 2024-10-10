#include <stdio.h>
main(){
        int row,i,j;
        printf("Enter row & Column Size : ");
        scanf("%d",&row);
        int a[row][row];

        printf("\nEnter array elements\n\n");
        for(i=0;i<row;i++){
                for(j=0;j<row;j++){
                        printf("a[%d][%d] = ",i,j);
                        scanf("%d",&a[i][j]);
                }
        }
        // Transpose
        printf("Transpose of matrix\n");
        for(i=0;i<row;i++){
                for(j=0;j<row;j++){
                        printf("%d ",a[j][i]);
                }
                printf("\n");
        }

}

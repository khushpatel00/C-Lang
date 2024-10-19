#include <stdio.h>
main(){
    //sum of 2 matriices in 2d array

    int size,i,j;
    printf("Enter the size of the matrix: ");
    scanf("%d",&size);
    int arr1[size][size];
    int arr2[size][size];
    int arrSum[size][size];
    //array input
    printf("\nArray 1\n\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("array1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nArray 2\n\n");
    // array 2
    for (i = 0; i < size; i++)
    {
        for(j=0;j<size;j++){
            printf("array2[%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    //sum of 2 array
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //print sum array
    for (i = 0; i < size; i++)
    {
        for(j=0;j<size;j++){
            printf("%d ", arrSum[i][j]);
        }
        printf("\n");
    }


}

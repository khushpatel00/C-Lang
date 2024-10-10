#include <stdio.h>
main(){
        int size,i;
        printf("Enter Array size : ");
        scanf("%d",&size);

        int a[size];
        printf("\nEnter array Elements\n\n");
        for(i=0;i<size;i++){
                printf("a[%d] = ",i);
                scanf("%d",&a[i]);
        }
        printf("Negetive elements From array : ");
        for(i=0;i<size;i++){
                if(a[i] < 0) printf("%d, ",a[i]);
        }

}
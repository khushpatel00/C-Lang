#include <stdio.h>
void main(){
	int size,i;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int a[size];
	
	//Array input
	printf("\nEnter the size of array\n\n");
	for(i=0;i<size;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int ans = 0;
	for(i=0;i<size;i++){
		if(a[i] > 0) ans+=a[i];
		
	}
	printf("The sum of all Positive value in array is %d",ans);
	
	
}

#include <stdio.h>
int fact(int no){
	int i,temp = 1;
	for(i=1;i<=no;i++){
		temp *= i;
	}
	return temp;
}
void main(){
	int no,ans;
	printf("Enter an Number to find its Factorial : ");
	scanf("%d",&no);
	ans = fact(no);
	printf("The factorial no of %d is %d",no,ans);
}

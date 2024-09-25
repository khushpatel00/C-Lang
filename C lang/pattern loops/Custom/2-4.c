#include <stdio.h>
main(){
	
//1        1
//12      21
//123    321
//1234  4321
//1234554321
	int i,j,s;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(s=5;s>i;s--){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}

}

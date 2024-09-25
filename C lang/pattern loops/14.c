#include <stdio.h>

main(){
	int i,j,j1,s;
	
	for(i=1;i<=5;i++){
		for(s=5;s>i;s--){
			printf(" ");
		}
		for(j=1,j1='A';j<=i;j++,j1++){
			printf("%c",j1);
		}
		printf("\n");
	}
	printf("huilo");
}

#include <stdio.h>
main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=5;j++){
			if((i==1 && j==5) || (i==4 && j==5)){
				continue;
			}
			else if(j==1 || i==1 || i==4 || (j==5 && i==2) || (j==5 && i==3)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	
}

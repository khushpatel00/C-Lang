#include <stdio.h>
main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=6;j++){
			if((i==1 && j==1) || (i==1 & j==5) || (i==4 && j==4) || (i==4 && j==5) || (i==1 && j==6) || (i==4 && j==6)){
				printf(" ");
				continue;
			}
			else if(j==1 || i==1 || i==4 || (i==3 && j==4) || (i==2 && j==5) || (i==5 && j==4) || (i==6 && j==5) || (i==7 && j==6)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	

}

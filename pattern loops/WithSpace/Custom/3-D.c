#include <stdio.h>
main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=5;j++){
			if(j==1 || (j==3 && i==1) || (j==3 && i==7) || (j==2 && i==1) || (j==2 && i==7) || (j==4 && i==2) || (j==4 && i==6) || (j==5 && i==3) || (j==5 && i==5) || (j==5 && i==4) ) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	
}

#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	clrscr();
		for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
			if(j==1 || i==1 || i==3 || (i==2 && j==5)){
				printf("*");
			}
			else if(i==2 && j==2) printf("   ");

			}
			printf("\n");
		}


	getch();
}
























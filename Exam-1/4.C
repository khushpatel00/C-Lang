#include <conio.h>
#include <stdio.h>
main(){

	int r;
	float ans = 0;
	clrscr();
	printf("Enter the value of radius to find the volume of the sphere : ");
	fflush(stdin);
	scanf("%d",&r);


	ans = (4/3) * 3.14 * (r * r * r);


	printf("the value of volume of sphere id %.2f",ans);

	getch();


}
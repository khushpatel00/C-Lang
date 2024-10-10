#include<stdio.h>
#include<conio.h>

main()
{       int p,r,n,ans;
	clrscr();
	printf("Enter the Principle amount to calculate the simple interest : ");
	scanf("%d",&p);
	printf("Also enter the rate of interest : ");
	scanf("%d",&r);
	printf("Enter the duration of interest (in months) : ");
	scanf("%d",&n);
	ans = p * r * n/100;
	printf("The Simple interest after %d monthe will be %d",n,ans);
	getch();


}






#include<stdio.h>
#include<conio.h>
main() {
	int b,h,ans;

	clrscr();
	printf("Enter the base of triangle to find its area : ");
	scanf("%d",&b);
	printf("Also enter the Height of triangle : ");
	scanf("%d",&h);
	ans = 0.5 * b * h;
	printf("The area of the triangle is : %d ",ans);

	getch();



}
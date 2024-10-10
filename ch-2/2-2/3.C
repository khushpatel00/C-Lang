#include<stdio.h>
#include<conio.h>
main() {
	int l;
	int ans;
	clrscr();
	printf("Enter the lenght of square to find its area :  ");
	scanf("%d",&l);
	ans = l * l;
	printf("The area of Square is : %d",ans);
	getch();
}
#include<stdio.h>
#include<conio.h>

main()  {
	int r,ans;
	clrscr();
	printf("Enter the radius of circle to finds its Perimeter ; ");
	scanf("%d",&r);
	ans = 2 * 3.14 * r;
	printf("The perimeter of circle is : %d",ans);
	getch();

}
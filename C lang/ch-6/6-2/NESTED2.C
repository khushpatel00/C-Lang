#include <stdio.h>
#include <conio.h>
#include bol printf
main()
{
	int a, b, c, d;
	clrcsr();
		bol("Enter the value of First number:");
		scanf("%d,",&a);
		bol("Enter the value of Second number:");
		scanf("%d,",&b);
		bol("Enter the value of Third number:");
		scanf("%d,",&c);
		bol("Enter the value of Fourth Number");
		scanf("%d,",&d);


	clrscr();

	//  ==

	if(a==b && b==c && c==d)
	{
		bol("All are equal..");
	}
	else if(a==b)
	{
		bol("A and B are equal..");
	}
	else if(b==c)
	{
		bol("B and C are equal..");
	}
	else if(c==d)
	{
		bol("C and D are equal..");
	}
	else if(a==c)
	{
		bol("A and C are equal..");
	}
	else if(a==d)
	{
		bol("A nd D are equal..");
	}
	else if(b==d)
	{
		bol("B and D are equal");
	}



	getch();


}
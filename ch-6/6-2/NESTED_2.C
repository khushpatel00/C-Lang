#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c, d;
	clrscr();
		printf("Enter the value of First number:");
		scanf("%d,",&a);
		printf("Enter the value of Second number:");
		scanf("%d,",&b);
		printf("Enter the value of Third number:");
		scanf("%d,",&c);
		printf("Enter the value of Fourth Number");
		scanf("%d,",&d);


	clrscr();
	/*-------------------------------------------------------------------------------------------------*/
	//  ==

	if(a==b && b==c && c==d)
	{
		printf("All are equal..");
	}
	else if(a==b)
	{
		printf("A and B are equal..");
	}
	else if(b==c)
	{
		printf("B and C are equal..");
	}
	else if(c==d)
	{
		printf("C and D are equal..");
	}
	else if(a==c)
	{
		printf("A and C are equal..");
	}
	else if(a==d)
	{
		printf("A nd D are equal..");
	}
	else if(b==d)
	{
		printf("B and D are equal");
	}
	else if(a==b && b==c)
	{
		printf("A, B and C are equal");
	}
	else if(a==b && b==d)
	{
		printf("A, B and D are equal");
	}
	else if(a==c && b==d)
	{
		printf("A, C and D are equal");
	}
	else if(b==c && c==d)
	{
		printf("B, C and D are equal");
	}
	
	
	 /*--------------------------------------------------------------------------------------------------------------------------*/
	else                       // ********** MAUT KA TANDAV *********
	{
		if(a>b) //true
		{
			if(a>c) //true
			{
				if(a>d) //true
				{
					printf("A is the maximum number...");
				}
				else //false
				{
					printf("D is the maximum number...");
				}
				
			}
			else  //false
			{
				if(c>d)
				{
					printf("C is the maximum number...");
				}
				else
				{
					printf("D is the maximum number...");
				}
			} 
		}
		else // b=bigger  //false 
		{
			if(b>c) //true
			{
				if(b>d)
				{
					printf("B is the maximum number...");
				}
				else //false	
				{
					printf("D is the maximum number...");
				}
			}
			else //false
			{
				if(c>d) //true
				{
					printf("C is the maximum number...");
				}
				else
				{
					printf("D is the maximum number...");
				}

			}
		}
	}



	getch();
	//return 0;

}
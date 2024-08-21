#include<stdio.h>
#include<conio.h>
main()
{
	int a,n;

	clrscr();

    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&n);
    if(a%2==0){
	    while(a<=n){
		printf("%d",a);
		a+4;
	    }

    }
    else{printf("\n\nEnter valid Year..");}
	getch();
}
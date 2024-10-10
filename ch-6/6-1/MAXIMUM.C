#include<stdio.h>
#include<conio.h>

main(){
    int number1,number2;
    clrscr();
	printf("enter first number :");
	scanf("%d",&number1);
	printf("enter second number :");
	scanf("%d",number2);
    clrscr();
    if(number1 > number2)
    {
	printf("%d is the maximum number",number1);
    }
    else
    {
	printf("%d is the maximum number",number2);
    }
    getch();

}
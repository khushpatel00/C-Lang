#include <conio.h>
#include <stdio.h>
main(){
	int n, ans = 0,last;
	clrscr();
	printf("enter the value, to find the sum of first and last digit : ");
	scanf("%d",&n);


	//logic
	last = n%10;      //last digit
	while(n>=10){
		ans = n/10;
		n/=10;   //updation

	}
	ans += last;
	printf("the sum of first and last dsigit is %d",ans);

	getch();


}
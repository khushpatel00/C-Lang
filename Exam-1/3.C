#include <stdio.h>
#include <conio.h>

main(){
	int n,ans = 1,temp=0;


	clrscr();

	printf("Enter the number to make its reverse : ");
	scanf("%d",&n);
	//logic
	if(n>=10)


		for( ; n!=0; ){
			temp = n%10;
			ans = (ans*10) + n;
			n/=10;
		}
		printf("%d",ans);
	getch();

}
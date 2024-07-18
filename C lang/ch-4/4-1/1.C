#include <stdio.h>
#include <conio.h>

main(){
	int a = 10;
	clrscr();
	printf("A\t: %d\n",a++);
	printf("A\t: %d\n",a);

	printf("\t %d %d %d %d %d %d \n",a++,a--,--a,++a,--a,++a);




	a = 10; //value reset
	printf("%d\n",a++);
	printf("%d\n",a--);
	printf("%d\n",--a);
	printf("%d\n",++a);
	printf("%d\n",--a);
	printf("%d\n",++a);

	getch();

}
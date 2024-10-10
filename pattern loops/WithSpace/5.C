#include <conio.h>
#include <stdio.h>
main(){
//     1
//    22
//   333
//  4444
// 55555
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++){
		for(s=5;s>i;s--){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",i);
		}
		printf("\n");
	}

	getch();


}
#include <stdio.h>
#include <conio.h>
 main(){
int n, i, ans;
clrscr();
printf("Enter any number : ");
scanf("%d",&n);

i = n % 10;

while(n>=10){
    n /= 10;
}
  if(n<10){
   printf("The sum of the first and last digit : %d", n);
  }
ans = i + n;
printf("The sum of the first and last digit : %d", ans);

getch();
  // return 0;

 }

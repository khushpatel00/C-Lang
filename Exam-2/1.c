#include <stdio.h>
void main(){
	int l,h,ans;
	printf("Enter the length of triangle to find its area : ");
	scanf("%d",&l);
	printf("Enter the Height of triangle : ");
	scanf("%d",&h);
	ans = (l*h)/2;
	printf("The area of Triangle is %d",ans);
}

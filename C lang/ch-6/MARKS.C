#include <stdio.h>
#include <conio.h>
main(){
    float math, eng, sc, ans;
    clrscr();
    start:
    printf("enter the marks of Maths (out of 100) : ");
    scanf("%f",&math);
	if(math > 100)
	{
		printf("enter valid marks again : ");
	    scanf("%f",&math);
	}

    printf("enter the marks of English (out of 100) : ");
    scanf("%f",&eng);
    if(eng > 100)
	{
		printf("enter valid marks again : ");
	    scanf("%f",&eng);
	}
    printf("enter tha marks of Science (out of 100) : ");
	scanf("%f",&sc);
    if(sc > 100)
	{
		printf("enter valid marks again : ");
	scanf("%f",&sc);
	}

    ans = (math + eng + sc) / 3;
	if(ans > 100)
	{
	clrscr();
	    printf("there was an error getting the average marks,\nplease try again\n\ns ");
	    goto start;

	}

    printf("the average marks are %.2f",ans);

    getch();
}

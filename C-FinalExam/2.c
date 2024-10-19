#include <stdio.h>
main(){
    float c,f;
    printf("Enter the Degree in Celsius : ");
    scanf("%f",&c);

    f = c * (9/5) + 32;
    printf("The temperature in Fahrenheit is : %.2f\n", f);
}
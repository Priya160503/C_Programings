#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter three number:");
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("largest number: %.2f",a);
    if(b>=a&&b>=a)
        printf(" largest number: %.2f",b);
    else
        printf("largest number: %.2f",c);
}

#include<stdio.h>
void main()
{
    float num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0)

        printf("%2f is negative. ",num);
        else if(num>0)
            printf("%2f is positive.",num);
        else
            printf("You entered zero");
}

#include<stdio.h>
void main()
{
    int n,i;
    printf("enter an integer:");
    scanf("%d",&n);
    for(i=1;i<=20;++i)
        printf("%d*%d=%d/n/n",n,i,n*i);
}
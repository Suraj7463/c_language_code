#include<stdio.h>
#include<conio.h>
void main()
{
    int l,h,b,sum;
    printf("enter the angele of tringle");
    scanf("%d%d%d",&l,&b,&h);
    sum=l+b+h;
    (sum==180)?printf("tringle are valid"):
    printf("tringle are invalid");
}
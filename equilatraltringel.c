#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,t;
    printf("enter tringle angle value:\n");
    scanf("%d%d%d",&l,&b,&t);
    (l==b && l==t && b==t)?printf("trinle are equilateral"):
    printf("tringle are not equilateral");
}
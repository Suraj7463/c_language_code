#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    printf("enter year:");
    scanf("%d",&y);
    (y%4==0 || y%400==0)?printf("%d this is leap year",y):printf("%d is not leap year",y);
}
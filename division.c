#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter no:");
    scanf("%d",&a);
    (a%5==0 && a%11==0)?printf("%d is divisiable by 5 and ll",a):printf("%d is not divisiable by 5 and 11",a);
}
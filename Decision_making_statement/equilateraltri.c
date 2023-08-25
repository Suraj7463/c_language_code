#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three sides of tringle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c)
    {
        printf("tringle is equilateral tringle");
    }
    else if(a==b || a==c)
    {
        printf("tringle is  isoscale tringle");
    }
    else
    {
        printf("tringle is scalene teingle");
    }
}
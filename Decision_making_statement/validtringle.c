#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum;
    printf("enter three angle one by one\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("the tringle is valid");
    }
    else
    {
        printf("the tringle is invalid");
    }

}
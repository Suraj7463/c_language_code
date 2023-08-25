#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum;
    printf("enter two angle of tringle:\n");
    scanf("%d%d",&a,&b);

    if(a>=0 && b>=0)
    {
        sum=a+b;
        
    }
     if(sum<=180)
    {
        c=180-sum;
        printf("third tringle is %d",c);
    }
    else
    {
        printf("invalid input");
    }
}
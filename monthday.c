#include<stdio.h>
#include<conio.h>
void main()
{
    int y,m,d;
    printf("enter year:\n");
    scanf("%d",&y);
    printf("enter month: \n");
    scanf("%d",&m);
    if(y%4==0 && y%100!=0 || y%400==0)
    {
        d=29;
    }
    else
    {
        d=28;
    }
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        printf("%d in month 31 days",m);
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        printf("%d in month 30 days",m);
    }
    else
    {
        printf("%d in this month %d days",m,d);
    }
}
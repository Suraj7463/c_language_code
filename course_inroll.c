#include<stdio.h>
#include<conio.h>
void main()
{
    int nn,mm,kk,ad,v;
    printf("enter the group of freands and capacity of course inrollment and already registered:\n");
    scanf("%d%d%d",&nn,&mm,&kk);
    ad=kk+nn;

    if(mm>=1 && mm<=100 && nn>=1 && nn<=100)
    {
        v=1;
    }
    else{
        v=0;
    }
    if(v==0)
    {
        printf("invalid input");
    }
    else if(ad<=mm)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
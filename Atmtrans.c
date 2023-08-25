#include<stdio.h>
#include<conio.h>
void main()
{
    int wdr,v;
    int iniamt=2000;
    printf("enter how many amount you want to withdrwa in your account:\n");
    scanf("%d",&wdr);
    if(wdr%5==0)
    {
        v=1;
    }
    else
    {
        v=0;
    }
    if(v==0)
    {
        printf("Incorrect withdrwal amount enter input value multiply by five");
    }
    else if(wdr<=iniamt)
    {
        printf("successful transaction\n");
        printf("now avalable balance in your account is:%f\n",(iniamt-wdr)-0.5);
    }
    else
    {
        printf("insufficient balance in your account %d",iniamt);
    }
}

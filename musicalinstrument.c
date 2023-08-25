#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,v,b;
    printf("enter current IQ beat:\n");
    scanf("%d",&xx);
    b=xx+7;
    if(xx>=100 && xx<=169)
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
    else if(b>=170)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
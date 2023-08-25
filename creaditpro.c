#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,v;
    printf("enter creadit score:\n");
    scanf("%d",&xx);
    if(xx>=1 && xx<=1000)
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
    else if(xx>=750)
    {
        printf("it is possiable to acces cred program");

    }
    else
    {
        printf("it is not possiable to access cred program");
    }
}
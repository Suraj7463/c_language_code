#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,yy,t;
    printf("enter first and second cab charges:\n");
    scanf("%d%d",&xx,&yy);
    if(xx>=1 && xx<=100 && yy>=1 && yy<=100)
    {
        printf("valid input\n");
    
    }
    else
    {
        
        t=0;
      
    }
    if(t==0)
    {
        printf("invalid input");
    }

    else if(xx==yy)
    {
        printf("any");
    }
    else if(xx<yy)
    {
        printf("first");
    }
    else
    {
        printf("second");
    }
}
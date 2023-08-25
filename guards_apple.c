#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,yy,v;
    printf("enter total number of guards :\n");
    scanf("%d",&xx);
    printf("enter total number of guards predict:\n");
    scanf("%d",&yy);
    if(xx>=1 && xx<=100 && yy>=1 && xx<=100)
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
    else if(xx>=yy || xx==yy)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
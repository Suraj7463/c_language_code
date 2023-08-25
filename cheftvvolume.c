#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,yy,v;
    printf("enter initial volume and final volume:\n");
    scanf("%d%d",&xx,&yy);
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
     else if(xx>yy)
    {
        printf("chef can press the volume up button %d times to increase the volume from %d to %d",xx-yy,xx,yy);

    }
    else if(yy>xx)
    {
        printf("chef can press the volume up button %d times to decrease the volume from %d to %d",yy-xx,yy,xx);
    }
}
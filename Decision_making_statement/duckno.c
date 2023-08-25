#include<stdio.h>
#include<conio.h>
void main()
{
    int n ,rem,temp,d;
    
    printf("enter no:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem==0)
        {
            printf("%d is duck number",temp);
            n=0;
            d=0;
        }
        else
        {
            d=1;
        }
        

    }
    if(d!=0)
    {
        printf("%d is not duck number",temp);
    }
}
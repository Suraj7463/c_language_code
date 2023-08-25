#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,sum=0,rem,flag=0,c=0,p=0;
    printf("enter number:\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n=temp;
    while(n!=0)
    {
        
        rem=n%10;
        n=n/10;
        
        p=(int)(pow(rem,c)+1e-9);
        //printf("%d",p);
        sum=sum+p;

        if(sum==temp)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("%d is amstrong number",temp);

    }
    else
    {
        printf("%d is not amstrong number",temp);
    }
    
}
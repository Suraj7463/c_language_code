#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,rem;
    printf("enter number:\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("%d number digit sum is:%d",temp,sum);
    
}
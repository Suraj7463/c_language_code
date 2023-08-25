#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,sum;
    printf("enter how many even number sum you wnat to required:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        
        i++;
    }
    printf("%d oddassd number sum is:%d",n,sum);
    
}
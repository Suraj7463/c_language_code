#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,sum;
    printf("enter how many natural number sum you wnat to required:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d natural number sum is:%d",n,sum);
    
}
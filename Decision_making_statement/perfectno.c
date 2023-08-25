#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,sum=0,flag=0;
    printf("enter number:\n");  //6
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        if(sum==n)
        {
            flag=1;
        }
        i++;
    }
    if(flag)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
}
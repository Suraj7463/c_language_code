#include<stdio.h>
#include<conio.h>
void main()
{
    int n=10,c;
    printf("enter no of candies you want to purches:\n");
    scanf("%d",&c);
    if(n>5 && c>=1)
    {
        n=n-c;
        if(n>=5)
        {
            printf("%d number of candies are sold\n",c);
            printf("%d candies are available in jar\n",n);
        }
        else
        {
            printf("not sufficient candies are available");
        }
    }
    else
    {
        printf("invalid input\n");
    
    }
}
#include<stdio.h>
void main()
{
    int no;
    printf("enter no:");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d no is even",no);
    }
    else
    {
        printf("%d no is odd",no);
    }
}
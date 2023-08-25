#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j=1,n=0;
    printf("enter value i ");
    scanf("%d",&n);
    while(i<=n)
    {
        j=j*10+1;
        printf("%d\n",j);
        i++;
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int t,i=1;
    printf("enter which number we want to print:\n");
    scanf("%d",&t);
    while(i<=10)
    {
        printf("%d * %d=%d\n",i,t,i*t);
        i++;

    }
}
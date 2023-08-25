#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n;
    printf("enter last no:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
           
            printf("even no:%d\n",i);
        }
        else
        {
            printf("odd no:%d\n",i);
        }
        i++;
    }
}
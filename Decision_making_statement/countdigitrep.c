#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,d,c=0;
    printf("enter no:\n");
    scanf("%d",&n);

    printf("enter digit:\n");
    scanf("%d",&d);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(d==rem)
        {
            c++;
        }
    }
    printf("%d is occur %d times",d,c);
}
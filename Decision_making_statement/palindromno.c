#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,val=0,flag=0;
    printf("enter no:\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        val=val*10+rem;
        if(temp==val)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("%d is palindrome number",val);
    }
    else
    {
        printf("%d is not palindrome number",val);
    }
}
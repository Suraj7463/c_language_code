#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,rem,sum=0,cub,val,flag=0;
    printf("enter no:\n");
    scanf("%d",&n);

    val=n;
    while(n!=0)
    {
        rem=n%10;
        cub=rem*rem*rem;
        sum=sum+cub;
        n=n/10;
        if(sum==val)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("%d is armstrong number\n",val);
    }
    else
    {
        printf("%d is not armstrong number\n",val);
    }

}
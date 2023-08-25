#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c=1,rep,rem,val;
    printf("enter no:\n");
    scanf("%d",&n);
    int i=1;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        int temp=n;
        while(n!=0)
        {
            rep=n%10;
            n=n/10;
            if(rem==rep)
            {
                
                c++;
            }
            
        }
        if(c>=2)
        {
            printf("%d is occur %d times\n",rem,c);
        }
        
        c=1;
        n=temp;
        

    }
}
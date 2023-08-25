#include<stdio.h>
#include<conio.h>
void main()
{
    int n,pri,c=0,d=0,i;
    printf("strt number and enter last no:\n");
    scanf("%d%d",&i,&n);
    while(i<=n)
    {
        d=1;
        while(d<=i)1
        
        {
        
            if(i%d==0)
            {
                c++;
            }
            
            d++;
            
        }
        if(c==2)
        {
            printf("%d\n",i);   
        }
        
        c=0;
        
        i++;

    }
}
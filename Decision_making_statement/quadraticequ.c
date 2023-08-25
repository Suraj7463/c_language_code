#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,m,n,i,r1=0,r2=0 ;
    printf("enter a and b value:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    m=a*c;
    n=m;
    m=m/2;
    printf("%d",m);
    i=1;

    while(i<=m)
    {
        n=i;
        
        while(n<=m)
        {
            d=i*n;
            if(m<0)
            {
                if(d==m)
                {
                    if(i>n)
                    {
                        e=-i+n;
                        if(b==e)
                        {
                            r1= -i/a;
                            r2=  n/a;
                         }
                        
                    }
                }
            }
            if(m>0)
            {
                if(d==m)
                {
                    if(i>n)
                    {
                        e=i+n;
                        if(b==e)
                        {
                            r1= -i/a;
                            r2=  n/a;
                         }
                        
                    }
                }
            }
            n++;
        }
        
        i=i+1;

    }
    printf("r1=%d\nr2=%d",r1,r2);
    
    
}
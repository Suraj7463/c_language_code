#include<stdio.h>
#include<conio.h>
void main()
{
    int v,rem,c,nco=0;
    printf("enter value:\n");
    scanf("%d",&v);
    if(v<=0)
    {
        printf("invalid input");
    }
    if(v>=500)
    {
        c=v/500;
        rem=v%500;
        nco=nco+c;
        v=rem;
        if(v>=100)
    {
        c=v/100;
        rem=v%100;
        nco=nco+c;
        v=rem;
        c=0;
        
    }
     if(v>=50)
    {
        c=v/50;
        rem=v%50;
        nco=nco+c;
        v=rem;
        c=0;
    }
     if(v>=20)
    {
        c=v/20;
        rem=v%20;
        nco=nco+c;
        v=rem;
    }
     if(v>=10)
    {
        c=v/10;
        rem=v%10;
        nco=nco+c;
        v=rem;
    }
     if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    }
    else
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);


    }
    else if(v>=100)
    {
        c=v/100;
        rem=v%100;
        nco=nco+c;
        v=rem;
     if(v>=50)
    {
        c=v/50;
        rem=v%50;
        nco=nco+c;
        v=rem;
        c=0;
    }
     if(v>=20)
    {
        c=v/20;
        rem=v%20;
        nco=nco+c;
        v=rem;
    }
     if(v>=10)
    {
        c=v/10;
        rem=v%10;
        nco=nco+c;
        v=rem;
    }
     if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    }
    else
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);
        
    }
    else if(v>=50)
    {
        c=v/50;
        rem=v%50;
        nco=nco+c;
        v=rem;

        if(v>=20)
    {
        c=v/20;
        rem=v%20;
        nco=nco+c;
        v=rem;
    }
     if(v>=10)
    {
        c=v/10;
        rem=v%10;
        nco=nco+c;
        v=rem;
    }
     if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    }
    else
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);
    }
    else if(v>=20)
    {
        c=v/20;
        rem=v%20;
        nco=nco+c;
        v=rem;

        if(v>=10)
    {
        c=v/10;
        rem=v%10;
        nco=nco+c;
        v=rem;
    }
     if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    }
    else
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);
    }
    else if(v>=10)
    {
        c=v/10;
        rem=v%10;
        nco=nco+c;
        v=rem;

        if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    }
    else
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);
    }
    else if(v>=5)
    {
        c=v/5;
        rem=v%5;
        nco=nco+c;
        v=rem;
    if(v>=1)
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    printf("total notes %d",nco);
    }

    else 
    {
        c=v/1;
        rem=v%1;
        nco=nco+c;
        v=rem;
    }
    
    }
    
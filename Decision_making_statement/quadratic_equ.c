#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,r1,r2,r3;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=-b+(sqrt(d))/(2*a);
        r2=-b-(sqrt(d))/(2*a);
        printf("the real roots=%f %f",r1,r2);

    }
    else if(d==0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("roots are equal =%f %f",r1,r2);
    }
    else
    {
        printf("Roots are imaginary");
    }
    
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a=8,b=-4,c=-2,r1,r2,d;                                    //-b+_root b*b-4ac/2a
    r1=(-b+sqrt(b*b-4*a*c))/2*a;
    r2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("root is %f",r1);
    printf("root is %f",r2);




}
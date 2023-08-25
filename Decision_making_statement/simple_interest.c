#include<stdio.h>
#include<conio.h>
void main()
{
    float p,t,r,si;
    printf("enter principle amount and time period and rate :\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("simple intrest is %f",si);

}
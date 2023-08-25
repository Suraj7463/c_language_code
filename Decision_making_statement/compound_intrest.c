#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float p,r,t,ci;
    printf("enter principal amount and rate and time:\n");
    scanf("%f%f%f",&p,&r,&t);

    ci=p*pow((1+r/100),t);

    printf("compound intrest is %f",ci);
}
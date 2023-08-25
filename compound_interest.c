#include<stdio.h>
void main()
{
    float principal_amt=50000;
    float rate_interest=10;
    float time_year=10;
    float amount=principal_amt*(pow((1+rate_interest/100),time_year));
    float compound_interest=amount-principal_amt;

    printf("%f",compound_interest);
}
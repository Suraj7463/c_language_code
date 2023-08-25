#include<stdio.h>
#include<conio.h>
void main()
{
    int a=65,b=90;
    int c=97,d=122;
    printf("Upper case alphabets:\n");
    while(a<=b)
    {
        printf("%c ",a);
        a++;
    }
    printf("\nlower case alphabets:\n");
    while(c<=d)
    {
        printf("%c ",c);
        c++;
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,j=1,k=2,m;
    m=i++||j++||k++;
    printf("%d\n%d\n%d\n%d",i,j,k,m);
}
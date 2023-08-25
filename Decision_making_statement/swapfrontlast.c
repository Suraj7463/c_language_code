#include<stdio.h>
#include<conio.h>
void main()
{
    int n,val,z=1,rem,f,l,c;
    printf("enter no:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        c++;

    }
    if(c>2)
    {
        c=c-1;
    }
    while(c!=0)
    {
        z=z*10;
        c--;
    }
    n=temp;
    l=n%10;
    f=n/z;
    n=n%z;
    n=n/10;
    z=z/10;
    l=l*z+n;
    l=l*10;
    val=l+f;
    printf("\n%d",val);


}
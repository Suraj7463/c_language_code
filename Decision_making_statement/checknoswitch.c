#include<stdio.h>
#include<conio.h>
void main()
{
    int n,v,a,b,c;
    printf("enter below option\n");
    printf("1.check number is positive negative or Zero\n");
    printf("2.check number is odd or even\n");
    printf("3.find max number using 3 number\n ");
    printf("enter option:\n");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
                printf("enter number :\n");
                scanf("%d",&v);
                if(v==0)
                {
                    printf("number is :%d",v);

                }
                else if(v>=0)
                {
                    printf("number is positive:%d",v);
                }
                else
                {
                    printf("number is negative:%d",v);
                }
                break;

        case 2:
                printf("enter number :\n");
                scanf("%d",&v);
                if(v%2==0)
                {
                    printf("%d is even",v);
                }
                else
                {
                    printf("%d is odd",v);
                }
                break;

        case 3:
                printf("enter three no:\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a>b && a>c)
                {
                    printf("%d is grater",a);
                }
                else if(b>a && b>c)
                {
                    printf("%d is grater",b);
                }
                else if(c>a && c>b)
                {
                    printf("%d is grater",c);
                }
                else
                {
                    printf("all are same value");
                }
                break;
        default :
                printf("invalid input");
                
    }
}
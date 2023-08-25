#include<stdio.h>
#include<conio.h>
void main()
{
    printf("choose number which operation you want to do:\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    int n,i,qty,total_pri,amt;
    printf("enter item price and quantity of item\n");
    scanf("%d%d",&i,&qty);
    printf("enter option:\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1: 
                total_pri=i+qty;
                printf("total amount is:%d",total_pri);
                break;
        case 2:
                printf("how many amount substract please enter:\n");
                scanf("%d",&amt);
                total_pri=i-amt;
                printf("total amount is:%d",total_pri);
                break;

        case 3:
                total_pri=i*qty;
                printf("total amount is:%d",total_pri);
                break;

        case 4:
                total_pri=i/qty;
                printf("total amount is:%d",total_pri);
                break;


    }

    

}
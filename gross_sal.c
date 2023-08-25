#include<stdio.h>
#include<conio.h>
void main()
{
    int bsal,gsal;
    float hra,da;
    printf("enter employee base salary:\n");
    scanf("%d",&bsal);
    if(bsal<=10000)
    {
        hra=bsal*20;
        hra=hra/100.0*10;
        printf("hra:%f\n",hra);
        da=bsal*80/100.0*10;
        printf("da is :%f\n",da);
        gsal=bsal+hra+da;
        printf("gross sal is %d",gsal);

    }
    else if(bsal<=20000)
    {
        hra=bsal*25;
        hra=hra/100.0*10;
        printf("hra:%f\n",hra);
        da=bsal*90/100.0*10;
        printf("da is :%f\n",da);
        gsal=bsal+hra+da;
        printf("gross sal is %d",gsal);

    }
    else
    {
        hra=bsal*30;
        hra=hra/100.0*10;
        printf("hra:%f\n",hra);
        da=bsal*95/100.0*10;
        printf("da is :%f\n",da);
        gsal=bsal+hra+da;
        printf("gross sal is %d",gsal);

    }
}
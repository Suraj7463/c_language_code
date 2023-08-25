#include<stdio.h>
#include<conio.h>
void main()
{
    int v,w,c,x;
    printf("enter how many vehical and wheels:\n");
    scanf("%d%d",&v,&w);
    if(v>w && w%2!=0 && w<2)
    {
        c=0;
    }
    if(c==0)
    {
        printf("invalid input");
    }
    else 
    {
         x = ((4 * v) - w) / 2;
        printf("two wheeler are %d \n fourwheeler are %d",x,v-x);

    }
    
//   if ((w & 1) || w < 2 || w <= v)
//     {
//       cout << "INVALID INPUT";
//       return 0;
//     }
  
}

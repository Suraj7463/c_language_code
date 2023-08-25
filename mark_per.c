#include <stdio.h>
void main()
{
    int che,phy,math,bio,eng,sum;
    float mark_avg,per;
    printf("enter marks of subject respectively chemistry,phy,math,bio,eng:");
    scanf("%d%d%d%d%d",&che,&phy,&math,&bio,&eng);
    sum=che+phy+math+bio+eng;
    mark_avg=sum/5;
    per=sum/500.0*100;
    printf("average of five subject mark is :%f",mark_avg);
    printf("\n percentage of marks is :%f",per);


}
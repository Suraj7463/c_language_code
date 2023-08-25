#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter charecter:");
    scanf("%c",&c);
    (c>='a' && c<='z' || c>='A' && c<='Z')?printf("%c is alphabet",c):(c>='0' && c<='9')?printf("%c is digit",c):printf("%c is special charecter",c);


}
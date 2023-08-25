#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter charecter:\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("%c is alphabet",ch);

    }
    else
    {
        printf("invalid input");
    }
}
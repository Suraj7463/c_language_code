#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int c;
    printf("enter charecter:\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        c=1;
    }
    else
    {
        c=2;
    }
    switch(c)
    {
        case 1:
                printf("%c is vowel",ch);
                break;
        case 2:
                printf("%c is consonant",ch);
                break;
        default:
                printf("invalid input");
    }

}
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter charecter:\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }
}
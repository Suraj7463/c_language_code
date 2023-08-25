#include<stdio.h>
#include<conio.h>
void main()
{
    int i=65;
     printf("alphabets in upper case:\n");
    while(i<=90)
    {
        printf("%c=%d\n",i,i);
        i++;
    }
    printf("alphabets in lower case:\n");
    i=97;
    while(i<=122)
    {
        printf("%c=%d\n",i,i);
        i++;
    }
}

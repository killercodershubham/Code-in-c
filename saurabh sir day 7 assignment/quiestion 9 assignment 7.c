#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of character");
    scanf("%c,&ch");
    {
        if(ch >= 'A' && ch<='Z')
        printf("upper case");
        if(ch >='a'&& ch <= 'z')
        printf("lower case");
    }
    return 0;
}
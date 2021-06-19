#include<stdio.h>
int DisplayConvert(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("%c\n",ch);
    }
    else 
    {
        ch=ch+32;
        printf("%c\n",ch);
    }
    return ch;
}
int main()
{
    char cValue ='\0';
    printf("enter character\n");
    scanf("%c\n",&cValue);
    DisplayConvert(cValue);
    return 0;
}
/*
1. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255. 
*/
#include<stdio.h>
void DisplayAscii()
{
int iCnt=0;
char ch;
for(iCnt=0;iCnt<256;iCnt++)
{
printf("%c\n",ch);
ch=ch+1;
}
}
int main()
{
    DisplayAscii();
    return 0;
}
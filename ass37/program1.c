/*
1.Write a program which accept string from user count number of words from string  
Input :   “Marvellous Multi OS” 
Output :   3 
Input :   “          Marvellous Multi            OS       Pune” 
Output :   4
*/
#include<stdio.h>
int CountWord(char *str)
{
    int iCnt = 0;
    if(str==NULL)
    {
        return -1;
    }
    
    while(*str!='\0')
    {
    if((*str>='A')&&(*str<='Z'))
    {
        *str = *str + 32;
        iCnt++;
    }
    else
    {
        *str = *str - 32;
    }
    str++;
    }
    
        printf("%d\n",iCnt);
}
int main()
{
 //   int bRet ;
    char arr[50]="Marvellous Multi OS";
    CountWord(arr);
    
    return 0;
}
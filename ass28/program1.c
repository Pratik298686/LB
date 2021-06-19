/*
1.Write a program which accept string from user and count number of capital characters. 
Input :   “Marvellous Multi OS” 
Output :   marvellous multi osl 
*/
#include<stdio.h>
#include<string.h>
int Display(char str[])
{
    int i=0,iCnt=0;
    
    while(str[i]!='\0')
    {
        if((str[i]>=65)&&(str[i]<=90))
        {
        str[i]=str[i]+32;
        iCnt++;
        }
        i++;
    }
    printf("String- %s ",str);
    
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter The string\n");
    scanf("%[^'\n']s",arr);

    iRet=Display(arr);
    
    return 0;
}

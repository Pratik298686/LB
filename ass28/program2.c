/*
2.Write a program which accept string from user and convert it into upper case. 
Input :   “Marvellous Multi OS” 
Output :   MARVELLOUS MULTI OS 
*/

#include<stdio.h>
#include<string.h>
int Display(char str[])
{
    int i=0,iCnt=0;
    
    while(str[i]!='\0')
    {
        if((str[i]>=97)&&(str[i]<=122))
        {
        str[i]=str[i]-32;
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
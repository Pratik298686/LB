/*
2. Accept Character from user and check whether it is capital or not (A-Z). 
Input :  F 
Output :  TRUE 
Input :  d 
Output :  FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChAlpha(char ch)
{
    if((ch>='A' && ch<='Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("enter the character\n");
    scanf("%c",&cValue);

    bRet=ChAlpha(cValue);
    if(bRet==TRUE)
    {
        printf("it is a capital\n");
    }
    else
    {
        printf("it is not a capital\n");
    }
    
}
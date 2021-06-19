/*
3. Accept Character from user and check whether it is digit or not (0-9). 
Input :  7 
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
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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
        printf("it is a digit\n");
    }
    else
    {
        printf("it is  a character\n");
    }
    
}
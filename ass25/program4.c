/*
4. Accept Character from user and check whether it is small case or not (a-z). 
Input :  g 
Output :  TRUE 
Input :  D 
Output :  FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChAlpha(char ch)
{
    if((ch>='a' && ch<='z'))
    {
        return TRUE;
    }
    else if(ch>='A' && ch<='Z')
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
        printf("it is a small  character\n");
    }
    else
    {
        printf("it is  a capital character\n");
    }
    
}
/*
4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
Input :  % 
Output :  TRUE 
Input :  d 
Output :  FALSE
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Display(char ch)
{
if((ch>=33)&&(ch<=47))
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
    printf("Enter The Character\n");
    scanf("%c",&cValue);

    bRet=Display(cValue);
    if(bRet==TRUE)
    {
        printf("it is a special character\n");
    }
    else
    {
        printf("it is not a special character\n");
    }
    return 0;
}
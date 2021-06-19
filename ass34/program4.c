/*
4. Write a program which accept one number and position from user and toggle that bit. Return modified number. 
Input :  10 3 Output :  14
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(UNIT iNo,int iPos)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }
    
    
    iMask = iMask << (iPos-1);
    
    iResult = iNo ^ iMask;
    
    return iResult;
}
int main()
{
    UNIT iNo = 0;
    int iPos =0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    bRet = CheckBit(iNo,iPos);
    printf("%d",bRet);
    return 0;
}
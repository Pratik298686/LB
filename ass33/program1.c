/*
Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(UNIT iNo)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   /* if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }*/
    
    
    iMask = iMask << (7 -1);
    
    iResult = iNo ^ iMask;
    
    return iResult;
}
int main()
{
    UNIT iNo = 0;
    //int iPos =0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    //printf("Enter the position\n");
    //scanf("%d",&iPos);
        
    bRet = CheckBit(iNo);
    printf("%d",bRet);
    return 0;
}
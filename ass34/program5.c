/*
5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UNIT iNo)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iMask = iMask << (1-1)^iMask << (32-1);
    
    iResult = iNo & iMask;
    
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
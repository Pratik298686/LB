/*
1.Write a program which checks whether 15th bit is On or OFF. 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(int iNo1,int iPos)
{
    int iMask = 0x00000001;
    int iResult = 0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    iMask=iMask<<(iPos-1);
    iResult=iNo1 & iMask;
    if(iResult==iMask)
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
    int iNo=0,iPos=0;
    BOOL iRet = FALSE;

    printf("etner the number :");
    scanf("%d",&iNo);

    printf("etner the number :");
    scanf("%d",&iPos);

    iRet = ChkBit(iNo);

    if(iRet==TRUE)
    {
        printf("bit is on");
    }
    else{
        printf("bit is off");
    }

}
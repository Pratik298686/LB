#include<stdio.h>
int DisplayDigit(int iNo)
{
    int iDigit=0;
    int iCnt =0;
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
           iCnt++;
        }
        
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("enter the element\n");
    scanf("%d",&iValue);
    iRet=DisplayDigit(iValue);
    printf("%d",iRet);
    return 0;
}
#include<stdio.h>
int MultDigit(int iNo)
{
    int iDigit=0;
    int iCnt =0;
    int iRev = 1;
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
        iRev =iRev*iDigit;
        }
        iNo=iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("enter the element\n");
    scanf("%d\n",&iValue);
    iRet=MultDigit(iValue);
    printf("%d",iRet);
    return 0;
}
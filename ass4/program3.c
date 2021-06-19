#include<stdio.h>
int multfactor(int iNo)
{
    int iSum=1;
    int iCnt=0;
    if(iNo==0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo/3;iCnt++)
{
    if((iNo%iCnt)==0)
    {
        iSum=iSum+iCnt;
    }
    printf("foactor %d\n",iSum);
}
return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = multfactor(iValue);
    printf("multfactor %d",iRet);
    return 0;
}
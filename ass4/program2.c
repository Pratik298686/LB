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
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
{
    if((iNo%iCnt)==0)
    {
       
        iSum=iSum+iCnt;
        printf(" %d\n",iSum);
    }
    
}
return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number\n");
    scanf("%d\n",&iValue);
    iRet = multfactor(iValue);
        printf( %d",iRet);
    return 0;
}
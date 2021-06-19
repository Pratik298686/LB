 /*Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.  
Input :  10 Output :  700
Input :  3 Output :  270  
Input :  1200 Output :  84000*/
#include<stdio.h>
int DOtoINR(int iNo)
{
    int iCnt=0;
    iCnt=70*iNo;
    return iCnt;
   
    
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter the element\n");
    scanf("%d",&iValue);
    iRet=DOtoINR(iValue);
    printf("%d",iRet);
    return 0;
}
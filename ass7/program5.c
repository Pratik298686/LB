#include<stdio.h>
int CountDiff(int iNo)
{   int iCnt = 0,iDigit=0,iEven =0,iOdd =0,iTot=0;;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit= iNo % 10;
        if((iDigit%2)==0)
        {
            iEven = iEven+iDigit;
            
        }
        else 
        {
            iOdd= iOdd+iDigit;
            
        }
        
        
        iNo=iNo/10;
        iTot = (iEven-iOdd);
    }
    return  iTot;
    
}
int main()
{
    int iValue =0;
    int iRet =0;
    printf("enter the element\n");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf(" %d",iRet);
    return 0;
}
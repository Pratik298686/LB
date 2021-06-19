 /*Write a program to find odd factorial of given number.  
Input :  5  Output :  15   (5 * 3 * 1) 
Input :  -5  Output :  15   (5 * 3 * 1) 
Input :  10  Output :  945  (9 * 7 * 5 * 3 * 1)*/
#include<stdio.h>
int DisplayEven(int iNo)
{
    int iCnt =0,iFact=1,iTot=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for( iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2==1)
        {
            iFact=iFact*iCnt;
            
        }  
    }
    iTot=iTot*iFact;
    printf("%d",iTot);   
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter the element\n");
    scanf("%d",&iValue);
    DisplayEven(iValue);
    
    return 0;
}
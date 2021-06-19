/*Write a program to find even factorial of given number.  
Input :  5  Output :  8   (4 * 2) 
Input :  -5  Output :  8   (4 * 2) 
Input :  10  Output :  3840  (10 * 8 * 6 * 4 * 2*/
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
        if (iCnt%2==0)
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
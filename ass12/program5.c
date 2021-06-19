/* Write a program which returns difference between Even factorial and odd factorial of given number.  
Input :  5  Output :  -7   (8 - 15) 
Input :  -5  Output :  -7   (8 - 15) 
Input :  10  Output :  2895  (3840 - 945
*/
#include<stdio.h>
int DisplayEven(int iNo)
{
    int iCnt =0,iEven=1,iOdd=1,iTot=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for( iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2==0)
        {
            iEven=iEven*iCnt;
            
        }  
        else if(iCnt%2==1)
        {
            iOdd=iOdd*iCnt;
        }
    }
    iTot=iEven-iOdd;
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
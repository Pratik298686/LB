/*Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only) 
Input :  23 30  Output :  108    
Input :  10 18 Output :  70 
Input :  -10 2 Output :  Invalid range 
Input :  90 18 Output :  Invalid range
*/
#include<stdio.h>
int RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0,iAdd=0;
    for (iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if((iCnt%2)==0)
        {
        iAdd = (iAdd + iCnt);
        
        }
    }
    printf("%d",iAdd);
    
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet =0;

    printf("enter the element\n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet =RangeDisplay(iValue1,iValue2);
    
    return 0;
}
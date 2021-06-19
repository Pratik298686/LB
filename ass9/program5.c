//Write a program which accept N and print first 5 multiples of N
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt=0,iMult=0;
    
    for ( iCnt=1;iCnt<=5;iCnt++)
    {
       if(iNo/iCnt==0)
       {
        printf("(%d*%d)=(%d)\n",iNo,iCnt,iNo*iCnt);
       }
    }
    
}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
   
    return 0;

}
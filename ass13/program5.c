/*
Accept number from user and display below pattern. 
Input :  8 
Output : 2 4 6 8 10 12 14 16 
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0,iRet=0;
    
    if(iNo < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
         printf("%d\n",iCnt*2);
    }
}   

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}
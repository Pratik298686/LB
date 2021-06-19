/*
5. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol =  4  
Output : 1 2 3 4   5 6 7 8   9 10 11 12
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0,iNum=0;
    
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt<=iNo1;iCnt++)
    {
        for(jCnt=1;jCnt<=iNo2;jCnt++)
        {
         if(iCnt==1)
         {
             printf("%d\t",jCnt);
         }
         else if(iCnt==2)
         {
             printf("%d\t",jCnt+4);
         }
         else if(iCnt==3)
         {
             printf("%d\t",jCnt+8);
         }
        }
        printf("\n");
    }
}   

int main()
{
    int iValue1 = 0,iValue2=0;
    
    printf("Enter number\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);
    
    return 0;
}

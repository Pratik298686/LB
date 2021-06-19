/*
4. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 5  
Output : 4 4 4 4 4   3 3 3 3 3   2 2 2 2 2   1 1 1 1 1
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0;
    
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = iNo1;iCnt  >=1;iCnt--)
    {
        
        for(jCnt=1;jCnt<=iNo2;jCnt++)
        {
         printf("%d\t",iCnt);
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
/*
3. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 5  iCol = 5  
Output : a b c d e   1 2 3 4 5   a b c d e   1 2 3 4 5   a b c d e
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0;
    char ch='a';
    
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt<=iNo1;iCnt++)
    {
        for(jCnt=0;jCnt<iNo2;jCnt++)
        {
         if(iCnt==1)
         {
             printf("%c\t",ch+jCnt);
         }
         else if(iCnt==2)
         {
             printf("%d\t",jCnt+1);
         }
         else if(iCnt==3)
         {
             printf("%c\t",ch+jCnt);
         }
         else if(iCnt==4)
         {
             printf("%d\t",jCnt+1);
         }
         else if(iCnt==5)
         {
             printf("%c\t",ch+jCnt);
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
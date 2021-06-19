/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : A B C D   A B C D   A B C D   A B C D
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0;
    
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt <= iNo1;iCnt++)
    {
        for(jCnt=1;jCnt<=iNo2;jCnt++)
        {
         switch(jCnt)
         {
             case 1:
             printf("A\t");
             break;
             case 2:
             printf("B\t");
             break;
             case 3:
             printf("C\t");
             break;
             case 4:
             printf("D\t");
             break;
             default:
             printf("nothing");
             break;
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

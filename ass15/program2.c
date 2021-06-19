/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : A B C D   a b c d   A B C D    a b c d
*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0;
    char ch='A',ch1='a';
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt <= iNo1;iCnt++)
    {
       for(jCnt=0;jCnt<iNo2;jCnt++)
       {
          if((iCnt%2)==0)
          {
           printf("%c",ch1+jCnt);
          }
          else
          {
              printf("%c",ch+jCnt);
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

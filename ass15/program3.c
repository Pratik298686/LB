/*3. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 5  
Output : A A A A A   B B B B B   C C C C C

*/
#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int iCnt = 0,jCnt=0;
    char ch ='A';
    if((iNo1&&iNo2) < 0)         // Updator
    {
        return;
    }
    for(iCnt = 0;iCnt < iNo1;iCnt++)
    {
        
        for(jCnt=1;jCnt<=iNo2;jCnt++)
        {
         printf("%c\t",ch+iCnt);
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
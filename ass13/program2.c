/*2. Accept number from user and display below pattern. 
Input :  5  
Output : 5 # 4 # 3 # 2 # 1 #
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)         // Updator
    {
        return;
    }
    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
         printf("%d #",iCnt);
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
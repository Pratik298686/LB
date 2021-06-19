/*Accept number from user and display below pattern. 
Input :  4 
Output : # 1 * # 2 * # 3 * # 4 * */
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)         // Updator
    {
        return;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
         printf("# %d *t",iCnt);
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
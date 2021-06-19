/*Accept number from user and display below pattern. 
Input :  5  
Output : A B C D E
*/
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
         switch (iCnt)
         {
         case 1:
            printf("A");
             break;
             case 2:
            printf("B");
             break;
             case 3:
            printf("C");
             break;
             case 4:
            printf("D");
             break;
             case 5:
            printf("E");
             break;
         
         default:
            printf("nothing");
             break;
         }
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
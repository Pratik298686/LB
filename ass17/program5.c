/*
5. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol =  4
Output : 1 2 3 4   
         1 * * 4   
         1 * * 4   
         1 2 3 4
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    if(iRow < 0)            // Updator for negative value
    {
        iRow = -iRow;
    }
    if(iCol < 0)            // Updator for negative value
    {
        iCol = -iCol;
    }
    for(i =1; i<=iRow; i++)
    {
        for(j =1; j<=iCol; j++)
        {
                if((i==1)||(i==4))  
                {
                    printf("%d\t",j);
                }
                else if(((i==2)&&(j==1))||((i==2)&&(j==4)))      
                {
                    printf("%d\t",j);
                }
                else if(((i==3)&&(j==1))||((i==3)&&(j==4)))      
                {
                    printf("%d\t",j);
                }
                
                else
                {
                    printf("*\t");
                }
        }
        printf("\n");
    }
    
}
int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     Pattern(iValue1, iValue2);
     
     return 0;
 }
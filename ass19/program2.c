/*
2. Accept number of rows and number of columns from user and display below pattern
Input :  iRow = 4  iCol = 4  
Output : * * * #   
         * * # @    
         * # @ @    
         # @ @ @ 
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
    for(i =iRow; i>=1; i--)
    {
        for(j =iCol; j>=1; j--)
        {
              if(i==j)
              {
                  printf("#\t");
              }
              else if(i>=j)
              {
                 printf("*\t"); 
              }
              else if(i<=j)
              {
                  printf("@\t");
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
/*
2. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : * * * *   
         * * *   
         * *    
         *
*/
#include<stdio.h>

void Pattern(int iRow)
{
    int i = 0,j=0;
    
    if(iRow < 0)            // Updator for negative value
    {
        iRow = -iRow;
    }
   
    for(i =iRow; i>=1; i--)
    {
        for(j =iRow; j>=1; j--)
        {
              if(i>=j)
              {
               printf("*\t");
              }
        }
        printf("\n");
    }
    
}
int main()
 {
     int iValue1 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     
     
     Pattern(iValue1);
     
     return 0;
 }
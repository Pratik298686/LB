/*
4. Accept number of rows and number of columns from user and display below pattern.
Input :  iRow = 6  iCol = 6  
Output : * * * * * *   
         * # # # * *   
         * # # * $ *   
         * # * $ $ *   
         * * $ $ $ *   
         * * * * * *
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
                if((i==1)||(i==6))  
                {
                    printf("*\t");
                }
                else if(((i==2)&&(j==1))||((i==2)&&(j==6)))      
                {
                    printf("*\t");
                }
                else if(((i==3)&&(j==1))||((i==3)&&(j==6)))      
                {
                    printf("*\t");
                }
                
                else if(((i==4)&&(j==1))||((i==4)&&(j==6)))
                {
                    printf("*\t");
                }
                 else if(((i==5)&&(j==1))||((i==5)&&(j==6)))
                {
                    printf("*\t");
                }
                else if(((i==1)&&(j==6))||((i==2)&&(j==5))||((i==3)&&(j==4))||((i==4)&&(j==3))||((i==5)&&(j==2))||((i==6)&&(j==1)))
                {
                    printf("*\t");
                }
                else if(((i==2)&&(j==2))||((i==2)&&(j==3))||((i==2)&&(j==4))||((i==3)&&(j==2))||((i==3)&&(j==3))||((i==4)&&(j==2)))
                {
                    printf("#\t");
                }
                 else
                {
                    printf("$\t");
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
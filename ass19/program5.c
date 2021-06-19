/*
5. Accept number of rows and number of columns from user and display below pattern.
Input :  iRow = 4  iCol =  4  
Output : 1 2 3 4 5   
         1 2     5   
         1   3   5   
         1     4 5   
         1 2 3 4 5
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
                if((i==j)||(i==1)||(i==6))  
                {
                    printf("%d\t",j);
                }
                else if(((i==2)&&(j==1))||((i==2)&&(j==6)))      
                {
                    printf("%d\t",j);
                }
                else if(((i==3)&&(j==1))||((i==3)&&(j==6)))      
                {
                    printf("%d\t",j);
                }
                
                else if(((i==4)&&(j==1))||((i==4)&&(j==6)))
                {
                    printf("%d\t",j);
                }
                 else if(((i==5)&&(j==1))||((i==5)&&(j==6)))
                {
                    printf("%d\t",j);
                }
                else{
                    printf("\t");
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

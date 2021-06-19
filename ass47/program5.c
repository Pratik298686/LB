/*
5. Write a recursive program which accept number from user and return its reverse number.  
Input :  523 
Output :  325
*/
#include<stdio.h>
int Display(int x)
{
    static int remider = 0;
  //  static int smallest ;
    
    if(x!=0)
    {   
        remider = x % 10;
        printf("%d",remider);
        Display(x/10);
    }
    return remider;
}

int main()
{
    int iNo = 0,iRet = 0;
    printf("Enter the Element\n");
    scanf("%d",&iNo);

    iRet = Display(iNo);
   printf("%d",iRet);
    return 0;
}
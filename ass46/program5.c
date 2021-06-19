/*
5. Write a recursive program which accept number from user and return its  product of digits.  
Input :  523 
Output :  30 
*/
#include<stdio.h>
int Display(int x)
{
    static int isum = 1;
    if(x!=0)
    {   
        isum = isum*(x % 10);
        Display(x/10);
    }
    return isum;
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

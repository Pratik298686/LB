/*
4. Write a recursive program which accept number from user and return its factorial.  
Input :  5   Output : 120 
*/
#include<stdio.h>
int Display(int x)
{
    static int isum = 1;
    if(x!=0)
    {   
        isum = isum*(x);
        x--;
        Display(x);
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
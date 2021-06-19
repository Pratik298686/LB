/*
4.  Write a recursive program which accept number from user and return smallest digit 
Input : 87983 
Output : 3
*/
#include<stdio.h>
int Display(int x)
{
    int remider = 0;
    static int smallest = 10;
    if(x!=0)
    {   
        remider = x % 10;
        if(smallest>remider)
        {
            smallest = remider;
        }

        Display(x/10);
    }
    return smallest;
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
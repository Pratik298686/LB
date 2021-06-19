/*
2. Write a recursive program which accept number from user and return largest digit 
Input : 87983 
Output : 9 
*/
#include<stdio.h>
int Display(int x)
{
    int remider = 0;
    static int Largest = 0;
    if(x!=0)
    {   
        remider = x % 10;
        if(Largest<remider)
        {
            Largest = remider;
        }

        Display(x/10);
    }
    return Largest;
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
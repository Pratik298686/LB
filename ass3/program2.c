#include<stdio.h>

int DisplayFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1; i<=iNo; i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    return i;
}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",iValue);
    DisplayFactor(iValue);
    return 0;
}

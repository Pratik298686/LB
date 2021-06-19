#include<stdio.h>
void Display(int iNo)
{
    int i=0;
    
    for(i=-iNo;i<=iNo;i++)
    {
       printf("%d\n",i);
    }
}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
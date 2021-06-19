/*
1. Write a recursive program which display below pattern.  
Input :   5 
Output :   * * * * *
*/
#include<stdio.h>
void Display(int x)
{
    static int i=1;
    if(i<=x)
    {
        printf("*");
        i++;
        Display(x);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter the Element\n");
    scanf("%d",&iNo);

    Display(iNo);
   
    return 0;
}
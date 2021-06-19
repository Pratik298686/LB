/*
3.Write a recursive program which display below pattern.  
Input :   5 
Output :   5 4 3 2 1 
*/
#include<stdio.h>
void Display(int x)
{
    static int i=1;
    if(x!=0)
    {
        printf("%d",x);
        x--;
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
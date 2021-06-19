/*
4.Write a recursive program which display below pattern.  
Input :  6 
Output :   A B C D E F
*/
#include<stdio.h>
void Display(int x)
{
    static char ch = 'A';
    if(ch<='F')
    {
        printf("%c",ch);
     //   x--;
        ch++;
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

/*
5.Write a recursive program which display below pattern.  
Input :  6 
Output :   a b c d e f 
*/
#include<stdio.h>
void Display(int x)
{
    static char ch = 'a';
    if(ch<='f')
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
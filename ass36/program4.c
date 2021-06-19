/*
4. Accept sing from user and reverse the contents of that string by toggling the case. 
Input :   “aCBdef” Output :   “FEDcbA
*/
#include<stdio.h>
int StrRev(char *str)
{
    char temp;
    char *First,*Last;
    First=str;
    Last=str;
    while(*Last!='\0')
    {
        Last++;
    }
    Last--;
    while(First<=Last)
    {
        temp = *First;
        *First = *Last;
        *Last = temp;
        if((*Last>='A')&&(*Last<='Z'))
        {
            *Last = *Last+32;
        }
        else if((*Last>='a')&&(*Last<='z'))
        {
            *Last = *Last-32;
        }
        First++;
        Last--;
    }
    printf("Reverse string is %s ",str);
}
int main()
{
    char arr[50]="Marvellous";
    StrRev(arr);
    
    return 0;
}
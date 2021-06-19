/*
2.  Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function). 
Input :   “Marvellous Infosystems”    “Marvellous Infosystems” 
Output :  TRUE 
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Str(char *src , char *des)
{
    while((*src!='\0')&&(*des!='\0'))
    {
        *src=*des;
        src++;
        des++;
    }
    if((*src==*des)||(*des==*src))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    BOOL bRet = FALSE;
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Infosystem";

    bRet = Str(arr,brr);

    if(bRet==TRUE)
    {
        printf("equal the both string");
    }
    else{
        printf("not equal the both string");
    }
}
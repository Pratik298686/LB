/*
3. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
Input :   “Marvellous Infosystems”    “Marvellous Logic Building”    10 
Output :  TRUE
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Str(char *src , char *des,int iCnt)
{
    while((*src!=iCnt+1)&&(*des!=iCnt+1))
    {
        *src=*des;
        src++;
        des++;
        iCnt--;
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
    char brr[30] = "Marvellous logic BUilding";

    bRet = Str(arr,brr,10);

    if(bRet==TRUE)
    {
        printf("equal the both string");
    }
    else{
        printf("not equal the both string");
    }
}
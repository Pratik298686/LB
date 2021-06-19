/*
2.  Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function). 
Input :   “Marvellous Infosystems”    “Marvellous Infosystems” 
Output :  TRUE
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int StrNCat(char *src,char *des)
{
    int i=0;
    while((*src!='\0')&&(*des!='\0'))
    {
        if(*src == *des)
        {
        des++;
        src++;
        }
        else if(*src!=*des)
        {
        break;
        }
    }
    
    if((*src=='\0')&&(*des=='\0'))
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
    BOOL bret = FALSE;
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Infosystem";
    int iCnt ;

   // printf("Enter the element\n");
    //scanf("%d",&iCnt);
    bret= StrNCat(arr,brr);

    if(bret==TRUE)
    {
        printf("Both the string are equal\n");
    }
    else
    {
        printf("Both string are not equal\n");
    }
    return 0;
}
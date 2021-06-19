/*
3. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
Input :   “Marvellous Infosystems”    “Marvellous Logic Building”    10 
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
        i++;
    }
    return i;
}   
    
int main()
{
    int bret = 0;
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Logic Building";
    int iCnt ;

   // printf("Enter the element\n");
    //scanf("%d",&iCnt);
    bret= StrNCat(arr,brr);
    printf("%d",bret);

    return 0;
}
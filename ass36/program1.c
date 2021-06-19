/*
1. Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
Input :   “Marvellous Infosystems”    “Logic Building”    5 
Output :  “Marvellous Infosystems Logic”
*/
#include<stdio.h>
void StrNCat(char *src,char *des,int iCnt)
{
    while(*src!='\0')
    {
        src++;
    }
    while((*des!='\0')&&(iCnt!=0))
    {
        *src = *des;
        des++;
        src++;
        iCnt--;
    }
    *des='\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";
    int iCnt ;

    printf("Enter the element\n");
    scanf("%d",&iCnt);
    StrNCat(arr,brr,iCnt);

    printf(" %s ",arr);
    return 0;
}
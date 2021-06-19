/*
4. Write a program which accept string from user and copy the contents into another string by removing extra white spaces. 
Input :   “Marvel    lous    multi     OS” 
Output :   “Marvellous multi OS”
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int StrNCat(char *src,char *des)
{
    int i=0;
    char temp = '\0';
    while(*src!='\0')
    {
        temp = *src;
        *src = *des;
        *des = temp;
        src++;
        des++;
    }
    
    
}
int main()
{
    
    char arr[50] = "Marve  llous Infosystem";
    char brr[30];
    int iCnt ;

   // printf("Enter the element\n");
    //scanf("%d",&iCnt);
    StrNCat(arr,brr);
    printf("%s",brr);
    
    return 0;
}
/*
3. Write a recursive program which accept string from user and count number of small characters. 
Input : HElloWOrlD 
Output : 5
*/
#include<stdio.h>
int Display(char *str)
{
    static int i = 0;
    if(*str!='\0')
    {   
        if((*str>='a')&&(*str<='z'))
        {
            i++;
        }
        str++;
        Display(str);
    }
    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];
    printf("Enter the string\n");
    scanf( "%s",arr);

    iRet = Display(arr);
    printf("%d",iRet);
    return 0;
}
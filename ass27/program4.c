/*
4. Write a program which accept string from user and check whether it contains vowels in it or not. 
Input :   “marvellous” 
Output :   TRUE 
Input :   “Demo” 
Output :   TRUE 
Input :   “xyz” 
Output :   FALSE
*/
#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Display(char str[])
{
    int i=0;
    
    while(str[i]!='\0')
    {
        if((str[i]=='a')||(str[i]=='A')||(str[i]=='E')||(str[i]=='e')||(str[i]=='I')||(str[i]=='i')||(str[i]=='O')||(str[i]=='o')||(str[i]=='U')||(str[i]=='u'))
        {
        return TRUE;
        break;
        }
        i++;
    }
    
}
int main()
{
    char arr[20];
    BOOL iRet=FALSE;

    printf("Enter The string\n");
    scanf("%[^'\n']s",arr);

    iRet=Display(arr);
    if(iRet==TRUE)
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is not a vowel");
    }
    
    
    return 0;
}
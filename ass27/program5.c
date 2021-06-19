/*
3. Write a program which accept string from user and display it inn reverse order. 
Input :   “MarvellouS” 
Output :   “SuollevraM
*/
#include<stdio.h>
#include<string.h>
int Display(char str[])
{ 
    int i,len,j=0;
    char Revstr[20],temp;
    len = strlen(str);
    
    
    for(i=0; i<strlen(str)/2; i++)
    {
      temp = str[i];
      str[i] = str[len];
      str[len--] = temp;
    }
    
    printf("reverse string %s",str); 
    
    
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter The string\n");
    scanf("%[^'\n']s",arr);

    iRet=Display(arr);
    
    return 0;
}
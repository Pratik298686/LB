/*
2. Write a program which accept string from user and return length of largest word. 
Input :   “Marvellous Multi OS Infosystems” 
Output :   11 
*/

#include<stdio.h>
int CountWord(char *str)
{
    int iMax = 0;
    if(str==NULL)
    {
        return -1;
    }
    
    while(*str!='\0')
    {
    
     if(*str =='')
     {
         while((*str =='')&&(*str!='\0'))
         {
             str++;
         }
     }
     else
     {
         if(str > iMax)
         {
             iMax = str;
         }
     }
    }
    
        printf("%d\n",iMax);
}
int main()
{
 //   int bRet ;
    char arr[50]="Marvellous Multi OS";
    CountWord(arr);
    
    return 0;
}
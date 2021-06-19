/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
Input :   “MarvellouS” 
Output :   6 (8-2)
*/
#include<stdio.h>
#include<string.h>
int Display(char str[])
{
    int i=0,iCnt1=0,iCnt2=0;
    
    while(str[i]!='\0')
    {
        if((str[i]>=65)&&(str[i]<=90))
        {
        iCnt1++;
      
        }
        else if((str[i]>=97)&&(str[i]<=122))
        {
        iCnt2++;
      
        }
       i++;  
    }
    
   return iCnt1-iCnt2; 
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter The string\n");
    scanf("%[^'\n']s",arr);

    iRet=Display(arr);
    printf("%d",iRet);
    
    return 0;
}
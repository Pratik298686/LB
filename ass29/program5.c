/*5. Write a program which accept string from user reverse that string in place. 
Input :   “abcd” 
Output :   “dcba” 
Input :   “abba” 
Output :   “abba”*/
#include<stdio.h>
int Display(char *str)
{
    int i=str-1,iCnt=0;
    
    while((str-1)>=str[0])
    {
       printf("%c",str[i]-1);
       i--;
    }
    
    
   
}
int main()
{
    char arr[20];
    char cValue[20];
    int iRet=0;
    
  // printf("enter the character :");
//scanf("%c",&cValue);
    
    printf("Enter the String :");
    scanf("%s",&arr);

    iRet=Display(arr);
 
}
/*
1.Write a program which accept string from user and count number of capital characters. 
Input :   “Marvellous Multi OS” 
Output :   4 
*/
#include<stdio.h>
#include<string.h>
int Display(char str[])
{
    int i=0,iCnt=0;
    
    while(str[i]!='\0')
    {
        if((str[i]>=65)&&(str[i]<=90))
        {
        iCnt++;
      
        }
       i++;  
    }
    
   printf("%d",iCnt); 
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
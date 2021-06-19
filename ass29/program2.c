/*2.Write a program which accept string from user and accept one character. Return frequency of that character. 
Input :   “Marvellous Multi OS”    M 
Output :   2 
Input :   “Marvellous Multi OS”    W 
Output :   0*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Display(char str[],char ch)
{
    int i=0,iCnt=0;
    while(str[i]!=0)
    {
        if (str[i]==ch)
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
    char cValue;
    BOOL iRet=FALSE;
    
    printf("enter the character :");
    scanf("%c",&cValue);
    
    printf("Enter the String :");
    scanf("%s",&arr);

    iRet=Display(arr,cValue);
 

}
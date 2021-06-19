/*
4. Write a program which accept string from user and display only digits from that string. 
Input :   “marve89llous121” 
Output :   89121 
Input :   “Demo” 
Output :
*/
#include<stdio.h>
int Display(char str[])
{
    int i=0,j=0,iCnt1=0;
    
    
    while(str[i]!='\0')
    {
       if ((str[i]>='0')&&(str[i]<='9'))
       {
            printf("%c",str[i]);
       }
        i++;
    }

    
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
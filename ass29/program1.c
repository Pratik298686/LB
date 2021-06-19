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
            break;
        }
        
        i++;
    }
    
    if(str[i]==ch)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
    
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
    if(iRet==TRUE)
    {
        printf("corret");
    }
    else{
        printf("wrong");
    }

}
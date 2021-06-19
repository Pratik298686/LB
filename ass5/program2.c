#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkGrater(int iNo)
{
 if(iNo>100)
 {
     return TRUE;
 }
 else
 {
     return FALSE;
 }
 
}
int main()
{
    int iValue =0;
    BOOL bRet = FALSE;
    printf("enter the element\n");
    scanf("%d",&iValue);
    bRet=ChkGrater(iValue);
    if (bRet==TRUE)
    {
        printf("greater\n");
    }
    else
    {
        printf("smaller\n");
    }
    return 0;
    
    
}
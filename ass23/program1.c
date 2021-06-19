/*
1. Accept N numbers from user and accept one another number as NO , check whether NO is present or not. 
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : TRUE 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Display(int Arr[],int iSize,int iNo)
{
  int iCnt = 0;
    int iStart = 0, iEnd = 0;
    
    //                  1                    ;          2           ;          3
    for(iStart = 0, iEnd = iSize-1; iStart <= iEnd ; iStart++, iEnd--)
    {
        if(Arr[iStart] == iNo)                      // 4
        {
            break;
        }
        if(Arr[iEnd] == iNo)                        // 4
        {
            break;
        }
    }
    
    if((Arr[iStart]== iNo) || (Arr[iEnd] == iNo))
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
    int iValue=0,iCnt=0,iAn=0;
    BOOL iRet = FALSE;
    int *p=NULL;
    printf("Enter the values\n");
    scanf("%d",&iValue);
     scanf("%d",&iAn);
    
    p=(int*)malloc(sizeof(int)*iValue);
    
    
    printf("Enter the values\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Display(p,iValue,iAn);
    if(iRet==FALSE)
    {
        printf(" abesnt");
    }
    else if(iRet==TRUE)
    {
       printf(" presen");
    }
    
    free(p);
    return 0;
}
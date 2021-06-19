/*
3. Accept N numbers from user check whether that numbers contains 11 in it or not. 
Input :  N :   6 
  Elements : 85 66 11 80 93 88  
Output : 11 is present 
Input :  N :   6 
  Elements : 85 66 3 80 93 88  
Output : 11 is absent 
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Display(int arr[],int iSize)
{
    int iCnt=0,iNo=0;
    
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        
        if(arr[iCnt]==11)
        {
            
            return TRUE;
            break;
            
        }
        else 
        {
            
            return FALSE;
            break;
            
        }
    }

}
int main()
{
    int iValue=0,iCnt=0;
    BOOL iRet = FALSE;
    int *p=NULL;
    printf("Enter the values\n");
    scanf("%d",&iValue);
    
    p=(int*)malloc(sizeof(int)*iValue);
    
    
    printf("Enter the values\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Display(p,iValue);
    if(iRet==FALSE)
    {
        printf("11 abesnt");
    }
    else if(iRet==TRUE)
    {
       printf("11 presen");
    }
    
    free(p);
    return 0;
}
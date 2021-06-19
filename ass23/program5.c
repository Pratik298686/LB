/*
5. Accept N numbers from user and return product of all odd elements. 
Input :  N :   6     Elements : 15 66 3 70 10 88  
Output : 45 
Input :  N :   6     Elements : 44 66 72 70 10 88  
Output : 0 
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize)
{
    int iCnt=0,iProduct=1;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]%2!=0)
        {
            iProduct=iProduct*arr[iCnt];
        
        }
        else
        {
            printf("0");
        }
        
        
        
    }
    printf("%d",iProduct);
}
int main()
{
   int iValue=0, iN=0,iRet=0,iCnt=0;
    int *p=NULL;
    printf("enter the input\n");
    scanf("%d",&iValue);
    p=(int*)malloc(sizeof(int)*iValue);
    if(p==NULL)
    {
        return -1;
    }
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    LastOccurance(p,iValue);
    
}
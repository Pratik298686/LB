/*
3. Accept N numbers from user and return the difference between largest and smallest number. 
Input :  N :   6 
  Elements : 85 66 3 66 93 88  
Output : 90 (93 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize)
{
    int iCnt=0,iMax=arr[0],iMin=arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]>iMax)
        {
            iMax=arr[iCnt];
        
        }
        if(arr[iCnt]<iMin)
        {
            iMin=arr[iCnt];
        
        }
        
    }
    return iMax-iMin;
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
    
    iRet=LastOccurance(p,iValue);
    printf("%d",iRet);
    
}
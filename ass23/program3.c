/*

3. Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : 3 
Input :  N :   6 
  NO:  93 
  Elements : 85 66 3 66 93 88  
Output : 4 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : -1
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=(iSize-1);iCnt>=0;iCnt--)
    {
        if(arr[iCnt]==iNo)
        {
            return iCnt;
            break;
        }
        if(iCnt==iSize)
        {
            return -1;
        }
        
        
    }
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
    printf("enter the number to check");
    scanf("%d",&iN);
    iRet=LastOccurance(p,iValue,iN);
    if(iRet==-1)
    {
        printf("there is no such match");
    }
    else
    {
    
        printf("there is a match number :%d",iRet);
    }
    
}
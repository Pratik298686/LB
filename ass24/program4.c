/*
4. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
Input :  N :   6 
  Elements : 8225  665 3 76 953 858  
Output : 665 953 858
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((arr[iCnt]>=100)&&(arr[iCnt]<=999))
        {
            printf("%d",arr[iCnt]);
        
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
    
    LastOccurance(p,iValue);
    
}
/*
5. Accept N numbers from user and display summation of digits of each number. 
Input :  N :   6 
  Elements : 8225  665 3 76 953 858  
Output : 17 17 3 13 17 21
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize)
{
    int iCnt=0,iDigit=0,iSum=0,iNo=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iNo=arr[iCnt];
        while(iNo!=0)
        {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        }
        printf("%d\t",iSum);
        
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
    
    iRet=LastOccurance(p,iValue);
    printf("%d",iRet);
    
}

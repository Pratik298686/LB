/*
4. Accept N numbers from user and accept Range, Display all elements from that range 
Input :  N :   6 
  Start: 60     End :  90     Elements : 85 66 3 76 93 88  
Output : 66 76 88 
Input :  N :   6 
  Start: 30     End :  50     Elements : 85 66 3 76 93 88  
Output :
*/
#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((arr[iCnt]>=iNo1)&&(arr[iCnt]<=iNo2))
        {
            printf("%d\t",arr[iCnt]);
            
        }
        if(iCnt==iSize)
        {
            return -1;
        }
        
        
    }
}
int main()
{
   int iValue=0, iN1=0,iN2=0,iRet=0,iCnt=0;
    int *p=NULL;
    printf("enter the input\n");
    scanf("%d",&iValue);
    p=(int*)malloc(sizeof(int)*iValue);
    if(p==NULL)
    {
        return -1;
    }
    printf("enter the number to the array\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("enter the number to check\n");
    scanf("%d %d",&iN1,&iN2);
    LastOccurance(p,iValue,iN1,iN2);
    
    
}
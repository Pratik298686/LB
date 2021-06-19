/*
2. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. 
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : 1 



*/
#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iValue = 0, iRet = 0;
    int iCnt = 0, iNo = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter the number that we want to search\n");
    scanf("%d",&iNo);
    
    iRet = FirstOccurance(ptr,iValue,iNo);
    
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurance of number is  : %d\n",iRet);
    }
    
    free(ptr);
    
    return 0;
    
}
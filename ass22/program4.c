/*
4. Accept N numbers from user and return frequency of 11 form it. 
Input :  N :   6 
  Elements : 85 66 3 15 93 88  
Output : 0 
Input :  N :   6 
  Elements : 85 11 3 15 11 111  
Output : 2 
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int arr[],int iSize)
{
    int iCnt=0,iNo=0;
    
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        
        if(arr[iCnt]=11)
        {
            
            iNo++;
            
        }
    }
    printf("%d",iNo);

}
int main()
{
    int iValue=0,iCnt=0,iRet=0;
    int *p=NULL;
    printf("Enter the values\n");
    scanf("%d",&iValue);
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    p=(int*)malloc(sizeof(int)*iValue);
    if(p == NULL)     
    {
        printf("Error : Unable to allocate memory\n");
        return -1;      
    }
    
    printf("Enter the values\n");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    Display(p,iValue);
    free(p);
    return 0;
}
/*
5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : 2 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : 0
*/
#include<stdio.h>
#include<stdlib.h>
int Display(int arr[],int iSize,int iNo)
{
    int iCnt=0,idRet=0;;
    
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        
        if(arr[iCnt]==iNo)
        {
            idRet++;
            
        }
    }
    return idRet;

}
int main()
{
    int iValue=0,iCnt=0,iRet=0,inp=0;
    int *p=NULL;
    printf("Enter the values\n");
    scanf("%d",&iValue);
    scanf("%d",&iRet);
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
    inp=Display(p,iValue,iRet);
    printf("%d",inp);
    free(p);
    return 0;
}
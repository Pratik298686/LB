/*
5. Accept N numbers from user and display all such elements which are multiples of 11. 
Input :  N :   6 
  Elements : 85 66 3 55 93 88  
Output : 66 55 88
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int arr[],int iSize)
{
    int iCnt=0,iNo=0;
    
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        
        if((arr[iCnt]%11)==0)
        {
            iNo=arr[iCnt];
            printf("%d\t",iNo);
            
        }
    }

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
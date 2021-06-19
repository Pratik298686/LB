/*Write a program which accept range from user and display all even numbers in between that range. 
Input :  23 35  
Piyush Khairnar - 7588945488                      आी Technical संार करतो !!!               ©Marvellous Infosystems         Page 1
Marvellous Logic Building Assignment : 11                                                      
Output :  24 26 28 30 32 34    
Input :  10 18 Output :  10 12 14 16 18 
Input :  10 10 Output :  10  
Input :  -10 2 Output :  -10 -8 -6 -4 -2 0 2 
Input :  90 18 Output :  Invalid range
 */
#include<stdio.h>
int RangeDisplay(int iNo1,int iNo2)
{
    int iCnt=0;
    for (iCnt=iNo1;iCnt<iNo2;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d\n",iCnt);
        
        }    
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet =0;

    printf("enter the element\n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet =RangeDisplay(iValue1,iValue2);
    
    return 0;
}
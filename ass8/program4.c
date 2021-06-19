/*Write a program which accept number from user and display its table.  
Input :  2 
Piyush Khairnar - 7588945488                      आी Technical संार करतो !!!               ©Marvellous Infosystems         Page 2
Marvellous Logic Building Assignment : 8                                                        
Output :  2 4 6 8 10 12 14 16 18 20 
Input :  5 Output :  5 10 15 20 25 30 35 40 45 50 
Input :  -5 Output :  5 10 15 20 25 30 35 40 45 50 */
#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
         printf("(%d*%d)=(%d)\n",iNo,iCnt,iNo*iCnt);
     
    }
    
    
}
int main()
{
    int iValue =0,iRet=0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    Table(iValue);
   
    return 0;

}
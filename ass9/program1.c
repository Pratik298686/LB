/*Write a program which accept number from user and print that number of $ & * on screen.  
Input :  5 Output :  $ * $ * $ * $ * $ * 
Input :  3 Output :  $ * $ * $ * 
Input :  -3 Output :  $ * $ * $ * */
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("$ *\n");
    }
}
int main()
{
    int iValue =0,iRet=0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    Pattern(iValue);
   
    return 0;

}
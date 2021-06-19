/*Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter) 
Input :  5 Output :  5000 
Input :  12 Output :  12000*/
#include<stdio.h>
int KMtoMETER(int iNo)
{
    int iArea=0;
    iArea=iNo*1000;
    return iArea;
}
int main()
{
    int iValue1=0;
    int iRet =0;

    printf("enter the element\n");
    scanf("%d",&iValue1);

    iRet =KMtoMETER(iValue1);
    printf("%d",iRet);
    return 0;
}
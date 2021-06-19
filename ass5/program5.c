#include<stdio.h>
float Percentage(int iN01,int iN02)
{ 
  double bRet =0.0;
  bRet =(double)iN01/(double)iN02;
  return bRet;
   
}
int main()
{
    int iValue1=0,iValue2=0;
    double dRet=0.0;
    printf("enter the total marks :\n");
    scanf("%d",&iValue1);
    printf("obtained  marks :\n");
    scanf("%d",&iValue2);
    dRet=Percentage(iValue1,iValue2);
    printf("%f",dRet);
    return 0;
}
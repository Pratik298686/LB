#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{  
   int bRet =0;
   bRet= iNo1*iNo2*iNo3;
   printf("%d\n",bRet);
   return bRet;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;
   
    printf("enter the three element\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    iRet= Multiply(iValue1,iValue2,iValue3);
    
    return 0;
}
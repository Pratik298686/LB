 /*Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height) 
Input :  5.3  9.78 Output :  51.83*/
#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    float fArea=0;
    fArea=fWidth*fHeight;
    return fArea;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet =0.0;

    printf("enter the element\n");
    scanf("%f %f",&fValue1,&fValue2);

    dRet =RectArea(fValue1,fValue2);
    printf("%f",dRet);
    return 0;
}
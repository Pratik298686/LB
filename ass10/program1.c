#include<stdio.h>
double CircualArea(float fRadius)
{
    float fArea=0;
    fArea=3.14*fRadius*fRadius;
    return fArea;
}
int main()
{
    float fValue=0.0;
    double dRet =0.0;

    printf("enter the element\n");
    scanf("%f",&fValue);

    dRet =CircualArea(fValue);
    printf("%f",dRet);
    return 0;
}
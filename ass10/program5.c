/*Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter) 
Input :  5 Output :  0.464515 
Input :  7 Output :  0.650321
*/
#include<stdio.h>
double SFtoSM(float fNo)
{
    float fArea=0;
    fArea=fNo*0.0929;
    return fArea;
}
int main()
{
    float fValue1=0.0;
    double dRet =0.0;

    printf("enter the element\n");
    scanf("%f",&fValue1);

    dRet =SFtoSM(fValue1);
    printf("%f",dRet);
    return 0;
}
/*Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)) 
Input :  10 Output :  -12.2222 (10 - 32) * (5/9) 
Input :  34 Output :  1.11111 (34 - 32) * (5/9)*/
#include<stdio.h>
double FAtoCG(float fNo)
{
    float fFa=0.0;
    fFa=((fNo-32)*(5/9));
    return fFa;
}
int main()
{
    float fValue=0.0;
    double dRet =0.0;

    printf("enter the element\n");
    scanf("%f",&fValue);

    dRet = FAtoCG(fValue);
    printf("%f",dRet);
    return 0;
}
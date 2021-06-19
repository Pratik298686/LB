#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ivalue =0;
    BOOL bRet = FALSE;
    
    printf("ENTER NUMBER");
    scanf("number",&ivalue);
     
     bRet = Check(ivalue);

     if(bRet == TRUE)
     {
         printf("divisible by 5");
     }
     else
     {
         printf("not divisible by 5");
     }

}
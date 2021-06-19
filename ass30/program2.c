/*
    Problem statement :
 Accept string from user and copy the conetents into another string.
 Implement strcpy.
 */

#include<stdio.h>

int StrcpyX(char *Src, char *Dest,int iCnt)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return -1;
    }
    
   while((*Src != '\0')&&(iCnt!=0))
   {
       *Dest = *Src;
       Src++;
       Dest++;
       iCnt--;
   }
    
    *Dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrcpyX(arr,brr,10);       // StrcpyX(arr,brr);
    
    printf("String after copy %s\n",brr);
    
    return 0;
}































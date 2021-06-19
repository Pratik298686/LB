/*
3. Write a program which accept string from user and copy capital characters of that string into another string. 
Input :   “Marvellous Multi OS” 
Output :   “MMOS”
*/
#include<stdio.h>

int StrcpyX(char *Src, char *Dest)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return -1;
    }
    
   while(*Src != '\0')
   {
       if((*Src >= 'A')&&(*Src<='Z'))
       {
       *Dest = *Src;
       Src++;
       }
       Dest++;
   }
    
    *Dest = '\0';
    printf("String after copy %s\n",Dest);
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrcpyX(arr,brr);       // StrcpyX(arr,brr);
    
    
    
    return 0;
}































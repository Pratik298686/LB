#include<stdio.h>
int main()
{
    char Name[30];
    printf("please enter full name:");
    scanf("%s\n",&Name);//%[^\n]*c
    printf("your name is %s\n",Name);
    return 0;
}
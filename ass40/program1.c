/*
1. Write a program which displays all elements which are perfect from singly linear linked list.  
Function Prototype :int DisplayPerfect( PNODE Head);  
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|  
Output :  6 28
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int Value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=Value;
    newn->next=NULL;
   if(*Head==NULL)
   {
       *Head=newn;
   }
   else
   {
       newn->next=*Head;
       *Head=newn;
   }
}
void Display(PNODE Head)
{
    
    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
  
}
void  DisplayO(PNODE Head,int no3)
{
    int iCnt =0;
    while(Head!=NULL)
    {   
       iCnt++;
        if(Head->data==no3)
        {
          printf("%d",iCnt);
        }
        
        Head=Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int no2;
    printf("Enter the number :");
    scanf("%d",&no2);

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    DisplayO(First,no2);

    return 0;
}
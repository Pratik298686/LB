/*
3. Write a program which returns addition of all element from singly linear linked list.  
Function Prototype :int Addition( PNODE Head);  
Input linked list : |10|->|20|->|30|->|40|  
Output : 100
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
    int iplus=0;
    while(Head!=NULL)
    {
        iplus = iplus + Head->data;   
        
        Head=Head->next;
    }
  printf("|%d|->",iplus);
}


int main()
{
    PNODE First = NULL;
    int no2;
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);


    return 0;
}
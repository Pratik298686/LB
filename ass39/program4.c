/*
4. Write a program which return largest element from singly linear linked list.  
Function Prototype :int Maximum( PNODE Head);  
Input linked list : |110|->|230|->|320|->|240|  
Output : 320
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
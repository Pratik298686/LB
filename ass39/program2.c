/*
2. Write a program which search last occurrence of particular element from singly linear linked list.  Function should return position at which element is found.  
Function Prototype :int SearchLastOcc( PNODE Head, int no );  
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|  
Input element : 30  
Output : 6
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
    int iCnt =0,pos=0;
    while(Head!=NULL)
    {   
       iCnt++;
        if(Head->data==no3)
        {
          pos=iCnt;
        }
        
        Head=Head->next;
    }
    printf("%d",pos);
}

int main()
{
    PNODE First = NULL;
    int no2;
    printf("Enter the number :");
    scanf("%d",&no2);

    InsertFirst(&First,20);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    DisplayO(First,no2);

    return 0;
}
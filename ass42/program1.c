#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
 
 void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;
    if(*Tail==NULL)
    {
        *Tail=newn;
    }
    else
    {
       newn->prev=*Tail;
       (*Tail)->next=newn;
       *Tail=newn;
    }
     newn->next=*Head;
     (*Head)->prev=newn;

}
void InsertAtPos(PPNODE Head, PPNODE Tail,int value,int pos)
{
    int size = 0,i =0;
    //size = count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((pos<1)||(pos>3))
    {
        return;
    }
    if(pos==1)
    {
        InsertFirst(Head,Tail,value);
    }
    else if(pos==3)
    {
        InsertLast(Head,Tail,value);
    }
    else
    {
      newn = (PNODE)malloc(sizeof(NODE));
      newn->data=value;
      newn->next=NULL;
      newn->prev=NULL;
      for(i=0; i<pos-1; i++)
      {
          temp = temp->next;
      }
        newn->prev=(*Tail)->prev;
        newn->next=*Tail;
        (*Tail)->prev=newn;
        temp->next=newn;

    }
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if(*Head==NULL)
    {
        return;
    }
    if ((*Head)->next==NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else{
        *Head= (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev=NULL;
    }
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if(*Tail==NULL)
    {
        return;
    }
    else if((*Tail)->next==NULL)
    {
        free(*Tail);
        *Tail=NULL;
    }
    else
    {
        (*Tail)=(*Tail)->prev;
        free((*Tail)->next);
        (*Tail)->next=NULL;
    }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
 int size=0,i=0;
 
 PNODE newn = NULL;
PNODE temp = *Head;
 if(pos==1)
 {
     DeleteFirst(Head,Tail);
 }
 else if(pos==3)
 {
     DeleteLast(Head,Tail);
 }
 else
 {
    for(i=0;i<pos-1;i++)
    {
      temp=temp->next;
    }
    temp->next=temp->next->next;
    free(temp->next->prev);
    temp->next->prev=NULL;
 }
}
int count(PNODE Head,PNODE Tail)
{
    int iCnt=0;
    if((Head==NULL)&&(Tail==NULL))
    {
        return 0;
    }
    else
    {
        do
        {
            iCnt++;
            Head=Head->next;
        } while (Head!=Tail->next);  
    }
    return iCnt;
}
void Display(PNODE Head,PNODE Tail)
{
    if((Head==NULL)&&(Head==NULL))
    {
        return;
    }
    else{
        do
        {
            printf("|%d|->",Head->data);
            Head=Head->next;
        } while (Head!=Tail->next);  
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int choice =1, no=0,iRet=0;
    
    while(choice)
    {
        printf("Enter the number : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter The Insert First :");
            scanf("%d",&no);
            InsertFirst(&First,&Last,no);
            break;
        case 2:
            printf("Enter The Insert last :");
            scanf("%d",&no);
            InsertLast(&First,&Last,no);
            break;
        case 3:
            printf("Enter The Insert At Position :");
            scanf("%d",&no);
            InsertAtPos(&First,&Last,no,3);
          //  iRet = CountX(&First);
            break;
        case 4:
            printf("Enter The Insert First :");
            
            DeleteFirst(&First,&Last);
            break;
        case 5:
            printf("Enter The Insert Last :");
            
            DeleteLast(&First,&Last);
            break;
        case 6:
            printf("Enter The Insert At Position :");
            
            DeleteAtPos(&First,&Last,3);
            break;
        case 7:
            printf("Enter The counter :");
             iRet=count(First,Last);
             printf("%d\n",iRet);
            break;
        case 8:
            printf("Enter The Display :");
            
            Display(First,Last);
            break;
        default:
            break;
        }
    }
}
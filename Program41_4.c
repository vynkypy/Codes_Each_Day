#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    
    while(Head!= NULL)
    {
        printf("|%d|->", Head->data );
        Head = Head->next;
    }
    printf("\n");
}


int Maximum(PNODE Head)
{
    int iMax = Head->data;
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return -1;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;  
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First, 240);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    Display(First);
    
    iRet = Maximum(First);
    printf("Maximum element in linkedlist is %d\n", iRet);
    
    return 0;
}

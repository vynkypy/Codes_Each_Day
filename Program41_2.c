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


int SearchLastOcc(PNODE Head, int no)
{
    int i = 1;
    int lastPos = -1;

    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return -1;
    }
    
    while(Head != NULL)
    {
        if(Head->data == no)
        {
            lastPos = i;
        }
        i++;
        Head = Head->next;
    }
    return lastPos;  // Return the last position or -1 if not found
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);
    
    iRet = SearchLastOcc(First, 30);
    printf("Last occurrence of given element is at position %d\n", iRet);
    
    return 0;
}

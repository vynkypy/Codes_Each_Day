//Write a program which return second maximum element from singly linear linked list

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
    PNODE newn = (PNODE)malloc(sizeof(NODE));

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
    
    while(Head != NULL)
    {
        printf("|%d|->", Head->data );
        Head = Head->next;
    }
    printf("NULL\n\n");
}

int SecMaximum(PNODE Head)
{
    if (Head == NULL || Head->next == NULL) 
    {
        printf("List has less than two elements.\n");
        return -1;
    }

    int max1 = Head->data; 
    int max2 = 0;
    
    Head = Head->next;
    
    while (Head != NULL)
    {
        if (Head->data > max1) 
        {
            max2 = max1;
            max1 = Head->data; 
        } 
        else if (Head->data > max2) 
        {
            max2 = Head->data;
        }
        Head = Head->next;
    }

    return max2;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);
    
    iRet = SecMaximum(First);
    if (iRet != -1) 
    {
        printf("Second maximum element in the list is: %d\n", iRet);
    }

    return 0;
}

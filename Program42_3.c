//Write a program which display all elements which are prime from singly linear linked list

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
    printf("\n");

}


int AdditionEven(PNODE Head)
{
    int iSum = 0;
    
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return -1;
    }

    while(Head != NULL)
    {
        if((Head->data)%2 == 0)
        {
            iSum = iSum+(Head->data);
        }
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First, 41);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 11);

    Display(First);
    
    iRet = AdditionEven(First);
    printf("Addition of even elements is: %d\n", iRet);
    return 0;
}

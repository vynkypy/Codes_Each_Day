//Write a program which display addition of digits for each element from singly linear linked list

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


void SumDigit(PNODE Head)
{    
    int iValue = 0;
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }

    while(Head != NULL)
    {
        int iDigit = 0, i = 0, iSum =0;

        iValue = Head->data;
        for(i = 1; iValue>0; i++)
        {
            iDigit = iValue%10;
            iSum = iSum+iDigit;
            iValue= iValue/10;
        }
        printf("%d\t", iSum);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 11);

    Display(First);
    
    SumDigit(First);
    return 0;
}

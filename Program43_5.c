// Write a program which display Largest digits of all element from singly linear linked list.


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

void LargestDigit(PNODE Head)
{
    if (Head == NULL || Head->next == NULL) 
    {
        printf("List has less than two elements.\n");
        return;
    }
    printf("Largest digits in each elements are: \n");
    while (Head != NULL)
    {
        int i = 0, iDigit = 0, iLargeDigit = 0, iOriginalNum = 0;
        iOriginalNum = Head->data;
        
        for(i=1; iOriginalNum>0 ; i++)
        {
            iDigit = iOriginalNum % 10;
            if(iDigit > iLargeDigit)
            {
                iLargeDigit = iDigit;
            }
            iOriginalNum = iOriginalNum/10;
        }

        printf("%d\t", iLargeDigit);
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);
    
    LargestDigit(First);
    
    return 0;
}

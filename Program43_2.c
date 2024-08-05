//Write a program which displya pallindrome element from singly linear linked list


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

void DisplayPallindrome(PNODE Head)
{
    if (Head == NULL || Head->next == NULL) 
    {
        printf("List has less than two elements.\n");
        return;
    }
    printf("Pallindrome numbers are: \n");
    while (Head != NULL)
    {
        int i = 0, iRev = 0, iOriginalNum = 0;
        iOriginalNum = Head->data;
        
        for(i=1; iOriginalNum>0 ; i++)
        {
            iRev = iRev * 10 + (iOriginalNum%10);
            iOriginalNum = iOriginalNum/10;
        }
        if(iRev == Head->data)
        {
            printf("%d\t", iRev);
        }
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    
    DisplayPallindrome(First);
    
    return 0;
}

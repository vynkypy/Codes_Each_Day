//Write a program which display all elements which are perfect from singly linear linked list

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


void DisplayPerfect(PNODE Head)
{
    int i = 0;
    
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    printf("Perfect Number are: \n");

    while(Head != NULL)
    {
        int  iSum = 0;
        for(i = 1; i<=(Head->data)/2; i++)
        {
            if((Head->data)%i == 0)
            {
                iSum = iSum+i;
            }
        }
        if(iSum == Head->data)
        {
            printf("%d", Head->data);
        }
        Head = Head->next;
        printf("\t");
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    
    DisplayPerfect(First);
    
    return 0;
}

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


void DisplayPrime(PNODE Head)
{
    int i = 0;
    
    if (Head == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }
    printf("Prime Numbers are: \n");

    while(Head != NULL)
    {
        int iCnt = 0;
        for(i = 2; i<=(Head->data)/2; i++)
        {
            if((Head->data)%i == 0)
            {
                iCnt++;
                break;
            }
            if(iCnt < 1)
            {
                printf("%d", Head->data);
                break;
            }

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
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    
    DisplayPrime(First);
    
    return 0;
}

// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 5        Col = 5

// Output :    a    b   c   d   e
//             1    2   3   4   5
//             a    b   c   d   e
//             1    2   3   4   5
//             a    b   c   d   e

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0;
    char cAlpha = '\0';

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        if((iCntRow % 2) == 0)
        {
            for(iCntCol =1; iCntCol <= iCol; iCntCol++)
            {
                {
                    printf("%d\t", iCntCol);
                }
            }
        }
        else
        { 
            cAlpha = 'a';
            for(iCntCol =1; iCntCol <= iCol; iCntCol++)
            {
                {
                    printf("%c\t", cAlpha);
                    cAlpha++;
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter a number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
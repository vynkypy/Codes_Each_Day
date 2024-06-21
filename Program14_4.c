// Accept number of rows and number of columns from user and display below pattern.

// Input : Row = 4       Col = 5

// Outpur: 4   4   4   4   4
//         3   3   3   3   3
//         2   2   2   2   2
//         1   1   1   1   1


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0;

    for(iCntRow = iRow; iCntRow >= 1; iCntRow--)
    {
        for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {
            printf("%d", iCntRow);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
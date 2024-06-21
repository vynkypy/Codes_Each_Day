// Accept number of rows and number of columns from user and display below pattern.

// Input : Row = 3       Col = 4

// Outpur: 1    2   3   4
//         5    6   7   8
//         9    10  11  12



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0, iCnt = 0;

    for(iCntRow = iRow; iCntRow >= 1; iCntRow--)
    {
        for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {
            iCnt++;
            printf("%d\t", iCnt);
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
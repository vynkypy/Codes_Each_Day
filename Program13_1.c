
// Accept number of rows and number of columns from user and display below pattern.

// Input: iRow = 4  iCol = 3
// Output: *   *   *
//         *   *   *
//         *   *   *
#include<stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCntRow = 0, iCntCol = 0;
    for(iCntRow = 1; iCntRow<=iRow; iCntRow++)
    {
        for(iCntCol= 1; iCntCol<=iColumn; iCntCol++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2 );

    Pattern(iValue1, iValue2);

    return 0;
}
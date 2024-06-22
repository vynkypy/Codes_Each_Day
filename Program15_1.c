// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 4        Col = 4

// Output :    1   2   3   4
//             5   6   7   8
//             9   1   2   3
//             4   5   6   7


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0, iCnt = 1;
    
    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1; iCntCol <= iRow; iCntCol++)
        {
            if(iCnt <= 9 && iCnt >= 0)
            {
                printf("%d\t", iCnt);
                iCnt++;
            }
            else
            {
                iCnt = 1;
                printf("%d\t", iCnt);
                iCnt++;
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
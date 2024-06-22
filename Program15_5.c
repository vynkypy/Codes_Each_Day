// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 5        Col = 5

// Output :     1   2   3   4
//              2   3   4   5
//              3   4   5   6             
//              4   5   6   7

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0, iCnt = 1;
 
    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        iCnt = iCntRow;
        for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {       
            printf("%d\t", iCnt);
            iCnt++;

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
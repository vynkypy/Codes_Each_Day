// Accept number of rows and number of columns from user and display below pattern.

// Input :  Row = 4    Col = 4

// Output :   1    2   3   4    
//                 2   3   4
//                     3   4
//                         4

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol =0;

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {
            if(iCntCol >= iCntRow)
            {
                printf("%d\t", iCntCol);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1= 0, iValue2 =0;

    printf("Enter the number of Rows and Columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

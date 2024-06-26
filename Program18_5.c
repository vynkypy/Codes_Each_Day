// Accept number of rows and number of columns from user and display below pattern.

// Input :  Row = 4    Col = 5

// Output :   1     2   3   4   5
//            1     2           5
//            1         3       5      
//            1             4   5  
//            1     2   3   4   5   



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntCol = 0, iCntRow = 0;
    for(iCntRow =1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol =1; iCntCol <= iCol; iCntCol++)
        {
            if(iCntRow == 1 || iCntRow == iRow || iCntCol == 1 || iCntCol == iCol || iCntRow == iCntCol)
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
    int iValue1 = 0, iValue2 =0;
    
    printf("Enter the number of Rows and Columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
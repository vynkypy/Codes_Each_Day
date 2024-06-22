// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 4        Col = 5

// Output :    2    4   6   8   10
//             1    3   5   7   9
//             2    4   6   8   10
//             1    3   5   7   9

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0, iCnt = 0;

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        if((iCntRow % 2) == 0)
        {
            iCnt =1;
            for(iCntCol =1; iCntCol <= iCol; iCntCol++)
            {
                {
                    printf("%d\t", iCnt);
                    iCnt = iCnt+2;
                }
            }
        }
        else
        { 
            iCnt = 2;
            for(iCntCol =1; iCntCol <= iCol; iCntCol++)
            {
                {
                    printf("%d\t", iCnt);
                    iCnt = iCnt+2;
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
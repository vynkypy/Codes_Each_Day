// Accept number of rows and number of columns from user and display below pattern.

// input:    iRow = 3    iCol = 5
// Output: 5    4   3   2   1
     //    5    4   3   2   1
     //    5    4   3   2   1


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRowNo = 0, iColNo = 0;

    for(iRowNo = 1; iRowNo<= iRow; iRowNo++)
    {
        for(iColNo = iCol; iColNo >= 1; iColNo--)
        {
            printf("%d\t", iColNo);
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0, iValue2 =0 ;

    printf("Enter the number of Rows and COlumns");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
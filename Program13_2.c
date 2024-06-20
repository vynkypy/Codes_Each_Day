// Accept number of rows and number of columns from user and display below pattern.

// input:    iRow = 4    iCol = 3
// Output: 1    2   3
     //    1    2   3
     //    1    2   3
     //    1    2   3

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRowNo = 0, iColNo = 0;

    for(iRowNo = 1; iRowNo<= iRow; iRowNo++)
    {
        for(iColNo = 1; iColNo <= iCol; iColNo++)
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
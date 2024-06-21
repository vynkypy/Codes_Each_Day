
// Accept number of rows and number of columns from user and display below pattern.

// Input: iRow = 4    iCol = 4
// Output: A   B   C   D   
//         A   B   C   D   
//         A   B   C   D   
//         A   B   C   D   

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;
    char cAlpha = '\0';

    for(iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        cAlpha = 'A';
        for(iColCnt = 1; iColCnt <= iCol; iColCnt++)
        {
            printf("%c\t",cAlpha);
            cAlpha++;
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
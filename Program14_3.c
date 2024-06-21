// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 3     iCol = 5

// Output : A A A A A 
//          B B B B B 
//          C C C C C

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0;
    char cAlpha = '\0';

    cAlpha = 'A';
    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1; iCntCol<= iCol; iCntCol++)
        {
            printf("%c", cAlpha);
        }
        cAlpha++;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0; 
}
// Accept number of rows and number of columns from user and display below pattern.

// Input: iRow = 4    iCol = 4
// Output: A   B   C   D   
//         a   b   c   d   
//         A   B   C   D   
//         a   b   c   d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0, iCntCol = 0;
    char cAlpha = '\0';

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {   
        if(iCntRow %2 == 0)
        {
            cAlpha = 'a';
            for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
            {
                printf("%c\t", cAlpha);
                cAlpha++;
            }        
        }
        else
        {
            cAlpha = 'A';
            for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
            {
                printf("%c\t", cAlpha);
                cAlpha++;
            }   
        }
        printf("\n");

    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}
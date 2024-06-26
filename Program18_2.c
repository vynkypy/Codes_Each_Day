// Accept number of rows and number of columns from user and display below pattern.

// Input :  Row = 4    Col = 4

// Output :   *    *   *   #   
//            *    *   #   @   
//            *    #   @   @  
//            #    @   @   @

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntCol = 0, iCntRow =0;

    if(iRow != iCol)
    {
        return;
    }

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol =1; iCntCol<= iCol; iCntCol++)
        {
            if (iCntRow+iCntCol == iCol+1)
            {
                printf("#\t");
            }
            else if(iCntCol+iCntRow < iCol+1)
            {
                printf("*\t");
            }
            else if(iCntCol+iCntRow > iCol+1)
            {
                printf("@\t");
            }
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Row and Columns \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}
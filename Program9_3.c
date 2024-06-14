
// Write a program which accept range from user and return addition of all numbers in between that range. 
// (Range should contains positive numbers only)

// Input: 23 30
// Output: 212

// Input: 10 18 
// Output: 126

// Input: -10 2
// Output: Invalid range

// Input: -90 18
// Output: Invalid range

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart > 0 && iEnd > 0 && iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter a Starting point\n");
    scanf("%d", &iValue1);

    printf("Enter a End point\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet != -1)
    {
    printf("Addition is %d", iRet);
    }
    else if(iRet == -1)
    {
        printf("Invalid Range");
    }
    return 0;
}
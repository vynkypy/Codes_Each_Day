// Write a program which takes number from user and check weather that number contains 0 in it or not

// Input: 2395
// Output: There is no 0

// Input: 1018
// Output: It Contains zero

// Input: 9000
// Output: It Contains zero

// Input: 10276
// Output: It Contains zero


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return 1;
            break;
        }
        iNo = iNo/10;
    }
    return 0;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}
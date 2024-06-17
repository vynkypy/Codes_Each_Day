// Write a program which accept a number from user and count frequency  of 2 in it.

// Input : 2395
// Output : 1

// Input : 1018
// Output : 0

// Input : 9000
// Output : 0

// Input : 922432
// Output : 3

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCount = 0, iDigit = 0;

    while(iNo>0)
    {
        iDigit= iNo%10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}


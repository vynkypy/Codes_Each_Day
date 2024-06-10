
// Write a program to find factorial of given number.

// Input: 5
// Output: 120      (5 * 4 * 3 * 2 * 1)

// Input: -5
// Output: 120      (5 * 4 * 3 * 2 * 1)

// Input: 4 
// Output: 24       (4 * 3 * 2 * 1)

#include<stdio.h>

unsigned long long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long long int iFact = 1;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long long int iRet = 0;

    printf("Enter a number");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of given number is :%llu", iRet);

    return 0;
}
/*
Write a program which accepts number from a user and return a difference
between summation of all it's factors and non factors.

Input :     12
Output :    -34     (16-50)
Input :     10
Output :    -29     (8-37)

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iFact = iCnt+iFact;
        }
    }

    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            iNonFact = iCnt+iNonFact;
        }
    }

    iSum = iFact - iNonFact;
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Eneter number : \n");
    scanf("%d", & iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}
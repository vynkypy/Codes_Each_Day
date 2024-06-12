
// Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.

// Input: 10 
// Output: 700

// Input: 3
// Output: 210

// Input: 1200
// Output: 84000

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iINR = 0;
    iINR = iNo*70;
    return iINR;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD: \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
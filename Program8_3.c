
// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre 1000 Meter)

// Input: 5
// Output: 5000

// Input: 12
// Output: 12000

#include<stdio.h>

int KMtoMeter(int iDistance)
{
    int iDis = 0;
    iDis = iDistance * 1000;
    return iDis;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in Meter is: %d\n", iRet);

    return 0;
}
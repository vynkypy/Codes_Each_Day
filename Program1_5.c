#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number: \n");
    scanf("%d", &iValue);
    // iValue = 5;


    Accept(iValue);
    return 0;
}
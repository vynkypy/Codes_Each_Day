// Write a program which accepts number from user and print that number of $ and * on the screen

// Input : 5
// Output : $   *   $   *   $   *   $   *   $   *

// Input : 3
// Output : $   *   $   *   $   *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}
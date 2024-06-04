//  Accept two numbers from user and display first number in sencond number of times
//  Input : 12  5
//  Output :    12  12    12  12    12

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt=1; iCnt<= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue1);

    printf("Enter the frequency: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);
    return 0;
}
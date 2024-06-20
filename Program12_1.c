// Accept the number from user and print the below pattern

// Input : 5
// Output : A   B   C   D   E

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cAlpha = '\0';
    for(cAlpha = 'A'; iCnt<iNo; iCnt++)
    {
        printf("%c\t", cAlpha+iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue );

    Pattern(iValue);

    return 0;
}
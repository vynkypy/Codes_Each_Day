
// Accept Character from user and check whether it is digit or not (0-9).

// Input: 7
// Output: TRUE

// Input: d
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bFlag = false;

    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = true;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet =  ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;

}
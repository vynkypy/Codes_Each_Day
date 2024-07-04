
// Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

// Input: %
// Output: TRUE

// Input: d
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        bFlag =  true;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It's not a special character");
    }
    return 0;
}
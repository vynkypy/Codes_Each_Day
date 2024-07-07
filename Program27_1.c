
// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

// Input: "Marvellous Multi OS"
//         e
// Output:  TRUE

// Input:  "Marvellous Multi OS"
//          W
// Output: FALSE


#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;
    
    printf("Enter string: ");
    scanf("%[^'\n']d", arr);
    
    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return 0;
}
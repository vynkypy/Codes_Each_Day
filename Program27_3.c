
// Write a program which accept string from user and accept one character. Return index of first occurance of
//  that character.

// Input: "Marvellous Multi OS"
//         M
// Output: 0

// Input: "Marvellous Multi OS"
//         W
// Output: -1



#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0, iIndex = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;
            break;
        }
        str++;
        iCount++;
    }
    return iIndex;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    
    printf("Enter Character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}
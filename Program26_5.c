// Write a program which accepts string from user and count number of white spaces

// Input : "MarvellouS"

// Outpur : 0

//Input : Marvellous Infosystem

// Output :  1

//Input : Marvellous Infosystem by Piyush Manohar Khairnar

// Output :  5

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}
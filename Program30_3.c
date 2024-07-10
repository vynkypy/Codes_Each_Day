
// Write a program which 2 strings from user and check whether first N contents of 
// two strings are equal or not. (Implement strcmp() function).


// Input:  "Marvellous Infosystems" 
//         "Marvellous Logic Building"
//         10

// Output: TRUE

#include<stdio.h>
#include<stdbool.h>

bool StrNCmpX(char *src, char *dest, int iCnt)
{
    while (*src != '\0' && *dest != '\0' && iCnt > 0)
    {
        if (*src != *dest)
        {
            return false;
        }
        src++;
        dest++;
        iCnt--;
    }

    return true;
}

int main()
{
    bool bRet = true;

    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Logic Building";

    bRet = StrNCmpX(arr, brr, 10);

    if(bRet == true)
    {
        printf("TRUE");
    }

    else
    {
        printf("FALSE");
    }

    return 0;
}


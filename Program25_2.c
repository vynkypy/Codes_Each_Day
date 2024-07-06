// Write a program which accepts string from user and count number of small characters

// Input :     "Marvellous"
// Output:     9

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}
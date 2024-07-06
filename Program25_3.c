// Write a program which accepts string from user and return difference between frequency of small characters 
// frequence of capital characters.

// Input :     "MarvellouS"
// Output:     6   (8-2)

#include<stdio.h>

int CountCapital(char *str)
{
    int iCntCap = 0, iCntSmall = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCap++;
        }
        
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }

        str++;
    }
    return iCntSmall - iCntCap;
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
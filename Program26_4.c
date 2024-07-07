// Write a program which accepts string from user and display only digits from string

// Input : Marve89llous121

// Output :  89121

// Input : Demo

// Output :  

#include<stdio.h>

void DisplayDigit(char *str)
{
    printf("Digits from strings are: ");
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
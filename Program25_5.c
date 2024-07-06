// Accepts the string from user and display it in reverse order

// Input : Marvellous

// Output : susllevraM

#include<stdio.h>

void Reverse(char *str)   
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reverse String is: %s", str);
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}

// Accept character from user. If character is small display its corresponding capital character, 
// and if it capital then display its corresponding small. In other cases display as it is.

// Input: Q
// Output: q

// Input: m
// Output: M

// Input: 4
// Output: 4

// Input: %
// Output: %


#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch<='Z')
    {
        ch = ch+32;
        printf("%c",ch);
    }
    else if(ch >= 'a' && ch<='z')
    {
        ch = ch-32;
        printf("%c",ch);

    }
    else
    {
        ch = ch;
        printf("%c",ch);

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;

}
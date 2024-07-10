
// Write a program which accepts 2 strings from user and concat N characters of second string after first string.
// Value of N should be accepted from user. (Implement strncat() function).

// Note: If third parameter is greater than the size of second string then concat whole string after first string.

// Input: // "Marvellous Infosystems"
         // "Logic Building"
         // 5

// Output : "Marvellous Infosystems Logic"

#include<stdio.h>

void StrNCatX(char *src, char *dest, int iCnt)
{
    if(src == NULL)
    {
        printf("String is empty");
    }

    while(*src != '\0')
    {
        src++;
    }
    src--;

    while((*dest != 0) && (iCnt != 0))
    {
        *src = *dest;
        dest++;
        src++;
        iCnt--;
    }
    *src = '\0';

}

int main()
{
    char arr[50] = "Marvellous Inforsystem";
    char brr[30] = "Logic Building";
    int iValue = 0;

    StrNCatX(arr, brr, 5);
    printf("%s", arr);

    return 0;
}

// Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).

// Input:  "Marvellous Infosystems"
//         "Logic Building"

// Output: "Marvellous Infosystems Logic Building"



#include<stdio.h>

void StrCatX(char *src, char *dest)
{

    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';

}

int main()
{
    char arr[50] = "Marvellous Infosystem ";
    char brr[30] = "Logic Building";                            //empty 

    StrCatX(arr, brr);

    printf("%s", arr);

    return 0;
}
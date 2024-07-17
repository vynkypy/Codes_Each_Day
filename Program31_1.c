
// Write a program which accept string from user count number of words from string

// Input:      "Marvellous Multi OS"
// Output:     3

// Input:      "Marvellous    Multi      Os  Pune"
// Output:     4

#include<stdio.h>

int WordCount(char *str)
{
    int iCnt = 0;
    int temp = 0;
    
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            temp = 0;
        }
        else if(temp == 0)
        {
            temp = 1;
            iCnt++;
        }
        str++;
    }
    return iCnt;

}

int main() {
    char arr[30] = "Marvellous Multi OS";
    char brr[50] = "Marvellous    Multi      Os  Pune";

    int iCount1 = WordCount(arr);
    int iCount2 = WordCount(brr);

    printf("Number of words in '%s': %d\n", arr, iCount1);
    printf("Number of words in '%s': %d\n", brr, iCount2);

    return 0;
}
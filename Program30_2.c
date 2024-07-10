
// Write a program which accepts 2 strings from user and check whether contents 
// of two strings are equal or not. (Implement strcmp()function).

// Input:  "Marvellous Infosystems"
//         "Marvellous Infosystems"

// Output:  TRUE


#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char * src, char *dest)
{
    bool bFlag = true;
    if(src == NULL || dest == NULL)
    {
        return false;
    }
    while((*src != '\0') && (*dest !='\0'))
    {
        if(*src != *dest)
        {
            bFlag == false;
        }
        src++;
        dest++;

    }
    if((*src == '\0') && (*dest == '\0'))
    {
        bFlag == true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}

int main()
{
    bool bRet = true;
    
    char arr[50] = "Marvellous Inforsystem";
    char brr[30] = "Marvellous Inforsystem";

    bRet = StrCmpX(arr, brr);

    if(bRet == true)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;

}
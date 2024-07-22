// Write a recursive program which accepts string from user and count number of small characters

// Input:      HElloWOrlD

// Output:     5

#include<iostream>

using namespace std;

int Small(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter string"<< endl;
    cin.getline(arr, 20);

    iRet = Small(arr);

    cout << "Length of string is : " << iRet;

    return 0;
}
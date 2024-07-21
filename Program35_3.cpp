// Write a recursive program which accepts string from user and count number of characters

// Input:      Hello

// Output:     5


#include<iostream>

using namespace std;

int StrLenX(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrLenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter string"<< endl;
    cin.getline(arr, 20);

    iRet = StrLenX(arr);

    cout << "Length of string is : " << iRet;

    return 0;
}
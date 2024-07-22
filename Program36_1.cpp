// Write a recursive program which accepts string from user and count white spaces.

// Input:      HE llo WOr lD 

// Output:     3


#include<iostream>

using namespace std;

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {   
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter string"<< endl;
    cin.getline(arr, 20);

    iRet = WhiteSpace(arr);

    cout << "Length of string is : " << iRet;

    return 0;
}
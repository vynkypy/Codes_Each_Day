
// Accept string from user and check whether the string is palindrome or not without considering its case.

// Input:   "1abccBA1"

// Output:   TRUE

#include<iostream>

using namespace std;

bool StrPallindrome(char *str)
{
    char *first, *last;

    first = str;
    last = str;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first < last)
    {
        char fisrtChar, lastChar;

        if((*first >= 'A') && (*first <= 'Z'))
        {
            fisrtChar = *first+32;
        }
        else
        {
            fisrtChar = *first;
        }

        if((*last >= 'A') && (*last <= 'Z'))
        {
            lastChar = *last+32;
        }
        else
        {
            lastChar = *last;
        }
        
        if(fisrtChar != lastChar)
        {
            return false;
        }
        first++;
        last--;
    }
    return true;
}


int main() 
{    
    bool bRet;

    char Arr[30];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    bRet = StrPallindrome(Arr); 
    if(bRet == true)
    {
        cout << "String is Pallindrome " << endl;
    }
    else
    {
        cout << "String is not Pallindrome " << endl;
       
    }
    return 0;
}
// Wirte a program which accepts string from user and replace each occurance of first character of each word into capital case

// Input : "marvellous multi os logic building"

// Output: "Marvellous Multi Os Logic Building"

#include<iostream>

using namespace std;

void StrCapX(char *str)
{
    if (*str >= 'a' && *str <= 'z') 
    {
        *str = *str - 'a' + 'A';
    }

    while (*str != '\0') 
    {
        if (*str == ' ') 
        {
            str++;
            if (*str >= 'a' && *str <= 'z') 
            {
                *str = *str - 'a' + 'A';
            }
        }
        str++;
    }
}

int main() 
{    
    int iRet =0;

    char Arr[50];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    StrCapX(Arr); 

    cout << "Capital case of each word string is : "<< Arr << endl;
       
    return 0;
}
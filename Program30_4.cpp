//  Accept the string from user and reverse the contents of that stringby toggling the case

// Input :     "aCBdef"
// Output:     "FEDcbA"


#include<iostream>
using namespace std;

void StrRevTogX(char *str) 
{
    char temp;
    char *first, *last;
    first = str;
    last = str;

    while (*last != '\0') 
    {
        last++;
    }
    last--;

    while (first < last) 
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }

    first = str;
    while(*first != '\0')
    {
        if((*first >= 'A') && (*first <= 'Z'))
        {
            *first = *first+32;
        }

        else if((*first >= 'a') && (*first <= 'z'))
        {
            *first = *first-32;
        }
        first++;
    }
}

int main() 
{    
    char Arr[30];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    StrRevTogX(Arr); 

    cout << "Updated string is: " << Arr << endl;

    return 0;
}

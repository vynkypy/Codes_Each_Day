//  Accept the number from user and display below Pattern
//Input : 5
//       *   *   *   *   *

#include<iostream>

using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<"*\t";
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 5;

    cout << "Enter a number"<< endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}
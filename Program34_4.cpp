//  Accept the number from user and display below Pattern
//Input : 6
//      A   B   C   D   E   F


#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'A';

    if(i <= iNo)
    {
        cout<<ch << "\t";
        i++;
        ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter a number"<< endl;
    cin >> iValue;
    
    Display(iValue);

    return 0;
}
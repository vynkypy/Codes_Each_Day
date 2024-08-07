// Write generic program which accept one value and one number from user. Print that value that number  of times on screen.

// Input:      M       7
// Output:     M   M   M   M   M   M   M

// Input:      11      3
// Output:     11  11  11

// Input:      3.7     6
// Output:     3.7     3.7     3.7     3.7     3.7     3.7


#include<iostream>

using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int i = 0;
    for(i = 1; i <= iSize; i++)
    {
        cout << value << "\t";
    }
    cout << "\n";
}

int main()
{

    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}
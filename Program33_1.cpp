// Display below Pattern

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

    Display(iValue);

    return 0;
}
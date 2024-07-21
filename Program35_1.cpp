// Write a recursive program which accepts number from user and display below pattern

// Input : 5
// Output: 5   *   4   *   3   *   2   *   1   *

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = iNo;

    if(i >= 1)
    {
        cout<< i<< "\t"<< "*\t";
        i--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;
    Display(iValue);


    return 0;
} 
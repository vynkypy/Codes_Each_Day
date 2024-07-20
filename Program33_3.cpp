//      Display below Pattern

//      5   4   3   2   1  

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = iNo;

    if(i >= 1)
    {
        cout<<i << "\t";
        i--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 5;

    Display(iValue);

    return 0;
}
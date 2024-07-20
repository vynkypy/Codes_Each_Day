//      Display below Pattern

//      1   2   3   4   5


#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<i << "\t";
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
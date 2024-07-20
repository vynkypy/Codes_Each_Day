//      Display below Pattern

//      a   b   c   d   e   f

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'a';

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
    int iValue = 6;

    Display(iValue);

    return 0;
}
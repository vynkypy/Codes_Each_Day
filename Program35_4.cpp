// Write a recursive program which accepts string from user and retun it's factorial.

// Input:      5

// Output:     120


#include<iostream>

using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;
    if(iNo > 1)
    {
        iFact = iNo* iFact;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter Number"<< endl;
    cin >> iValue;

    iRet = Fact(iValue);

    cout << "Factorial of given number is : " << iRet;

    return 0;
}
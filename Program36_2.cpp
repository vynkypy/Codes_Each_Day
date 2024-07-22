// Write a recursive program which accepts number from user and return largest digit

// Input : 87983

// Output: 9

#include<iostream>

using namespace std;

int Max(int iNo)
{
    static int i = 0;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        if(i < iDigit)
        {
            i = iDigit;
        }
        iNo = iNo/10;
        Max(iNo);
    }
    return i;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;

    iRet = Max(iValue);

    cout<< "Largest digit from number is :"<< iRet<< endl;


    return 0;
} 
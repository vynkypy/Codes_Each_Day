// Write a recursive program which accepts number from user and return Multiplication of its digits

// Input : 523

// Output: 30

#include<iostream>

using namespace std;

int Mult(int iNo)
{
    static int iMult = 1, iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        iMult = iMult*iDigit;
        iNo = iNo/10;
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;

    iRet = Mult(iValue);

    cout<< "Product of digits is :"<< iRet<< endl;


    return 0;
} 
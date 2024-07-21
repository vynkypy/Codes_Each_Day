// Write a recursive program which accepts number from user and return summation of its digits

// Input : 879

// Output: 24

#include<iostream>

using namespace std;

int Sum(int iNo)
{
    static int iSum = 0, iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        iSum = iSum+iDigit;
        iNo = iNo/10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;

    iRet = Sum(iValue);

    cout<< "Sum of digits is :"<< iRet<< endl;


    return 0;
} 
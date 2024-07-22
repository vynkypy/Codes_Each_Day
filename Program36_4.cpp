// Write a recursive program which accepts number from user and return Smallest digit

// Input : 87983

// Output: 3

#include<iostream>

using namespace std;

int Min(int iNo)
{
    static int i = iNo;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit < i)
        {
            i = iDigit;
        }
        iNo = iNo/10;
        Min(iNo);
    }
    return i;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;

    iRet = Min(iValue);

    cout<< "Minimum digit from number is :"<< iRet<< endl;


    return 0;
} 
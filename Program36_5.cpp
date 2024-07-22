// Write a recursive program which accepts number from user and return it's reverse number

// Input : 523

// Output: 325

#include<iostream>

using namespace std;

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0; 

    if(iNo > 0)
    {
        iDigit = iNo%10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo/10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>> iValue;

    iRet = Reverse(iValue);

    cout<< "Reverse number of given number is :"<< iRet<< endl;


    return 0;
} 
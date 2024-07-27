
// Write a program which accept one number and position from user and OFF that bit.
// Return the modified number.

// Input:      10      2

// Output:     8

#include<iostream>

using namespace std;

unsigned int OffBit(unsigned int iNo, unsigned int iPos)
{
    int i = 1, iCnt = 0;
    unsigned int iMask = 1;      

    for(iCnt=1; iCnt<iPos; iCnt++)
    {
        iMask = 2*i;
        i = iMask;
    }
 
    unsigned int iResult = 0;
    
    iResult = iNo & (~iMask);

    return iResult;
}

int main()
{
    unsigned int iNo = 0, iPos = 0;
    unsigned int iRet = 0;

    cout<< "Enter Number:"<< endl;
    cin>> iNo;

    cout<< "Enter first Position:"<< endl;
    cin>> iPos;

    iRet =  OffBit(iNo, iPos);

    cout << "Update number is: "<< iRet;
    
    return 0;
}
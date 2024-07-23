// Write a program which checks whether 18th and 5th bit is On or Off

//    0    0   0   0   0   1   0   0   0   0   0   0   0   0   1   0   0   1  0   0
//    0    0   1   0   0   0   0   0   0   0   0   0   0   0   0   1   0   0  0   0     Mask = 0x20010 Hex

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask = 0x20010;
    int iResult = 0;
    bool bRet = false;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        bRet = true;
    }
    else
    {
        bRet = false;
    }

    return bRet;
}


int main()
{
    unsigned int iNo = 0;
    bool bRet = false;

    cout<< "Enter first number:"<< endl;
    cin>> iNo;

    bRet =  CheckBit(iNo);

    if(bRet == true)
    {
        cout << "18th and 5th bit is ON";
    }
    else
    {
        cout << "18th and 5th bit is OFF";
    }
    return 0;
}
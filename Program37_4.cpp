// Write a program which checks whether 7th, 8th, 9th bit is On or Off

// 0000 0000 0000 0000 0000 0001 1100 0000  <-- Mask

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask = 0x1c0;
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
        cout<< "7th, 8th, 9th bit is ON";
    }
    else
    {
        cout<<"7th, 8th, 9th bit is OFF";
    }
    return 0;
}
// Write a program which checks whether 1st and last(32nd) is On or Off

// 1000 0000 0000 0000 0000 0001 0000 0001  <-- Mask

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask = 0x80000001;
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
        cout<<"first and last bit is ON";
    }
    else
    {
        cout<<"first and last bit is OFF";
    }
    return 0;
}
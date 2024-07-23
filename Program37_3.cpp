// Write a program which checks whether 7th & 15th & 21st & 28th bit is On or Off

// 0000 1000 0001 0000 0100 0000 0100 0000  <-- Mask

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask = 0x8104040;
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
        cout<< "7th & 15th & 21st & 28th bit is ON";
    }
    else
    {
        cout<<"7th & 15th & 21st & 28th bit is OFF";
    }
    return 0;
}
// Write a program which checks whether 15th bit is On or Off

//    0    1   0   0   0   0   0   0   0   0   1   0   0   1  0   0
//    0    1   0   0   0   0   0   0   0   0   0   0   0   0  0   0     Mask = 16384

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask = 16384;
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
        cout<<"Fifteenth bit is ON";
    }
    else
    {
        cout <<"Fifteenth bit is OFF";
    }
    return 0;
}
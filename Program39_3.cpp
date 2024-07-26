// Write a program which accept one number from user and check weather 9th or 12th bit is on or off.

// Input:   257

// Output:  TRUE

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    unsigned int iMask1 = 256;      //9th bit
    unsigned int iMask2 = 2048;    //12th bit

    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;
    
    bool bRet = false;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2== iMask2))
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
        cout<<"9th or 12th bit bit is ON";
    }
    else
    {
        cout <<"9th or 12th bit is OFF";
    }
    return 0;
}
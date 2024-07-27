
// Write a program which accept one number and position from user and check whether bit at that position is on or off.
// If bit is one return TURE otherwise return FALSE.

// Input:      10      2

// Output:     TRUE



#include<iostream>

using namespace std;

bool CheckBit(unsigned int iNo, unsigned int iPos)
{
    int iCount = 1;
    unsigned int iMask = 0;      

    while(iPos != 0)
    {
        iMask = 2*iCount;
        iCount = iMask;
        iPos--;
    }
 
    unsigned int iResult = 0;
    
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
    unsigned int iNo = 0, iPos = 0;
    bool bRet = false;

    cout<< "Enter Number:"<< endl;
    cin>> iNo;

    cout<< "Enter first Position:"<< endl;
    cin>> iPos;


    bRet =  CheckBit(iNo, iPos);

    if(bRet == true)
    {
        cout<< "bit at given  position is ON";
    }
    else
    {
        cout << "bit at given position is OFF";
    }
    return 0;
}
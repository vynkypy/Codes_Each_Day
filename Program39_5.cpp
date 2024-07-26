// Write a program which accept one number from user and range of position from user
// Toggle all the bits from that range

// Input:   897     9     13

// toggle all the bits from position 9 to 13 of input number 897

// Output: 7297

// Input:      0   0   0   0   0   0   1   1   1   0   0   0   0   0   0   1
// Output:     0   0   0   1   1   1   0   0   1   0   0   0   0   0   0   1

#include<iostream>

using namespace std;

unsigned int ToggleBitsRange(unsigned int iNo, int iStart, int iEnd)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    for (int i = iStart; i <= iEnd; i++) 
    {
        iMask |= (1 << (i - 1)); 
    }

    iResult = iNo ^ iMask;

    return iResult;
}


int main()
{
    unsigned int iNo = 0, iRet = 0, iPos1 = 0, iPos2 = 0;

    cout<< "Enter first number:"<< endl;
    cin>> iNo;

    cout<< "Enter start position:"<< endl;
    cin>> iPos1;

    cout<< "Enter End Position:"<< endl;
    cin>> iPos2;

    iRet =  ToggleBitsRange(iNo, iPos1, iPos2);

    cout<< "Updated number after toggling the bits is :"<< iRet;

    return 0;
}

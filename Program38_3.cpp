// Write a program which accept one number from user and toggle 7th bit of that number if it is on. 
// Return modified number.

// Input :     137

// Output:     201

//     0   0   0   0   0   0   0   0   1   0   0   0   1   0   0   1       --> 137

//     0   0   0   0   0   0   0   0   1   1   0   0   1   0   0   1       --> 201


// Solution: 

//     0   0   0   0   0   0   0   0   1   0   0   0   1   0   0   1       --> 137

//     0   0   0   0   0   0   0   0   0   1   0   0   0   0   0   0      -->  64   Mask


#include<iostream>

using namespace std;

unsigned int OffBit(int iNo)
{
    unsigned int iMask = 64;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}


int main()
{
    unsigned int iNo = 0, iRet = 0;

    cout<< "Enter first number:"<< endl;
    cin>> iNo;

    iRet =  OffBit(iNo);

    cout<< "Updated number is:"<< iRet;

    return 0;
}

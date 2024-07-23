// Write a program which accept one number from user and off 7th and 10th bit of that number if it is on. 
// Return modified number.

// Input :     577

// Output:     1

//     0   0   0   0   0   0   1   0   0   1   0   0   0   0   0   1       --> 577

//     0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   1       --> 1


// Solution: 

//     0   0   0   0   0   0   1   0   0   1   0   0   0   0   0   1       --> Xor

//     0   0   0   0   0   0   1   0   0   1   0   0   0   0   0   0      -->  576   Mask


#include<iostream>

using namespace std;

unsigned int OffBit(int iNo)
{
    unsigned int iMask = 576;
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

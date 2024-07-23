// Write a program which accept one number from user and on it's first 4 bit. 
// Return modified number.

// Input :     73

// Output:     79

//     0   0   0   0   0   0   0   0   0   1   0   0   1   0   0   1       --> 73

//     0   0   0   0   0   0   1   0   1   1   0   0   1   1   1   1       --> 79


// Solution: 

//     0   0   0   0   0   0   0   0   1   0   0   0   1   0   0   1       --> 73  OR

//     0   0   0   0   0   0   0   0   0   0   0   0   1   1   1   1      -->  15   Mask


#include<iostream>

using namespace std;

unsigned int OffBit(int iNo)
{
    unsigned int iMask = 15;
    int iResult = 0;

    iResult = iNo | iMask;

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

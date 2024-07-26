// Write a program which accept one number from user and count number of ON (1) bits in it 
// without using % and / operator.

// Input:   11

// Output:  3


#include<iostream>

using namespace std;

unsigned int CountOne(unsigned int iNo)
{
    unsigned int iCount = 0;
    while(iNo != 0)
    {
        if(iNo & 1 == 1)
        {
            iCount++;
        }
        iNo = iNo>>1;
    }

    return iCount;
}


int main()
{
    unsigned int iNo = 0, iRet = 0;

    cout<< "Enter first number:"<< endl;
    cin>> iNo;

    iRet =  CountOne(iNo);

    cout<< "Number of 1's are :"<< iRet;

    return 0;
}

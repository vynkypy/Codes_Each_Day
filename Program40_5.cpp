// write a program which accept one number from user and toggle contents of first and last nibbal of that number.
// Return the modified number (nibble is group of four bits)

#include<iostream>

using namespace std;

unsigned int ToggleBit(unsigned int iNo)
{
    unsigned int iFirstNibble = 0x0000000f;   // 0000 0000 0000 0000 0000 0000 0000 1111
    unsigned int iLastNibble =  0xf0000000;   // 1111 0000 0000 0000 0000 0000 0000 0000
    
    iNo = iNo ^ iFirstNibble;
    
    iNo = iNo ^ iLastNibble;
    
    return iNo;
}

int main()
{
    unsigned int iNo = 0, iRet = 0;

    cout << "Enter Number:" << endl;
    cin >> iNo;

    iRet = ToggleBit(iNo);

    cout << "Modified number is: " << iRet << endl;

    return 0;
}

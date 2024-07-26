// Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

// Input:   10      15      
     //   (1010)  (1111)

// Output:  2       4


#include<iostream>

using namespace std;

void CommonBits(unsigned int iNo1, unsigned int iNo2)
{
    unsigned int iResult = 0;
    unsigned int iPos = 1;

    iResult = iNo1 & iNo2;
    while(iResult != 0)
    {
        if(iResult & 1 == 1)
        {
            cout << iPos << "\t";
        }
        iResult = iResult>>1;
        iPos++;
    }

}


int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    cout<< "Enter first number:"<< endl;
    cin>> iNo1;

    cout<< "Enter Second number:"<< endl;
    cin>> iNo2;

    CommonBits(iNo1, iNo2);

    return 0;
}

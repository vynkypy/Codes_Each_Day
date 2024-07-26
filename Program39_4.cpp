// Write a program which accept one number, two positions from user 
// and check weather bit at first or bit at second  position is on or off.

// Input:   257

// Output:  TRUE

#include<iostream>

using namespace std;

bool CheckBit(unsigned int iNo, unsigned int iPos1, unsigned iPos2)
{
    int iCount = 1;
    unsigned int iMask1 = 0;      
    unsigned int iMask2 = 0;    

    while(iPos1 != 0)
    {
        iMask1 = 2*iCount;
        iCount = iMask1;
        iPos1--;
    }

    iCount = 1;
    
    while(iPos2 != 0)
    {
        iMask2 = 2*iCount;
        iCount = iMask2;
        iPos2--;
    }
    
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
    unsigned int iNo = 0, iPos1 = 0, iPos2 =0;
    bool bRet = false;

    cout<< "Enter Number:"<< endl;
    cin>> iNo;

    cout<< "Enter first Position:"<< endl;
    cin>> iPos1;

    cout<< "Enter second Position:"<< endl;
    cin>> iPos2;

    bRet =  CheckBit(iNo, iPos1, iPos2);

    if(bRet == true)
    {
        printf("bit at first or bit at second  position is ON");
    }
    else
    {
        printf("bit at first or bit at second  position is OFF");
    }
    return 0;
}
// Write a generic program to find largest number from three numbers

#include<iostream>

using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    T Max;
    
    if((No1>No2) && (No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }
    return Max;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Max(51, 11,21);
    fRet = Max(11.34f, 51.75f, 21.55f);
    dRet = Max(7.23478, 49.12864, 10.2387 );

    cout << iRet <<"\n";
    cout << fRet <<"\n";
    cout << dRet <<"\n";
    
    return 0;
}
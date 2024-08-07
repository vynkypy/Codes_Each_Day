// Write generic program to accept N values and count frequency of any specific value.

// Input :   10    20   30    10    30    40    10    40    10

// Value of check frequency:   10

// Output:     4


#include<iostream>

using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int i = 0, iCount = 0;
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);
    cout << iRet;
    return 0;
}
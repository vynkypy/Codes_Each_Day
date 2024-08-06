// Write a generic program to accept N values from user and return smallest values.

#include<iostream>

using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T Min = arr[0];
    for(int i = 0; i< iSize; i++)
    {
        if(arr[i]< Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Min(arr, 5);
    cout << iRet << "\n";

    float fRet = Min(brr, 4);
    cout << fRet<< "\n";

    return 0;
}
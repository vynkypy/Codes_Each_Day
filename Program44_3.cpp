// Write a generic program to accept N values from user and returnn addition of that values.

#include<iostream>

using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    for(int i = 0; i< iSize; i++)
    {
        Sum = arr[i]+Sum;
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iSum = AddN(arr, 5);
    cout << iSum << "\n";

    float fSum = AddN(brr, 4);
    cout << fSum<< "\n";

    return 0;
}
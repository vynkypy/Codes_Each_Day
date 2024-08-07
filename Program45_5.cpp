// Write a generic program to accept N values and reverse the content

// Input  : 10, 20, 30, 10, 30, 40, 10, 40, 10

// Output : 10, 40, 10, 40, 30, 10, 30, 20, 10

#include<iostream>

using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    for(int i = iSize-1 ; i >= 0; i--)
    {
        cout << arr[i]<< "\t";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    for(int i = 0; i<9; i++)
    {
        cout << arr[i]<< "\t";
    }
    cout << "\n";
    Reverse(arr, 9);
    return 0;
}
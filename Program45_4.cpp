// Write a generic program to accept N values and search last occurance of specific value

// Input : 10, 20, 30, 10, 30, 40, 10, 40, 10
// value to search : 40
// Output : 8

#include<iostream>

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int i = 0, LastOcc = 0;
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            LastOcc = i;
        }

    }
    return LastOcc;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(arr, 9, 40);
    printf("%d", iRet+1);
    return 0;
}
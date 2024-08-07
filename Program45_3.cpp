// Write a generic program to accept N values and search first occurance of specific value

// Input : 10, 20, 30, 10, 30, 40, 10, 40, 10
// value to search : 40
// Output : 6

#include<iostream>

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            break;
        }

    }
    return i+1;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchFirst(arr, 9, 40);
    printf("%d", iRet);
    return 0;
}
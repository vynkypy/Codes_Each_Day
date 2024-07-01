// Accept N numbers from user and accept one another number as NO, return index of first occurance of that NO.

// Input: N:  6
//        NO: 66

// Elements : 85 66 3 66 93 88

// Output: 1

// Input: N:  6
//        NO: 12

// Elements : 85 11 3 15 11 111

// Output: -1


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Check(int Arr[], int iSize, int iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;

    printf("Enter the number of elements that you want to enter: ");
    scanf("%d", &iSize);

    p =  (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter the element: %d\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the element that needs to search: ");
    scanf("%d", &iValue);

    iRet = Check(p, iSize, iValue);

    printf("Index of given number is: %d", iRet);
    free(p);

    return 0;
}
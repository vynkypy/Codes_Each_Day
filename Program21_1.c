// Accept N numbers from user and accept one another number as NO check whether NO is present or not.

// Input: N:  6
//        NO: 66

// Elements : 85 66 3 66 93 88

// Output: TRUE

// Input: N:  6
//        NO: 12

// Elements : 85 11 3 15 11 111

// Output: FALSE


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int i = 0;
    bool bFlag = false;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int *p = NULL;
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    bool bRet = false;

    printf("Enter the number of elements that you want to enter: ");
    scanf("%d", &iCount);

    p =  (int *) malloc (iCount * sizeof(int));

    printf("Enter the elements:\n");

    for(i = 0; i< iCount; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Enter the element that needs to search: ");
    scanf("%d", &iValue);

    bRet = Check(p, iCount, iValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(p);

    return 0;
}
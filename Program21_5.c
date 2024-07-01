// Accept N numbers from user and return product of all odd elements

// Input: N:  6

// Elements : 15 66 3 66 90 88

// Output: 45

// Input: N:  6

// Elements : 85 66 30 66 92 88

// Output: 0


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0, iMul = 1;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]%2 != 0)
        {   
            iMul =  Arr[i]*iMul;
        }
    }
    return iMul;
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
        printf("Enter the element %d\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product of Odd numbers is: %d", iRet);
    
    free(p);

    return 0;
}
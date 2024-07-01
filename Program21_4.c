// Accept N numbers from user and accept range, Display all elements from that range.

// Input: N:  6
//        Start: 60
//  	  End  : 90

// Elements : 85 66 3 66 93 88

// Output: 85   66   76 88

// Input: N:  6
//        Start : 30
//        End   : 50

// Elements : 85 66 3 66 93 88

// Output: 

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 =0;

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

    printf("Enter the Start of range: ");
    scanf("%d", &iValue1);

    printf("Enter the End of range: ");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}
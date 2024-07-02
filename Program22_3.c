// Accept N numbers from user and return the difference between largest and smallest number.

// Input :    N:            6
         //   Elements:     85 66 3 66 93 88

// Output :                 90(93-3) 

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i =0, iMin = Arr[0], iMax = Arr[0], iDiff= 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]<iMin)
        {
            iMin =  Arr[i];
        }
        if(Arr[i]> iMax)
        {
            iMax = Arr[i];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}


int main()
{
    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0;

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
        printf("Enter the element %d\t:", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference of largest and smallest is: %d", iRet);

    free(p);

    return 0;
}
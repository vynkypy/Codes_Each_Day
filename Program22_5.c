// Accept N numbers from user and dis5play all such numbers which contains 3 digits in it.

// Input :    N:            6
         //   Elements:     8523 665 3 76 953 858

// Output :                 16 17 3 13  17  21

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i =0, iDigit = 0, iNo = 0, iSum = 0;

    for(i = 0; i < iLength; i++)
    {
        iNo = Arr[i];
        iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iSum = iDigit+iSum;
            iNo = iNo/10;
        }
        printf("%d\t", iSum);
    }
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

    Digits(p, iSize);

    free(p);

    return 0;
}
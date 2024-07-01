// Accept N numbers form user and Check weather those numbers contains 11 in it or not.

// Input :     N:          7
//             Elements:   85  66  11   80  93  88   90

// Output:     11 is present

// Input :     N:          7
//             Elements:   85  66  3   80  93  88   90

// Output:     11 is absent


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{   
    int i =0;
    BOOL bCheck = FALSE;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]%11 == 0)
        {
            bCheck = TRUE;
            break;
        }        
    }
    return bCheck;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet =  FALSE;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);

    return 0;

}
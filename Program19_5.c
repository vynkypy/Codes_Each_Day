// Accept N numbers from user and display all such elements which are muliples of 11.

// Input :     N:          6
//             Elements:   85  66  3   55  93  88

// Output:     66   55  88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    printf("Numbers divisible by 5 are :");
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i]%11) == 0)
        {
            printf("%d\t", Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *Brr = NULL;

    printf("Enter the number of elements you want: ");
    scanf("%d", &iSize);

    Brr = (int *)malloc(iSize * sizeof(int));
    
    printf("Enter the elements:\n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt+1);
        scanf("%d", &Brr[iCnt]);
    }
    Display(Brr, iSize);

    free(Brr);

    return 0;
}
// Write a program which accepts number from user and print it's numbers line. 

//Input : 4
//Output : -4   -3  -2  -2  0   1    2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}
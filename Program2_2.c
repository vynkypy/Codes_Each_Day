//  Accept one number from user and print that number of * on screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>iCnt)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("ENter a number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

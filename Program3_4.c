//  Accept one Character from user and convert it's case
//  Input :     A       Output :    a
//  Input :     d       Output :    D

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue>='A') && (cValue<='Z'))
    {
        printf("%c",cValue+32 );
    }
    else if((cValue>='a') && (cValue<='z'))
    {
        printf("%c", cValue-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
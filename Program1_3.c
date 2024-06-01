#include<stdio.h>

void Display()
{
    int i = 0;
    int iCnt = 5;

    while(i<=iCnt)
    {
        printf("%d", i);
        i++;
    }
}
int main()
{
    Display();
    return 0;

}
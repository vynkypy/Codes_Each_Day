

// Accept division of student from user and depends on the division display exam timing. 
// There are 4 divisions in school as A,B,C,D. 
// Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)

// Input: C
// Output: Your exam at 9.20 AM

// Input: d
// Output: Your exam at 10.30 AM

#include<stdio.h>
#include<stdbool.h>

void DisplaySchecule(char ch)
{

    if((ch == 'A') || (ch == 'a'))
    {
        printf("Your Exam at 7AM");
    }
    if((ch == 'B') || (ch == 'b'))
    {
        printf("Your Exam at 8.30AM");
    }
    if((ch == 'C') || (ch == 'c'))
    {
        printf("Your Exam at 9.20AM");
    }
    if((ch == 'D') || (ch == 'd'))
    {
        printf("Your Exam at 10.30AM");
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    DisplaySchecule(cValue);

    return 0;

}
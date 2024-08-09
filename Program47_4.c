// Write a program which accepts file name and one character from user and count number of
// occurance of that character from that file.

// Input Demo.txt

// Output: Frequency of M is 7

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char FName[], char ch)
{
    int fd = 0;
    char Arr[100];
    int iRet = 0;
    int i = 0;
    int CharCnt = 0;

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd, Arr, sizeof(Arr))) != 0)
    {
        if(iRet == -1)
        {
            printf("Error reading the file\n");
            close(fd);
            return -1;
        }

        for(i = 0; i < iRet; i++)
        {
            if(Arr[i] == ch)
            {
                CharCnt++;
            }
        }
    }

    close(fd);

    return CharCnt;
}

int main()
{
    char FileName[30];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the character to count its occurrences: ");
    scanf(" %c", &ch); 

    iRet = CountChar(FileName, ch);

    printf("Frequency of %c is : %d\n",ch,iRet);

    return 0;
}

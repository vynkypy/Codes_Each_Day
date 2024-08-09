// Write a program which accepts file name and one count from user and read that number of
// character from that position.

// Input Demo.txt

// Output: Display first 12 Character from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char FName[], int iSize)
{
    int fd = 0;
    char *Arr;
    int iRet = 0;

    Arr = (char*)malloc(iSize + 1);

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }

    iRet = read(fd, Arr, iSize);

    if(iRet == -1)
    {
        printf("Error reading the file\n");
        close(fd);
        free(Arr);
        return;
    }

    Arr[iRet] = '\0';

    printf("First %d characters from the file are: %s\n", iRet, Arr);

    close(fd);
    free(Arr);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}

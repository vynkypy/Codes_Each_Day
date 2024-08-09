// Write a program which accepts file name from user and count number of Small characters from that file.
// Input Demo.txt
// Output: Number of capital characters are 21


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char FName[])
{
    int fd = 0;
    char Arr[100];
    int iRet = 0;
    int i = 0;
    int SmallCount = 0;

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
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                SmallCount++;
            }
        }
    }

    close(fd);

    return SmallCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);


    printf("Number of Small characters are: %d\n", iRet);

    return 0;
}

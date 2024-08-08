
// Write application which accept file name from user and open that file in read mode.

// Input: Demo.txt

// Output: File opened Successfully.


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char FileName[50];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File opened succesfully \n");
    }

    return 0;
}
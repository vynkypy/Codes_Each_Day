
// Write application which accept file name from user and create that file.

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

    printf("Enter the file name: \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File Created Successfully \n");
    }

    return 0;
}
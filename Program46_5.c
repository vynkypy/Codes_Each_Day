
// Write application which accept file name from user and one string from user. 
// Write that string at the end of file.

// Input: Demo.txt
//        Hello World

// Output: Write Hello World at the end of Demo.txt file


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Arr[150] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    printf("Enter the data that you want to write at the end of the file: \n");
    scanf(" %[^\n]s", Arr);

    write(fd, Arr, strlen(Arr));

    printf("Data successfully written to the file\n");

    close(fd);

    return 0;
}

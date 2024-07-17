// Wirte a program which accepts string from user and return the length of largest word

//Input:      "Marvellous Multi OS Infosystem"

//output:      11

#include<iostream>

using namespace std;

int WordCount(char *str)
{
    int iMax = 0;
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while((*str == ' ') && (*str != '\0'))
            {
                str++;
            }
        }

        else
        {
            iCnt = 0;
            while(*str != ' ' && *str != '\0')
            {
                iCnt++;
                str++;
            }
        }
        if(iCnt > iMax)
        {
            iMax = iCnt;
        }
    }
    return iMax;
}

int main() 
{    
    int iRet =0;

    char Arr[30];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    iRet = WordCount(Arr); 

    cout << "Max word length is : "<< iRet << endl;
       
    return 0;
}
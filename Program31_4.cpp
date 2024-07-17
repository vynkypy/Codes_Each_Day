// Wirte a program which accepts string from user and copy the contents into another string by removing extra 
// white spaces

// Input : "Marvellous    Multi     OS"

// Output: "Marvellous Multi OS"

#include<iostream>

using namespace std;

void StrCpyX(char *src, char *dest)
{
    bool bWord = false; 
    char *temp = src;
    char *result = dest;


    while(*temp != '\0')
    {
        if(*temp != ' ')
        {
            *result = *temp;
            result++;
            bWord = true;
        }
        else
        {
            if(bWord == true)
            {
                *result = ' ';
                result++;
                bWord = false;
            }
        }
        temp++;
    }

    if((result > dest) && ( (*result-1)==' '))
    {
        *(result-1) = '\0';
    }
    else
    {
        *result = '\0';
    }
}
int main() 
{    
    int iRet =0;

    char Arr[50];
    char Brr[50];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    StrCpyX(Arr, Brr); 

    cout << "Removed extra white spaces string : "<< Brr << endl;
       
    return 0;
}
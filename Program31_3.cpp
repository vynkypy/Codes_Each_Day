// Wirte a program which accepts string from user and reverse each word in place

//Input:      "Marvellous Multi OS"

//output:      "suollevraM itluM SO"

#include<iostream>

using namespace std;

void StrWordRev(char *str)
{
    char *start = str;
    char* temp = str; 

    while (*temp != '\0') 
    {
        if (*temp == ' ') 
        {
            char* end = temp - 1;
            while (start < end) 
            {
                char temp_char = *start;
                *start = *end;
                *end = temp_char;
                start++;
                end--;
            }
            start = temp + 1;
        }
        temp++;
    }  
    //For last word
    char *end = temp - 1;
    while (start < end) 
    {
        char temp_char = *start;
        *start = *end;
        *end = temp_char;
        start++;
        end--;
    } 
}

int main() 
{    
    int iRet =0;

    char Arr[30];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    StrWordRev(Arr); 

    cout << "Reverse word string is : "<< Arr << endl;
       
    return 0;
}